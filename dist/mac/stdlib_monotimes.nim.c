/* Generated by Nim Compiler v1.4.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#include <mach/mach.h>
#include <mach/mach_time.h>
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
typedef struct tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw;

/* section: NIM_merge_TYPES */
struct tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w {
NI64 ticks;
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
struct tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw {
NI64 seconds;
NI nanosecond;
};

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, initDuration__wcR3zetvspAUsyuvWZ07Xg)(NI64 nanoseconds, NI64 microseconds, NI64 milliseconds, NI64 seconds, NI64 minutes, NI64 hours, NI64 days, NI64 weeks);
N_LIB_PRIVATE N_NIMCALL(NI64, inNanoseconds__df0d89cDnRIju9aB6p1W1qVA_3)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw dur);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__FEvFMlkqJiSSGVO6HgTv8w_;
extern TNimType NTI__Aav8dQoMlCFnZRxA0IhTHQ_;

/* section: NIM_merge_PROCS */
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w, getMonoTime__QkEugs2Q2iFK9b83sl2B6wA)(void) {
	tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w result;
	NI64 ticks;
	mach_timebase_info_data_t machAbsoluteTimeFreq;
	nimZeroMem((void*)(&result), sizeof(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w));
	ticks = mach_absolute_time();
	nimZeroMem((void*)(&machAbsoluteTimeFreq), sizeof(mach_timebase_info_data_t));
	mach_timebase_info((&machAbsoluteTimeFreq));
	nimZeroMem((void*)(&result), sizeof(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w));
	result.ticks = (NI64)((NI64)(ticks * ((NI64) (machAbsoluteTimeFreq.numer))) / ((NI64) (machAbsoluteTimeFreq.denom)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, minus___p9cBm7joedh4BwcboQ3HMVQ)(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w a, tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w b) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	result = initDuration__wcR3zetvspAUsyuvWZ07Xg((NI64)(a.ticks - b.ticks), IL64(0), IL64(0), IL64(0), IL64(0), IL64(0), IL64(0), IL64(0));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, lteq___3KIZNy1Wl5YmzvX5mBokLA)(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w a, tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (a.ticks <= b.ticks);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___3KIZNy1Wl5YmzvX5mBokLA_2)(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w a, tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (a.ticks == b.ticks);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, lt___3KIZNy1Wl5YmzvX5mBokLA_3)(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w a, tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (a.ticks < b.ticks);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w, plus___kq5bd8gLWmWN2ZS9bs8371Q)(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w a, tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw b) {
	tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w result;
	tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w T1_;
	NI64 T2_;
	nimZeroMem((void*)(&result), sizeof(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w));
	nimZeroMem((void*)(&T1_), sizeof(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w));
	T2_ = (NI64)0;
	T2_ = inNanoseconds__df0d89cDnRIju9aB6p1W1qVA_3(b);
	T1_.ticks = (NI64)(a.ticks + T2_);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_monotimesDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode TM__IP4V1hRabVpf8OnX9bWuPxw_0[1];

/* section: NIM_merge_TYPE_INIT3 */
NTI__FEvFMlkqJiSSGVO6HgTv8w_.size = sizeof(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w);
NTI__FEvFMlkqJiSSGVO6HgTv8w_.align = NIM_ALIGNOF(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w);
NTI__FEvFMlkqJiSSGVO6HgTv8w_.kind = 18;
NTI__FEvFMlkqJiSSGVO6HgTv8w_.base = 0;
NTI__FEvFMlkqJiSSGVO6HgTv8w_.flags = 3;
TM__IP4V1hRabVpf8OnX9bWuPxw_0[0].kind = 1;
TM__IP4V1hRabVpf8OnX9bWuPxw_0[0].offset = offsetof(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w, ticks);
TM__IP4V1hRabVpf8OnX9bWuPxw_0[0].typ = (&NTI__Aav8dQoMlCFnZRxA0IhTHQ_);
TM__IP4V1hRabVpf8OnX9bWuPxw_0[0].name = "ticks";
NTI__FEvFMlkqJiSSGVO6HgTv8w_.node = &TM__IP4V1hRabVpf8OnX9bWuPxw_0[0];
}

