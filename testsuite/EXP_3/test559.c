#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 5;
static volatile uint64_t x16 = 184904LLU;
volatile uint8_t x18 = UINT8_MAX;
int64_t x19 = INT64_MIN;
volatile int64_t t4 = 1863178562789493LL;
static int64_t x21 = INT64_MAX;
volatile int64_t x26 = INT64_MAX;
int8_t x33 = INT8_MIN;
int8_t x34 = -1;
volatile int64_t t11 = -4LL;
int64_t x57 = 54313LL;
volatile uint8_t x62 = 13U;
volatile uint32_t x63 = 4U;
volatile int8_t x69 = INT8_MAX;
uint32_t x70 = 573652U;
uint64_t x76 = 1263114612662871LLU;
int8_t x83 = -3;
uint64_t x86 = UINT64_MAX;
uint32_t x89 = 1680860U;
uint32_t x90 = 30U;
static volatile int64_t x100 = INT64_MIN;
int16_t x103 = -1;
int16_t x104 = INT16_MAX;
int32_t x106 = 2557803;
int64_t x112 = INT64_MIN;
uint64_t t28 = 1582084358091LLU;
static uint64_t t29 = 20341121070655LLU;
volatile int16_t x126 = -5;
int8_t x128 = -56;
int32_t x135 = 1484;
volatile int8_t x153 = -1;
volatile uint16_t x157 = 79U;
int32_t x159 = -1991998;
static int8_t x165 = INT8_MAX;
int16_t x167 = 69;
int8_t x174 = -1;
volatile uint8_t x175 = UINT8_MAX;
static uint32_t x184 = UINT32_MAX;
static int64_t t46 = -583697LL;
volatile int32_t t47 = -9286;
uint32_t x207 = UINT32_MAX;
int64_t x208 = 655LL;
uint64_t t49 = 820697LLU;
uint32_t x219 = 986U;
volatile uint64_t t52 = 247855849905LLU;
static volatile int64_t x236 = INT64_MAX;
static int64_t t55 = -710640LL;
int16_t x251 = INT16_MIN;
volatile int64_t x252 = INT64_MIN;
uint16_t x256 = UINT16_MAX;
volatile int64_t t59 = -1LL;
volatile uint16_t x257 = 1U;
uint32_t x259 = 423589547U;
int32_t x263 = INT32_MIN;
int64_t x265 = INT64_MIN;
static int32_t x267 = INT32_MIN;
int64_t t62 = -2399722231779348537LL;
static int8_t x269 = -20;
int16_t x276 = INT16_MAX;
static int8_t x288 = INT8_MIN;
int8_t x290 = INT8_MAX;
int16_t x291 = 32;
static volatile int64_t t69 = -17767851526486926LL;
int8_t x300 = INT8_MIN;
int64_t x303 = -1LL;
volatile int32_t x304 = INT32_MAX;
volatile uint64_t t71 = 4030534935654600LLU;
int64_t x306 = 2032LL;
int64_t x307 = -2LL;
static volatile int16_t x317 = -1;
static int64_t x321 = INT64_MAX;
volatile int64_t t75 = 3878032LL;
static uint64_t x327 = 1311LLU;
static uint8_t x331 = UINT8_MAX;
int32_t x332 = -714;
static uint64_t t78 = 290253730828LLU;
static int64_t x339 = -1LL;
int16_t x340 = INT16_MIN;
volatile int16_t x341 = -419;
uint16_t x345 = UINT16_MAX;
static int32_t x355 = -1;
int32_t t83 = -276325;
uint8_t x357 = UINT8_MAX;
uint32_t x365 = 18181165U;
int8_t x367 = INT8_MAX;
static int8_t x370 = INT8_MIN;
volatile int32_t x382 = 107323946;
uint64_t t90 = 7005801880816031LLU;
static int8_t x391 = -1;
int64_t t92 = 509514LL;
volatile int8_t x398 = -1;
int16_t x401 = -1;
static int16_t x411 = -1;
uint16_t x416 = 438U;
int16_t x418 = -1;
static uint32_t x420 = UINT32_MAX;


void f0(void) {
	int32_t x1 = -1;
	volatile int32_t x3 = INT32_MAX;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = 0;

	t0 = ((x1/x2)^(x3/x4));

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	uint8_t x6 = 4U;
	volatile uint8_t x7 = 5U;
	uint8_t x8 = 4U;
	static int32_t t1 = 1967;

	t1 = ((x5/x6)^(x7/x8));

	if (t1 != -536870911) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MAX;
	uint32_t x11 = 2121498U;
	int64_t x12 = 23LL;
	static int64_t t2 = 1441326905529870LL;

	t2 = ((x9/x10)^(x11/x12));

	if (t2 != -72624976668207312LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MAX;
	int16_t x15 = 1;
	uint64_t t3 = 10259595LLU;

	t3 = ((x13/x14)^(x15/x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	int64_t x20 = 236LL;

	t4 = ((x17/x18)^(x19/x20));

	if (t4 != -39082084901927144LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 373U;
	int8_t x23 = -1;
	uint16_t x24 = 192U;
	volatile int64_t t5 = -14634426031LL;

	t5 = ((x21/x22)^(x23/x24));

	if (t5 != 24727538972801007LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint8_t x27 = UINT8_MAX;
	int8_t x28 = INT8_MIN;
	int64_t t6 = -2578263456655LL;

	t6 = ((x25/x26)^(x27/x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 709U;
	int16_t x30 = 2;
	uint64_t x31 = 30426706943377LLU;
	volatile uint8_t x32 = UINT8_MAX;
	static volatile uint64_t t7 = 560LLU;

	t7 = ((x29/x30)^(x31/x32));

	if (t7 != 119320419675LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x35 = 4384684213661412035LLU;
	uint64_t x36 = 125998004499983237LLU;
	static uint64_t t8 = 30842891556431LLU;

	t8 = ((x33/x34)^(x35/x36));

	if (t8 != 162LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -10529;
	static uint8_t x38 = UINT8_MAX;
	volatile int8_t x39 = INT8_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -9;

	t9 = ((x37/x38)^(x39/x40));

	if (t9 != -41) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	volatile int64_t x42 = INT64_MAX;
	volatile int16_t x43 = INT16_MIN;
	volatile uint8_t x44 = 2U;
	static volatile int64_t t10 = 852320288433694652LL;

	t10 = ((x41/x42)^(x43/x44));

	if (t10 != -16384LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	volatile int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MIN;
	int32_t x48 = -100;

	t11 = ((x45/x46)^(x47/x48));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -18;
	volatile uint64_t x50 = 1065614926LLU;
	uint16_t x51 = 2U;
	static volatile int32_t x52 = INT32_MIN;
	uint64_t t12 = 37559736LLU;

	t12 = ((x49/x50)^(x51/x52));

	if (t12 != 17310891226LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 4015LLU;
	uint32_t x54 = 52U;
	volatile int64_t x55 = INT64_MIN;
	uint8_t x56 = UINT8_MAX;
	volatile uint64_t t13 = 28313LLU;

	t13 = ((x53/x54)^(x55/x56));

	if (t13 != 18410573987290513357LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	int64_t x59 = 1280753022184953870LL;
	static int64_t x60 = -2578340420155049516LL;
	int64_t t14 = -17192LL;

	t14 = ((x57/x58)^(x59/x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	volatile int16_t x64 = INT16_MIN;
	static uint32_t t15 = 3050125U;

	t15 = ((x61/x62)^(x63/x64));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	static int8_t x66 = INT8_MIN;
	uint16_t x67 = UINT16_MAX;
	int16_t x68 = -1;
	int32_t t16 = -1200;

	t16 = ((x65/x66)^(x67/x68));

	if (t16 != -65536) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x71 = UINT64_MAX;
	volatile uint16_t x72 = 816U;
	volatile uint64_t t17 = 17600370LLU;

	t17 = ((x69/x70)^(x71/x72));

	if (t17 != 22606304011898960LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int32_t x74 = INT32_MIN;
	static volatile int64_t x75 = INT64_MIN;
	volatile uint64_t t18 = 2363976410346LLU;

	t18 = ((x73/x74)^(x75/x76));

	if (t18 != 7302LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = 3;
	int8_t x82 = -33;
	uint64_t x84 = 3587551301012LLU;
	static volatile uint64_t t19 = 26859044709309LLU;

	t19 = ((x81/x82)^(x83/x84));

	if (t19 != 5141876LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x85 = -1;
	static int16_t x87 = INT16_MIN;
	int64_t x88 = INT64_MIN;
	static volatile uint64_t t20 = 1010LLU;

	t20 = ((x85/x86)^(x87/x88));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x91 = -1;
	int32_t x92 = -1;
	static uint32_t t21 = 53U;

	t21 = ((x89/x90)^(x91/x92));

	if (t21 != 56029U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 5643LLU;
	volatile uint16_t x94 = UINT16_MAX;
	int64_t x95 = INT64_MIN;
	int32_t x96 = INT32_MIN;
	uint64_t t22 = 4265611032171837LLU;

	t22 = ((x93/x94)^(x95/x96));

	if (t22 != 4294967296LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 0;
	volatile int16_t x98 = -201;
	uint8_t x99 = UINT8_MAX;
	static volatile int64_t t23 = -1422LL;

	t23 = ((x97/x98)^(x99/x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 3LLU;
	int8_t x102 = INT8_MAX;
	volatile uint64_t t24 = 30LLU;

	t24 = ((x101/x102)^(x103/x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MIN;
	static uint64_t x107 = 4215896797LLU;
	uint32_t x108 = UINT32_MAX;
	uint64_t t25 = 236660089251911595LLU;

	t25 = ((x105/x106)^(x107/x108));

	if (t25 != 18446740467735191255LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 77U;
	volatile int16_t x110 = INT16_MIN;
	uint16_t x111 = UINT16_MAX;
	volatile int64_t t26 = 5561913803436LL;

	t26 = ((x109/x110)^(x111/x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -1;
	int16_t x114 = -416;
	int8_t x115 = INT8_MIN;
	static volatile uint64_t x116 = 12126973672662108LLU;
	static volatile uint64_t t27 = 1911LLU;

	t27 = ((x113/x114)^(x115/x116));

	if (t27 != 1521LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MIN;
	static int8_t x119 = INT8_MIN;
	uint64_t x120 = 136694952028LLU;

	t28 = ((x117/x118)^(x119/x120));

	if (t28 != 134948247LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	static volatile int16_t x122 = -3;
	static volatile uint64_t x123 = UINT64_MAX;
	uint32_t x124 = 15015U;

	t29 = ((x121/x122)^(x123/x124));

	if (t29 != 1228554383863482LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	volatile uint64_t x127 = UINT64_MAX;
	static uint64_t t30 = 53LLU;

	t30 = ((x125/x126)^(x127/x128));

	if (t30 != 6552LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = INT64_MIN;
	volatile uint64_t x130 = UINT64_MAX;
	int32_t x131 = INT32_MIN;
	int64_t x132 = -3781696658494LL;
	static uint64_t t31 = 208405880734LLU;

	t31 = ((x129/x130)^(x131/x132));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	static int8_t x134 = 1;
	static uint8_t x136 = 62U;
	volatile int32_t t32 = 31;

	t32 = ((x133/x134)^(x135/x136));

	if (t32 != 32744) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 3635106024LLU;
	uint16_t x138 = 446U;
	uint32_t x139 = UINT32_MAX;
	uint8_t x140 = UINT8_MAX;
	volatile uint64_t t33 = 192784LLU;

	t33 = ((x137/x138)^(x139/x140));

	if (t33 != 24992956LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	volatile uint32_t x142 = 1244301U;
	int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MAX;
	volatile int64_t t34 = 76306174LL;

	t34 = ((x141/x142)^(x143/x144));

	if (t34 != -281483566910845LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x145 = INT8_MIN;
	volatile int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	int16_t x148 = 30;
	volatile int64_t t35 = -17211824690419LL;

	t35 = ((x145/x146)^(x147/x148));

	if (t35 != -4LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = UINT64_MAX;
	int64_t x150 = INT64_MAX;
	volatile int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MAX;
	uint64_t t36 = 126LLU;

	t36 = ((x149/x150)^(x151/x152));

	if (t36 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = -1;
	int16_t x155 = INT16_MIN;
	volatile uint16_t x156 = UINT16_MAX;
	int32_t t37 = -191067;

	t37 = ((x153/x154)^(x155/x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x158 = -1;
	int8_t x160 = -1;
	int32_t t38 = -1026319290;

	t38 = ((x157/x158)^(x159/x160));

	if (t38 != -1992049) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x166 = INT8_MIN;
	int8_t x168 = -1;
	volatile int32_t t39 = 503184155;

	t39 = ((x165/x166)^(x167/x168));

	if (t39 != -69) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x169 = -1;
	int16_t x170 = -1;
	int64_t x171 = INT64_MAX;
	static int32_t x172 = -1;
	volatile int64_t t40 = INT64_MIN;

	t40 = ((x169/x170)^(x171/x172));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -4;
	uint8_t x176 = 1U;
	int32_t t41 = -2269;

	t41 = ((x173/x174)^(x175/x176));

	if (t41 != 251) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x177 = -3824945634919147780LL;
	uint8_t x178 = 7U;
	volatile int32_t x179 = 9;
	int16_t x180 = -1028;
	static int64_t t42 = 400158LL;

	t42 = ((x177/x178)^(x179/x180));

	if (t42 != -546420804988449682LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	static volatile int8_t x182 = 7;
	int64_t x183 = 45374846011915246LL;
	volatile int64_t t43 = 26522318398LL;

	t43 = ((x181/x182)^(x183/x184));

	if (t43 != -10561127LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x185 = -1LL;
	volatile uint64_t x186 = 369986686791712LLU;
	volatile int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MAX;
	volatile uint64_t t44 = 3365LLU;

	t44 = ((x185/x186)^(x187/x188));

	if (t44 != 49857LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = 41;
	volatile int32_t x190 = 29756950;
	uint64_t x191 = UINT64_MAX;
	static uint8_t x192 = 5U;
	static uint64_t t45 = 46826085202391LLU;

	t45 = ((x189/x190)^(x191/x192));

	if (t45 != 3689348814741910323LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = UINT8_MAX;
	static int64_t x194 = -908LL;
	uint16_t x195 = 18U;
	static volatile int8_t x196 = -1;

	t46 = ((x193/x194)^(x195/x196));

	if (t46 != -18LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = 4;
	uint8_t x202 = UINT8_MAX;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;

	t47 = ((x201/x202)^(x203/x204));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = UINT16_MAX;
	volatile int64_t x206 = INT64_MIN;
	static int64_t t48 = 37985527940365LL;

	t48 = ((x205/x206)^(x207/x208));

	if (t48 != 6557201LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x209 = 762239332LL;
	uint64_t x210 = UINT64_MAX;
	volatile uint16_t x211 = UINT16_MAX;
	static int8_t x212 = INT8_MAX;

	t49 = ((x209/x210)^(x211/x212));

	if (t49 != 516LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = 378064;
	static volatile uint64_t x214 = UINT64_MAX;
	int8_t x215 = -27;
	int32_t x216 = INT32_MIN;
	volatile uint64_t t50 = 32444LLU;

	t50 = ((x213/x214)^(x215/x216));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = -3;
	static uint16_t x218 = 45U;
	volatile uint8_t x220 = UINT8_MAX;
	volatile uint32_t t51 = 344U;

	t51 = ((x217/x218)^(x219/x220));

	if (t51 != 3U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = 1;
	static uint64_t x222 = 4211598723LLU;
	uint64_t x223 = 396918029514LLU;
	int8_t x224 = INT8_MIN;

	t52 = ((x221/x222)^(x223/x224));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x225 = INT16_MAX;
	int8_t x226 = INT8_MAX;
	int16_t x227 = INT16_MAX;
	uint64_t x228 = UINT64_MAX;
	uint64_t t53 = 2502LLU;

	t53 = ((x225/x226)^(x227/x228));

	if (t53 != 258LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x229 = 41579LLU;
	uint8_t x230 = 55U;
	int64_t x231 = -1LL;
	static int16_t x232 = INT16_MIN;
	volatile uint64_t t54 = 12065LLU;

	t54 = ((x229/x230)^(x231/x232));

	if (t54 != 755LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = -1;
	static int64_t x234 = 533809084LL;
	volatile int16_t x235 = INT16_MIN;

	t55 = ((x233/x234)^(x235/x236));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 1155U;
	static uint16_t x242 = UINT16_MAX;
	uint32_t x243 = 2U;
	int64_t x244 = 7LL;
	int64_t t56 = -2035447451LL;

	t56 = ((x241/x242)^(x243/x244));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MIN;
	static volatile int32_t x246 = INT32_MIN;
	uint64_t x247 = UINT64_MAX;
	int32_t x248 = 7;
	uint64_t t57 = 2976280620809212794LLU;

	t57 = ((x245/x246)^(x247/x248));

	if (t57 != 2635249157682046098LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	volatile int64_t t58 = -577361553238937LL;

	t58 = ((x249/x250)^(x251/x252));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = 45;
	int8_t x254 = INT8_MIN;
	static int64_t x255 = -33513135LL;

	t59 = ((x253/x254)^(x255/x256));

	if (t59 != -511LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x258 = INT8_MIN;
	volatile uint16_t x260 = UINT16_MAX;
	static volatile uint32_t t60 = 9373975U;

	t60 = ((x257/x258)^(x259/x260));

	if (t60 != 6463U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x261 = INT16_MAX;
	int8_t x262 = INT8_MIN;
	static int32_t x264 = INT32_MIN;
	static volatile int32_t t61 = -9371;

	t61 = ((x261/x262)^(x263/x264));

	if (t61 != -256) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x266 = INT16_MAX;
	volatile int16_t x268 = INT16_MIN;

	t62 = ((x265/x266)^(x267/x268));

	if (t62 != -281483566972936LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x270 = -1;
	uint64_t x271 = UINT64_MAX;
	uint16_t x272 = UINT16_MAX;
	volatile uint64_t t63 = 70LLU;

	t63 = ((x269/x270)^(x271/x272));

	if (t63 != 281479271743509LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = 7;
	int8_t x275 = 24;
	int32_t t64 = -415049;

	t64 = ((x273/x274)^(x275/x276));

	if (t64 != -18) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x277 = INT32_MIN;
	int64_t x278 = -2511468914797488042LL;
	volatile uint8_t x279 = 97U;
	int8_t x280 = INT8_MIN;
	static int64_t t65 = -1419048353LL;

	t65 = ((x277/x278)^(x279/x280));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = 1U;
	volatile uint64_t x282 = 11287619LLU;
	uint32_t x283 = 226867U;
	uint64_t x284 = 3843675520296961LLU;
	uint64_t t66 = 2169839250849185790LLU;

	t66 = ((x281/x282)^(x283/x284));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = 49415LLU;
	int64_t x286 = INT64_MAX;
	static volatile uint32_t x287 = 2042691U;
	volatile uint64_t t67 = 19084869880LLU;

	t67 = ((x285/x286)^(x287/x288));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x289 = 99;
	int8_t x292 = -1;
	int32_t t68 = -13;

	t68 = ((x289/x290)^(x291/x292));

	if (t68 != -32) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x293 = -1LL;
	volatile uint32_t x294 = 12806855U;
	int8_t x295 = 16;
	int16_t x296 = INT16_MIN;

	t69 = ((x293/x294)^(x295/x296));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x297 = 50988U;
	int8_t x298 = INT8_MAX;
	uint8_t x299 = UINT8_MAX;
	volatile uint32_t t70 = 1U;

	t70 = ((x297/x298)^(x299/x300));

	if (t70 != 4294966894U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = UINT64_MAX;
	volatile int64_t x302 = INT64_MIN;

	t71 = ((x301/x302)^(x303/x304));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = 5078762LLU;
	int64_t x308 = INT64_MAX;
	volatile uint64_t t72 = 35598264523147740LLU;

	t72 = ((x305/x306)^(x307/x308));

	if (t72 != 2499LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 1U;
	uint16_t x314 = 117U;
	uint32_t x315 = 15759530U;
	int16_t x316 = INT16_MIN;
	volatile uint32_t t73 = 1185895555U;

	t73 = ((x313/x314)^(x315/x316));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x318 = -1;
	volatile uint64_t x319 = UINT64_MAX;
	volatile int8_t x320 = INT8_MIN;
	uint64_t t74 = 437LLU;

	t74 = ((x317/x318)^(x319/x320));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x322 = -1;
	int16_t x323 = 1;
	int32_t x324 = -1;

	t75 = ((x321/x322)^(x323/x324));

	if (t75 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = 2;
	volatile int64_t x326 = INT64_MIN;
	int32_t x328 = 1489461;
	static volatile uint64_t t76 = 12410959LLU;

	t76 = ((x325/x326)^(x327/x328));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MAX;
	volatile int64_t t77 = -23899054906383LL;

	t77 = ((x329/x330)^(x331/x332));

	if (t77 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = -1;
	static int32_t x334 = 159;
	volatile uint32_t x335 = 416588U;
	volatile uint64_t x336 = UINT64_MAX;

	t78 = ((x333/x334)^(x335/x336));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x337 = -1;
	uint64_t x338 = 1LLU;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = ((x337/x338)^(x339/x340));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x342 = -1;
	int8_t x343 = INT8_MIN;
	volatile int8_t x344 = INT8_MAX;
	static int32_t t80 = 1;

	t80 = ((x341/x342)^(x343/x344));

	if (t80 != -420) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x346 = UINT32_MAX;
	volatile uint32_t x347 = 455319U;
	int8_t x348 = -3;
	volatile uint32_t t81 = 83537U;

	t81 = ((x345/x346)^(x347/x348));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = 3;
	int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;
	int64_t t82 = 7076LL;

	t82 = ((x349/x350)^(x351/x352));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x353 = 5U;
	int32_t x354 = 225821;
	int16_t x356 = 183;

	t83 = ((x353/x354)^(x355/x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x358 = 67U;
	volatile uint32_t x359 = UINT32_MAX;
	int16_t x360 = 1543;
	uint32_t t84 = 12U;

	t84 = ((x357/x358)^(x359/x360));

	if (t84 != 2783518U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x366 = INT64_MIN;
	int64_t x368 = 1222086199LL;
	int64_t t85 = 2LL;

	t85 = ((x365/x366)^(x367/x368));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x369 = 9619U;
	int16_t x371 = -155;
	uint64_t x372 = 676852209LLU;
	volatile uint64_t t86 = 523131756471270179LLU;

	t86 = ((x369/x370)^(x371/x372));

	if (t86 != 18446744046455826516LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x373 = -12930371558849LL;
	static int16_t x374 = INT16_MIN;
	int64_t x375 = -1LL;
	static volatile int32_t x376 = INT32_MIN;
	int64_t t87 = 2350087153533634482LL;

	t87 = ((x373/x374)^(x375/x376));

	if (t87 != 394603624LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x377 = -1;
	int8_t x378 = -1;
	int16_t x379 = 23;
	static volatile int64_t x380 = INT64_MIN;
	volatile int64_t t88 = 13LL;

	t88 = ((x377/x378)^(x379/x380));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x381 = -1;
	uint32_t x383 = 1186U;
	static int8_t x384 = 1;
	static uint32_t t89 = 17868U;

	t89 = ((x381/x382)^(x383/x384));

	if (t89 != 1186U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x385 = -1LL;
	uint64_t x386 = 4590392378501319077LLU;
	uint32_t x387 = 19721U;
	int8_t x388 = INT8_MAX;

	t90 = ((x385/x386)^(x387/x388));

	if (t90 != 159LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x389 = UINT8_MAX;
	uint16_t x390 = 32715U;
	uint32_t x392 = 5416875U;
	uint32_t t91 = 16424U;

	t91 = ((x389/x390)^(x391/x392));

	if (t91 != 792U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = -30;
	int16_t x394 = -62;
	static int64_t x395 = INT64_MAX;
	uint32_t x396 = UINT32_MAX;

	t92 = ((x393/x394)^(x395/x396));

	if (t92 != 2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = -1;
	volatile uint16_t x399 = UINT16_MAX;
	uint16_t x400 = UINT16_MAX;
	static volatile int32_t t93 = 122738;

	t93 = ((x397/x398)^(x399/x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x402 = INT16_MIN;
	volatile int32_t x403 = INT32_MAX;
	int16_t x404 = INT16_MAX;
	volatile int32_t t94 = -164;

	t94 = ((x401/x402)^(x403/x404));

	if (t94 != 65538) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x405 = 1LLU;
	int64_t x406 = -69762785785557LL;
	int16_t x407 = -1;
	static volatile int16_t x408 = -1;
	volatile uint64_t t95 = 199395667018471891LLU;

	t95 = ((x405/x406)^(x407/x408));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x409 = 4U;
	static uint32_t x410 = 2782461U;
	volatile int32_t x412 = -1;
	static volatile uint32_t t96 = 790591U;

	t96 = ((x409/x410)^(x411/x412));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x413 = -1;
	int64_t x414 = INT64_MIN;
	int64_t x415 = INT64_MIN;
	volatile int64_t t97 = -7378920306LL;

	t97 = ((x413/x414)^(x415/x416));

	if (t97 != -21057927024782593LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = -1;
	uint8_t x419 = 4U;
	uint32_t t98 = 34U;

	t98 = ((x417/x418)^(x419/x420));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x421 = 3U;
	uint64_t x422 = 13LLU;
	int64_t x423 = -9559066672LL;
	static int8_t x424 = INT8_MIN;
	static volatile uint64_t t99 = 18284914647LLU;

	t99 = ((x421/x422)^(x423/x424));

	if (t99 != 74680208LLU) { NG(); } else { ; }
	
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
