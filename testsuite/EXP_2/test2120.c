#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 950890908LL;
uint16_t x3 = 37U;
int64_t x8 = INT64_MIN;
uint64_t x9 = 16415071LLU;
static int64_t t3 = -13635551LL;
int16_t x20 = INT16_MAX;
int64_t x24 = INT64_MIN;
uint64_t x26 = UINT64_MAX;
volatile uint32_t x27 = UINT32_MAX;
int8_t x32 = INT8_MAX;
int8_t x36 = INT8_MAX;
int64_t x37 = INT64_MIN;
uint64_t x47 = 2LLU;
uint32_t t11 = 104U;
int32_t x64 = INT32_MIN;
int16_t x66 = -1;
volatile uint32_t t16 = UINT32_MAX;
uint16_t x72 = 42U;
uint8_t x74 = 23U;
uint64_t x75 = 6303488055821713126LLU;
int32_t x78 = INT32_MIN;
uint64_t x79 = 947915LLU;
volatile int32_t t19 = 1;
volatile int32_t t20 = -96898;
uint16_t x85 = 1U;
volatile int8_t x89 = INT8_MIN;
uint16_t x92 = 4951U;
volatile int32_t t22 = -159986;
uint16_t x96 = 10185U;
int32_t t23 = 266645442;
uint32_t x99 = 159U;
static int16_t x101 = INT16_MIN;
uint16_t x102 = 173U;
int32_t x103 = 6719497;
int64_t t25 = -11977LL;
int32_t x112 = INT32_MIN;
int8_t x117 = -1;
int16_t x119 = -1;
int16_t x121 = -5;
uint16_t x123 = 196U;
int64_t x127 = INT64_MAX;
uint16_t x128 = 1728U;
static int32_t t31 = -55;
int8_t x130 = -1;
static uint16_t x131 = 3U;
int8_t x133 = 3;
int16_t x134 = INT16_MIN;
int16_t x136 = -19;
uint8_t x142 = 70U;
int32_t t36 = 1;
int64_t x149 = INT64_MAX;
volatile int32_t x152 = -1;
uint8_t x154 = 0U;
int8_t x156 = 0;
volatile uint16_t x158 = UINT16_MAX;
int32_t x159 = INT32_MIN;
uint32_t x167 = 1398792893U;
int64_t x187 = 2084229899725LL;
static int8_t x196 = -1;
int32_t x204 = INT32_MAX;
int16_t x206 = -1;
static int32_t t51 = 36604;
static int8_t x211 = -61;
uint32_t x215 = UINT32_MAX;
volatile uint32_t x217 = 14286U;
static volatile int32_t t55 = 8051;
volatile int16_t x228 = INT16_MIN;
uint64_t x232 = UINT64_MAX;
int8_t x233 = INT8_MIN;
int16_t x241 = -100;
int16_t x243 = INT16_MAX;
int16_t x245 = -4900;
static uint64_t x246 = UINT64_MAX;
int8_t x247 = INT8_MIN;
static uint32_t t61 = UINT32_MAX;
int8_t x252 = -46;
int64_t x254 = INT64_MIN;
static volatile uint16_t x270 = 2U;
uint32_t t67 = 852349144U;
int32_t x273 = INT32_MAX;
uint64_t x274 = UINT64_MAX;
uint8_t x276 = 6U;
int32_t x281 = 57411;
volatile uint32_t t70 = 561U;
volatile int32_t x292 = INT32_MAX;
static int16_t x302 = INT16_MIN;
int64_t x303 = -1LL;
uint64_t x306 = UINT64_MAX;
int16_t x309 = -369;
int32_t x311 = -1388571;
uint16_t x312 = 1655U;
int8_t x317 = INT8_MAX;
static volatile int16_t x320 = INT16_MIN;
uint8_t x324 = UINT8_MAX;
volatile int32_t t80 = 46;
uint64_t x332 = 8935014204406960331LLU;
int32_t x333 = -1879221;
volatile int64_t x336 = INT64_MIN;
volatile int32_t x337 = INT32_MIN;
uint32_t x338 = UINT32_MAX;
volatile uint16_t x340 = 173U;
static int32_t x355 = INT32_MAX;
volatile uint16_t x356 = 19U;
static int32_t x362 = INT32_MIN;
uint16_t x363 = 0U;
int32_t x365 = INT32_MAX;
uint16_t x369 = 18050U;
static int32_t x372 = -1;
volatile int32_t t92 = -434158047;
int8_t x380 = 2;
int64_t x390 = INT64_MAX;
volatile int32_t x393 = INT32_MAX;
volatile int32_t x398 = INT32_MIN;
int8_t x399 = 19;


void f0(void) {
	uint32_t x2 = 52U;
	static int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = 0;

	t0 = ((x1==(x2^x3))+x4);

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -548;
	static int32_t x6 = INT32_MAX;
	int16_t x7 = -1;
	volatile int64_t t1 = INT64_MIN;

	t1 = ((x5==(x6^x7))+x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x10 = UINT8_MAX;
	int8_t x11 = -2;
	int8_t x12 = 6;
	static volatile int32_t t2 = -12;

	t2 = ((x9==(x10^x11))+x12);

	if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MIN;
	uint16_t x15 = UINT16_MAX;
	volatile int64_t x16 = -23561004LL;

	t3 = ((x13==(x14^x15))+x16);

	if (t3 != -23561004LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint32_t x18 = 12U;
	int8_t x19 = INT8_MIN;
	static int32_t t4 = -17;

	t4 = ((x17==(x18^x19))+x20);

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static uint16_t x22 = 285U;
	volatile int32_t x23 = INT32_MIN;
	int64_t t5 = INT64_MIN;

	t5 = ((x21==(x22^x23))+x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 2U;
	int32_t x28 = 37;
	int32_t t6 = 421938842;

	t6 = ((x25==(x26^x27))+x28);

	if (t6 != 37) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	static int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MIN;
	static volatile int32_t t7 = -908548715;

	t7 = ((x29==(x30^x31))+x32);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 543215430LL;
	int64_t x34 = INT64_MIN;
	int32_t x35 = -1;
	int32_t t8 = 1;

	t8 = ((x33==(x34^x35))+x36);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -3910737;
	static int16_t x39 = -1;
	uint64_t x40 = 539681096908004LLU;
	uint64_t t9 = 9631LLU;

	t9 = ((x37==(x38^x39))+x40);

	if (t9 != 539681096908004LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	static int8_t x43 = INT8_MAX;
	int64_t x44 = 29525925281317LL;
	int64_t t10 = 4238482834835120LL;

	t10 = ((x41==(x42^x43))+x44);

	if (t10 != 29525925281317LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MIN;
	uint32_t x48 = 4335284U;

	t11 = ((x45==(x46^x47))+x48);

	if (t11 != 4335284U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	static uint16_t x50 = UINT16_MAX;
	static uint64_t x51 = UINT64_MAX;
	static int16_t x52 = -1;
	volatile int32_t t12 = 333629;

	t12 = ((x49==(x50^x51))+x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x53 = 1999560558U;
	int32_t x54 = 7747;
	static volatile int8_t x55 = 0;
	uint32_t x56 = UINT32_MAX;
	uint32_t t13 = UINT32_MAX;

	t13 = ((x53==(x54^x55))+x56);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -921;
	int16_t x58 = 1714;
	int16_t x59 = -404;
	static int8_t x60 = -1;
	volatile int32_t t14 = -8;

	t14 = ((x57==(x58^x59))+x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	static int64_t x62 = -79358LL;
	int8_t x63 = -1;
	volatile int32_t t15 = INT32_MIN;

	t15 = ((x61==(x62^x63))+x64);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = 29414;
	int32_t x67 = -134227;
	uint32_t x68 = UINT32_MAX;

	t16 = ((x65==(x66^x67))+x68);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	volatile int16_t x71 = INT16_MIN;
	volatile int32_t t17 = -333;

	t17 = ((x69==(x70^x71))+x72);

	if (t17 != 42) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = -169;

	t18 = ((x73==(x74^x75))+x76);

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	int8_t x80 = -1;

	t19 = ((x77==(x78^x79))+x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	static int32_t x82 = -3;
	volatile int16_t x83 = 16005;
	uint8_t x84 = 111U;

	t20 = ((x81==(x82^x83))+x84);

	if (t20 != 111) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MAX;
	uint32_t x87 = UINT32_MAX;
	int64_t x88 = INT64_MAX;
	static int64_t t21 = INT64_MAX;

	t21 = ((x85==(x86^x87))+x88);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = -24;
	volatile int32_t x91 = 25145518;

	t22 = ((x89==(x90^x91))+x92);

	if (t22 != 4951) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	volatile int64_t x94 = -127399727LL;
	int16_t x95 = -1;

	t23 = ((x93==(x94^x95))+x96);

	if (t23 != 10185) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 1955U;
	int64_t x98 = INT64_MIN;
	volatile uint32_t x100 = 1250U;
	uint32_t t24 = 495U;

	t24 = ((x97==(x98^x99))+x100);

	if (t24 != 1250U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x104 = -12184LL;

	t25 = ((x101==(x102^x103))+x104);

	if (t25 != -12184LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = 41U;
	uint64_t x107 = UINT64_MAX;
	int16_t x108 = INT16_MIN;
	int32_t t26 = 41;

	t26 = ((x105==(x106^x107))+x108);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	volatile uint32_t x110 = 220599U;
	int8_t x111 = INT8_MIN;
	int32_t t27 = INT32_MIN;

	t27 = ((x109==(x110^x111))+x112);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -54245;
	static int64_t x114 = INT64_MIN;
	int32_t x115 = INT32_MIN;
	static volatile int8_t x116 = INT8_MIN;
	int32_t t28 = 3;

	t28 = ((x113==(x114^x115))+x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = UINT16_MAX;
	static uint64_t x120 = 161086907847LLU;
	uint64_t t29 = 4056LLU;

	t29 = ((x117==(x118^x119))+x120);

	if (t29 != 161086907847LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x122 = INT64_MIN;
	int16_t x124 = INT16_MAX;
	static int32_t t30 = -2526;

	t30 = ((x121==(x122^x123))+x124);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int16_t x126 = 2;

	t31 = ((x125==(x126^x127))+x128);

	if (t31 != 1728) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int32_t x132 = -70805;
	static int32_t t32 = -2;

	t32 = ((x129==(x130^x131))+x132);

	if (t32 != -70805) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x135 = INT8_MIN;
	volatile int32_t t33 = -510839;

	t33 = ((x133==(x134^x135))+x136);

	if (t33 != -19) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 0U;
	int64_t x138 = -1LL;
	static int32_t x139 = INT32_MAX;
	uint64_t x140 = 4956449832052373LLU;
	uint64_t t34 = 35613430277LLU;

	t34 = ((x137==(x138^x139))+x140);

	if (t34 != 4956449832052373LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	int8_t x143 = -1;
	int8_t x144 = 0;
	static int32_t t35 = 136;

	t35 = ((x141==(x142^x143))+x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MAX;
	int16_t x146 = INT16_MIN;
	uint64_t x147 = 73253LLU;
	int16_t x148 = INT16_MIN;

	t36 = ((x145==(x146^x147))+x148);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 88U;
	uint32_t x151 = 125832643U;
	volatile int32_t t37 = 119690;

	t37 = ((x149==(x150^x151))+x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	volatile int16_t x155 = -1;
	int32_t t38 = 855429485;

	t38 = ((x153==(x154^x155))+x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 3U;
	int32_t x160 = INT32_MIN;
	static volatile int32_t t39 = INT32_MIN;

	t39 = ((x157==(x158^x159))+x160);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -1LL;
	int16_t x162 = INT16_MIN;
	volatile uint32_t x163 = UINT32_MAX;
	static int8_t x164 = INT8_MIN;
	int32_t t40 = -123;

	t40 = ((x161==(x162^x163))+x164);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	static int32_t x166 = -123978;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t41 = INT32_MIN;

	t41 = ((x165==(x166^x167))+x168);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -11221256;
	int8_t x170 = INT8_MIN;
	static volatile int16_t x171 = 0;
	int8_t x172 = -1;
	static int32_t t42 = 281829698;

	t42 = ((x169==(x170^x171))+x172);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 318912443U;
	static int32_t x174 = -1;
	uint64_t x175 = 3788742249085163378LLU;
	int64_t x176 = -895149LL;
	int64_t t43 = -447796216801LL;

	t43 = ((x173==(x174^x175))+x176);

	if (t43 != -895149LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MAX;
	int32_t x178 = -281;
	int32_t x179 = -1;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 8519;

	t44 = ((x177==(x178^x179))+x180);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 444012789338LLU;
	static int16_t x182 = -1;
	int8_t x183 = INT8_MAX;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -1175;

	t45 = ((x181==(x182^x183))+x184);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 277379387198887657LLU;
	uint64_t x186 = 4519027145LLU;
	uint8_t x188 = 2U;
	static volatile int32_t t46 = -31702;

	t46 = ((x185==(x186^x187))+x188);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	volatile int16_t x190 = INT16_MIN;
	static uint64_t x191 = 92099LLU;
	int8_t x192 = -1;
	volatile int32_t t47 = 84;

	t47 = ((x189==(x190^x191))+x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = INT64_MIN;
	int64_t x195 = -1LL;
	int32_t t48 = 615110181;

	t48 = ((x193==(x194^x195))+x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	static uint8_t x198 = 34U;
	volatile int32_t x199 = 3;
	volatile int16_t x200 = -1;
	int32_t t49 = 0;

	t49 = ((x197==(x198^x199))+x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -488729658LL;
	uint32_t x202 = 76640U;
	int32_t x203 = INT32_MIN;
	volatile int32_t t50 = INT32_MAX;

	t50 = ((x201==(x202^x203))+x204);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 16U;
	volatile int16_t x207 = -1;
	static uint8_t x208 = UINT8_MAX;

	t51 = ((x205==(x206^x207))+x208);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int16_t x210 = INT16_MIN;
	static volatile uint32_t x212 = 100999U;
	volatile uint32_t t52 = 1189169049U;

	t52 = ((x209==(x210^x211))+x212);

	if (t52 != 100999U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 123U;
	int8_t x214 = INT8_MIN;
	uint32_t x216 = 15178U;
	uint32_t t53 = 93604524U;

	t53 = ((x213==(x214^x215))+x216);

	if (t53 != 15178U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = 374;
	volatile int8_t x219 = INT8_MAX;
	int16_t x220 = -1;
	volatile int32_t t54 = 390;

	t54 = ((x217==(x218^x219))+x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 4U;
	int16_t x222 = -1;
	uint32_t x223 = 27613U;
	uint8_t x224 = 17U;

	t55 = ((x221==(x222^x223))+x224);

	if (t55 != 17) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 159U;
	volatile int16_t x226 = -1;
	int16_t x227 = -161;
	int32_t t56 = -271;

	t56 = ((x225==(x226^x227))+x228);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = UINT64_MAX;
	int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MAX;
	volatile uint64_t t57 = 219377285LLU;

	t57 = ((x229==(x230^x231))+x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = UINT8_MAX;
	static uint32_t x235 = 664U;
	static uint32_t x236 = 182U;
	volatile uint32_t t58 = 449903303U;

	t58 = ((x233==(x234^x235))+x236);

	if (t58 != 182U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = 0U;
	static volatile int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MAX;
	int64_t x240 = INT64_MIN;
	volatile int64_t t59 = INT64_MIN;

	t59 = ((x237==(x238^x239))+x240);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MIN;
	static uint32_t x244 = 162859370U;
	uint32_t t60 = 1605U;

	t60 = ((x241==(x242^x243))+x244);

	if (t60 != 162859370U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x248 = UINT32_MAX;

	t61 = ((x245==(x246^x247))+x248);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -1LL;
	static uint32_t x250 = 118237788U;
	int32_t x251 = 240513;
	int32_t t62 = -779483507;

	t62 = ((x249==(x250^x251))+x252);

	if (t62 != -46) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 212411510979882281LLU;
	int32_t x255 = INT32_MAX;
	volatile int32_t x256 = -1;
	int32_t t63 = -2439458;

	t63 = ((x253==(x254^x255))+x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	int16_t x258 = 11;
	uint8_t x259 = UINT8_MAX;
	static int16_t x260 = INT16_MIN;
	int32_t t64 = -1010;

	t64 = ((x257==(x258^x259))+x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	volatile int8_t x262 = 0;
	int8_t x263 = INT8_MAX;
	static int16_t x264 = INT16_MIN;
	int32_t t65 = 2538050;

	t65 = ((x261==(x262^x263))+x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x265 = 11677LLU;
	static uint8_t x266 = 1U;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MIN;
	int32_t t66 = -24556;

	t66 = ((x265==(x266^x267))+x268);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	static volatile int8_t x271 = -1;
	uint32_t x272 = 3U;

	t67 = ((x269==(x270^x271))+x272);

	if (t67 != 3U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x275 = UINT16_MAX;
	static volatile int32_t t68 = 11159;

	t68 = ((x273==(x274^x275))+x276);

	if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 2210425907LLU;
	static uint16_t x278 = 13226U;
	static uint64_t x279 = UINT64_MAX;
	uint32_t x280 = UINT32_MAX;
	static volatile uint32_t t69 = UINT32_MAX;

	t69 = ((x277==(x278^x279))+x280);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = INT16_MAX;
	uint16_t x283 = UINT16_MAX;
	uint32_t x284 = 24674U;

	t70 = ((x281==(x282^x283))+x284);

	if (t70 != 24674U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MIN;
	volatile int64_t x287 = INT64_MIN;
	static uint8_t x288 = 67U;
	volatile int32_t t71 = -199909;

	t71 = ((x285==(x286^x287))+x288);

	if (t71 != 67) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = UINT32_MAX;
	static int8_t x290 = INT8_MIN;
	volatile int32_t x291 = -1;
	int32_t t72 = INT32_MAX;

	t72 = ((x289==(x290^x291))+x292);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 0;
	int8_t x294 = INT8_MIN;
	volatile int8_t x295 = INT8_MAX;
	static uint64_t x296 = UINT64_MAX;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x293==(x294^x295))+x296);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = 22U;
	static int16_t x298 = 46;
	uint64_t x299 = UINT64_MAX;
	int32_t x300 = INT32_MIN;
	int32_t t74 = INT32_MIN;

	t74 = ((x297==(x298^x299))+x300);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 3269U;
	int32_t x304 = INT32_MAX;
	int32_t t75 = INT32_MAX;

	t75 = ((x301==(x302^x303))+x304);

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	static volatile int64_t t76 = INT64_MIN;

	t76 = ((x305==(x306^x307))+x308);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x310 = -32LL;
	int32_t t77 = -7;

	t77 = ((x309==(x310^x311))+x312);

	if (t77 != 1655) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 14LLU;
	uint64_t x314 = 302140963671LLU;
	int16_t x315 = -1;
	static int32_t x316 = 7270;
	int32_t t78 = 742606786;

	t78 = ((x313==(x314^x315))+x316);

	if (t78 != 7270) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = -1;
	int8_t x319 = 1;
	int32_t t79 = 812035;

	t79 = ((x317==(x318^x319))+x320);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MIN;
	uint8_t x322 = 10U;
	volatile int32_t x323 = INT32_MIN;

	t80 = ((x321==(x322^x323))+x324);

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x326 = UINT16_MAX;
	int64_t x327 = -8211269898620889LL;
	int16_t x328 = -1;
	volatile int32_t t81 = -3403935;

	t81 = ((x325==(x326^x327))+x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 3687257LLU;
	int64_t x330 = -305LL;
	uint32_t x331 = UINT32_MAX;
	uint64_t t82 = 550LLU;

	t82 = ((x329==(x330^x331))+x332);

	if (t82 != 8935014204406960331LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MIN;
	static volatile int64_t t83 = INT64_MIN;

	t83 = ((x333==(x334^x335))+x336);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x339 = INT8_MIN;
	volatile int32_t t84 = 11975278;

	t84 = ((x337==(x338^x339))+x340);

	if (t84 != 173) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = 1981677371U;
	static uint16_t x342 = 1U;
	int8_t x343 = INT8_MIN;
	int16_t x344 = 1;
	int32_t t85 = 43548;

	t85 = ((x341==(x342^x343))+x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	volatile int32_t x346 = 3618503;
	int32_t x347 = -1;
	static int8_t x348 = INT8_MIN;
	static volatile int32_t t86 = 203309265;

	t86 = ((x345==(x346^x347))+x348);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MAX;
	static int64_t x351 = INT64_MIN;
	static int32_t x352 = INT32_MAX;
	static int32_t t87 = INT32_MAX;

	t87 = ((x349==(x350^x351))+x352);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MIN;
	uint16_t x354 = 126U;
	int32_t t88 = -292013705;

	t88 = ((x353==(x354^x355))+x356);

	if (t88 != 19) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -508030633697LL;
	uint32_t x358 = 454U;
	uint16_t x359 = 29U;
	int32_t x360 = -9860912;
	volatile int32_t t89 = 7;

	t89 = ((x357==(x358^x359))+x360);

	if (t89 != -9860912) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	static uint64_t x364 = 5622LLU;
	static uint64_t t90 = 385076957061884544LLU;

	t90 = ((x361==(x362^x363))+x364);

	if (t90 != 5623LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = 4730150LL;
	static int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MIN;
	int64_t t91 = INT64_MIN;

	t91 = ((x365==(x366^x367))+x368);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = -1;
	static int16_t x371 = -1;

	t92 = ((x369==(x370^x371))+x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	volatile int32_t x374 = INT32_MIN;
	uint64_t x375 = 985032208472456839LLU;
	int32_t x376 = 53;
	volatile int32_t t93 = -10945;

	t93 = ((x373==(x374^x375))+x376);

	if (t93 != 53) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 1440632983U;
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = 75;
	volatile int32_t t94 = 0;

	t94 = ((x377==(x378^x379))+x380);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 15U;
	int64_t x382 = 8320820881LL;
	static int64_t x383 = INT64_MIN;
	int64_t x384 = -1LL;
	static volatile int64_t t95 = -218290524587120073LL;

	t95 = ((x381==(x382^x383))+x384);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MAX;
	uint16_t x386 = 12900U;
	uint16_t x387 = 5071U;
	int8_t x388 = -1;
	volatile int32_t t96 = 54106340;

	t96 = ((x385==(x386^x387))+x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = -1LL;
	static volatile int64_t x391 = INT64_MAX;
	int32_t x392 = -1;
	static int32_t t97 = 282332718;

	t97 = ((x389==(x390^x391))+x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = -199708420;
	volatile uint8_t x395 = 3U;
	int64_t x396 = INT64_MAX;
	int64_t t98 = INT64_MAX;

	t98 = ((x393==(x394^x395))+x396);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	uint64_t x400 = 819846LLU;
	uint64_t t99 = 27049225292LLU;

	t99 = ((x397==(x398^x399))+x400);

	if (t99 != 819846LLU) { NG(); } else { ; }
	
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
