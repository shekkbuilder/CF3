#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
static int32_t x18 = INT32_MIN;
int64_t t4 = -16LL;
uint32_t x24 = 144621U;
int16_t x26 = 36;
static int32_t t6 = 230667;
static int16_t x34 = -1;
static int16_t x35 = INT16_MAX;
int8_t x40 = 11;
int32_t x47 = 7;
uint8_t x51 = UINT8_MAX;
volatile uint32_t x53 = 7U;
volatile uint16_t x55 = 104U;
static uint32_t x57 = 121128U;
uint8_t x63 = 0U;
uint16_t x68 = 17U;
static volatile int16_t x80 = 36;
static int64_t t19 = -17308LL;
uint64_t x87 = 640674463258LLU;
volatile int16_t x90 = INT16_MIN;
int8_t x96 = -1;
static volatile int64_t x111 = INT64_MIN;
int64_t x112 = -1LL;
uint64_t x114 = 467931063046452516LLU;
volatile int8_t x126 = INT8_MIN;
uint64_t t32 = 1601302656626LLU;
static uint16_t x152 = 645U;
static uint64_t x164 = 212811LLU;
volatile uint64_t t40 = 585LLU;
static int64_t x165 = INT64_MIN;
int64_t t43 = -105447557LL;
int16_t x177 = INT16_MAX;
static int32_t x184 = -1;
int8_t x187 = -1;
int16_t x194 = INT16_MIN;
volatile uint8_t x197 = UINT8_MAX;
static uint32_t x204 = UINT32_MAX;
volatile uint64_t t50 = 356791LLU;
uint16_t x206 = 1U;
uint16_t x209 = 13U;
static uint32_t x211 = 2726133U;
int8_t x213 = INT8_MIN;
int64_t x214 = INT64_MAX;
int16_t x219 = -8;
int16_t x224 = INT16_MIN;
volatile uint64_t t55 = 25252947200LLU;
volatile int64_t t56 = -2812172407LL;
uint32_t x234 = 6571U;
uint16_t x235 = 5U;
int32_t x237 = INT32_MIN;
int64_t x239 = INT64_MAX;
int16_t x241 = -210;
uint8_t x243 = UINT8_MAX;
static uint64_t x251 = 640LLU;
int8_t x265 = 1;
volatile int8_t x266 = -1;
uint64_t x272 = 818733862330LLU;
uint32_t x274 = 100U;
int8_t x279 = INT8_MIN;
static int64_t t69 = 40463281353289LL;
int64_t x283 = 34973745680LL;
volatile int64_t x284 = -53450524181015LL;
static int64_t x299 = INT64_MIN;
static volatile int8_t x301 = INT8_MIN;
uint64_t x305 = UINT64_MAX;
uint64_t x307 = 4015388165698LLU;
int16_t x308 = INT16_MIN;
static int16_t x315 = INT16_MIN;
static volatile int64_t t78 = -4175172061876395LL;
uint64_t x318 = UINT64_MAX;
int32_t x319 = INT32_MAX;
uint32_t x323 = 3102U;
uint64_t x326 = 20417271476802940LLU;
int64_t x330 = 119137652143080913LL;
int16_t x332 = INT16_MAX;
volatile int16_t x341 = -1;
volatile uint16_t x342 = UINT16_MAX;
uint8_t x346 = 4U;
uint32_t x352 = 112638989U;
uint32_t t87 = 80684U;
volatile int8_t x356 = INT8_MIN;
uint32_t t89 = 909093103U;
volatile int64_t t92 = 74873602LL;
static volatile int16_t x375 = 2486;
int16_t x378 = -173;
int8_t x379 = -13;
int16_t x384 = -1;
int32_t x388 = INT32_MAX;
static int32_t x389 = -1;
int32_t x390 = -1;
volatile int8_t x391 = -3;
static int32_t x395 = INT32_MAX;
int32_t t99 = -181414213;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	volatile int64_t x2 = -7LL;
	uint32_t x3 = 1632783U;
	int64_t t0 = 78788LL;

	t0 = (x1^((x2^x3)|x4));

	if (t0 != -2145850871LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	static uint8_t x6 = UINT8_MAX;
	volatile int8_t x7 = INT8_MIN;
	static uint32_t x8 = 4803890U;
	static volatile uint32_t t1 = 2925U;

	t1 = (x5^((x6^x7)|x8));

	if (t1 != 255U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int32_t x10 = INT32_MAX;
	int8_t x11 = INT8_MAX;
	int8_t x12 = INT8_MIN;
	volatile uint32_t t2 = 673U;

	t2 = (x9^((x10^x11)|x12));

	if (t2 != 127U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 52659265;
	volatile int16_t x14 = INT16_MAX;
	volatile int8_t x15 = 9;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 7580;

	t3 = (x13^((x14^x15)|x16));

	if (t3 != -2094793801) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1U;
	static int16_t x19 = 783;
	int64_t x20 = INT64_MIN;

	t4 = (x17^((x18^x19)|x20));

	if (t4 != -2147482866LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 563727156438864364LLU;
	int32_t x22 = INT32_MIN;
	uint64_t x23 = 2092360349LLU;
	volatile uint64_t t5 = 3044664726593111LLU;

	t5 = (x21^((x22^x23)|x24));

	if (t5 != 17883016917257643793LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 44U;
	int16_t x27 = -1;
	int32_t x28 = -237;

	t6 = (x25^((x26^x27)|x28));

	if (t6 != -9) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1008133168U;
	volatile int8_t x30 = INT8_MIN;
	uint16_t x31 = UINT16_MAX;
	static volatile uint64_t x32 = 87829LLU;
	volatile uint64_t t7 = 3031LLU;

	t7 = (x29^((x30^x31)|x32));

	if (t7 != 18446744072701457231LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 4698U;
	volatile int64_t x36 = 3053548520188LL;
	static int64_t t8 = 361215171295550LL;

	t8 = (x33^((x34^x35)|x36));

	if (t8 != -12122LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 410U;
	static uint8_t x38 = UINT8_MAX;
	static int32_t x39 = INT32_MIN;
	uint32_t t9 = 969026029U;

	t9 = (x37^((x38^x39)|x40));

	if (t9 != 2147484005U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 6092792LLU;
	static uint8_t x42 = 12U;
	volatile int32_t x43 = INT32_MIN;
	uint64_t x44 = 28038916016112120LLU;
	volatile uint64_t t10 = 0LLU;

	t10 = (x41^((x42^x43)|x44));

	if (t10 != 18446744073128375812LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = INT8_MIN;
	uint16_t x48 = 31445U;
	static int32_t t11 = -19242886;

	t11 = (x45^((x46^x47)|x48));

	if (t11 != -88) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = -1LL;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t12 = 305LLU;

	t12 = (x49^((x50^x51)|x52));

	if (t12 != 127LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = UINT64_MAX;
	uint64_t x56 = 488LLU;
	uint64_t t13 = 49341964LLU;

	t13 = (x53^((x54^x55)|x56));

	if (t13 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x58 = 6U;
	int64_t x59 = INT64_MAX;
	int16_t x60 = INT16_MIN;
	volatile int64_t t14 = -1021624LL;

	t14 = (x57^((x58^x59)|x60));

	if (t14 != -121135LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1708589;
	int8_t x62 = -7;
	int64_t x64 = -1LL;
	int64_t t15 = 7389925148093541LL;

	t15 = (x61^((x62^x63)|x64));

	if (t15 != 1708588LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 15791;
	volatile uint64_t x66 = UINT64_MAX;
	int8_t x67 = INT8_MAX;
	volatile uint64_t t16 = 245941745LLU;

	t16 = (x65^((x66^x67)|x68));

	if (t16 != 18446744073709535806LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	volatile uint64_t x70 = UINT64_MAX;
	static volatile int8_t x71 = INT8_MAX;
	uint64_t x72 = 21833733LLU;
	volatile uint64_t t17 = 14810094573410LLU;

	t17 = (x69^((x70^x71)|x72));

	if (t17 != 9223372036854775685LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	volatile int32_t x74 = INT32_MIN;
	uint16_t x75 = 78U;
	int8_t x76 = INT8_MIN;
	volatile int64_t t18 = -17LL;

	t18 = (x73^((x74^x75)|x76));

	if (t18 != 49LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	volatile uint8_t x78 = 121U;
	static volatile int8_t x79 = INT8_MIN;

	t19 = (x77^((x78^x79)|x80));

	if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = 16561058531330857LL;
	static uint64_t x82 = UINT64_MAX;
	static int64_t x83 = 1LL;
	int32_t x84 = INT32_MIN;
	volatile uint64_t t20 = 7451LLU;

	t20 = (x81^((x82^x83)|x84));

	if (t20 != 18430183015178220759LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	uint16_t x86 = 2U;
	volatile int8_t x88 = 1;
	uint64_t t21 = 4026LLU;

	t21 = (x85^((x86^x87)|x88));

	if (t21 != 18446743432336277017LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	int32_t x91 = INT32_MIN;
	int64_t x92 = -6360LL;
	volatile int64_t t22 = 2106958276061450LL;

	t22 = (x89^((x90^x91)|x92));

	if (t22 != 6359LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	static uint8_t x94 = UINT8_MAX;
	int64_t x95 = INT64_MAX;
	int64_t t23 = 85598088596884963LL;

	t23 = (x93^((x94^x95)|x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int8_t x98 = 0;
	static int16_t x99 = -1434;
	int16_t x100 = INT16_MAX;
	int32_t t24 = 4160929;

	t24 = (x97^((x98^x99)|x100));

	if (t24 != -65536) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = 5831921044435655811LLU;

	t25 = (x101^((x102^x103)|x104));

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 3;
	int64_t x106 = INT64_MIN;
	volatile int16_t x107 = -96;
	uint8_t x108 = 12U;
	int64_t t26 = 959748085LL;

	t26 = (x105^((x106^x107)|x108));

	if (t26 != 9223372036854775727LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	static int64_t x110 = -5073LL;
	volatile int64_t t27 = INT64_MAX;

	t27 = (x109^((x110^x111)|x112));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	volatile uint8_t x115 = 24U;
	static int64_t x116 = INT64_MAX;
	volatile uint64_t t28 = 3LLU;

	t28 = (x113^((x114^x115)|x116));

	if (t28 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 11U;
	int32_t x118 = INT32_MIN;
	uint32_t x119 = 1484886639U;
	static uint16_t x120 = UINT16_MAX;
	static volatile uint32_t t29 = 1U;

	t29 = (x117^((x118^x119)|x120));

	if (t29 != 3632398324U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = UINT32_MAX;
	int8_t x122 = 1;
	volatile uint32_t x123 = 114094155U;
	volatile int8_t x124 = 1;
	volatile uint32_t t30 = 10370U;

	t30 = (x121^((x122^x123)|x124));

	if (t30 != 4180873140U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	uint32_t x127 = 21388U;
	int32_t x128 = -82616195;
	static uint32_t t31 = 14531335U;

	t31 = (x125^((x126^x127)|x128));

	if (t31 != 2147478653U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -348;
	int32_t x130 = INT32_MAX;
	volatile int8_t x131 = INT8_MIN;
	uint64_t x132 = UINT64_MAX;

	t32 = (x129^((x130^x131)|x132));

	if (t32 != 347LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 124359308592867091LL;
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t33 = 859207LLU;

	t33 = (x133^((x134^x135)|x136));

	if (t33 != 18322384765116684524LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	uint32_t x138 = 22U;
	uint8_t x139 = 57U;
	static int16_t x140 = INT16_MIN;
	static uint32_t t34 = 192U;

	t34 = (x137^((x138^x139)|x140));

	if (t34 != 32720U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 202LLU;
	static int32_t x142 = INT32_MIN;
	int32_t x143 = -2138;
	int32_t x144 = INT32_MIN;
	volatile uint64_t t35 = 28904LLU;

	t35 = (x141^((x142^x143)|x144));

	if (t35 != 18446744073709549420LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = 54LLU;
	volatile int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	int32_t x148 = -1;
	volatile uint64_t t36 = 43888LLU;

	t36 = (x145^((x146^x147)|x148));

	if (t36 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = 136;
	uint64_t x150 = 2066573263LLU;
	int64_t x151 = INT64_MIN;
	volatile uint64_t t37 = 46344LLU;

	t37 = (x149^((x150^x151)|x152));

	if (t37 != 9223372038921348935LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MAX;
	uint64_t x154 = 34508126030LLU;
	volatile uint32_t x155 = 1750294336U;
	static int8_t x156 = -1;
	uint64_t t38 = 558269517763LLU;

	t38 = (x153^((x154^x155)|x156));

	if (t38 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = 0;
	static int32_t x158 = -1;
	static int32_t x159 = INT32_MIN;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = INT32_MAX;

	t39 = (x157^((x158^x159)|x160));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	static uint16_t x162 = 6365U;
	volatile uint16_t x163 = 1U;

	t40 = (x161^((x162^x163)|x164));

	if (t40 != 4294754336LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = INT64_MAX;
	uint64_t x167 = 247505565LLU;
	int64_t x168 = -1LL;
	volatile uint64_t t41 = 0LLU;

	t41 = (x165^((x166^x167)|x168));

	if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = 4314976U;
	int32_t x170 = -1;
	static uint32_t x171 = 8936500U;
	static uint32_t x172 = 30279980U;
	volatile uint32_t t42 = 3815U;

	t42 = (x169^((x170^x171)|x172));

	if (t42 != 4290673807U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = 837;
	static volatile uint32_t x174 = 348960215U;
	int64_t x175 = INT64_MIN;
	int16_t x176 = -131;

	t43 = (x173^((x174^x175)|x176));

	if (t43 != -838LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x178 = -1;
	static uint8_t x179 = 12U;
	int16_t x180 = 302;
	int32_t t44 = -92110031;

	t44 = (x177^((x178^x179)|x180));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = UINT16_MAX;
	volatile int32_t x182 = -1;
	int8_t x183 = INT8_MIN;
	volatile int32_t t45 = -766;

	t45 = (x181^((x182^x183)|x184));

	if (t45 != -65536) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 13442440623LLU;
	uint64_t x186 = 12LLU;
	uint8_t x188 = 0U;
	static volatile uint64_t t46 = 7385809430775LLU;

	t46 = (x185^((x186^x187)|x188));

	if (t46 != 18446744060267111004LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = -1;
	uint16_t x191 = UINT16_MAX;
	static int32_t x192 = INT32_MIN;
	int32_t t47 = -17;

	t47 = (x189^((x190^x191)|x192));

	if (t47 != 65408) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 15498306259076597LLU;
	uint64_t x195 = 5LLU;
	uint8_t x196 = 86U;
	uint64_t t48 = 25083LLU;

	t48 = (x193^((x194^x195)|x196));

	if (t48 != 18431245767450477986LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = -44;
	static uint32_t x199 = UINT32_MAX;
	int64_t x200 = -1LL;
	int64_t t49 = 3LL;

	t49 = (x197^((x198^x199)|x200));

	if (t49 != -256LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MAX;
	volatile int64_t x202 = INT64_MIN;
	static uint64_t x203 = 21161LLU;

	t50 = (x201^((x202^x203)|x204));

	if (t50 != 9223372041149710336LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -1;
	uint64_t x207 = UINT64_MAX;
	volatile int64_t x208 = INT64_MIN;
	uint64_t t51 = 16453285698LLU;

	t51 = (x205^((x206^x207)|x208));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x210 = 4U;
	static int8_t x212 = -1;
	volatile uint32_t t52 = 1061307U;

	t52 = (x209^((x210^x211)|x212));

	if (t52 != 4294967282U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x215 = 30U;
	uint16_t x216 = UINT16_MAX;
	volatile int64_t t53 = 352977459008330LL;

	t53 = (x213^((x214^x215)|x216));

	if (t53 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	uint16_t x218 = UINT16_MAX;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t54 = 93004837;

	t54 = (x217^((x218^x219)|x220));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = UINT64_MAX;
	int64_t x222 = -1LL;
	int8_t x223 = -1;

	t55 = (x221^((x222^x223)|x224));

	if (t55 != 32767LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MAX;
	static uint16_t x226 = 13U;
	volatile int32_t x227 = -249357941;
	int16_t x228 = 5140;

	t56 = (x225^((x226^x227)|x228));

	if (t56 != -9223372036605418903LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 118U;
	uint8_t x230 = UINT8_MAX;
	int64_t x231 = INT64_MAX;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t57 = 82LLU;

	t57 = (x229^((x230^x231)|x232));

	if (t57 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = UINT64_MAX;
	static uint64_t x236 = UINT64_MAX;
	volatile uint64_t t58 = 223711756852884LLU;

	t58 = (x233^((x234^x235)|x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x238 = -1;
	uint64_t x240 = 559415904956LLU;
	uint64_t t59 = 176723498LLU;

	t59 = (x237^((x238^x239)|x240));

	if (t59 != 9223371477431700156LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = -1;
	volatile int16_t x244 = -1;
	int32_t t60 = -1;

	t60 = (x241^((x242^x243)|x244));

	if (t60 != 209) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = INT8_MIN;
	volatile int64_t x246 = INT64_MAX;
	uint16_t x247 = UINT16_MAX;
	volatile int8_t x248 = INT8_MAX;
	int64_t t61 = 1139370LL;

	t61 = (x245^((x246^x247)|x248));

	if (t61 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 6U;
	int16_t x250 = 477;
	static int64_t x252 = 10LL;
	static volatile uint64_t t62 = 1840LLU;

	t62 = (x249^((x250^x251)|x252));

	if (t62 != 857LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int16_t x254 = INT16_MIN;
	uint8_t x255 = 1U;
	volatile int32_t x256 = -71032710;
	static volatile int32_t t63 = 457860920;

	t63 = (x253^((x254^x255)|x256));

	if (t63 != 24452) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MIN;
	static volatile int8_t x259 = INT8_MIN;
	int32_t x260 = 410127;
	int64_t t64 = -2016465579259070342LL;

	t64 = (x257^((x258^x259)|x260));

	if (t64 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 3U;
	uint64_t x262 = UINT64_MAX;
	volatile int32_t x263 = INT32_MAX;
	int64_t x264 = INT64_MIN;
	volatile uint64_t t65 = 344413LLU;

	t65 = (x261^((x262^x263)|x264));

	if (t65 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x267 = INT32_MIN;
	volatile int32_t x268 = INT32_MIN;
	volatile int32_t t66 = -15298541;

	t66 = (x265^((x266^x267)|x268));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int64_t x270 = 1813729870546508951LL;
	int8_t x271 = -1;
	static volatile uint64_t t67 = 248272870LLU;

	t67 = (x269^((x270^x271)|x272));

	if (t67 != 11037101133765054469LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -20704343;
	static int32_t x275 = 8699539;
	volatile int16_t x276 = -2;
	static uint32_t t68 = 13316U;

	t68 = (x273^((x274^x275)|x276));

	if (t68 != 20704342U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	static volatile int32_t x278 = INT32_MIN;
	static int64_t x280 = -1LL;

	t69 = (x277^((x278^x279)|x280));

	if (t69 != 32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MAX;
	int64_t t70 = -5LL;

	t70 = (x281^((x282^x283)|x284));

	if (t70 != -53414906166768LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 813020U;
	volatile int64_t x286 = INT64_MIN;
	static int8_t x287 = -26;
	static uint64_t x288 = 3814824LLU;
	uint64_t t71 = 10643LLU;

	t71 = (x285^((x286^x287)|x288));

	if (t71 != 9223372036853962802LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MAX;
	int16_t x290 = 0;
	int8_t x291 = 23;
	uint16_t x292 = 14U;
	int32_t t72 = -8;

	t72 = (x289^((x290^x291)|x292));

	if (t72 != 2147483616) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = 1968784954656495LL;
	uint8_t x294 = 61U;
	int16_t x295 = 1;
	int32_t x296 = -1388252;
	static int64_t t73 = -1904579620LL;

	t73 = (x293^((x294^x295)|x296));

	if (t73 != -1968784953419821LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	static uint64_t x298 = 32956831LLU;
	volatile int16_t x300 = -1;
	static uint64_t t74 = 127147631238LLU;

	t74 = (x297^((x298^x299)|x300));

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MIN;
	uint16_t x303 = 6U;
	int32_t x304 = -19;
	volatile int32_t t75 = -149913;

	t75 = (x301^((x302^x303)|x304));

	if (t75 != 111) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	static uint64_t t76 = 2876633LLU;

	t76 = (x305^((x306^x307)|x308));

	if (t76 != 1602LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	static uint64_t x310 = 5832145239LLU;
	int8_t x311 = -55;
	uint64_t x312 = 851949917LLU;
	uint64_t t77 = 2792637006LLU;

	t77 = (x309^((x310^x311)|x312));

	if (t77 != 5521293344LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MAX;
	uint32_t x314 = 142276U;
	volatile int64_t x316 = -1LL;

	t78 = (x313^((x314^x315)|x316));

	if (t78 != -2147483648LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	uint64_t x320 = UINT64_MAX;
	uint64_t t79 = 979361943677LLU;

	t79 = (x317^((x318^x319)|x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	static volatile uint8_t x322 = 48U;
	static int32_t x324 = INT32_MAX;
	volatile uint32_t t80 = 72016499U;

	t80 = (x321^((x322^x323)|x324));

	if (t80 != 2147483775U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	static volatile int8_t x327 = INT8_MAX;
	int64_t x328 = -1LL;
	static uint64_t t81 = 6113341300LLU;

	t81 = (x325^((x326^x327)|x328));

	if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	volatile int64_t x331 = INT64_MIN;
	volatile int64_t t82 = 946090583938406908LL;

	t82 = (x329^((x330^x331)|x332));

	if (t82 != -9104234384711712768LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 104898652249019310LLU;
	uint8_t x334 = 0U;
	int16_t x335 = INT16_MAX;
	uint64_t x336 = 8535576LLU;
	volatile uint64_t t83 = 2LLU;

	t83 = (x333^((x334^x335)|x336));

	if (t83 != 104898652240751697LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	uint8_t x338 = 7U;
	volatile int32_t x339 = 11026389;
	uint8_t x340 = 45U;
	volatile int64_t t84 = -7172022321867LL;

	t84 = (x337^((x338^x339)|x340));

	if (t84 != -9223372036843749377LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x343 = -1;
	static int64_t x344 = 1543661737839856LL;
	static int64_t t85 = 5016871234LL;

	t85 = (x341^((x342^x343)|x344));

	if (t85 != 29455LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	int64_t x347 = 394LL;
	int8_t x348 = INT8_MIN;
	uint64_t t86 = 435LLU;

	t86 = (x345^((x346^x347)|x348));

	if (t86 != 113LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -237677;
	int8_t x350 = INT8_MIN;
	int16_t x351 = 4023;

	t87 = (x349^((x350^x351)|x352));

	if (t87 != 238508U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x353 = 3U;
	uint64_t x354 = 1894614159193765795LLU;
	volatile uint64_t x355 = UINT64_MAX;
	uint64_t t88 = 145969889670934LLU;

	t88 = (x353^((x354^x355)|x356));

	if (t88 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x357 = 565627822;
	volatile int16_t x358 = 1;
	static uint32_t x359 = UINT32_MAX;
	volatile uint16_t x360 = UINT16_MAX;

	t89 = (x357^((x358^x359)|x360));

	if (t89 != 3729339473U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	static uint16_t x362 = 207U;
	static int64_t x363 = INT64_MIN;
	volatile uint16_t x364 = UINT16_MAX;
	volatile int64_t t90 = 296369701645058LL;

	t90 = (x361^((x362^x363)|x364));

	if (t90 != -9223372036854710528LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = INT32_MIN;
	int8_t x366 = 4;
	uint64_t x367 = 23995620652060363LLU;
	int64_t x368 = INT64_MIN;
	uint64_t t91 = 181229595230576LLU;

	t91 = (x365^((x366^x367)|x368));

	if (t91 != 9199376416643321551LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	uint32_t x370 = 36241235U;
	volatile int64_t x371 = INT64_MAX;
	int16_t x372 = INT16_MIN;

	t92 = (x369^((x370^x371)|x372));

	if (t92 != 172LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = 6281;
	static int32_t x374 = 190864;
	volatile int8_t x376 = INT8_MIN;
	int32_t t93 = 316;

	t93 = (x373^((x374^x375)|x376));

	if (t93 != -6353) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int16_t x380 = INT16_MIN;
	int32_t t94 = 8580125;

	t94 = (x377^((x378^x379)|x380));

	if (t94 != 160) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 180LL;
	uint64_t x382 = UINT64_MAX;
	static int16_t x383 = INT16_MIN;
	uint64_t t95 = 26670LLU;

	t95 = (x381^((x382^x383)|x384));

	if (t95 != 18446744073709551435LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	uint8_t x386 = 1U;
	int8_t x387 = 6;
	volatile int32_t t96 = -5969337;

	t96 = (x385^((x386^x387)|x388));

	if (t96 != 2147450880) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x392 = -1;
	static volatile int32_t t97 = 1053424572;

	t97 = (x389^((x390^x391)|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 1213;
	volatile int32_t x394 = -28246893;
	uint8_t x396 = UINT8_MAX;
	static int32_t t98 = 216313;

	t98 = (x393^((x394^x395)|x396));

	if (t98 != -2119235774) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MIN;
	uint8_t x398 = 1U;
	volatile uint16_t x399 = 62U;
	static volatile int32_t x400 = INT32_MIN;

	t99 = (x397^((x398^x399)|x400));

	if (t99 != 2147483583) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}
