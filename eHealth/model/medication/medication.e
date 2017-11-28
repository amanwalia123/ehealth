note
	description: "Summary description for {MEDICATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	MEDICATION

inherit

	ANY
		redefine
			out
		end

feature {NONE} --constructor

	make_medication (a_id: INTEGER_64 a_name: STRING a_low: VALUE a_high: VALUE)
		do
			name := a_name
			id := a_id
			low := a_low
			high := a_high
			kind := ""
		end

feature {NONE} --Attributes

	id: INTEGER_64

	name: STRING

	kind: STRING

	low: VALUE

	high: VALUE

feature --Queries

	get_name: STRING
		do
			Result := name
		end

	get_id: INTEGER_64
		do
			Result := id
		end

	get_kind: STRING
		do
			Result := kind
		end

	get_high: VALUE
		do
			Result := high
		end

	get_low: VALUE
		do
			Result := low
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
			s.append (get_kind)
			s.append (",")
			s.append (get_low.out)
			s.append (",")
			s.append (get_high.out)
			s.append ("]")
			Result := s
		end

feature {NONE}

	set_kind (s: STRING)
		do
			kind.append (s)
		end

end
