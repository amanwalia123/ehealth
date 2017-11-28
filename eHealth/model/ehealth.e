note
	description: "A default business model."
	author: "Aman"
	date: "$Date$"
	revision: "$Revision$"

class
	EHEALTH

inherit

	ANY
		redefine
			out
		end

create {EHEALTH_ACCESS}
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		local
			e: DATABASE_ACCESS
			message_list: STATUS_MESSAGE
		do
			database := e.db
				--			create message.make_empty
			create message_list.make_ok
			message := message_list.out
			counter := 0
			display := show_database
			create prescription_query.make_empty
			create dangerous_prescription_query.make_empty
			create sorted_patient_interactions.make
		end

feature -- model attributes

	counter: INTEGER

	database: DATABASE

	message: STRING

	display: INTEGER

feature --query strings

	prescription_query: STRING

	dangerous_prescription_query: STRING

	sorted_patient_interactions: SORTED_TWO_WAY_LIST [STRING]

	retreive_dangerous_prescriptions
		local
			patient_ids: ARRAY [INTEGER_64] -- store patient ids locally
			patient: INTEGER_64 -- patient ID
			cursor_patient: INTEGER_32 -- cursor to move through patient ids
			s1: STRING
			dangerous_interactions: LIST [INTERACTION]
			query_list: ARRAYED_LIST [STRING]
			m: INTEGER
			n: INTEGER
			message_list : STATUS_MESSAGE
		do
			create message_list.make_ok
			message := message_list.out
			patient_ids := database.get_patients_with_prescription -- retreive all the patient ids in system
			display := show_dangerous_prescriptions
			create s1.make_empty
				--			create {ARRAYED_LIST [INTERACTION]} dangerous_interactions.make (0)
			create query_list.make (0)
			from
				cursor_patient := 1
			until
				cursor_patient > patient_ids.count
			loop
				patient := patient_ids [cursor_patient] -- retreive the patient id

				dangerous_interactions := database.get_patient_dangerous_interaction (patient)
				if not dangerous_interactions.is_empty then
					s1.append ("    ")
					s1.append ("(")
					if attached (database.get_patient_by_id (patient)) as pres_patient then
						s1.append (pres_patient.get_name + "," + pres_patient.get_id.out)
					end
					s1.append (")")
					s1.append ("->")
					s1.append ("{ ")
					from
						dangerous_interactions.start
					until
						dangerous_interactions.off
					loop
						s1.append (dangerous_interactions.item.out)
						dangerous_interactions.forth
						if not dangerous_interactions.after then
							s1.append (", ")
						end
						n := n + 1
					end
					s1.append (" }")
				end
				if not s1.is_empty then
					sorted_patient_interactions.extend (s1.out)
					s1.make_empty
				end
				cursor_patient := cursor_patient + 1
				m := m + 1
			end
		end

feature {NONE} --query strings

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

feature {NONE} --display variables

	show_database: INTEGER = 1

	show_prescription_query: INTEGER = 2

	show_dangerous_prescriptions: INTEGER = 3

feature -- model operations

	default_update
			-- Perform update to the model state.
		do
			counter := counter + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

	add_physician (a_name: STRING a_id: INTEGER_64 a_type: INTEGER_64)
			-- add physician to database
		do
			message := database.add_physician (a_id, a_name, a_type)
			display := show_database
		end

	add_patient (a_name: STRING a_id: INTEGER_64)
			-- add patient to database
		do
			message := database.add_patient (a_id, a_name)
			display := show_database
		end

	add_medication (id: INTEGER_64 name: STRING kind: INTEGER_64 low: VALUE high: VALUE)
		do
			message := database.add_medicatian (id, name, kind, low, high)
			display := show_database
		end

	add_interaction (id1: INTEGER_64 id2: INTEGER_64)
		do
			message := database.add_interaction (id1, id2, causing_invalid_interactions (id1, id2))
			display := show_database
		end

	add_prescription (id: INTEGER_64 doctor: INTEGER_64 patient: INTEGER_64)
		do
			message := database.add_prescription (id, doctor, patient)
			display := show_database
		end

	add_medicine (pres_id, medicine_id: INTEGER_64 dose: VALUE)
		do
			message := database.add_prescription_medicine (pres_id, medicine_id, dose, has_invalid_interaction (pres_id, medicine_id))
			display := show_database
		end

	remove_medicine (pres_id, medication_id: INTEGER_64)
		do
			message := database.remove_medicine_from_prescription (pres_id, medication_id)
			display := show_database
		end


	causing_invalid_interactions (med_id1: INTEGER_64 med_id2: INTEGER_64): BOOLEAN
			--check `med_id1' and `med_id2' can be added to system without
			-- causing invalid interaction
		local
			pat_ids: ARRAY [INTEGER_64]
			patient_medicines: LIST [TUPLE [med_id: INTEGER_64 pres_id: INTEGER_64]]
			k: INTEGER
			found1: BOOLEAN
			previlaged_first: BOOLEAN
			found2: BOOLEAN
			previlaged_second: BOOLEAN
			valid: BOOLEAN
		do
			pat_ids := database.get_patients_with_prescription
			from
				k := 1
				valid := TRUE
			until
				k > pat_ids.count or not valid
			loop
				patient_medicines := database.get_patient_medicines (pat_ids [k])
				from
					patient_medicines.start
				until
					patient_medicines.off or not valid
				loop
					if patient_medicines.item.med_id = med_id1 then
						found1 := TRUE
						if attached {PRESCRIPTION} database.get_prescription_by_id (patient_medicines.item.pres_id) as pr then
							if pr.is_specialist_prescription then
								previlaged_first := TRUE
							end
						end
					end
					if patient_medicines.item.med_id = med_id2 then
						found2 := TRUE
						if attached {PRESCRIPTION} database.get_prescription_by_id (patient_medicines.item.pres_id) as pr then
							if pr.is_specialist_prescription then
								previlaged_second := TRUE
							end
						end
					end
					valid := not (found1 and found2) or (previlaged_first or previlaged_second)
					patient_medicines.forth
				end
				k := k + 1
			end
			Result := valid
		end

	has_invalid_interaction (pres_id: INTEGER_64 med_to_add_id: INTEGER_64): BOOLEAN
			-- checks if medicine with `med_add_id' can be legally added to
			--	prescription with `pres_id'
		local
			illegal: BOOLEAN
				--			patient: PATIENT
			pat_id: INTEGER_64
			patient_medicines: LIST [TUPLE [med_id: INTEGER_64 pres_id: INTEGER_64]]
		do
			illegal := FALSE
			if database.has_prescription_id (pres_id) and database.has_medication_id (med_to_add_id) then -- checks prescription and medication exists

				if attached {PRESCRIPTION} database.get_prescription_by_id (pres_id) as pr then
					if not pr.is_specialist_prescription then -- only generalist prescription needs permisssion

						pat_id := pr.get_patient_id
						patient_medicines := database.get_patient_medicines (pat_id)
						from
							patient_medicines.start
						until
							patient_medicines.off or illegal
						loop
							if database.has_interaction (patient_medicines.item.med_id, med_to_add_id) then -- checks if any medicine prescribed to patient is causing interaction
								illegal := TRUE
							end
							patient_medicines.forth
						end
					end
				end
			end
			Result := illegal
		end

	prescription_with_medicine (med_id: INTEGER_64)
		local
			message_list: STATUS_MESSAGE
			pres_ids: ARRAY [INTEGER_64]
			a: INTEGER_32
			pat_list: SORTED_TWO_WAY_LIST [INTEGER_64]
		do
			prescription_query.make_empty
			prescription_query.append ("  Output: ")
			if med_id <= 0 then
				create message_list.make_medication_id_positive
			elseif not database.has_medication_id (med_id) then
				create message_list.make_medication_not_registered
			else
				display := show_prescription_query
				create message_list.make_ok
				create pat_list.make
				pres_ids := database.get_prescription_ids
				if attached {MEDICATION} database.get_medication_by_id (med_id) as med then
					from
						a := 1
					until
						a > pres_ids.count
					loop
						if attached {PRESCRIPTION} database.get_prescription_by_id (pres_ids.at (a)) as p then
							if p.has_medication (med_id) then
								pat_list.extend (p.get_patient_id)
							end
							a := a + 1
						end
					end
					if not pat_list.is_empty then
						prescription_query.append ("medication is " + med.get_name)
						from
							pat_list.start
						until
							pat_list.off
						loop
							prescription_query.append ("%N")
							prescription_query.append ("    " + pat_list.item.out)
							prescription_query.append ("->")
							if attached {PATIENT} database.get_patient_by_id (pat_list.item) as patient_to_print then
								prescription_query.append (patient_to_print.get_name)
							end
							pat_list.forth
						end
					end
				end
			end
			message := message_list.out
		end



feature -- queries

	out: STRING
		do
			create Result.make_from_string ("  ")
			Result.append (counter.out + ": " + message.out + "%N")
			if display = show_database then
				Result.append (database.display_database)
			elseif display = show_prescription_query then
				Result.append (prescription_query.out)
			elseif display = show_dangerous_prescriptions then
				if sorted_patient_interactions.is_empty then
					Result.append ("  There are no dangerous prescriptions")
				else
					Result.append ("  There are dangerous prescriptions:%N")
					from
						sorted_patient_interactions.start
					until
						sorted_patient_interactions.off
					loop
						Result.append (sorted_patient_interactions.item.out)
						sorted_patient_interactions.forth
						if not sorted_patient_interactions.off then
							Result.append ("%N")
						end
					end
				end
				sorted_patient_interactions.wipe_out
			end
		end

end
