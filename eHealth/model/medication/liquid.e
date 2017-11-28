note
	description: "Summary description for {LIQUID}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LIQUID

inherit

	MEDICATION

create
	make_liquid

feature {DATABASE}

	make_liquid (a_id: INTEGER_64 a_name: STRING a_low: VALUE a_high: VALUE)
			-- Constructor
			-- Generalist Constructor
		do
			make_medication (a_id, a_name, a_low, a_high)
			set_kind ("lq")
		end

end
