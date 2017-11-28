note
	description: "Summary description for {GENERALIST}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SPECIALIST

inherit

	PHYSICIAN

create {DATABASE}
	make_specialist

feature {DATABASE} -- Constructor

	make_specialist (a_name: STRING_8; a_id: INTEGER_64)
			-- Generalist Constructor
		do
			make_physician (a_name, a_id)
			set_type ("sp")
		end

	is_previlaged: BOOLEAN
		do
			Result := TRUE
		end

end -- class SPECIALIST
