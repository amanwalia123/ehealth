note
	description: "Summary description for {DATABASE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DATABASE

create
	make

feature {NONE} -- Constructor

	make
		do
			create phys_table.make (0)
			create patient_table.make (0)
			create medication_id_table.make (0)
			create medication_name_table.make (0)
			create {ARRAYED_LIST [INTERACTION]} interaction_table.make (0)
			create prescription_table.make (0)
			create {HASH_TABLE [ARRAYED_LIST [PRESCRIPTION], INTEGER_64]} patient_prescriptions_table.make (0)
		end

feature {NONE} -- Tables

	phys_table: HASH_TABLE [PHYSICIAN, INTEGER_64]

	patient_table: HASH_TABLE [PATIENT, INTEGER_64]

	medication_id_table: HASH_TABLE [MEDICATION, INTEGER_64]

	interaction_table: LIST [INTERACTION]

	prescription_table: HASH_TABLE [PRESCRIPTION, INTEGER_64]

	patient_prescriptions_table: HASH_TABLE [LIST [PRESCRIPTION], INTEGER_64]

	medication_name_table: HASH_TABLE [MEDICATION, STRING]

feature {EHEALTH} -- database methods

	add_physician (id: INTEGER_64 name: STRING type: INTEGER_64): STRING
		local
			message_list: STATUS_MESSAGE
			physician: PHYSICIAN
		do
			if id <= 0 then
				create message_list.make_physician_id_positive
			elseif has_physician_id (id) then
				create message_list.make_physician_id_taken
			elseif name.is_empty then
				create message_list.make_physician_name_start
			elseif not name [1].is_alpha then
				create message_list.make_physician_name_start
			else
				create message_list.make_ok
				if type = 3 then --create generalist
					create {GENERALIST} physician.make_generalist (name, id)
					phys_table.extend (physician, physician.get_id)
				elseif type = 4 then --create specialist
					create {SPECIALIST} physician.make_specialist (name, id)
					phys_table.extend (physician, physician.get_id)
				end
			end
			Result := message_list.out
		end

	add_patient (id: INTEGER_64 name: STRING): STRING
		local
			patient: PATIENT
			message_list: STATUS_MESSAGE
		do
			if id <= 0 then
				create message_list.make_patient_id_positive
			elseif has_patient_id (id) then
				create message_list.make_patient_id_taken
			elseif name.is_empty then
				create message_list.make_patient_name_start
			elseif not name [1].is_alpha then
				create message_list.make_patient_name_start
			else
				create message_list.make_ok
				create patient.make_patient (name, id)
				patient_table.extend (patient, patient.get_id)
			end
			Result := message_list.out
		end

	add_medicatian (id: INTEGER_64 name: STRING kind: INTEGER_64 low: VALUE high: VALUE): STRING
		local
			m: MEDICATION
			message_list: STATUS_MESSAGE
			zero: VALUE
		do
			create {VALUE} zero.make_from_int (0)
			if id <= 0 then
				create message_list.make_medication_id_positive
			elseif has_medication_id (id) then
				create message_list.make_medication_id_taken
			elseif name.is_empty then
				create message_list.make_medication_name_start
			elseif not name [1].is_alpha then
				create message_list.make_medication_name_start
			elseif has_medication_name (name) then
				create message_list.make_medication_name_taken
			elseif not (low.is_greater (zero) and high.is_greater (zero) and high.is_greater_equal (low)) then
				create message_list.make_medication_valid_dose
			else
				create message_list.make_ok
				if kind = 1 then --create pill
					create {PILL} m.make_pill (id, name, low, high)
					medication_id_table.extend (m, m.get_id)
					medication_name_Table.extend (m, m.get_name)
				elseif kind = 2 then --create liquid
					create {LIQUID} m.make_liquid (id, name, low, high)
					medication_id_table.extend (m, m.get_id)
					medication_name_Table.extend (m, m.get_name)
				end
			end
			Result := message_list.out
		end

	add_interaction (id1: INTEGER_64 id2: INTEGER_64 valid: BOOLEAN): STRING
		local
			message_list: STATUS_MESSAGE
			inter: INTERACTION
		do
			if (id1 <= 0) or (id2 <= 0) then
				create message_list.make_medications_id_positive
			elseif id1 = id2 then
				create message_list.make_medications_id_different
			elseif (not has_medication_id (id1)) or (not has_medication_id (id2)) then
				create message_list.make_medications_registered
			elseif has_interaction (id1, id2) then
				create message_list.make_interaction_exists
					----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
			elseif not valid then
				create message_list.make_remove_conflicting_medicines
					----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
			else
				create message_list.make_ok
				if attached medication_id_table.at (id1) as m1 then
					if attached medication_id_table.at (id2) as m2 then
						create {INTERACTION} inter.make (m1, m2)
						interaction_table.extend (inter)
					end
				end
			end
			Result := message_list.out
		end

	add_prescription (id: INTEGER_64; doctor: INTEGER_64; patient: INTEGER_64): STRING
		local
			message_list: STATUS_MESSAGE
			pr: PRESCRIPTION
			empty_list: ARRAYED_LIST [PRESCRIPTION]
		do
			if id <= 0 then
				create message_list.make_prescription_id_positive
			elseif has_prescription_id (id) then
				create message_list.make_prescription_id_taken
			elseif doctor <= 0 then
				create message_list.make_physician_id_positive
			elseif not has_physician_id (doctor) then
				create message_list.make_physician_not_registered
			elseif patient <= 0 then
				create message_list.make_patient_id_positive
			elseif not has_patient_id (patient) then
				create message_list.make_patient_not_registered
			elseif has_prescription (doctor, patient) then
				create message_list.make_prescription_exists
			else
				create message_list.make_ok
				if attached phys_table.at (doctor) as phys then
					if attached patient_table.at (patient) as pat then
						create pr.make (id, phys, pat)
						prescription_table.extend (pr, pr.get_id)
						if not patient_prescriptions_table.has (patient) then
							create empty_list.make (0)
							patient_prescriptions_table.extend (empty_list, patient)
						end
						if attached patient_prescriptions_table.at (patient) as prescription_list then
							prescription_list.extend (pr)
						end
					end
				end
			end
			Result := message_list.out
		end

	add_prescription_medicine (pres_id: INTEGER_64 medicine_id: INTEGER_64 dose: VALUE not_allowed: BOOLEAN): STRING
		local
			message_list: STATUS_MESSAGE
		do
			if pres_id <= 0 then
				create message_list.make_prescription_id_positive
			elseif not attached prescription_table.at (pres_id) as prescription then
				create message_list.make_prescription_not_exists
			elseif medicine_id <= 0 then
				create message_list.make_medication_id_positive
			elseif not attached medication_id_table.at (medicine_id) as medicine then
				create message_list.make_medication_not_registered
			elseif has_patient_medication (prescription.get_patient_id, medicine.get_id) then
				create message_list.make_medication_already_prescribed
					---------------------------------------------------------------------------------------------------------------------
			elseif not_allowed then
				create message_list.make_specialist_adddangerous_interaction
					---------------------------------------------------------------------------------------------------------------------
			elseif (dose < medicine.get_low or dose > medicine.get_high) then
				create message_list.make_dose_outside_range
			else
				create message_list.make_ok
				prescription.add_medicine (medicine, dose)
			end
			Result := message_list.out
		end

	remove_medicine_from_prescription (pres_id: INTEGER_64 medication_id: INTEGER_64): STRING
		local
			message_list: STATUS_MESSAGE
		do
			if pres_id <= 0 then
				create message_list.make_prescription_id_positive
			elseif not attached prescription_table.at (pres_id) as prescription then
				create message_list.make_prescription_not_exists
			elseif medication_id <= 0 then
				create message_list.make_medication_id_positive
			elseif not has_medication_id (medication_id) then
				create message_list.make_medication_not_registered
			elseif not prescription.has_medication (medication_id) then
				create message_list.make_medication_not_in_prescription
			else
				create message_list.make_ok
				prescription.remove_medicine (medication_id)
			end
			Result := message_list.out
		end

feature -- database Queries

	has_physician_id (id: INTEGER_64): BOOLEAN
		do
			Result := phys_table.has (id)
		end

	get_physician_by_id (id: INTEGER_64): detachable PHYSICIAN
		require
			has_physician: has_physician_id (id)
		do
			Result := phys_table.at (id)
		end

	get_physician_ids: ARRAY [INTEGER_64]
		do
			Result := phys_table.current_keys
		end

	has_patient_id (id: INTEGER_64): BOOLEAN
		do
			Result := patient_table.has (id)
		end

	get_patient_by_id (id: INTEGER_64): detachable PATIENT
		require
			has_patient: has_patient_id (id)
		do
			Result := patient_table.at (id)
		end

	get_patient_ids: ARRAY [INTEGER_64]
		do
			Result := patient_table.current_keys
		end

	get_patients_with_prescription: ARRAY [INTEGER_64]
		do
			Result := patient_prescriptions_table.current_keys
		end

	has_medication_id (id_m: INTEGER_64): BOOLEAN
		do
			Result := medication_id_table.has (id_m)
		end

	get_medication_by_id (medic_id: INTEGER_64): detachable MEDICATION
		do
			Result := medication_id_table.at (medic_id)
		end

	has_medication_name (name: STRING): BOOLEAN
		do
			Result := medication_name_table.has (name)
		end

	has_interaction (id1: INTEGER_64 id2: INTEGER_64): BOOLEAN
		local
			interaction_found: BOOLEAN
		do
			from
				interaction_table.start
			until
				interaction_table.off or interaction_found
			loop
				interaction_found := interaction_table.item.has_pair (id1, id2)
				interaction_table.forth
			end
			Result := interaction_found
		end

	get_interaction_position (id1: INTEGER_64 id2: INTEGER_64): INTEGER_32
		local
			interaction_position: INTEGER_32
			f: BOOLEAN
		do
			if has_interaction (id1, id2) then
				from
					interaction_position := 1
				until
					(interaction_position > interaction_table.count) or f
				loop
					if interaction_table.at (interaction_position).has_pair (id1, id2) then
						f := TRUE
					else
						interaction_position := interaction_position + 1
					end
				end
			end
			Result := interaction_position
		end

	get_interaction (position: INTEGER_32): INTERACTION
		do
			Result := interaction_table.at (position)
		end

	has_prescription_id (id_pres: INTEGER_64): BOOLEAN
		do
			Result := prescription_table.has (id_pres)
		end

	has_prescription (doc_id: INTEGER_64 pat_id: INTEGER_64): BOOLEAN
		local
			pres_ids: ARRAY [INTEGER_64]
			j: INTEGER
			found_pres: BOOLEAN
		do
			pres_ids := prescription_table.current_keys
			from
				j := 1
				found_pres := FALSE
			until
				j > pres_ids.count or found_pres
			loop
				if attached {PRESCRIPTION} prescription_table.at (pres_ids [j]) as pres then
					found_pres := (pres.get_physician_id = doc_id) and (pres.get_patient_id = pat_id)
				end
				j := j + 1
			end
			Result := found_pres
		end

	get_prescription_ids: ARRAY [INTEGER_64]
		do
			Result := prescription_table.current_keys
		end

	get_prescription_by_id (pres_id: INTEGER_64): detachable PRESCRIPTION
		require
			Prescription_there: has_prescription_id (pres_id)
		do
			Result := prescription_table.at (pres_id)
		end

	has_patient_medication (patient_id: INTEGER_64 medication_id: INTEGER_64): BOOLEAN
		local
			found: BOOLEAN
		do
			if attached patient_prescriptions_table.at (patient_id) as prescription_list then
				from
					prescription_list.start
				until
					prescription_list.off or found
				loop
					found := prescription_list.item.has_medication (medication_id)
					prescription_list.forth
				end
			end
			Result := found
		end

	get_patient_medicines (pat_id: INTEGER_64): ARRAYED_LIST [TUPLE [INTEGER_64, INTEGER_64]]
			--		require
			--			patient_exists : has_patient_id(pat_id)
		local
			medicine_bag: ARRAYED_LIST [TUPLE [med_id: INTEGER_64 pres_id: INTEGER_64]]
			temp_list: LIST [TUPLE [INTEGER_64, INTEGER_64]]
		do
			create {ARRAYED_LIST [TUPLE [INTEGER_64, INTEGER_64]]} medicine_bag.make (0)
			if attached patient_prescriptions_table.at (pat_id) as prescription_list then
				from
					prescription_list.start
				until
					prescription_list.off
				loop
					temp_list := prescription_list.item.get_medicines
					from
						temp_list.start
					until
						temp_list.off
					loop
						medicine_bag.extend (temp_list.item)
						temp_list.forth
					end
					prescription_list.forth
				end
			end
			Result := medicine_bag
		end

	get_patient_dangerous_interaction (pat_id_inter: INTEGER_64): LIST [INTERACTION]
		local
			medicine_bag: ARRAYED_LIST [TUPLE [med_id: INTEGER_64 pres_id: INTEGER_64]]
			i_loop1: INTEGER_32
			i_loop2: INTEGER_32
			medicine1: INTEGER_64
			medicine2: INTEGER_64
			s: STRING
			positions: SORTED_TWO_WAY_LIST [INTEGER_32]
			interactions_present: ARRAYED_LIST [INTERACTION]
		do
			create s.make_empty
			create positions.make
			create interactions_present.make (0)
			medicine_bag := get_patient_medicines (pat_id_inter)
			from
				i_loop1 := 1
			until
				i_loop1 > medicine_bag.count - 1
			loop
				from
					i_loop2 := i_loop1 + 1
				until
					i_loop2 > medicine_bag.count
				loop
					medicine1 := medicine_bag.at (i_loop1).med_id
					medicine2 := medicine_bag.at (i_loop2).med_id

					if has_interaction (medicine1, medicine2) then
						positions.extend (get_interaction_position (medicine1, medicine2))
					end
					i_loop2 := i_loop2 + 1
				end
				i_loop1 := i_loop1 + 1
			end
			from
				positions.start
			until
				positions.off
			loop
				interactions_present.extend (get_interaction (positions.item))
				positions.forth
			end
			Result := interactions_present
		end

	display_physicians: STRING
		local
			s: STRING
			keys: ARRAY [INTEGER_64]
			i: INTEGER
		do
			create s.make_empty
			keys := sorted_keys (phys_table.current_keys)
			from
				i := 1
			until
				i > keys.count
			loop
				s.append ("    ")
				if attached {PHYSICIAN} phys_table.at (keys [i]) as phys then
					s.append (phys.out)
				end
				s.append ("%N")
				i := i + 1
			end
			Result := s
		end

	display_patients: STRING
		local
			s: STRING
			keys: ARRAY [INTEGER_64]
			i: INTEGER
		do
			create s.make_empty
			keys := sorted_keys (patient_table.current_keys)
			from
				i := 1
			until
				i > keys.count
			loop
				s.append ("    ")
				if attached {PATIENT} patient_table.at (keys [i]) as pat then
					s.append (pat.out)
				end
				s.append ("%N")
				i := i + 1
			end
			Result := s
		end

	display_medication: STRING
		local
			s: STRING
			keys: ARRAY [INTEGER_64]
			i: INTEGER
		do
			create s.make_empty
			keys := sorted_keys (medication_id_table.current_keys)
			from
				i := 1
			until
				i > keys.count
			loop
				s.append ("    ")
				if attached {MEDICATION} medication_id_table.at (keys [i]) as med then
					s.append (med.out)
				end
				s.append ("%N")
				i := i + 1
			end
			Result := s
		end

	display_interaction: STRING
		local
			s: STRING
		do
			create s.make_empty
			from
				interaction_table.start
			until
				interaction_table.off
			loop
				s.append ("    ")
				s.append (interaction_table.item.out)
				s.append ("%N")
				interaction_table.forth
			end
			Result := s
		end

	display_prescriptions: STRING
		local
			s: STRING
			keys: ARRAY [INTEGER_64]
			i: INTEGER
		do
			create s.make_empty
			keys := sorted_keys (prescription_table.current_keys)
			from
				i := 1
			until
				i > keys.count
			loop
				s.append ("%N")
				s.append ("    ")
				if attached {PRESCRIPTION} prescription_table.at (keys [i]) as pre then
					s.append (pre.out)
				end
				i := i + 1
			end
			Result := s
		end

	display_database: STRING
		do
			create Result.make_empty
			Result.append ("  Physicians:%N")
			Result.append (display_physicians)
			Result.append ("  Patients: %N")
			Result.append (display_patients)
			Result.append ("  Medications: %N")
			Result.append (display_medication)
			Result.append ("  Interactions: %N")
			Result.append (display_interaction)
			Result.append ("  Prescriptions:")
			Result.append (display_prescriptions)
		end

feature {NONE} -- Internal methods and fields

	sorted_keys (keys: ARRAY [INTEGER_64]): ARRAY [INTEGER_64]
		local
			sorted_array: ARRAY [INTEGER_64]
			i, j: INTEGER
			temp: INTEGER_64
		do
			create sorted_array.make_from_array (keys)
			sorted_array.compare_objects
			from
				i := 2
			until
				i > sorted_array.count
			loop
				from
					j := 1
				until
					j >= i
				loop
					if sorted_array [i] < sorted_array [j] then
						temp := sorted_array [j]
						sorted_array [j] := sorted_array [i]
						sorted_array [i] := temp
					end
					j := j + 1
				end
				i := i + 1
			end
			Result := sorted_array
		end

end
