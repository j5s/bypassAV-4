/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

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
#define nimfr_(x, y)
#define nimln_(x, y)
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo_pureZmath_175)(NI x) {
	NI result;
	result = (NI)0;
	result = (NI)(x - ((NI) 1));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 16))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 8))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 4))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 2))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 1))));
	result += (NI)(((NI) 1) + (x <= ((NI) 0)));
	return result;
}