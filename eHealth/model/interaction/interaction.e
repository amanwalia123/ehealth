note
	description: "Summary description for {INTERACTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTERACTION

inherit
	ANY

redefine out end

create{DATABASE}
	make

feature{NONE}

	make (m1: MEDICATION m2: MEDICATION)
		do
			medicine1 := m1
			medicine2 := m2

		end

feature{NONE} --Attributes

	medicine1: MEDICATION

	medicine2: MEDICATION

feature -- Queries

	has_pair (id1: INTEGER_64 id2: INTEGER_64): BOOLEAN
		do
			Result := (medicine1.get_id = id1) and (medicine2.get_id = id2)
			Result := Result or (medicine2.get_id = id1) and (medicine1.get_id = id2)
		end

	out: STRING
	do
		create Result.make_empty
		if medicine1.get_name < medicine2.get_name then -- print medicine 1 first
			Result.append ("[")
			Result.append (medicine1.get_name)
			Result.append (",")
			Result.append (medicine1.get_kind)
			Result.append (",")
			Result.append (medicine1.get_id.out)
			Result.append ("]")
			Result.append ("->")
			Result.append ("[")
			Result.append (medicine2.get_name)
			Result.append (",")
			Result.append (medicine2.get_kind)
			Result.append (",")
			Result.append (medicine2.get_id.out)
			Result.append ("]")
		else
			Result.append ("[")
			Result.append (medicine2.get_name)
			Result.append (",")
			Result.append (medicine2.get_kind)
			Result.append (",")
			Result.append (medicine2.get_id.out)
			Result.append ("]")
			Result.append ("->")
			Result.append ("[")
			Result.append (medicine1.get_name)
			Result.append (",")
			Result.append (medicine1.get_kind)
			Result.append (",")
			Result.append (medicine1.get_id.out)
			Result.append ("]")

		end
	end

end
