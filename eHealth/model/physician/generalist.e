note
	description: "Summary description for {GENERALIST}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GENERALIST

inherit

	PHYSICIAN

create
	make_generalist

feature{DATABASE}

	make_generalist (a_name: STRING_8; a_id: INTEGER_64)
			-- Constructor
			-- Generalist Constructor
		do
			make_physician (a_name, a_id)
			set_type ("gn")
		end

	is_previlaged : BOOLEAN
	do
		Result := FALSE
	end

end
