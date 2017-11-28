note
	description: "Summary description for {DATABASE_ACCESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

expanded class
	DATABASE_ACCESS

feature{EHEALTH}
	db: DATABASE
		once
			create Result.make
		end

invariant
	db = db

end
