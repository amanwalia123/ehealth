/*
 * Code for class EV_GTK_DEPENDENT_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F989_9050(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F989_9051(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F989_9052(EIF_REFERENCE);
extern EIF_TYPED_VALUE F989_9053(EIF_REFERENCE);
extern EIF_TYPED_VALUE F989_9054(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F989_9055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F989_9056(EIF_REFERENCE);
extern void EIF_Minit989(void);

#ifdef __cplusplus
}
#endif

#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F989_9050
static void inline_F989_9050 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	{
	GType type = G_TYPE_STRING;
	memcpy ((char *) arg1 + arg2, &type, sizeof(GType));
}
	;
}
#define INLINE_F989_9050
#endif
#ifndef INLINE_F989_9051
static void inline_F989_9051 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	{
	GType type = GDK_TYPE_PIXBUF;
	memcpy ((char *) arg1 + arg2, &type, sizeof(GType));
}
	;
}
#define INLINE_F989_9051
#endif
#ifndef INLINE_F989_9052
static EIF_INTEGER_32 inline_F989_9052 (void)
{
	return (EIF_INTEGER_32) (sizeof(GType))
	;
}
#define INLINE_F989_9052
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GTK_DEPENDENT_ROUTINES}.add_g_type_string */
void F989_9050 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "add_g_type_string";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 988, Current, 0, 2, 14684);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(988, Current, 14684);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F989_9050 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {EV_GTK_DEPENDENT_ROUTINES}.add_gdk_type_pixbuf */
void F989_9051 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "add_gdk_type_pixbuf";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 988, Current, 0, 2, 14685);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(988, Current, 14685);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F989_9051 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {EV_GTK_DEPENDENT_ROUTINES}.sizeof_gtype */
EIF_TYPED_VALUE F989_9052 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sizeof_gtype";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 988, Current, 0, 0, 14679);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(988, Current, 14679);
	RTIV(Current, RTAL);
	Result = inline_F989_9052 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_GTK_DEPENDENT_ROUTINES}.create_gtk_dialog */
EIF_TYPED_VALUE F989_9053 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_gtk_dialog";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 988, Current, 0, 0, 14680);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(988, Current, 14680);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5073, 867))(Current)).it_i4);
	ui4_1 = ti4_1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5392, 867))(Current, ui4_1x)).it_p);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef ui4_1
}

/* {EV_GTK_DEPENDENT_ROUTINES}.client_area_from_c_object */
EIF_TYPED_VALUE F989_9054 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "client_area_from_c_object";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 988, Current, 0, 1, 14681);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(988, Current, 14681);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	Result = (EIF_POINTER) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {EV_GTK_DEPENDENT_ROUTINES}.horizontal_resolution_internal */
RTOID (F989_9055)
EIF_TYPED_VALUE F989_9055 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "horizontal_resolution_internal";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F989_9055);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 988, Current, 0, 0, 14682);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(988, Current, 14682);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5208, 867))(Current)).it_i4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5842, 868))(Current)).it_p);
	up1 = tp1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5844, 868))(Current, up1x)).it_i4);
	tr1 = RTLN(eif_new_type(194, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (ti4_2)) * (EIF_REAL_64) 25.4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3968, "rounded", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_3;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef Result
}

/* {EV_GTK_DEPENDENT_ROUTINES}.vertical_resolution_internal */
RTOID (F989_9056)
EIF_TYPED_VALUE F989_9056 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "vertical_resolution_internal";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F989_9056);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 988, Current, 0, 0, 14683);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(988, Current, 14683);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5207, 867))(Current)).it_i4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5842, 868))(Current)).it_p);
	up1 = tp1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5845, 868))(Current, up1x)).it_i4);
	tr1 = RTLN(eif_new_type(194, 0x00).id);
	*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (ti4_2)) * (EIF_REAL_64) 25.4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3968, "rounded", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_3;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef Result
}

void EIF_Minit989 (void)
{
	GTCX
	RTOTS (9055,F989_9055)
	RTOTS (9056,F989_9056)
}


#ifdef __cplusplus
}
#endif
