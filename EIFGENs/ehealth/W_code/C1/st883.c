/*
 * Code for class STATUS_MESSAGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F883_8325(EIF_REFERENCE);
extern void F883_8326(EIF_REFERENCE);
extern void F883_8327(EIF_REFERENCE);
extern void F883_8328(EIF_REFERENCE);
extern void F883_8329(EIF_REFERENCE);
extern void F883_8330(EIF_REFERENCE);
extern void F883_8331(EIF_REFERENCE);
extern void F883_8332(EIF_REFERENCE);
extern void F883_8333(EIF_REFERENCE);
extern void F883_8334(EIF_REFERENCE);
extern void F883_8335(EIF_REFERENCE);
extern void F883_8336(EIF_REFERENCE);
extern void F883_8337(EIF_REFERENCE);
extern void F883_8338(EIF_REFERENCE);
extern void F883_8339(EIF_REFERENCE);
extern void F883_8340(EIF_REFERENCE);
extern void F883_8341(EIF_REFERENCE);
extern void F883_8342(EIF_REFERENCE);
extern void F883_8343(EIF_REFERENCE);
extern void F883_8344(EIF_REFERENCE);
extern void F883_8345(EIF_REFERENCE);
extern void F883_8346(EIF_REFERENCE);
extern void F883_8347(EIF_REFERENCE);
extern void F883_8348(EIF_REFERENCE);
extern void F883_8349(EIF_REFERENCE);
extern void F883_8350(EIF_REFERENCE);
extern void F883_8351(EIF_REFERENCE);
extern void F883_8352(EIF_REFERENCE);
extern void F883_8353(EIF_REFERENCE);
extern void F883_8354(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8355(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8356(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8357(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8358(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8359(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8360(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8361(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8362(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8363(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8364(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8365(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8366(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8367(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8368(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8369(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8370(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8371(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8372(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8373(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8374(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8375(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8376(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8377(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8378(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8379(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8380(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8381(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8382(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8383(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8384(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8385(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8386(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8387(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_8388(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit883(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STATUS_MESSAGE}.make_ok */
void F883_8325 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_ok";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14046);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14046);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6282, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_physician_id_positive */
void F883_8326 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_physician_id_positive";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14047);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14047);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6283, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_physician_id_taken */
void F883_8327 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_physician_id_taken";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14048);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14048);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6284, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_physician_name_start */
void F883_8328 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_physician_name_start";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14049);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14049);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6285, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_patient_id_positive */
void F883_8329 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_patient_id_positive";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14050);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14050);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6286, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_patient_id_taken */
void F883_8330 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_patient_id_taken";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14051);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14051);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6287, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_patient_name_start */
void F883_8331 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_patient_name_start";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14052);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14052);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6288, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medication_id_positive */
void F883_8332 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medication_id_positive";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14053);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14053);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6289, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medication_id_taken */
void F883_8333 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medication_id_taken";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14054);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14054);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6290, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medication_name_start */
void F883_8334 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medication_name_start";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14055);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14055);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6291, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medication_name_taken */
void F883_8335 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medication_name_taken";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14056);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14056);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6292, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medication_valid_dose */
void F883_8336 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medication_valid_dose";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14057);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14057);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6293, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medications_id_positive */
void F883_8337 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medications_id_positive";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14058);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14058);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6294, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medications_id_different */
void F883_8338 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medications_id_different";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14059);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14059);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6295, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medications_registered */
void F883_8339 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medications_registered";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14060);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14060);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6296, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_interaction_exists */
void F883_8340 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_interaction_exists";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14061);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14061);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6297, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_remove_conflicting_medicines */
void F883_8341 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_remove_conflicting_medicines";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14062);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14062);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6298, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_prescription_id_positive */
void F883_8342 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_prescription_id_positive";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14063);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14063);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6299, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_prescription_id_taken */
void F883_8343 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_prescription_id_taken";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14064);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14064);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6300, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_physician_not_registered */
void F883_8344 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_physician_not_registered";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14065);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14065);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6301, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_patient_not_registered */
void F883_8345 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_patient_not_registered";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14066);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14066);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6302, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_prescription_exists */
void F883_8346 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_prescription_exists";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14067);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14067);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6303, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_prescription_not_exists */
void F883_8347 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_prescription_not_exists";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14068);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14068);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6304, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medication_not_registered */
void F883_8348 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medication_not_registered";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14069);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14069);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6305, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medication_already_prescribed */
void F883_8349 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medication_already_prescribed";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14070);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14070);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6306, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_specialist_adddangerous_interaction */
void F883_8350 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_specialist_adddangerous_interaction";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14071);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14071);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6307, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_dose_outside_range */
void F883_8351 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_dose_outside_range";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14072);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14072);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6308, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_medication_not_in_prescription */
void F883_8352 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_medication_not_in_prescription";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14073);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14073);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6309, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_dangerous_prescriptions_warning */
void F883_8353 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_dangerous_prescriptions_warning";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14074);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14074);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6310, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.make_no_dangerous_prescriptions */
void F883_8354 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_no_dangerous_prescriptions";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14075);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14075);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6280, 0x10000000, 1); /* err_code */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6311, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {STATUS_MESSAGE}.out */
EIF_TYPED_VALUE F883_8355 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14076);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14076);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6280, dtype));
	ui4_1 = ti4_1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
}

/* {STATUS_MESSAGE}.err_code */
EIF_TYPED_VALUE F883_8356 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6280,Dtype(Current)));
	return r;
}


/* {STATUS_MESSAGE}.err_message */
RTOID (F883_8357)
EIF_TYPED_VALUE F883_8357 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "err_message";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F883_8357);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 0, 14078);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(882, Current, 14078);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000123, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,291,0xFF01,220,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	tr2 = RTMS_EX_H("",0,0);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2611, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("ok",2,28523);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("physician id must be a positive integer",39,754361458);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("physician id already in use",27,1948973157);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("name must start with a letter",29,171251826);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("patient id must be a positive integer",37,1748995442);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("patient id already in use",25,872389733);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("name must start with a letter",29,171251826);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("medication id must be a positive integer",40,1045062514);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(10);
	tr1 = RTMS_EX_H("medication id already in use",28,2113860197);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 9L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(11);
	tr1 = RTMS_EX_H("medication name must start with a letter",40,1367520626);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(12);
	tr1 = RTMS_EX_H("medication name already in use",30,1814169701);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 11L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(13);
	tr1 = RTMS_EX_H("require 0 < low-dose <= hi-dose",31,1216893285);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(14);
	tr1 = RTMS_EX_H("medication ids must be positive integers",40,2129688691);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 13L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(15);
	tr1 = RTMS_EX_H("medication ids must be different",32,245184372);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 14L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(16);
	tr1 = RTMS_EX_H("medications with these ids must be registered",45,273885796);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 15L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(17);
	tr1 = RTMS_EX_H("interaction already exists",26,397109619);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(18);
	tr1 = RTMS_EX_H("first remove conflicting medicine prescribed by generalist",58,306754676);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 17L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(19);
	tr1 = RTMS_EX_H("prescription id must be a positive integer",42,808122482);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 18L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(20);
	tr1 = RTMS_EX_H("prescription id already in use",30,820013925);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 19L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(21);
	tr1 = RTMS_EX_H("physician with this id not registered",37,1289143908);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 20L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(22);
	tr1 = RTMS_EX_H("patient with this id not registered",35,614106724);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 21L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(23);
	tr1 = RTMS_EX_H("prescription already exists for this physician and patient",58,1069183092);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 22L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(24);
	tr1 = RTMS_EX_H("prescription with this id does not exist",40,1769412980);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 23L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(25);
	tr1 = RTMS_EX_H("medication id must be registered",32,204626276);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 24L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(26);
	tr1 = RTMS_EX_H("medication is already prescribed",32,2144617828);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 25L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(27);
	tr1 = RTMS_EX_H("specialist is required to add a dangerous interaction",53,1326291822);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 26L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(28);
	tr1 = RTMS_EX_H("dose is outside allowed range",29,2104493925);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 27L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(29);
	tr1 = RTMS_EX_H("medication is not in the prescription",37,968563310);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 28L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(30);
	tr1 = RTMS_EX_H("There are dangerous prescriptions:",34,1440546874);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 29L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTHOOK(31);
	tr1 = RTMS_EX_H("There are no dangerous prescriptions",36,541560691);
	ur1 = tr1;
	ui4_1 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1744, "put", Result))(Result, ur1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
#undef Result
}

/* {STATUS_MESSAGE}.err_ok */
EIF_TYPED_VALUE F883_8358 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {STATUS_MESSAGE}.err_physician_id_positive */
EIF_TYPED_VALUE F883_8359 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {STATUS_MESSAGE}.err_physician_id_taken */
EIF_TYPED_VALUE F883_8360 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {STATUS_MESSAGE}.err_physician_name_start */
EIF_TYPED_VALUE F883_8361 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {STATUS_MESSAGE}.err_patient_id_positive */
EIF_TYPED_VALUE F883_8362 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {STATUS_MESSAGE}.err_patient_id_taken */
EIF_TYPED_VALUE F883_8363 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {STATUS_MESSAGE}.err_patient_name_start */
EIF_TYPED_VALUE F883_8364 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {STATUS_MESSAGE}.err_medication_id_positive */
EIF_TYPED_VALUE F883_8365 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {STATUS_MESSAGE}.err_medication_id_taken */
EIF_TYPED_VALUE F883_8366 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {STATUS_MESSAGE}.err_medication_name_start */
EIF_TYPED_VALUE F883_8367 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {STATUS_MESSAGE}.err_medication_name_taken */
EIF_TYPED_VALUE F883_8368 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	return r;
}

/* {STATUS_MESSAGE}.err_medication_valid_dose */
EIF_TYPED_VALUE F883_8369 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	return r;
}

/* {STATUS_MESSAGE}.err_medications_id_positive */
EIF_TYPED_VALUE F883_8370 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	return r;
}

/* {STATUS_MESSAGE}.err_medications_id_different */
EIF_TYPED_VALUE F883_8371 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	return r;
}

/* {STATUS_MESSAGE}.err_medications_registered */
EIF_TYPED_VALUE F883_8372 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	return r;
}

/* {STATUS_MESSAGE}.err_interaction_id_exists */
EIF_TYPED_VALUE F883_8373 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {STATUS_MESSAGE}.err_remove_conflicting_medicines */
EIF_TYPED_VALUE F883_8374 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 17L);
	return r;
}

/* {STATUS_MESSAGE}.err_prescription_id_positive */
EIF_TYPED_VALUE F883_8375 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	return r;
}

/* {STATUS_MESSAGE}.err_prescription_id_taken */
EIF_TYPED_VALUE F883_8376 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
	return r;
}

/* {STATUS_MESSAGE}.err_physician_not_registered */
EIF_TYPED_VALUE F883_8377 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	return r;
}

/* {STATUS_MESSAGE}.err_patient_not_registered */
EIF_TYPED_VALUE F883_8378 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 21L);
	return r;
}

/* {STATUS_MESSAGE}.err_prescription_exists */
EIF_TYPED_VALUE F883_8379 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	return r;
}

/* {STATUS_MESSAGE}.err_prescription_not_exists */
EIF_TYPED_VALUE F883_8380 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
	return r;
}

/* {STATUS_MESSAGE}.err_medication_not_registered */
EIF_TYPED_VALUE F883_8381 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	return r;
}

/* {STATUS_MESSAGE}.err_medication_already_prescribed */
EIF_TYPED_VALUE F883_8382 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	return r;
}

/* {STATUS_MESSAGE}.err_specialist_adddangerous_interaction */
EIF_TYPED_VALUE F883_8383 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	return r;
}

/* {STATUS_MESSAGE}.err_dose_outside_range */
EIF_TYPED_VALUE F883_8384 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 27L);
	return r;
}

/* {STATUS_MESSAGE}.err_medication_not_in_prescription */
EIF_TYPED_VALUE F883_8385 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	return r;
}

/* {STATUS_MESSAGE}.err_dangerous_prescriptions_warning */
EIF_TYPED_VALUE F883_8386 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 29L);
	return r;
}

/* {STATUS_MESSAGE}.err_no_dangerous_prescriptions */
EIF_TYPED_VALUE F883_8387 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	return r;
}

/* {STATUS_MESSAGE}.valid_message */
EIF_TYPED_VALUE F883_8388 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_message";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 1, 14109);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 14109);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2617, "lower", tr1));
	if ((EIF_BOOLEAN) (ti4_1 <= arg1)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,2);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2618, "upper", tr1));
		tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT(NULL, EX_POST);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2617, "lower", tr1));
		if ((EIF_BOOLEAN) (ti4_1 <= arg1)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(2,2);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(2618, "upper", tr1));
			tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef arg1
}

void EIF_Minit883 (void)
{
	GTCX
	RTOTS (8357,F883_8357)
}


#ifdef __cplusplus
}
#endif
