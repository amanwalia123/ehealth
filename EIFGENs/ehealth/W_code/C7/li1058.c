/*
 * Code for class LIQUID
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1058_9606(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1058(void);

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

/* {LIQUID}.make_liquid */
void F1058_9606 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make_liquid";
	RTEX;
#define arg1 arg1x.it_i8
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	struct eif_ex_1147 sarg3;
	EIF_REFERENCE earg3 = (EIF_REFERENCE) sarg3.data;
	
#define arg4 arg4x.it_r
	struct eif_ex_1147 sarg4;
	EIF_REFERENCE earg4 = (EIF_REFERENCE) sarg4.data;
	
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	memcpy (&sarg3.overhead, HEADER(arg3), 16 + OVERHEAD);
	sarg3.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg3.overhead.ov_size = 0;
	memcpy (&sarg4.overhead, HEADER(arg4), 16 + OVERHEAD);
	sarg4.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg4.overhead.ov_size = 0;
	
	RTLI(8);
	RTLR(0,arg2);
	RTLR(1,earg3);
	RTLR(2,earg4);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,ur3);
	RTLR(6,Current);
	RTLR(7,tr1);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&earg3);
	RTLU(SK_REF,&earg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1057, Current, 0, 4, 15154);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1057, Current, 15154);
	RTCC(arg2, 1057, l_feature_name, 2, eif_new_type(220, 0x01), 0x01);
	RTCC(earg3, 1057, l_feature_name, 3, eif_new_type(1147, 0x00), 0x00);
	RTCC(earg4, 1057, l_feature_name, 4, eif_new_type(1147, 0x00), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui8_1 = arg1;
	ur1 = RTCCL(arg2);
	ur2 = RTRCL(earg3);
	ur3 = RTRCL(earg4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7371, dtype))(Current, ui8_1x, ur1x, ur2x, ur3x);
	RTHOOK(2);
	tr1 = RTMS_EX_H("lq",2,27761);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7382, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ui8_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1058 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
