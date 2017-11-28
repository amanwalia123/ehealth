note
	description: "Summary description for {PATIENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PATIENT

inherit

	ANY
		redefine
			out
		end

create{DATABASE}
	make_patient

feature{NONE} -- constructor

	make_patient (a_name: STRING a_id: INTEGER_64)
		do
			name := a_name
			id := a_id
		end

feature {NONE} --fields

	name: STRING
			-- name of the patient

	id: INTEGER_64
			-- patient ID

feature --Queries

	get_name: STRING
		do
			Result := name
		end

	get_id: INTEGER_64
		do
			Result := id
		end


	out: STRING
			-- Print Patient
		local
			s: STRING
		do
			create s.make_empty
			s.append (id.out)
			s.append ("->")
			s.append (name)
			Result := s
		end


end
