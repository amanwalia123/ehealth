note
	description: "Summary description for {STATUS_MESSAGE}."
	author: "Shehwar"
	date: "$Date$"
	revision: "$Revision$"

class
	STATUS_MESSAGE

inherit

	ANY
		redefine
			out
		end

create
	make_ok,
		--new_physician error make
 make_physician_id_positive, make_physician_id_taken, make_physician_name_start,

		--new_patient error make
 make_patient_id_positive, make_patient_id_taken, make_patient_name_start,

		--new_medication error make
 make_medication_id_positive, make_medication_id_taken, make_medication_name_start, make_medication_name_taken, make_medication_valid_dose,

		--add_interaction error make
 make_medications_id_positive, make_medications_id_different, make_medications_registered, make_interaction_exists, make_remove_conflicting_medicines,

		--new_prescription error make
 make_prescription_id_positive, make_prescription_id_taken, make_physician_not_registered, make_patient_not_registered, make_prescription_exists,

		--add_medicine error make
 make_prescription_not_exists, make_medication_not_registered, make_medication_already_prescribed, make_specialist_adddangerous_interaction, make_dose_outside_range,

		--remove_medicine error make
 make_medication_not_in_prescription,

		--dpr_q
 make_dangerous_prescriptions_warning, make_no_dangerous_prescriptions

feature {NONE}

	make_ok
		do
			err_code := err_ok
		end

		--new_physician error make methods

	make_physician_id_positive
		do
			err_code := err_physician_id_positive
		end

	make_physician_id_taken
		do
			err_code := err_physician_id_taken
		end

	make_physician_name_start
		do
			err_code := err_physician_name_start
		end

		--new_patient error make

	make_patient_id_positive
		do
			err_code := err_patient_id_positive
		end

	make_patient_id_taken
		do
			err_code := err_patient_id_taken
		end

	make_patient_name_start
		do
			err_code := err_patient_name_start
		end

		--new_medication error make

	make_medication_id_positive
		do
			err_code := err_medication_id_positive
		end

	make_medication_id_taken
		do
			err_code := err_medication_id_taken
		end

	make_medication_name_start
		do
			err_code := err_medication_name_start
		end

	make_medication_name_taken
		do
			err_code := err_medication_name_taken
		end

	make_medication_valid_dose
		do
			err_code := err_medication_valid_dose
		end

		--add_interaction error make

	make_medications_id_positive
		do
			err_code := err_medications_id_positive
		end

	make_medications_id_different
		do
			err_code := err_medications_id_different
		end

	make_medications_registered
		do
			err_code := err_medications_registered
		end

	make_interaction_exists
		do
			err_code := err_interaction_id_exists
		end

	make_remove_conflicting_medicines
		do
			err_code := err_remove_conflicting_medicines
		end

		--new_prescription error make

	make_prescription_id_positive
		do
			err_code := err_prescription_id_positive
		end

	make_prescription_id_taken
		do
			err_code := err_prescription_id_taken
		end

	make_physician_not_registered
		do
			err_code := err_physician_not_registered
		end

	make_patient_not_registered
		do
			err_code := err_patient_not_registered
		end

	make_prescription_exists
		do
			err_code := err_prescription_exists
		end

		--add_medicine error make

	make_prescription_not_exists
		do
			err_code := err_prescription_not_exists
		end

	make_medication_not_registered
		do
			err_code := err_medication_not_registered
		end

	make_medication_already_prescribed
		do
			err_code := err_medication_already_prescribed
		end

	make_specialist_adddangerous_interaction
		do
			err_code := err_specialist_adddangerous_interaction
		end

	make_dose_outside_range
		do
			err_code := err_dose_outside_range
		end

		--remove_medicine error make

	make_medication_not_in_prescription
		do
			err_code := err_medication_not_in_prescription
		end

		--dpr_q

	make_dangerous_prescriptions_warning
		do
			err_code := err_dangerous_prescriptions_warning
		end

	make_no_dangerous_prescriptions
		do
			err_code := err_no_dangerous_prescriptions
		end

feature

	out: STRING
		do
			Result := err_message [err_code]
		end

feature {NONE} -- Implementation

	err_code: INTEGER

	err_message: ARRAY [STRING]
		once
			create Result.make_filled ("", 1, 30)
			Result.put ("ok", 1)
				--add_physician error messages
			Result.put ("physician id must be a positive integer", 2)
			Result.put ("physician id already in use", 3)
			Result.put ("name must start with a letter", 4)

				--add_patient error messages
			Result.put ("patient id must be a positive integer", 5)
			Result.put ("patient id already in use", 6)
			Result.put ("name must start with a letter", 7)

				--add_medication error messages
			Result.put ("medication id must be a positive integer", 8)
			Result.put ("medication id already in use", 9)
			Result.put ("medication name must start with a letter", 10)
			Result.put ("medication name already in use", 11)
			Result.put ("require 0 < low-dose <= hi-dose", 12)

				--add_interaction error messages
			Result.put ("medication ids must be positive integers", 13)
			Result.put ("medication ids must be different", 14)
			Result.put ("medications with these ids must be registered", 15)
			Result.put ("interaction already exists", 16)
			Result.put ("first remove conflicting medicine prescribed by generalist", 17)

				--new_prescription error messages
			Result.put ("prescription id must be a positive integer", 18)
			Result.put ("prescription id already in use", 19)
			Result.put ("physician with this id not registered", 20)
			Result.put ("patient with this id not registered", 21)
			Result.put ("prescription already exists for this physician and patient", 22)

				--add_medicine error messages

			Result.put ("prescription with this id does not exist", 23)
			Result.put ("medication id must be registered", 24)
			Result.put ("medication is already prescribed", 25)
			Result.put ("specialist is required to add a dangerous interaction", 26)
			Result.put ("dose is outside allowed range", 27)

				--remove_medicine error messages
			Result.put ("medication is not in the prescription", 28)

				--dpr_q messages
			Result.put ("There are dangerous prescriptions:", 29)
			Result.put ("There are no dangerous prescriptions", 30)
		end

	err_ok: INTEGER = 1

			--new_physician

	err_physician_id_positive: INTEGER = 2

	err_physician_id_taken: INTEGER = 3

	err_physician_name_start: INTEGER = 4

		--new_patient

	err_patient_id_positive: INTEGER = 5

	err_patient_id_taken: INTEGER = 6

	err_patient_name_start: INTEGER = 7

		--new_medication

	err_medication_id_positive: INTEGER = 8

	err_medication_id_taken: INTEGER = 9

	err_medication_name_start: INTEGER = 10

	err_medication_name_taken: INTEGER = 11

	err_medication_valid_dose: INTEGER = 12

		--add_interaction

	err_medications_id_positive: INTEGER = 13

	err_medications_id_different: INTEGER = 14

	err_medications_registered: INTEGER = 15

	err_interaction_id_exists: INTEGER = 16

	err_remove_conflicting_medicines: INTEGER = 17

		--new_prescription

	err_prescription_id_positive: INTEGER = 18

	err_prescription_id_taken: INTEGER = 19

	err_physician_not_registered: INTEGER = 20

	err_patient_not_registered: INTEGER = 21

	err_prescription_exists: INTEGER = 22

		--add_medicine

	err_prescription_not_exists: INTEGER = 23

	err_medication_not_registered: INTEGER = 24

	err_medication_already_prescribed: INTEGER = 25

	err_specialist_adddangerous_interaction: INTEGER = 26

	err_dose_outside_range: INTEGER = 27

		--remove_medicine

	err_medication_not_in_prescription: INTEGER = 28

		--dpr_q

	err_dangerous_prescriptions_warning: INTEGER = 29

	err_no_dangerous_prescriptions: INTEGER = 30


	feature
	valid_message (a_message_no: INTEGER): BOOLEAN
		do
			Result := err_message.lower <= a_message_no and a_message_no <= err_message.upper
		ensure
			Result = (err_message.lower <= a_message_no and a_message_no <= err_message.upper)
		end

end
