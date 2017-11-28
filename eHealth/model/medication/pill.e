note
	description: "Summary description for {PILL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PILL
inherit

	MEDICATION

create
	make_pill

feature {DATABASE}

	make_pill (a_id: INTEGER_64 a_name: STRING a_low: VALUE a_high: VALUE)
			-- Constructor
			-- Generalist Constructor
		do
			make_medication (a_id, a_name, a_low, a_high)
			set_kind ("pl")
		end

end
