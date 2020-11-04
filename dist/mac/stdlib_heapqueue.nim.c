/* Generated by Nim Compiler v1.4.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ;
typedef struct tySequence__oKfdUHDH0q5oP14wOM6kug tySequence__oKfdUHDH0q5oP14wOM6kug;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyTuple__5aoVPIWYzahUyBc9bMm0M5w tyTuple__5aoVPIWYzahUyBc9bMm0M5w;
typedef struct tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w;
typedef struct tyObject_FuturecolonObjectType___te3W2Tqi7xuJ7rlPtg9al5w tyObject_FuturecolonObjectType___te3W2Tqi7xuJ7rlPtg9al5w;

/* section: NIM_merge_TYPES */
struct tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ {
tySequence__oKfdUHDH0q5oP14wOM6kug* data;
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w {
NI64 ticks;
};
struct tyTuple__5aoVPIWYzahUyBc9bMm0M5w {
tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w Field0;
tyObject_FuturecolonObjectType___te3W2Tqi7xuJ7rlPtg9al5w* Field1;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__oKfdUHDH0q5oP14wOM6kug {
  TGenericSeq Sup;
  tyTuple__5aoVPIWYzahUyBc9bMm0M5w data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__oKfdUHDH0q5oP14wOM6kug)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, setLengthSeqV2)(TGenericSeq* s, TNimType* typ, NI newLen);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
static N_INLINE(void, pop__RpEY5Gba9bncUhtKKagJungsystem)(tySequence__oKfdUHDH0q5oP14wOM6kug** s, tyTuple__5aoVPIWYzahUyBc9bMm0M5w* Result);
static N_INLINE(NI, len__RjQWrCkdfvnNzFdZkV0dRQheapqueue)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ heap);
static N_INLINE(void, X5BX5D___ga3gGGJp3oFNnh3EnkLdsQheapqueue)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ heap, NI i, tyTuple__5aoVPIWYzahUyBc9bMm0M5w* Result);
N_LIB_PRIVATE N_NIMCALL(void, siftup__KT07fwIP1Mswyo2fH5Meeg)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ* heap, NI p);
static N_INLINE(NIM_BOOL, heapCmp__2QyOfd9anp1pOLWfLRbzHQgheapqueue)(tyTuple__5aoVPIWYzahUyBc9bMm0M5w x, tyTuple__5aoVPIWYzahUyBc9bMm0M5w y);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, lt___RW9bVkX9a9ciXIGLLL6tauarQ)(tyTuple__5aoVPIWYzahUyBc9bMm0M5w x, tyTuple__5aoVPIWYzahUyBc9bMm0M5w y);
N_LIB_PRIVATE N_NIMCALL(void, siftdown__Zxh1g3A3MXNfUq88v9arH1w)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ* heap, NI startpos, NI p);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__mgfFdry9aKsRMW9au5u9bSpOQ_;
extern TNimType NTI__5aoVPIWYzahUyBc9bMm0M5w_;
N_LIB_PRIVATE TNimType NTI__oKfdUHDH0q5oP14wOM6kug_;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tySequence__oKfdUHDH0q5oP14wOM6kug)(void* p, NI op) {
	tySequence__oKfdUHDH0q5oP14wOM6kug* a;
	NI T1_;
	a = (tySequence__oKfdUHDH0q5oP14wOM6kug*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].Field1, op);
	}
}
N_LIB_PRIVATE N_NIMCALL(void, clear__uwU9c2lsLU9ak4QmYnE6XQuA)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ* heap) {
	(*heap).data = (tySequence__oKfdUHDH0q5oP14wOM6kug*) setLengthSeqV2(&((*heap).data)->Sup, (&NTI__oKfdUHDH0q5oP14wOM6kug_), ((NI) 0));
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
static N_INLINE(void, pop__RpEY5Gba9bncUhtKKagJungsystem)(tySequence__oKfdUHDH0q5oP14wOM6kug** s, tyTuple__5aoVPIWYzahUyBc9bMm0M5w* Result) {
	NI L;
	NI T1_;
	T1_ = ((*s) ? (*s)->Sup.len : 0);
	L = (NI)(T1_ - ((NI) 1));
	(*Result).Field0 = (*s)->data[L].Field0;
	(*Result).Field1 = (*s)->data[L].Field1;
	(*s) = (tySequence__oKfdUHDH0q5oP14wOM6kug*) setLengthSeqV2(&((*s))->Sup, (&NTI__oKfdUHDH0q5oP14wOM6kug_), ((NI) (L)));
}
static N_INLINE(NI, len__RjQWrCkdfvnNzFdZkV0dRQheapqueue)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ heap) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (heap.data ? heap.data->Sup.len : 0);
	result = T1_;
	return result;
}
static N_INLINE(void, X5BX5D___ga3gGGJp3oFNnh3EnkLdsQheapqueue)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ heap, NI i, tyTuple__5aoVPIWYzahUyBc9bMm0M5w* Result) {
	(*Result).Field0 = heap.data->data[i].Field0;
	(*Result).Field1 = heap.data->data[i].Field1;
}
static N_INLINE(NIM_BOOL, heapCmp__2QyOfd9anp1pOLWfLRbzHQgheapqueue)(tyTuple__5aoVPIWYzahUyBc9bMm0M5w x, tyTuple__5aoVPIWYzahUyBc9bMm0M5w y) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	result = lt___RW9bVkX9a9ciXIGLLL6tauarQ(x, y);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, siftdown__Zxh1g3A3MXNfUq88v9arH1w)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ* heap, NI startpos, NI p) {
	NI pos;
	tyTuple__5aoVPIWYzahUyBc9bMm0M5w newitem;
	pos = p;
	nimZeroMem((void*)(&newitem), sizeof(tyTuple__5aoVPIWYzahUyBc9bMm0M5w));
	X5BX5D___ga3gGGJp3oFNnh3EnkLdsQheapqueue((*heap), ((NI) (pos)), (&newitem));
	{
		while (1) {
			NI parentpos;
			tyTuple__5aoVPIWYzahUyBc9bMm0M5w parent;
			if (!(startpos < pos)) goto LA2;
			parentpos = (NI)((NI64)((NI)(pos - ((NI) 1))) >> (NU64)(((NI) 1)));
			nimZeroMem((void*)(&parent), sizeof(tyTuple__5aoVPIWYzahUyBc9bMm0M5w));
			X5BX5D___ga3gGGJp3oFNnh3EnkLdsQheapqueue((*heap), ((NI) (parentpos)), (&parent));
			{
				NIM_BOOL T5_;
				T5_ = (NIM_BOOL)0;
				T5_ = heapCmp__2QyOfd9anp1pOLWfLRbzHQgheapqueue(newitem, parent);
				if (!T5_) goto LA6_;
				(*heap).data->data[pos].Field0 = parent.Field0;
				(*heap).data->data[pos].Field1 = parent.Field1;
				pos = parentpos;
			}
			goto LA3_;
			LA6_: ;
			{
				goto LA1;
			}
			LA3_: ;
		} LA2: ;
	} LA1: ;
	(*heap).data->data[pos].Field0 = newitem.Field0;
	(*heap).data->data[pos].Field1 = newitem.Field1;
}
N_LIB_PRIVATE N_NIMCALL(void, siftup__KT07fwIP1Mswyo2fH5Meeg)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ* heap, NI p) {
	NI endpos;
	NI pos;
	NI startpos;
	tyTuple__5aoVPIWYzahUyBc9bMm0M5w newitem;
	NI childpos;
	endpos = len__RjQWrCkdfvnNzFdZkV0dRQheapqueue((*heap));
	pos = p;
	startpos = pos;
	nimZeroMem((void*)(&newitem), sizeof(tyTuple__5aoVPIWYzahUyBc9bMm0M5w));
	X5BX5D___ga3gGGJp3oFNnh3EnkLdsQheapqueue((*heap), ((NI) (pos)), (&newitem));
	childpos = (NI)((NI)(((NI) 2) * pos) + ((NI) 1));
	{
		while (1) {
			NI rightpos;
			if (!(childpos < endpos)) goto LA2;
			rightpos = (NI)(childpos + ((NI) 1));
			{
				NIM_BOOL T5_;
				tyTuple__5aoVPIWYzahUyBc9bMm0M5w T7_;
				tyTuple__5aoVPIWYzahUyBc9bMm0M5w T8_;
				tyTuple__5aoVPIWYzahUyBc9bMm0M5w T9_;
				NIM_BOOL T10_;
				T5_ = (NIM_BOOL)0;
				T5_ = (rightpos < endpos);
				if (!(T5_)) goto LA6_;
				nimZeroMem((void*)(&T7_), sizeof(tyTuple__5aoVPIWYzahUyBc9bMm0M5w));
				X5BX5D___ga3gGGJp3oFNnh3EnkLdsQheapqueue((*heap), ((NI) (childpos)), (&T7_));
				nimZeroMem((void*)(&T8_), sizeof(tyTuple__5aoVPIWYzahUyBc9bMm0M5w));
				T8_.Field0 = T7_.Field0;
				T8_.Field1 = T7_.Field1;
				nimZeroMem((void*)(&T9_), sizeof(tyTuple__5aoVPIWYzahUyBc9bMm0M5w));
				X5BX5D___ga3gGGJp3oFNnh3EnkLdsQheapqueue((*heap), ((NI) (rightpos)), (&T9_));
				T10_ = (NIM_BOOL)0;
				T10_ = heapCmp__2QyOfd9anp1pOLWfLRbzHQgheapqueue(T8_, T9_);
				T5_ = !(T10_);
				LA6_: ;
				if (!T5_) goto LA11_;
				childpos = rightpos;
			}
			LA11_: ;
			X5BX5D___ga3gGGJp3oFNnh3EnkLdsQheapqueue((*heap), ((NI) (childpos)), (&(*heap).data->data[pos]));
			pos = childpos;
			childpos = (NI)((NI)(((NI) 2) * pos) + ((NI) 1));
		} LA2: ;
	}
	(*heap).data->data[pos].Field0 = newitem.Field0;
	(*heap).data->data[pos].Field1 = newitem.Field1;
	siftdown__Zxh1g3A3MXNfUq88v9arH1w(heap, startpos, pos);
}
N_LIB_PRIVATE N_NIMCALL(void, pop__TlOaAtzBOZyVC1usll2RJQ)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ* heap, tyTuple__5aoVPIWYzahUyBc9bMm0M5w* Result) {
	tyTuple__5aoVPIWYzahUyBc9bMm0M5w lastelt;
	nimZeroMem((void*)(&lastelt), sizeof(tyTuple__5aoVPIWYzahUyBc9bMm0M5w));
	pop__RpEY5Gba9bncUhtKKagJungsystem((&(*heap).data), (&lastelt));
	{
		NI T3_;
		T3_ = (NI)0;
		T3_ = len__RjQWrCkdfvnNzFdZkV0dRQheapqueue((*heap));
		if (!(((NI) 0) < T3_)) goto LA4_;
		X5BX5D___ga3gGGJp3oFNnh3EnkLdsQheapqueue((*heap), ((NI) 0), Result);
		(*heap).data->data[((NI) 0)].Field0 = lastelt.Field0;
		(*heap).data->data[((NI) 0)].Field1 = lastelt.Field1;
		siftup__KT07fwIP1Mswyo2fH5Meeg(heap, ((NI) 0));
	}
	goto LA1_;
	LA4_: ;
	{
		(*Result).Field0 = lastelt.Field0;
		(*Result).Field1 = lastelt.Field1;
	}
	LA1_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, push__gXlLVTpG8Z0QsH8rXYfEfA)(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ* heap, tyTuple__5aoVPIWYzahUyBc9bMm0M5w item) {
	NI T1_;
	tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ* T2_;
	NI T3_;
	(*heap).data = (tySequence__oKfdUHDH0q5oP14wOM6kug*) incrSeqV3((TGenericSeq*)((*heap).data), (&NTI__oKfdUHDH0q5oP14wOM6kug_));
	T1_ = (*heap).data->Sup.len++;
	(*heap).data->data[T1_].Field0 = item.Field0;
	(*heap).data->data[T1_].Field1 = item.Field1;
	T2_ = (tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ*)0;
	T2_ = heap;
	T3_ = (NI)0;
	T3_ = len__RjQWrCkdfvnNzFdZkV0dRQheapqueue((*heap));
	siftdown__Zxh1g3A3MXNfUq88v9arH1w(T2_, ((NI) 0), (NI)(T3_ - ((NI) 1)));
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_heapqueueDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode TM__f2bNHCHm2LvO7iSrwQtdiQ_0[1];

/* section: NIM_merge_TYPE_INIT3 */
NTI__mgfFdry9aKsRMW9au5u9bSpOQ_.size = sizeof(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ);
NTI__mgfFdry9aKsRMW9au5u9bSpOQ_.align = NIM_ALIGNOF(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ);
NTI__mgfFdry9aKsRMW9au5u9bSpOQ_.kind = 18;
NTI__mgfFdry9aKsRMW9au5u9bSpOQ_.base = 0;
NTI__oKfdUHDH0q5oP14wOM6kug_.size = sizeof(tySequence__oKfdUHDH0q5oP14wOM6kug*);
NTI__oKfdUHDH0q5oP14wOM6kug_.align = NIM_ALIGNOF(tySequence__oKfdUHDH0q5oP14wOM6kug*);
NTI__oKfdUHDH0q5oP14wOM6kug_.kind = 24;
NTI__oKfdUHDH0q5oP14wOM6kug_.base = (&NTI__5aoVPIWYzahUyBc9bMm0M5w_);
NTI__oKfdUHDH0q5oP14wOM6kug_.marker = Marker_tySequence__oKfdUHDH0q5oP14wOM6kug;
TM__f2bNHCHm2LvO7iSrwQtdiQ_0[0].kind = 1;
TM__f2bNHCHm2LvO7iSrwQtdiQ_0[0].offset = offsetof(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ, data);
TM__f2bNHCHm2LvO7iSrwQtdiQ_0[0].typ = (&NTI__oKfdUHDH0q5oP14wOM6kug_);
TM__f2bNHCHm2LvO7iSrwQtdiQ_0[0].name = "data";
NTI__mgfFdry9aKsRMW9au5u9bSpOQ_.node = &TM__f2bNHCHm2LvO7iSrwQtdiQ_0[0];
}

