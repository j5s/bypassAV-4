/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include "winsock2.h"
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NIM_CHAR tyArray__EWK8XzFKXCg2WflN3ijhqA[257];
typedef NIM_CHAR tyArray__4249al09aeC68W9cvqMnjIYOA[129];
typedef N_STDCALL_PTR(int, tyProc__As5z9bYt859cLKWaorPRgQYA) (NI16 wVersionRequired, WSADATA* WSData);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError_pureZos_468)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError_pureZos_471)(void);
N_LIB_PRIVATE NI osInvalidSocket_pureZnativesockets_46;
N_LIB_PRIVATE WSADATA wsa_pureZnativesockets_691;
extern tyProc__As5z9bYt859cLKWaorPRgQYA Dl_90178065_;
N_LIB_PRIVATE N_NIMCALL(void, stdlib_nativesocketsInit000)(void) {
{
	osInvalidSocket_pureZnativesockets_46 = INVALID_SOCKET;
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = Dl_90178065_(((NI16) 257), (&wsa_pureZnativesockets_691));
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError_pureZos_471();
		raiseOSError_pureZos_468(T6_, ((NimStringDesc*) NIM_NIL));
	}
	LA4_: ;
}
}
