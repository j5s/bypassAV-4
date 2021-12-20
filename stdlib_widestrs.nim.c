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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__systemZwidestrs_260)(NI16* w, NI estimate, NI replacement);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(NI, ord_systemZwidestrs_8)(NI16 arg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NI, ord_systemZwidestrs_8)(NI16 arg) {
	NI result;
	result = (NI)0;
	result = ((NI) (((NU16) (arg))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__systemZwidestrs_260)(NI16* w, NI estimate, NI replacement) {
	NimStringDesc* result;
	NI TM__R8z9bzATizpQoD67YeHNTdg_2;
	NI i;
	result = (NimStringDesc*)0;
	if (nimAddInt(estimate, (NI)((NI32)(estimate) >> (NU32)(((NI) 2))), &TM__R8z9bzATizpQoD67YeHNTdg_2)) { raiseOverflow(); };
	if (((NI)(TM__R8z9bzATizpQoD67YeHNTdg_2)) < ((NI) 0) || ((NI)(TM__R8z9bzATizpQoD67YeHNTdg_2)) > ((NI) 2147483647)){ raiseRangeErrorI((NI)(TM__R8z9bzATizpQoD67YeHNTdg_2), ((NI) 0), ((NI) 2147483647)); }
	result = rawNewString(((NI) ((NI)(TM__R8z9bzATizpQoD67YeHNTdg_2))));
	i = ((NI) 0);
	{
		while (1) {
			NI ch;
			NI TM__R8z9bzATizpQoD67YeHNTdg_3;
			if (!!((w[i] == ((NI16) 0)))) goto LA2;
			ch = ord_systemZwidestrs_8(w[i]);
			if (nimAddInt(i, ((NI) 1), &TM__R8z9bzATizpQoD67YeHNTdg_3)) { raiseOverflow(); };
			i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_3);
			{
				NIM_BOOL T5_;
				NI ch2;
				T5_ = (NIM_BOOL)0;
				T5_ = (((NI) 55296) <= ch);
				if (!(T5_)) goto LA6_;
				T5_ = (ch <= ((NI) 56319));
				LA6_: ;
				if (!T5_) goto LA7_;
				ch2 = ord_systemZwidestrs_8(w[i]);
				{
					NIM_BOOL T11_;
					NI TM__R8z9bzATizpQoD67YeHNTdg_4;
					NI TM__R8z9bzATizpQoD67YeHNTdg_5;
					NI TM__R8z9bzATizpQoD67YeHNTdg_6;
					T11_ = (NIM_BOOL)0;
					T11_ = (((NI) 56320) <= ch2);
					if (!(T11_)) goto LA12_;
					T11_ = (ch2 <= ((NI) 57343));
					LA12_: ;
					if (!T11_) goto LA13_;
					if (nimAddInt((NI)((NU32)((NI)(ch & ((NI) 1023))) << (NU32)(((NI) 10))), (NI)(ch2 & ((NI) 1023)), &TM__R8z9bzATizpQoD67YeHNTdg_4)) { raiseOverflow(); };
					if (nimAddInt((NI)(TM__R8z9bzATizpQoD67YeHNTdg_4), ((NI) 65536), &TM__R8z9bzATizpQoD67YeHNTdg_5)) { raiseOverflow(); };
					ch = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_5);
					if (nimAddInt(i, ((NI) 1), &TM__R8z9bzATizpQoD67YeHNTdg_6)) { raiseOverflow(); };
					i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_6);
				}
				goto LA9_;
				LA13_: ;
				{
					ch = replacement;
				}
				LA9_: ;
			}
			goto LA3_;
			LA7_: ;
			{
				NIM_BOOL T17_;
				T17_ = (NIM_BOOL)0;
				T17_ = (((NI) 56320) <= ch);
				if (!(T17_)) goto LA18_;
				T17_ = (ch <= ((NI) 57343));
				LA18_: ;
				if (!T17_) goto LA19_;
				ch = replacement;
			}
			goto LA3_;
			LA19_: ;
			LA3_: ;
			{
				if (!(ch < ((NI) 128))) goto LA23_;
				if ((ch) < ((NI) 0) || (ch) > ((NI) 255)){ raiseRangeErrorI(ch, ((NI) 0), ((NI) 255)); }
				result = addChar(result, ((NIM_CHAR) (((NI) (ch)))));
			}
			goto LA21_;
			LA23_: ;
			{
				if (!(ch < ((NI) 2048))) goto LA26_;
				if (((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) | ((NI) 192))) < ((NI) 0) || ((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) | ((NI) 192))) > ((NI) 255)){ raiseRangeErrorI((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) | ((NI) 192)), ((NI) 0), ((NI) 255)); }
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) | ((NI) 192)))))));
				if (((NI)((NI)(ch & ((NI) 63)) | ((NI) 128))) < ((NI) 0) || ((NI)((NI)(ch & ((NI) 63)) | ((NI) 128))) > ((NI) 255)){ raiseRangeErrorI((NI)((NI)(ch & ((NI) 63)) | ((NI) 128)), ((NI) 0), ((NI) 255)); }
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)(ch & ((NI) 63)) | ((NI) 128)))))));
			}
			goto LA21_;
			LA26_: ;
			{
				if (!(ch < ((NI) 65536))) goto LA29_;
				if (((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 12))) | ((NI) 224))) < ((NI) 0) || ((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 12))) | ((NI) 224))) > ((NI) 255)){ raiseRangeErrorI((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 12))) | ((NI) 224)), ((NI) 0), ((NI) 255)); }
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 12))) | ((NI) 224)))))));
				if (((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) & ((NI) 63)) | ((NI) 128))) < ((NI) 0) || ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) & ((NI) 63)) | ((NI) 128))) > ((NI) 255)){ raiseRangeErrorI((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) & ((NI) 63)) | ((NI) 128)), ((NI) 0), ((NI) 255)); }
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) & ((NI) 63)) | ((NI) 128)))))));
				if (((NI)((NI)(ch & ((NI) 63)) | ((NI) 128))) < ((NI) 0) || ((NI)((NI)(ch & ((NI) 63)) | ((NI) 128))) > ((NI) 255)){ raiseRangeErrorI((NI)((NI)(ch & ((NI) 63)) | ((NI) 128)), ((NI) 0), ((NI) 255)); }
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)(ch & ((NI) 63)) | ((NI) 128)))))));
			}
			goto LA21_;
			LA29_: ;
			{
				if (!(ch <= ((NI) 1114111))) goto LA32_;
				if (((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 18))) | ((NI) 240))) < ((NI) 0) || ((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 18))) | ((NI) 240))) > ((NI) 255)){ raiseRangeErrorI((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 18))) | ((NI) 240)), ((NI) 0), ((NI) 255)); }
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 18))) | ((NI) 240)))))));
				if (((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 12))) & ((NI) 63)) | ((NI) 128))) < ((NI) 0) || ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 12))) & ((NI) 63)) | ((NI) 128))) > ((NI) 255)){ raiseRangeErrorI((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 12))) & ((NI) 63)) | ((NI) 128)), ((NI) 0), ((NI) 255)); }
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 12))) & ((NI) 63)) | ((NI) 128)))))));
				if (((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) & ((NI) 63)) | ((NI) 128))) < ((NI) 0) || ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) & ((NI) 63)) | ((NI) 128))) > ((NI) 255)){ raiseRangeErrorI((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) & ((NI) 63)) | ((NI) 128)), ((NI) 0), ((NI) 255)); }
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI) 6))) & ((NI) 63)) | ((NI) 128)))))));
				if (((NI)((NI)(ch & ((NI) 63)) | ((NI) 128))) < ((NI) 0) || ((NI)((NI)(ch & ((NI) 63)) | ((NI) 128))) > ((NI) 255)){ raiseRangeErrorI((NI)((NI)(ch & ((NI) 63)) | ((NI) 128)), ((NI) 0), ((NI) 255)); }
				result = addChar(result, ((NIM_CHAR) (((NI) ((NI)((NI)(ch & ((NI) 63)) | ((NI) 128)))))));
			}
			goto LA21_;
			LA32_: ;
			{
				result = addChar(result, 239);
				result = addChar(result, 191);
				result = addChar(result, 189);
			}
			LA21_: ;
		} LA2: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__systemZwidestrs_324)(NI16* s) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = dollar__systemZwidestrs_260(s, ((NI) 80), ((NI) 65533));
	return result;
}