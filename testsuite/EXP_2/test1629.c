#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int8_t x5 = -1;
uint64_t x8 = 4194579839LLU;
static uint64_t t1 = 21294284553LLU;
uint64_t x9 = UINT64_MAX;
int32_t x11 = INT32_MIN;
uint64_t x14 = 5979LLU;
int32_t x22 = INT32_MAX;
uint8_t x32 = 51U;
static int32_t t7 = -6526;
int64_t x34 = -12LL;
int32_t x38 = INT32_MAX;
int32_t t9 = 253;
uint32_t x41 = UINT32_MAX;
uint32_t x44 = UINT32_MAX;
static int8_t x52 = INT8_MIN;
int8_t x58 = -1;
int8_t x60 = 38;
volatile int16_t x64 = -1;
volatile int32_t t15 = -142536;
int64_t x69 = -287563646801640341LL;
int8_t x70 = INT8_MIN;
int16_t x73 = INT16_MIN;
uint64_t x85 = 688114081091020332LLU;
static volatile int64_t x86 = INT64_MAX;
volatile int32_t t21 = -24;
uint64_t x92 = UINT64_MAX;
volatile int64_t x95 = 65422952351156LL;
volatile int32_t t23 = 1460510;
volatile int32_t t24 = -306;
static int8_t x103 = 2;
static volatile int64_t x104 = 4165715LL;
int32_t t26 = -9479;
uint64_t x109 = 15141664404066495LLU;
static volatile int32_t x110 = INT32_MAX;
volatile int32_t t27 = 3828;
int64_t x121 = INT64_MIN;
static volatile int16_t x123 = INT16_MIN;
int8_t x129 = 8;
int32_t x131 = 3084;
uint16_t x132 = 7646U;
volatile int64_t x137 = INT64_MAX;
int32_t x143 = INT32_MIN;
volatile int32_t t35 = -345;
int32_t x149 = INT32_MIN;
static uint16_t x152 = UINT16_MAX;
volatile uint32_t x153 = 595U;
int8_t x159 = INT8_MIN;
static int32_t x160 = INT32_MAX;
static int64_t x163 = -726505LL;
static int64_t x164 = 8664548577LL;
uint8_t x167 = 4U;
int8_t x169 = INT8_MAX;
static volatile int32_t x171 = -87815;
volatile uint8_t x174 = UINT8_MAX;
int8_t x178 = 0;
int32_t x181 = INT32_MIN;
int32_t t45 = 333633;
static uint8_t x190 = UINT8_MAX;
volatile int32_t x194 = INT32_MIN;
int64_t x206 = -2984225294096896LL;
uint32_t x211 = UINT32_MAX;
int16_t x212 = INT16_MAX;
static int32_t t51 = 1641132;
volatile int32_t t52 = 24082;
uint8_t x218 = 8U;
static uint64_t x219 = UINT64_MAX;
static uint32_t x220 = 25490U;
volatile int32_t x226 = INT32_MIN;
static uint64_t x229 = UINT64_MAX;
static int64_t x230 = INT64_MIN;
static int32_t x234 = INT32_MIN;
static int32_t x235 = INT32_MAX;
int32_t x236 = INT32_MIN;
volatile int64_t t59 = -234059270968202685LL;
int8_t x245 = -1;
volatile int32_t t60 = -10671;
uint16_t x249 = UINT16_MAX;
volatile int32_t t61 = -898;
uint16_t x254 = 24370U;
static uint32_t x255 = 25U;
int32_t x256 = INT32_MIN;
uint16_t x257 = 7U;
int8_t x259 = INT8_MAX;
int32_t x260 = INT32_MIN;
int8_t x262 = INT8_MIN;
volatile int32_t x263 = 1444516;
volatile uint32_t x267 = 175634663U;
volatile uint32_t x271 = 6064773U;
int8_t x280 = -1;
static volatile int32_t t68 = -2288664;
int32_t x284 = -1084388;
volatile uint32_t t71 = 16846U;
volatile uint8_t x295 = 102U;
volatile int8_t x297 = INT8_MAX;
int64_t x299 = -255895328620254LL;
volatile int64_t x300 = INT64_MIN;
volatile int64_t x301 = 37190579LL;
int16_t x310 = 16028;
int32_t x312 = 248;
static uint32_t x313 = UINT32_MAX;
volatile uint16_t x314 = 0U;
static int16_t x316 = -3826;
volatile int64_t x318 = INT64_MIN;
uint32_t t78 = 15U;
int8_t x326 = INT8_MAX;
uint8_t x335 = 0U;
int32_t x339 = -470894;
int16_t x342 = INT16_MIN;
volatile int16_t x344 = INT16_MAX;
int16_t x350 = INT16_MAX;
int32_t x352 = INT32_MAX;
int8_t x361 = -1;
uint8_t x368 = UINT8_MAX;
int16_t x370 = 372;
static volatile uint8_t x372 = UINT8_MAX;
uint64_t x373 = 646107LLU;
int8_t x375 = INT8_MIN;
int8_t x385 = 1;
volatile int32_t t95 = -288;
int64_t x399 = -1LL;
volatile int32_t t97 = -4133;
int16_t x405 = -1;
static int32_t t99 = -173852;


void f0(void) {
	int16_t x2 = 5;
	uint16_t x3 = 0U;
	volatile int32_t x4 = -1;
	volatile int32_t t0 = -48992741;

	t0 = ((x1<(x2<=x3))/x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 1901;
	int8_t x7 = INT8_MAX;

	t1 = ((x5<(x6<=x7))/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 34U;
	int16_t x12 = 6;
	volatile int32_t t2 = 116;

	t2 = ((x9<(x10<=x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 91U;
	uint32_t x15 = 1674572263U;
	int8_t x16 = INT8_MAX;
	int32_t t3 = 24;

	t3 = ((x13<(x14<=x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static int64_t x18 = INT64_MIN;
	volatile int64_t x19 = -1LL;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = 1;

	t4 = ((x17<(x18<=x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -61594056;

	t5 = ((x21<(x22<=x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int16_t x26 = -1;
	static int8_t x27 = INT8_MIN;
	static uint8_t x28 = 6U;
	volatile int32_t t6 = -293168914;

	t6 = ((x25<(x26<=x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -57LL;
	static volatile int8_t x30 = 0;
	int64_t x31 = INT64_MAX;

	t7 = ((x29<(x30<=x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -27;
	uint8_t x35 = 0U;
	volatile int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -7599;

	t8 = ((x33<(x34<=x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	uint16_t x39 = 75U;
	uint16_t x40 = 7779U;

	t9 = ((x37<(x38<=x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	volatile int16_t x43 = -1364;
	volatile uint32_t t10 = 5245U;

	t10 = ((x41<(x42<=x43))/x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static int64_t x46 = INT64_MIN;
	int64_t x47 = -1LL;
	uint16_t x48 = 6U;
	int32_t t11 = 185667700;

	t11 = ((x45<(x46<=x47))/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = 19;
	int16_t x50 = -1;
	volatile int8_t x51 = INT8_MAX;
	volatile int32_t t12 = 493;

	t12 = ((x49<(x50<=x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = -28;
	uint16_t x54 = 3807U;
	int16_t x55 = INT16_MIN;
	volatile int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 22681;

	t13 = ((x53<(x54<=x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -48713105870LL;
	static uint64_t x59 = UINT64_MAX;
	volatile int32_t t14 = 34190;

	t14 = ((x57<(x58<=x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int64_t x62 = INT64_MIN;
	int8_t x63 = INT8_MIN;

	t15 = ((x61<(x62<=x63))/x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int32_t x66 = 240431;
	int64_t x67 = -1LL;
	int32_t x68 = 524;
	static volatile int32_t t16 = -6;

	t16 = ((x65<(x66<=x67))/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x71 = 1033170;
	volatile int8_t x72 = 1;
	static volatile int32_t t17 = 10289;

	t17 = ((x69<(x70<=x71))/x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x74 = 6639;
	volatile int32_t x75 = -1;
	volatile int16_t x76 = -1;
	volatile int32_t t18 = -488998215;

	t18 = ((x73<(x74<=x75))/x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -241417907904896LL;
	int64_t x78 = 44159640626531LL;
	int32_t x79 = INT32_MAX;
	uint8_t x80 = 1U;
	volatile int32_t t19 = 14218143;

	t19 = ((x77<(x78<=x79))/x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 509U;
	volatile int8_t x82 = INT8_MAX;
	static uint16_t x83 = 25U;
	uint32_t x84 = 1U;
	uint32_t t20 = 29U;

	t20 = ((x81<(x82<=x83))/x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x87 = INT32_MIN;
	static uint8_t x88 = UINT8_MAX;

	t21 = ((x85<(x86<=x87))/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	volatile int32_t x90 = INT32_MIN;
	uint64_t x91 = 89856067472650861LLU;
	volatile uint64_t t22 = 96359765242992155LLU;

	t22 = ((x89<(x90<=x91))/x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x94 = INT8_MIN;
	int32_t x96 = INT32_MAX;

	t23 = ((x93<(x94<=x95))/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MIN;
	volatile uint32_t x99 = UINT32_MAX;
	uint16_t x100 = UINT16_MAX;

	t24 = ((x97<(x98<=x99))/x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -15;
	volatile int32_t x102 = -1;
	volatile int64_t t25 = 126805860824943998LL;

	t25 = ((x101<(x102<=x103))/x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	static volatile int32_t x106 = -1;
	volatile int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MIN;

	t26 = ((x105<(x106<=x107))/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x111 = INT32_MIN;
	static int32_t x112 = INT32_MAX;

	t27 = ((x109<(x110<=x111))/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 23U;
	volatile int32_t x114 = INT32_MAX;
	uint64_t x115 = UINT64_MAX;
	static int32_t x116 = -1;
	int32_t t28 = 5938;

	t28 = ((x113<(x114<=x115))/x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	static int8_t x118 = INT8_MIN;
	static volatile int64_t x119 = -1LL;
	volatile uint8_t x120 = 93U;
	volatile int32_t t29 = 30;

	t29 = ((x117<(x118<=x119))/x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x122 = INT16_MAX;
	static int64_t x124 = INT64_MIN;
	static int64_t t30 = -200624410549537LL;

	t30 = ((x121<(x122<=x123))/x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x130 = UINT16_MAX;
	static int32_t t31 = 385668;

	t31 = ((x129<(x130<=x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x133 = INT64_MIN;
	int16_t x134 = -190;
	static volatile int32_t x135 = -1;
	static int64_t x136 = -94257LL;
	int64_t t32 = 938125074612407958LL;

	t32 = ((x133<(x134<=x135))/x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x138 = UINT16_MAX;
	volatile int8_t x139 = INT8_MIN;
	static int16_t x140 = -1;
	volatile int32_t t33 = 214423;

	t33 = ((x137<(x138<=x139))/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 5U;
	uint32_t x142 = UINT32_MAX;
	volatile int32_t x144 = -34;
	volatile int32_t t34 = -145552;

	t34 = ((x141<(x142<=x143))/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = INT16_MIN;
	int8_t x146 = INT8_MIN;
	int32_t x147 = -1048540;
	static uint8_t x148 = 3U;

	t35 = ((x145<(x146<=x147))/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x150 = INT16_MIN;
	static int32_t x151 = INT32_MIN;
	int32_t t36 = 5;

	t36 = ((x149<(x150<=x151))/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x154 = 6998;
	int64_t x155 = INT64_MAX;
	volatile int16_t x156 = INT16_MIN;
	static volatile int32_t t37 = 1;

	t37 = ((x153<(x154<=x155))/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MIN;
	static uint32_t x158 = 5U;
	int32_t t38 = 10533281;

	t38 = ((x157<(x158<=x159))/x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MAX;
	volatile int8_t x162 = INT8_MIN;
	volatile int64_t t39 = 7083LL;

	t39 = ((x161<(x162<=x163))/x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -1;
	uint32_t x166 = 47U;
	volatile int64_t x168 = 5LL;
	int64_t t40 = 3008LL;

	t40 = ((x165<(x166<=x167))/x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = -1LL;
	uint16_t x172 = 3U;
	int32_t t41 = 29789754;

	t41 = ((x169<(x170<=x171))/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x173 = 25222U;
	uint32_t x175 = 436534U;
	volatile int32_t x176 = -1;
	static volatile int32_t t42 = 52;

	t42 = ((x173<(x174<=x175))/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = UINT64_MAX;
	int64_t x179 = INT64_MIN;
	int64_t x180 = 6LL;
	volatile int64_t t43 = 2090LL;

	t43 = ((x177<(x178<=x179))/x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x182 = INT8_MIN;
	static int8_t x183 = 0;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t44 = -1;

	t44 = ((x181<(x182<=x183))/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x185 = UINT8_MAX;
	int32_t x186 = INT32_MIN;
	int16_t x187 = -1;
	int8_t x188 = 41;

	t45 = ((x185<(x186<=x187))/x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 3U;
	int64_t x191 = 28149LL;
	int32_t x192 = -1;
	int32_t t46 = 71950632;

	t46 = ((x189<(x190<=x191))/x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -14;
	int8_t x195 = 1;
	int8_t x196 = INT8_MAX;
	int32_t t47 = -1;

	t47 = ((x193<(x194<=x195))/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x197 = 14U;
	uint32_t x198 = 30953463U;
	int8_t x199 = -9;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t48 = 0;

	t48 = ((x197<(x198<=x199))/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -881LL;
	static int32_t x202 = -8;
	int32_t x203 = 111176395;
	static int8_t x204 = INT8_MIN;
	int32_t t49 = 115814514;

	t49 = ((x201<(x202<=x203))/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = 33;
	int16_t x207 = INT16_MIN;
	static int32_t x208 = 3692;
	int32_t t50 = 2;

	t50 = ((x205<(x206<=x207))/x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = 40925LLU;
	static int64_t x210 = 1LL;

	t51 = ((x209<(x210<=x211))/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x213 = 822325458160LLU;
	int8_t x214 = -1;
	uint64_t x215 = UINT64_MAX;
	static int16_t x216 = -1;

	t52 = ((x213<(x214<=x215))/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = UINT32_MAX;
	volatile uint32_t t53 = 487U;

	t53 = ((x217<(x218<=x219))/x220);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = -13;
	static uint16_t x222 = 655U;
	volatile uint32_t x223 = 657005U;
	static int64_t x224 = -1LL;
	static int64_t t54 = -94760584LL;

	t54 = ((x221<(x222<=x223))/x224);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x227 = -35;
	static volatile int32_t x228 = INT32_MAX;
	volatile int32_t t55 = -978;

	t55 = ((x225<(x226<=x227))/x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x231 = UINT8_MAX;
	int16_t x232 = INT16_MIN;
	volatile int32_t t56 = 2;

	t56 = ((x229<(x230<=x231))/x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -3;
	volatile int32_t t57 = 21885;

	t57 = ((x233<(x234<=x235))/x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -257563699147495LL;
	static int32_t x238 = -3430405;
	uint16_t x239 = UINT16_MAX;
	int16_t x240 = INT16_MIN;
	int32_t t58 = -8014;

	t58 = ((x237<(x238<=x239))/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = INT8_MIN;
	int16_t x243 = -1;
	int64_t x244 = -609938810204LL;

	t59 = ((x241<(x242<=x243))/x244);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x246 = -52;
	volatile uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MIN;

	t60 = ((x245<(x246<=x247))/x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x250 = UINT8_MAX;
	uint64_t x251 = 242793974LLU;
	volatile int8_t x252 = INT8_MIN;

	t61 = ((x249<(x250<=x251))/x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x253 = UINT8_MAX;
	int32_t t62 = -59602141;

	t62 = ((x253<(x254<=x255))/x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x258 = -1;
	int32_t t63 = 11;

	t63 = ((x257<(x258<=x259))/x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x261 = INT8_MIN;
	static uint64_t x264 = 420280864LLU;
	volatile uint64_t t64 = 0LLU;

	t64 = ((x261<(x262<=x263))/x264);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = 0;
	uint32_t x266 = 13U;
	volatile uint64_t x268 = 74012652027LLU;
	static uint64_t t65 = 1057136739LLU;

	t65 = ((x265<(x266<=x267))/x268);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x269 = INT64_MAX;
	uint32_t x270 = 494U;
	volatile int64_t x272 = INT64_MIN;
	int64_t t66 = -168136799234381LL;

	t66 = ((x269<(x270<=x271))/x272);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x273 = 78696279LLU;
	int64_t x274 = -1LL;
	volatile int32_t x275 = -1;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t67 = 16022022204LL;

	t67 = ((x273<(x274<=x275))/x276);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = 779LL;
	static int16_t x278 = INT16_MIN;
	int8_t x279 = INT8_MIN;

	t68 = ((x277<(x278<=x279))/x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x281 = UINT32_MAX;
	static int8_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int32_t t69 = 65192;

	t69 = ((x281<(x282<=x283))/x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x285 = -12;
	volatile uint8_t x286 = 7U;
	int32_t x287 = INT32_MIN;
	int64_t x288 = 884LL;
	volatile int64_t t70 = 14110982LL;

	t70 = ((x285<(x286<=x287))/x288);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x289 = 12U;
	uint32_t x290 = 744547U;
	static uint64_t x291 = 125278057LLU;
	static uint32_t x292 = 1290U;

	t71 = ((x289<(x290<=x291))/x292);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x293 = INT64_MIN;
	static int32_t x294 = -4973107;
	int8_t x296 = -1;
	volatile int32_t t72 = 1;

	t72 = ((x293<(x294<=x295))/x296);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x298 = INT8_MIN;
	static int64_t t73 = -6344341779458LL;

	t73 = ((x297<(x298<=x299))/x300);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	int8_t x304 = -1;
	int32_t t74 = 9;

	t74 = ((x301<(x302<=x303))/x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MIN;
	uint64_t x306 = 183LLU;
	int8_t x307 = INT8_MAX;
	uint64_t x308 = UINT64_MAX;
	uint64_t t75 = 3924318LLU;

	t75 = ((x305<(x306<=x307))/x308);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = 88;
	static int64_t x311 = INT64_MAX;
	static int32_t t76 = -84045710;

	t76 = ((x309<(x310<=x311))/x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x315 = -1LL;
	int32_t t77 = -4044060;

	t77 = ((x313<(x314<=x315))/x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x317 = INT16_MIN;
	int8_t x319 = -1;
	static uint32_t x320 = 202599U;

	t78 = ((x317<(x318<=x319))/x320);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x325 = INT32_MAX;
	int8_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	uint32_t t79 = 1659U;

	t79 = ((x325<(x326<=x327))/x328);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MIN;
	static int64_t x330 = -1LL;
	static int64_t x331 = 5333026887LL;
	static int8_t x332 = 15;
	int32_t t80 = 844770;

	t80 = ((x329<(x330<=x331))/x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = 526541868617234363LLU;
	int8_t x334 = -1;
	int16_t x336 = -1;
	volatile int32_t t81 = 906037034;

	t81 = ((x333<(x334<=x335))/x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = 747796;
	int16_t x338 = 1;
	volatile uint32_t x340 = UINT32_MAX;
	uint32_t t82 = 1268171104U;

	t82 = ((x337<(x338<=x339))/x340);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = -1;
	static int16_t x343 = 1;
	volatile int32_t t83 = -870;

	t83 = ((x341<(x342<=x343))/x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = -1;
	uint16_t x346 = 6538U;
	static int32_t x347 = 6962;
	static volatile int16_t x348 = INT16_MIN;
	volatile int32_t t84 = 103;

	t84 = ((x345<(x346<=x347))/x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int8_t x351 = INT8_MIN;
	volatile int32_t t85 = -304881623;

	t85 = ((x349<(x350<=x351))/x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = INT64_MIN;
	static int64_t x355 = INT64_MIN;
	int32_t x356 = -54588;
	int32_t t86 = 456399578;

	t86 = ((x353<(x354<=x355))/x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = INT16_MAX;
	static volatile int8_t x358 = 1;
	uint64_t x359 = UINT64_MAX;
	int64_t x360 = INT64_MIN;
	int64_t t87 = -56566614123538LL;

	t87 = ((x357<(x358<=x359))/x360);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x362 = INT32_MAX;
	volatile uint32_t x363 = 2868671U;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t88 = -37569;

	t88 = ((x361<(x362<=x363))/x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x365 = 54U;
	uint64_t x366 = 12LLU;
	int8_t x367 = -1;
	int32_t t89 = -22464;

	t89 = ((x365<(x366<=x367))/x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x369 = 7403U;
	static int64_t x371 = -1LL;
	volatile int32_t t90 = 10578;

	t90 = ((x369<(x370<=x371))/x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x374 = INT32_MIN;
	int8_t x376 = -2;
	int32_t t91 = 6923;

	t91 = ((x373<(x374<=x375))/x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x377 = 33;
	uint32_t x378 = 4770110U;
	volatile int64_t x379 = INT64_MIN;
	uint32_t x380 = UINT32_MAX;
	static volatile uint32_t t92 = 312U;

	t92 = ((x377<(x378<=x379))/x380);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x381 = UINT8_MAX;
	int64_t x382 = INT64_MIN;
	int8_t x383 = -1;
	int32_t x384 = 1;
	int32_t t93 = -47294;

	t93 = ((x381<(x382<=x383))/x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x386 = INT16_MIN;
	static volatile int32_t x387 = INT32_MIN;
	uint32_t x388 = 1673U;
	static uint32_t t94 = 18U;

	t94 = ((x385<(x386<=x387))/x388);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x389 = 10U;
	int16_t x390 = INT16_MIN;
	int64_t x391 = INT64_MAX;
	static uint8_t x392 = UINT8_MAX;

	t95 = ((x389<(x390<=x391))/x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x393 = 14;
	uint16_t x394 = 4U;
	volatile uint64_t x395 = UINT64_MAX;
	static volatile uint16_t x396 = UINT16_MAX;
	static int32_t t96 = 465747;

	t96 = ((x393<(x394<=x395))/x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = 1;
	volatile int8_t x398 = INT8_MAX;
	int16_t x400 = 1;

	t97 = ((x397<(x398<=x399))/x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x401 = UINT32_MAX;
	static volatile int8_t x402 = INT8_MIN;
	static volatile uint32_t x403 = 1821060021U;
	uint64_t x404 = 6636LLU;
	uint64_t t98 = 150226288906606180LLU;

	t98 = ((x401<(x402<=x403))/x404);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x406 = 1U;
	volatile uint8_t x407 = 51U;
	uint8_t x408 = 40U;

	t99 = ((x405<(x406<=x407))/x408);

	if (t99 != 0) { NG(); } else { ; }
	
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
