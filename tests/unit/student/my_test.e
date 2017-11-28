    note
    	description: "Summary description for {MY_TEST}."
    	author: ""
    	date: "$Date$"
    	revision: "$Revision$"

    class
    	MY_TEST
    inherit
    	ES_TEST

    create
    	make

    feature {NONE} -- Initialization

    	make
    			-- Initialization for `Current'.
    		do
    			add_boolean_case (agent t1)
    			add_boolean_case (agent t2)
    			add_boolean_case (agent t3)
    		end

    feature -- tests

    	t1: BOOLEAN

    		local
    			access : EHEALTH_ACCESS

    		do

    		comment("t1: check add_physician, add_patient, add_medication")
    		access.m.add_patient("PatientA", 1)
    		access.m.add_physician ("PhysicianA", 1, 1)
    		access.m.add_medication (1, "MedicationA", 1, "5.5", "9.0")
    		access.m.add_medication (2, "MedicationB", 2, "20.5", "25.5")
    		access.m.add_interaction (1, 2)

    		Result := access.m.interactions (1, 2)
    		check Result end

    		Result := access.m.has_invalid_interaction (2, 2)
    		check Result end

    		end

    	t2: BOOLEAN

    		local
    			access : EHEALTH_ACCESS

    		do

    		comment("t2: add_interaction")
    		access.m.add_patient("Patient1", 1)
    		access.m.add_patient ("Patient2", 2)
    		access.m.add_physician ("Physician1", 1, 1)
    		access.m.add_physician ("Physician2", 2, 2)
    		access.m.add_medication (1, "Medication1", 1, "5.5", "9.0")
    		access.m.add_medication (2, "Medication2", 2, "20.5", "25.0")
    		access.m.add_interaction (1, 2)
    		access.m.new_prescription (2, 1, 1)
    		access.m.new_prescription (5, 1, 1)

    		Result := access.m.interactions (1, 2)
    		check Result end

    		Result := access.m.has_invalid_interaction (2, 2)
    		check Result end

    		end

    	t3: BOOLEAN

    		local
    			access : EHEALTH_ACCESS
    			id : INTEGER_32

    		do

    		comment("t3: new_prescription and add_medicine")
    		access.m.add_patient("Patient1", 1)
    		access.m.add_patient ("Patient2", 2)
    		access.m.add_physician ("Physician1", 1, 1)
    		access.m.add_physician ("Physician2", 2, 2)
    		access.m.add_medication (1, "Medication1", 1, "5.5", "9.0")
    		access.m.add_medication (2, "Medication2", 2, "20.5", "25.0")
    		access.m.add_interaction (1, 2)
    		access.m.new_prescription (2, 1, 1)
    		access.m.new_prescription (5, 1, 1)
    		access.m.add_medicine (2, 1, "9.0")
    		access.m.add_medicine (2, 2, "22.5")
    		access.m.add_medicine (5, 2, "15.5")

    		Result := access.m.interactions (1, 2)
    		check Result end

    		Result := access.m.has_invalid_interaction (2, 2)
    		check Result end

    		end

    end


