/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct tyObject_RtArray__3dAfOhmMnD56kQD3eeo0Lg tyObject_RtArray__3dAfOhmMnD56kQD3eeo0Lg;
typedef struct tySequence__9apztJSmgERYU8fZOjI4pOg tySequence__9apztJSmgERYU8fZOjI4pOg;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;

/* section: NIM_merge_TYPES */
typedef int tyArray__hlIpJIfs8ECqDyETXoMStg[10];
struct tyObject_RtArray__3dAfOhmMnD56kQD3eeo0Lg {
NI L;
tySequence__9apztJSmgERYU8fZOjI4pOg* spart;
tyArray__hlIpJIfs8ECqDyETXoMStg apart;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef int tyUncheckedArray__XIqsTSIHvfp4MQW3uzOwlA[1];

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__9apztJSmgERYU8fZOjI4pOg {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_NIMCALL(void, Marker_tySequence__9apztJSmgERYU8fZOjI4pOg)(void* p, NI op);

/* section: NIM_merge_DATA */
extern TNimType NTI__nlCscttRCss70IBTyuBqnA_;
N_LIB_PRIVATE TNimType NTI__9apztJSmgERYU8fZOjI4pOg_;

/* section: NIM_merge_PROCS */
static N_INLINE(void, unsureAsgnRef)(void** dest, void* src) {
	(*dest) = src;
}
static N_NIMCALL(void, Marker_tySequence__9apztJSmgERYU8fZOjI4pOg)(void* p, NI op) {
	tySequence__9apztJSmgERYU8fZOjI4pOg* a;
	NI T1_;
	a = (tySequence__9apztJSmgERYU8fZOjI4pOg*)p;
	T1_ = (NI)0;
}
N_LIB_PRIVATE N_NIMCALL(void, initRtArray__dgRhxurJYSkIc9bzLmhcMfQ)(NI len, tyObject_RtArray__3dAfOhmMnD56kQD3eeo0Lg* Result) {
	NI T1_;
	unsureAsgnRef((void**)&(*Result).spart, NIM_NIL);
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 10; T1_++) {
	(*Result).apart[T1_] = 0;
	}
	(*Result).L = len;
	{
		if (!(((NI) 10) < ((NI) ((*Result).L)))) goto LA4_;
		(*Result).spart = (tySequence__9apztJSmgERYU8fZOjI4pOg*) newSeq((&NTI__9apztJSmgERYU8fZOjI4pOg_), len);
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(int*, getRawData__P13NCPA0zhaXrvo9bVrTd9bw)(tyObject_RtArray__3dAfOhmMnD56kQD3eeo0Lg* x) {
	int* result;
	result = (int*)0;
	{
		if (!(((NI) 10) < ((NI) ((*x).L)))) goto LA3_;
		result = ((int*) ((&(*x).spart->data[((NI) 0)])));
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((int*) ((&(*x).apart[(((NI) 0))- 0])));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_rtarraysDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT3 */
NTI__9apztJSmgERYU8fZOjI4pOg_.size = sizeof(tySequence__9apztJSmgERYU8fZOjI4pOg*);
NTI__9apztJSmgERYU8fZOjI4pOg_.align = NIM_ALIGNOF(tySequence__9apztJSmgERYU8fZOjI4pOg*);
NTI__9apztJSmgERYU8fZOjI4pOg_.kind = 24;
NTI__9apztJSmgERYU8fZOjI4pOg_.base = (&NTI__nlCscttRCss70IBTyuBqnA_);
NTI__9apztJSmgERYU8fZOjI4pOg_.flags = 2;
NTI__9apztJSmgERYU8fZOjI4pOg_.marker = Marker_tySequence__9apztJSmgERYU8fZOjI4pOg;
}

