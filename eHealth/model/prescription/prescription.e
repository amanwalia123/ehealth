note
	description: "Summary description for {PRESCRIPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PRESCRIPTION

inherit

	ANY
		redefine
			out
		end

create {DATABASE}
	make

feature {NONE}

	make (a_id: INTEGER_64 phys: PHYSICIAN pat: PATIENT)
		do
			id := a_id
			physician := phys
			patient := pat
			create {ARRAYED_LIST [TUPLE [MEDICATION, VALUE]]} medicine.make (0)
			create {ARRAYED_LIST [TUPLE [INTEGER_64, INTEGER_64]]} tuple.make (0)
		end

feature {NONE} --Attributes

	id: INTEGER_64

	physician: PHYSICIAN

	patient: PATIENT

	medicine: LIST [TUPLE [med: MEDICATION dose: VALUE]]

feature {NONE} -- Helping data structure

	tuple: LIST [TUPLE [med_id: INTEGER_64; pres_id: INTEGER_64]]

	remove_medicine_from_tuple (id_remove: INTEGER_64)
		do
			from
				tuple.start
			until
				tuple.off
			loop
				if tuple.item.med_id = id_remove then
					tuple.remove
				else
					tuple.forth
				end
			end
		end

feature --Queries

	get_id: INTEGER_64
		do
			Result := id
		end

	get_physician_id: INTEGER_64
		do
			Result := physician.get_id
		end

	get_patient_id: INTEGER_64
		do
			Result := patient.get_id
		end

	get_medicines: LIST [TUPLE [INTEGER_64, INTEGER_64]]
		do
			Result := tuple
		end

	is_specialist_prescription: BOOLEAN
		do
			Result := physician.is_previlaged
		end

	has_medication (id_has: INTEGER_64): BOOLEAN
		local
			found: BOOLEAN
		do
			from
				medicine.start
			until
				medicine.off or found
			loop
				found := (id_has.is_equal (medicine.item.med.get_id))
				medicine.forth
			end
			Result := found
		end

	out: STRING
		do
			create Result.make_empty
			Result.append (get_id.out)
			Result.append ("->")
			Result.append ("[")
			Result.append (get_id.out)
			Result.append (",")
			Result.append (get_physician_id.out)
			Result.append (",")
			Result.append (get_patient_id.out)
			Result.append (",")
			Result.append ("(")
			from
				medicine.start
			until
				medicine.off
			loop
				Result.append (medicine.item.med.get_id.out)
				Result.append ("->")
				Result.append (medicine.item.dose.out)
				medicine.forth
				if not medicine.off then
					Result.append (",")
				end
			end
			Result.append (")")
			Result.append ("]")
		end

feature {DATABASE} -- Methods

	add_medicine (med: MEDICATION dose: VALUE)
		require
			medication_not_present: not has_medication (med.get_id)
		local
			m: TUPLE [med: MEDICATION d: VALUE]
			t: TUPLE [med_id: INTEGER_64 pres_id: INTEGER_64]
		do
			create m.default_create
			create t.default_create
			m.med := med
			m.d := dose
			t.med_id := med.get_id
			t.pres_id := id
			medicine.extend (m)
			tuple.extend (t)
		ensure
			medication_added: has_medication (med.get_id)
		end

	remove_medicine (id_remove: INTEGER_64)
		require
			contain_medicine: has_medication (id_remove)
		do
			from
				medicine.start
			until
				medicine.off
			loop
				if medicine.item.med.get_id = id_remove then
					medicine.remove
				else
					medicine.forth
				end
			end
			remove_medicine_from_tuple (id_remove)
		ensure
			medicine_removed: not has_medication (id_remove)
		end

end
