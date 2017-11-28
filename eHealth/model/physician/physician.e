note
	description: "Summary description for {PHYSICIAN}."
	author: "AW"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PHYSICIAN

inherit

	ANY
		redefine
			out
		end

feature{NONE} -- constructor

	make_physician (a_name: STRING a_id: INTEGER_64)
		do
			name := a_name
			id := a_id
			type := ""
		end

feature {NONE} --fields

	name: STRING
			-- name of the physician

	id: INTEGER_64
			-- physician ID

	type: STRING
			-- physician type



feature --Queries

	get_name: STRING
		do
			Result := name
		end

	get_id: INTEGER_64
		do
			Result := id
		end

	get_type: STRING
		do
			Result := type
		end

	out: STRING
			-- Print Physician
		local
			s: STRING
		do
			create s.make_empty
			s.append (id.out)
			s.append ("->")
			s.append ("[")
			s.append (name)
			s.append (",")
			s.append (get_type)
			s.append ("]")
			Result := s
		end
	is_previlaged : BOOLEAN
	deferred
	end

feature{NONE} --Methods

	set_type (a_type: STRING)
		do
			type.append (a_type)
		end



end
