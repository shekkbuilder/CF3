#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x9 = INT64_MAX;
static int64_t x14 = -1LL;
static volatile int32_t t2 = 2;
static volatile int64_t x24 = 309798152801LL;
int64_t x36 = INT64_MIN;
static uint32_t x38 = 62776U;
uint32_t x42 = 1555618U;
uint64_t x49 = UINT64_MAX;
int32_t t11 = -7;
uint64_t x59 = UINT64_MAX;
uint64_t x61 = 768419LLU;
int32_t x62 = INT32_MAX;
int8_t x63 = -1;
int32_t x66 = -1;
int32_t x68 = -1;
static uint64_t x72 = UINT64_MAX;
volatile int32_t t15 = 166128;
int64_t x80 = 25927269772LL;
volatile int16_t x86 = -1;
int32_t x88 = -44;
uint16_t x92 = 1302U;
static uint16_t x95 = 57U;
int16_t x96 = INT16_MIN;
uint64_t x97 = 42257586LLU;
int32_t t22 = -1860205;
uint32_t x101 = 435499U;
int32_t x112 = INT32_MAX;
static uint16_t x114 = UINT16_MAX;
int16_t x117 = -16133;
volatile int32_t t26 = 49;
int32_t t27 = -7;
int64_t x132 = 0LL;
uint8_t x133 = UINT8_MAX;
uint8_t x135 = 18U;
int64_t x142 = INT64_MAX;
uint64_t x150 = UINT64_MAX;
int8_t x152 = -1;
int32_t x161 = INT32_MAX;
int8_t x167 = INT8_MAX;
uint64_t x168 = 25290881LLU;
static volatile int32_t t36 = 3;
uint64_t x175 = UINT64_MAX;
int32_t t38 = 9;
int8_t x189 = INT8_MIN;
volatile int8_t x195 = INT8_MIN;
int64_t x199 = -1LL;
uint32_t x200 = 374580U;
int16_t x208 = INT16_MIN;
volatile int32_t t42 = -172;
static int32_t x213 = INT32_MAX;
int16_t x223 = -1;
volatile uint64_t x229 = UINT64_MAX;
int32_t t48 = -10;
volatile int64_t x238 = -197689117LL;
static int64_t x248 = -794LL;
int32_t x253 = -1;
volatile int32_t t54 = 1;
volatile int16_t x261 = INT16_MAX;
volatile int8_t x262 = INT8_MIN;
volatile uint32_t x263 = 395U;
uint8_t x264 = 3U;
volatile int32_t t55 = -9321038;
volatile int8_t x283 = 1;
static int8_t x287 = -1;
int8_t x290 = INT8_MIN;
uint8_t x296 = UINT8_MAX;
volatile uint16_t x298 = UINT16_MAX;
int8_t x299 = 33;
int64_t x303 = -1LL;
int64_t x314 = INT64_MIN;
int16_t x315 = INT16_MAX;
int8_t x316 = INT8_MAX;
static int16_t x320 = INT16_MAX;
volatile int32_t t68 = 6834393;
static int32_t t69 = -1061877970;
uint64_t x332 = 2097742255LLU;
static int32_t t71 = -181104214;
int32_t x342 = -1;
int64_t x344 = INT64_MAX;
static volatile int32_t t73 = 3102;
volatile int16_t x347 = INT16_MIN;
static volatile int16_t x349 = -1;
static int64_t x355 = -27588LL;
uint32_t x359 = 53474U;
static int64_t x362 = 3715031208706LL;
int32_t t78 = -228;
uint8_t x365 = UINT8_MAX;
static int32_t t79 = 371;
int32_t x369 = -66670782;
static int64_t x380 = INT64_MAX;
int32_t x387 = INT32_MAX;
uint64_t x429 = 37140733176734LLU;
int32_t t91 = -5203832;
uint8_t x437 = 10U;
volatile int16_t x438 = INT16_MIN;
int64_t x445 = INT64_MIN;
int8_t x446 = -1;
int32_t x449 = 771531;
int32_t x451 = -1;
static int8_t x461 = 0;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	uint8_t x2 = 0U;
	volatile uint64_t x3 = 9176954378003750LLU;
	volatile int32_t x4 = -1;
	volatile int32_t t0 = -14547;

	t0 = ((x1^(x2+x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x10 = -1;
	uint8_t x11 = UINT8_MAX;
	int64_t x12 = -258296326769825LL;
	volatile int32_t t1 = -159699;

	t1 = ((x9^(x10+x11))<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 9U;
	uint64_t x15 = UINT64_MAX;
	uint32_t x16 = 4U;

	t2 = ((x13^(x14+x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = 29;
	uint8_t x18 = 11U;
	int64_t x19 = INT64_MIN;
	int32_t x20 = -1;
	int32_t t3 = -65779990;

	t3 = ((x17^(x18+x19))<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 22735193LLU;
	int16_t x22 = INT16_MIN;
	volatile int8_t x23 = -1;
	int32_t t4 = 1;

	t4 = ((x21^(x22+x23))<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = INT8_MAX;
	uint64_t x27 = 7557758506LLU;
	int32_t x28 = -1;
	int32_t t5 = -7;

	t5 = ((x25^(x26+x27))<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 40U;
	volatile int64_t x30 = -30140341159LL;
	volatile int64_t x31 = -2511LL;
	volatile int8_t x32 = INT8_MAX;
	volatile int32_t t6 = 73;

	t6 = ((x29^(x30+x31))<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	uint64_t x35 = 593298LLU;
	volatile int32_t t7 = 0;

	t7 = ((x33^(x34+x35))<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -39;
	uint16_t x39 = 236U;
	volatile int32_t x40 = -955367;
	int32_t t8 = 215450075;

	t8 = ((x37^(x38+x39))<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -267045993LL;
	uint8_t x43 = UINT8_MAX;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t9 = 17483;

	t9 = ((x41^(x42+x43))<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x50 = -1;
	int8_t x51 = INT8_MIN;
	uint64_t x52 = 0LLU;
	volatile int32_t t10 = 1251;

	t10 = ((x49^(x50+x51))<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = -1;
	int16_t x54 = INT16_MAX;
	uint8_t x55 = UINT8_MAX;
	uint16_t x56 = 24555U;

	t11 = ((x53^(x54+x55))<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = 143871882852LL;
	int8_t x58 = -1;
	int64_t x60 = INT64_MIN;
	int32_t t12 = 4145072;

	t12 = ((x57^(x58+x59))<x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x64 = 2382132588117LLU;
	static volatile int32_t t13 = 7;

	t13 = ((x61^(x62+x63))<x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	static int32_t x67 = 519;
	volatile int32_t t14 = -4;

	t14 = ((x65^(x66+x67))<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	int32_t x70 = INT32_MIN;
	uint32_t x71 = 305857U;

	t15 = ((x69^(x70+x71))<x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x73 = INT32_MIN;
	uint16_t x74 = 13U;
	int32_t x75 = 592299035;
	int8_t x76 = INT8_MAX;
	volatile int32_t t16 = -63934227;

	t16 = ((x73^(x74+x75))<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	int32_t x78 = INT32_MIN;
	int64_t x79 = 7039304LL;
	static int32_t t17 = -6;

	t17 = ((x77^(x78+x79))<x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = UINT64_MAX;
	int8_t x82 = -1;
	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MIN;
	int32_t t18 = -10230;

	t18 = ((x81^(x82+x83))<x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 9079U;
	static volatile uint8_t x87 = 56U;
	static volatile int32_t t19 = -25895307;

	t19 = ((x85^(x86+x87))<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = -43;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	volatile int32_t t20 = 36145;

	t20 = ((x89^(x90+x91))<x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	uint16_t x94 = 8U;
	volatile int32_t t21 = 49120;

	t21 = ((x93^(x94+x95))<x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x98 = UINT32_MAX;
	int8_t x99 = 12;
	int64_t x100 = INT64_MAX;

	t22 = ((x97^(x98+x99))<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x102 = -1;
	static int8_t x103 = -7;
	int32_t x104 = INT32_MIN;
	volatile int32_t t23 = -515540;

	t23 = ((x101^(x102+x103))<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x109 = 426U;
	uint32_t x110 = UINT32_MAX;
	volatile uint64_t x111 = UINT64_MAX;
	volatile int32_t t24 = -16801419;

	t24 = ((x109^(x110+x111))<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x113 = 7981694LLU;
	int64_t x115 = INT64_MIN;
	uint64_t x116 = 3416305LLU;
	volatile int32_t t25 = 3;

	t25 = ((x113^(x114+x115))<x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x118 = 3680625LLU;
	uint32_t x119 = 1188U;
	volatile int8_t x120 = -1;

	t26 = ((x117^(x118+x119))<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	uint16_t x122 = 734U;
	static int8_t x123 = INT8_MIN;
	uint64_t x124 = UINT64_MAX;

	t27 = ((x121^(x122+x123))<x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x129 = -1;
	uint64_t x130 = 114292508LLU;
	static int32_t x131 = INT32_MAX;
	volatile int32_t t28 = 1;

	t28 = ((x129^(x130+x131))<x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x134 = UINT64_MAX;
	static int32_t x136 = INT32_MAX;
	static int32_t t29 = -2;

	t29 = ((x133^(x134+x135))<x136);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x141 = UINT8_MAX;
	int64_t x143 = -1LL;
	uint32_t x144 = 247018725U;
	volatile int32_t t30 = -3562;

	t30 = ((x141^(x142+x143))<x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MIN;
	volatile int64_t x146 = -1LL;
	volatile uint8_t x147 = 38U;
	volatile int32_t x148 = INT32_MIN;
	int32_t t31 = -39157;

	t31 = ((x145^(x146+x147))<x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x149 = -1;
	volatile int16_t x151 = -1;
	int32_t t32 = 19888596;

	t32 = ((x149^(x150+x151))<x152);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -111859850;
	uint64_t x154 = UINT64_MAX;
	int64_t x155 = INT64_MIN;
	volatile uint32_t x156 = 1612818U;
	int32_t t33 = -1;

	t33 = ((x153^(x154+x155))<x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = -1;
	volatile int16_t x159 = INT16_MAX;
	uint16_t x160 = UINT16_MAX;
	int32_t t34 = -9641020;

	t34 = ((x157^(x158+x159))<x160);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x162 = INT8_MIN;
	int32_t x163 = 738186970;
	int8_t x164 = -3;
	int32_t t35 = 1;

	t35 = ((x161^(x162+x163))<x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x165 = INT8_MAX;
	int8_t x166 = INT8_MIN;

	t36 = ((x165^(x166+x167))<x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = -1LL;
	int32_t x174 = -1142435;
	int32_t x176 = INT32_MIN;
	int32_t t37 = 306297960;

	t37 = ((x173^(x174+x175))<x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = 1016149338102LL;
	int8_t x187 = INT8_MIN;
	static volatile uint64_t x188 = 1531027673145876LLU;

	t38 = ((x185^(x186+x187))<x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x190 = INT8_MAX;
	int64_t x191 = 862LL;
	volatile int64_t x192 = INT64_MIN;
	static int32_t t39 = -27;

	t39 = ((x189^(x190+x191))<x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x193 = 34;
	int64_t x194 = INT64_MAX;
	static volatile uint32_t x196 = UINT32_MAX;
	int32_t t40 = -2415;

	t40 = ((x193^(x194+x195))<x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x197 = 41U;
	uint32_t x198 = UINT32_MAX;
	int32_t t41 = 7;

	t41 = ((x197^(x198+x199))<x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MAX;
	int16_t x207 = INT16_MAX;

	t42 = ((x205^(x206+x207))<x208);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x209 = -1;
	int64_t x210 = INT64_MIN;
	volatile uint8_t x211 = 18U;
	volatile int16_t x212 = INT16_MIN;
	int32_t t43 = -289047958;

	t43 = ((x209^(x210+x211))<x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x214 = INT8_MIN;
	volatile int8_t x215 = INT8_MIN;
	uint64_t x216 = 84872952353538LLU;
	static int32_t t44 = -9317;

	t44 = ((x213^(x214+x215))<x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x221 = -2;
	volatile int8_t x222 = INT8_MIN;
	int32_t x224 = -1;
	int32_t t45 = -36;

	t45 = ((x221^(x222+x223))<x224);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = INT64_MAX;
	int8_t x226 = INT8_MIN;
	static uint16_t x227 = 5U;
	int8_t x228 = 21;
	volatile int32_t t46 = -1193;

	t46 = ((x225^(x226+x227))<x228);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x230 = 195U;
	int64_t x231 = -1LL;
	int16_t x232 = INT16_MAX;
	int32_t t47 = 1;

	t47 = ((x229^(x230+x231))<x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x233 = 36918466789LLU;
	uint8_t x234 = 0U;
	static volatile int64_t x235 = -1LL;
	uint8_t x236 = UINT8_MAX;

	t48 = ((x233^(x234+x235))<x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x239 = -1;
	static uint8_t x240 = 71U;
	int32_t t49 = -388421499;

	t49 = ((x237^(x238+x239))<x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = 240;
	int8_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	uint64_t x244 = UINT64_MAX;
	int32_t t50 = -6584773;

	t50 = ((x241^(x242+x243))<x244);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x245 = 377LLU;
	int64_t x246 = INT64_MIN;
	volatile uint16_t x247 = 1U;
	int32_t t51 = 4907364;

	t51 = ((x245^(x246+x247))<x248);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = -868281LL;
	int16_t x250 = 0;
	static uint64_t x251 = 1969140173913LLU;
	uint8_t x252 = 0U;
	int32_t t52 = 1;

	t52 = ((x249^(x250+x251))<x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	static volatile int8_t x256 = 2;
	volatile int32_t t53 = 2556454;

	t53 = ((x253^(x254+x255))<x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x257 = 309015U;
	uint32_t x258 = UINT32_MAX;
	int64_t x259 = -1LL;
	int8_t x260 = INT8_MAX;

	t54 = ((x257^(x258+x259))<x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {


	t55 = ((x261^(x262+x263))<x264);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = 240132247625LLU;
	uint32_t x266 = 40U;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = INT64_MIN;
	static int32_t t56 = -4421271;

	t56 = ((x265^(x266+x267))<x268);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = INT32_MIN;
	volatile int64_t x274 = INT64_MAX;
	int16_t x275 = -1336;
	static int16_t x276 = -3143;
	int32_t t57 = 1;

	t57 = ((x273^(x274+x275))<x276);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = INT32_MAX;
	uint32_t x278 = 55318U;
	int8_t x279 = -1;
	static int32_t x280 = INT32_MAX;
	volatile int32_t t58 = -1000;

	t58 = ((x277^(x278+x279))<x280);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = INT64_MIN;
	volatile int16_t x282 = INT16_MIN;
	int8_t x284 = 1;
	int32_t t59 = -5;

	t59 = ((x281^(x282+x283))<x284);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x285 = UINT8_MAX;
	int16_t x286 = 23;
	int64_t x288 = INT64_MIN;
	volatile int32_t t60 = -243104;

	t60 = ((x285^(x286+x287))<x288);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x289 = 35U;
	int32_t x291 = -1;
	volatile int16_t x292 = -1;
	int32_t t61 = 7295070;

	t61 = ((x289^(x290+x291))<x292);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x293 = 48U;
	volatile uint64_t x294 = 4306LLU;
	uint64_t x295 = 3968819479LLU;
	int32_t t62 = -15;

	t62 = ((x293^(x294+x295))<x296);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x300 = INT32_MIN;
	static int32_t t63 = 1599474;

	t63 = ((x297^(x298+x299))<x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x301 = 133U;
	volatile int32_t x302 = -1;
	int64_t x304 = -16392010LL;
	volatile int32_t t64 = 31328;

	t64 = ((x301^(x302+x303))<x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x305 = -677;
	int64_t x306 = INT64_MAX;
	int16_t x307 = -1;
	int8_t x308 = INT8_MAX;
	int32_t t65 = 3673815;

	t65 = ((x305^(x306+x307))<x308);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x313 = INT16_MIN;
	int32_t t66 = -6446036;

	t66 = ((x313^(x314+x315))<x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x317 = 8011U;
	uint32_t x318 = 171255825U;
	int32_t x319 = -1;
	volatile int32_t t67 = 338;

	t67 = ((x317^(x318+x319))<x320);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x321 = 3U;
	volatile int16_t x322 = INT16_MAX;
	int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MIN;

	t68 = ((x321^(x322+x323))<x324);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = INT64_MAX;
	static uint64_t x326 = UINT64_MAX;
	volatile uint64_t x327 = 437855396415840197LLU;
	int32_t x328 = INT32_MIN;

	t69 = ((x325^(x326+x327))<x328);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = 1016588;
	volatile int32_t x330 = -1;
	volatile uint64_t x331 = 19192161505045570LLU;
	int32_t t70 = 0;

	t70 = ((x329^(x330+x331))<x332);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = -8278;
	int16_t x334 = INT16_MAX;
	volatile uint16_t x335 = 29667U;
	int8_t x336 = 0;

	t71 = ((x333^(x334+x335))<x336);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x337 = 14193U;
	uint16_t x338 = 0U;
	uint16_t x339 = 0U;
	int8_t x340 = INT8_MAX;
	int32_t t72 = 841287426;

	t72 = ((x337^(x338+x339))<x340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x341 = INT32_MAX;
	uint32_t x343 = UINT32_MAX;

	t73 = ((x341^(x342+x343))<x344);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = -1;
	int64_t x346 = 228586640233089275LL;
	int16_t x348 = -1;
	volatile int32_t t74 = -114844942;

	t74 = ((x345^(x346+x347))<x348);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x350 = -2;
	uint16_t x351 = 28725U;
	uint8_t x352 = 89U;
	int32_t t75 = 163347120;

	t75 = ((x349^(x350+x351))<x352);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = -1;
	static int8_t x354 = -2;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t76 = -521209;

	t76 = ((x353^(x354+x355))<x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = -1LL;
	uint16_t x358 = 556U;
	uint8_t x360 = 0U;
	int32_t t77 = -8236;

	t77 = ((x357^(x358+x359))<x360);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MIN;
	static uint8_t x363 = 0U;
	static volatile uint64_t x364 = UINT64_MAX;

	t78 = ((x361^(x362+x363))<x364);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x366 = 799111182U;
	int32_t x367 = -1;
	volatile int16_t x368 = 370;

	t79 = ((x365^(x366+x367))<x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x370 = -1;
	static uint16_t x371 = 1U;
	volatile int64_t x372 = -2564275625LL;
	volatile int32_t t80 = 200507;

	t80 = ((x369^(x370+x371))<x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = INT16_MAX;
	int32_t x374 = -1;
	volatile int64_t x375 = INT64_MAX;
	int64_t x376 = INT64_MAX;
	int32_t t81 = -26;

	t81 = ((x373^(x374+x375))<x376);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = INT8_MAX;
	uint64_t x378 = 58LLU;
	volatile int32_t x379 = INT32_MAX;
	volatile int32_t t82 = 300481;

	t82 = ((x377^(x378+x379))<x380);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x381 = INT16_MIN;
	static volatile int64_t x382 = -71LL;
	static uint16_t x383 = UINT16_MAX;
	int32_t x384 = INT32_MAX;
	volatile int32_t t83 = -514744;

	t83 = ((x381^(x382+x383))<x384);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MIN;
	int32_t x386 = INT32_MIN;
	static uint16_t x388 = UINT16_MAX;
	static volatile int32_t t84 = -2265512;

	t84 = ((x385^(x386+x387))<x388);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x389 = 0;
	int16_t x390 = INT16_MIN;
	uint16_t x391 = 25U;
	int8_t x392 = INT8_MIN;
	int32_t t85 = -157649;

	t85 = ((x389^(x390+x391))<x392);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x397 = INT32_MIN;
	int8_t x398 = INT8_MIN;
	volatile uint32_t x399 = 679940U;
	volatile int8_t x400 = 0;
	volatile int32_t t86 = -76;

	t86 = ((x397^(x398+x399))<x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = -1;
	int8_t x406 = INT8_MIN;
	static volatile int32_t x407 = -405;
	int32_t x408 = 0;
	int32_t t87 = 1;

	t87 = ((x405^(x406+x407))<x408);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x409 = INT32_MIN;
	uint8_t x410 = 1U;
	int8_t x411 = INT8_MAX;
	int32_t x412 = INT32_MAX;
	volatile int32_t t88 = 1;

	t88 = ((x409^(x410+x411))<x412);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = -1;
	int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MAX;
	int8_t x420 = INT8_MIN;
	int32_t t89 = 7;

	t89 = ((x417^(x418+x419))<x420);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x421 = -1;
	int8_t x422 = INT8_MAX;
	int16_t x423 = INT16_MAX;
	volatile int16_t x424 = INT16_MAX;
	static int32_t t90 = 1989050;

	t90 = ((x421^(x422+x423))<x424);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x430 = INT8_MAX;
	int16_t x431 = -1;
	volatile int32_t x432 = INT32_MIN;

	t91 = ((x429^(x430+x431))<x432);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x433 = 240923682U;
	int16_t x434 = INT16_MIN;
	int32_t x435 = -1;
	int32_t x436 = INT32_MAX;
	static volatile int32_t t92 = -808936079;

	t92 = ((x433^(x434+x435))<x436);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x439 = 5;
	static int16_t x440 = INT16_MIN;
	volatile int32_t t93 = 3589347;

	t93 = ((x437^(x438+x439))<x440);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x441 = 25456204182443LLU;
	int16_t x442 = INT16_MIN;
	uint16_t x443 = UINT16_MAX;
	uint16_t x444 = 4U;
	volatile int32_t t94 = -7770322;

	t94 = ((x441^(x442+x443))<x444);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x447 = INT16_MIN;
	uint16_t x448 = 9243U;
	int32_t t95 = -32154;

	t95 = ((x445^(x446+x447))<x448);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x450 = 100U;
	int32_t x452 = INT32_MAX;
	int32_t t96 = 7093;

	t96 = ((x449^(x450+x451))<x452);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = INT32_MIN;
	static volatile int32_t x454 = 33652297;
	uint64_t x455 = 359194LLU;
	int32_t x456 = INT32_MAX;
	volatile int32_t t97 = 9376417;

	t97 = ((x453^(x454+x455))<x456);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x457 = INT32_MAX;
	int64_t x458 = -5034233590083420LL;
	uint16_t x459 = 5273U;
	int8_t x460 = INT8_MAX;
	volatile int32_t t98 = -1967114;

	t98 = ((x457^(x458+x459))<x460);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x462 = 3719U;
	int64_t x463 = 3607389456168073403LL;
	int8_t x464 = INT8_MAX;
	int32_t t99 = -29255349;

	t99 = ((x461^(x462+x463))<x464);

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
