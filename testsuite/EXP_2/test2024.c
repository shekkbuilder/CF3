#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -70215908;
int64_t x10 = INT64_MIN;
static volatile int32_t t3 = 3292566;
uint32_t x17 = 3U;
int16_t x19 = INT16_MIN;
int16_t x20 = INT16_MAX;
static volatile int8_t x21 = INT8_MIN;
int8_t x59 = -1;
uint64_t x63 = UINT64_MAX;
int8_t x67 = INT8_MIN;
volatile int32_t t18 = -826205826;
int64_t x81 = -114829LL;
int16_t x87 = INT16_MIN;
static int32_t t21 = -184496;
int64_t x95 = -1LL;
int16_t x96 = 3;
volatile int64_t x98 = INT64_MIN;
int64_t x99 = -1LL;
volatile int8_t x102 = 0;
uint8_t x103 = UINT8_MAX;
int32_t t26 = 4;
uint8_t x110 = UINT8_MAX;
int8_t x112 = INT8_MAX;
uint16_t x118 = 2U;
int16_t x123 = INT16_MAX;
int8_t x125 = -2;
int32_t t31 = -261;
uint64_t x130 = UINT64_MAX;
int64_t x132 = 1493982315LL;
static volatile uint16_t x136 = UINT16_MAX;
volatile int32_t t33 = 150116;
int64_t x137 = INT64_MIN;
uint16_t x138 = 23244U;
int32_t x140 = 57;
volatile int32_t x147 = -5329;
int64_t x148 = 456808613LL;
volatile int32_t t37 = 10;
volatile int32_t t38 = 385237216;
int16_t x160 = INT16_MIN;
int32_t x162 = -7157;
volatile int32_t x163 = INT32_MAX;
int16_t x169 = INT16_MIN;
uint32_t x188 = 203756390U;
int32_t t46 = 149;
volatile uint16_t x192 = UINT16_MAX;
int32_t x196 = INT32_MIN;
uint32_t x206 = 6705U;
int64_t x207 = -1LL;
static int16_t x209 = INT16_MIN;
static int32_t t53 = -4;
uint16_t x220 = 2621U;
volatile uint32_t x221 = 188U;
uint64_t x223 = 720LLU;
uint32_t x231 = 89441U;
int16_t x232 = -287;
uint16_t x234 = 163U;
uint32_t x235 = 22356U;
int32_t t58 = -29655888;
static int8_t x237 = INT8_MIN;
int8_t x240 = -1;
uint16_t x242 = 112U;
volatile uint16_t x246 = 12992U;
int32_t t62 = -2822199;
int32_t x253 = 1379;
uint64_t x255 = 2452031LLU;
static int8_t x264 = INT8_MAX;
uint32_t x268 = 475250630U;
int32_t t66 = -77887348;
volatile int32_t t67 = -2;
static int64_t x273 = INT64_MIN;
int64_t x275 = -1421498LL;
uint32_t x281 = 492033105U;
static int8_t x288 = -1;
static volatile int16_t x289 = INT16_MIN;
uint16_t x292 = 24032U;
int8_t x293 = -1;
int8_t x295 = INT8_MAX;
volatile int32_t t73 = 4338;
uint16_t x308 = UINT16_MAX;
int16_t x311 = INT16_MIN;
int32_t x322 = 0;
int8_t x323 = INT8_MAX;
int8_t x332 = INT8_MIN;
int32_t t82 = 271811;
uint8_t x335 = 3U;
int64_t x336 = INT64_MAX;
volatile int16_t x337 = -9181;
int8_t x338 = INT8_MIN;
volatile uint16_t x342 = 27U;
static volatile int32_t t85 = -2;
int32_t x349 = -124720;
static int32_t x352 = INT32_MIN;
static int16_t x353 = -1;
int16_t x357 = INT16_MIN;
int8_t x358 = INT8_MAX;
int16_t x359 = INT16_MIN;
int64_t x360 = INT64_MIN;
volatile int32_t t90 = -256600;
static int32_t x372 = -147314;
int16_t x374 = INT16_MAX;
int8_t x377 = -1;
uint16_t x380 = UINT16_MAX;
volatile int32_t t94 = -86527555;
static uint32_t x381 = 6020776U;
volatile uint64_t x386 = 9968LLU;
static uint64_t x388 = 66872189134798858LLU;
int8_t x390 = 62;
volatile int16_t x394 = -1;
static int8_t x399 = -1;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int32_t x2 = INT32_MAX;
	volatile uint32_t x3 = UINT32_MAX;
	int64_t x4 = INT64_MAX;
	static volatile int32_t t0 = -21;

	t0 = ((x1^(x2|x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	int16_t x6 = INT16_MAX;
	volatile int16_t x7 = INT16_MIN;
	volatile uint16_t x8 = 10567U;

	t1 = ((x5^(x6|x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int8_t x11 = INT8_MAX;
	static int32_t x12 = INT32_MIN;
	int32_t t2 = -29871583;

	t2 = ((x9^(x10|x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MAX;
	static int16_t x16 = INT16_MAX;

	t3 = ((x13^(x14|x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x18 = 6084U;
	volatile int32_t t4 = -61;

	t4 = ((x17^(x18|x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 143727958U;
	int32_t x23 = 0;
	volatile int8_t x24 = -1;
	int32_t t5 = 2636484;

	t5 = ((x21^(x22|x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 184621LLU;
	int32_t x26 = INT32_MIN;
	int64_t x27 = -1LL;
	uint32_t x28 = UINT32_MAX;
	static volatile int32_t t6 = -7865;

	t6 = ((x25^(x26|x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 12479523457276LLU;
	uint32_t x30 = 3872U;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -138418024;

	t7 = ((x29^(x30|x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile uint16_t x34 = 3U;
	int16_t x35 = INT16_MAX;
	uint32_t x36 = 1432756U;
	volatile int32_t t8 = -203;

	t8 = ((x33^(x34|x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile int16_t x38 = -3;
	static uint32_t x39 = 77587538U;
	int8_t x40 = -1;
	int32_t t9 = -7890;

	t9 = ((x37^(x38|x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	static int32_t x42 = INT32_MIN;
	static int64_t x43 = INT64_MIN;
	static int16_t x44 = -1;
	volatile int32_t t10 = 0;

	t10 = ((x41^(x42|x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 15620;
	static uint64_t x46 = UINT64_MAX;
	int8_t x47 = INT8_MAX;
	static uint8_t x48 = 48U;
	int32_t t11 = 16;

	t11 = ((x45^(x46|x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 11U;
	volatile int64_t x50 = INT64_MIN;
	volatile int64_t x51 = -318LL;
	static uint64_t x52 = UINT64_MAX;
	static int32_t t12 = 0;

	t12 = ((x49^(x50|x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int16_t x54 = INT16_MAX;
	static int32_t x55 = INT32_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = 8278;

	t13 = ((x53^(x54|x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	static uint16_t x58 = UINT16_MAX;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 64;

	t14 = ((x57^(x58|x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -5;
	uint64_t x62 = UINT64_MAX;
	int16_t x64 = -21;
	volatile int32_t t15 = -285500;

	t15 = ((x61^(x62|x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	static int64_t x66 = -1LL;
	volatile uint32_t x68 = 1417587735U;
	volatile int32_t t16 = 37258;

	t16 = ((x65^(x66|x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint32_t x70 = 197607700U;
	int8_t x71 = INT8_MIN;
	volatile int8_t x72 = INT8_MAX;
	volatile int32_t t17 = -315;

	t17 = ((x69^(x70|x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	uint16_t x74 = 22585U;
	static int16_t x75 = INT16_MIN;
	volatile int64_t x76 = -4027147481337901697LL;

	t18 = ((x73^(x74|x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -15636571;
	static int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MIN;
	static volatile uint64_t x80 = UINT64_MAX;
	int32_t t19 = -8037;

	t19 = ((x77^(x78|x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x82 = INT8_MAX;
	volatile int64_t x83 = -1LL;
	static volatile int64_t x84 = -160LL;
	int32_t t20 = -551;

	t20 = ((x81^(x82|x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	uint16_t x86 = UINT16_MAX;
	int8_t x88 = INT8_MIN;

	t21 = ((x85^(x86|x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 0LLU;
	uint8_t x90 = 15U;
	volatile uint8_t x91 = 2U;
	uint32_t x92 = 779129262U;
	volatile int32_t t22 = -80;

	t22 = ((x89^(x90|x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	static uint16_t x94 = UINT16_MAX;
	volatile int32_t t23 = -626360936;

	t23 = ((x93^(x94|x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int16_t x100 = -1;
	int32_t t24 = -13;

	t24 = ((x97^(x98|x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	int64_t x104 = -56546030757613LL;
	volatile int32_t t25 = 0;

	t25 = ((x101^(x102|x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int64_t x106 = -35039LL;
	static volatile int64_t x107 = 957314928LL;
	volatile int8_t x108 = 34;

	t26 = ((x105^(x106|x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -33;
	static int32_t x111 = 13813;
	static volatile int32_t t27 = -884;

	t27 = ((x109^(x110|x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	uint8_t x114 = 45U;
	int16_t x115 = INT16_MIN;
	int8_t x116 = -2;
	volatile int32_t t28 = -1;

	t28 = ((x113^(x114|x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 0;
	static uint16_t x119 = UINT16_MAX;
	int8_t x120 = -2;
	int32_t t29 = -246435;

	t29 = ((x117^(x118|x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	uint16_t x122 = 756U;
	uint8_t x124 = 1U;
	volatile int32_t t30 = 4;

	t30 = ((x121^(x122|x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MIN;
	uint64_t x127 = 525140LLU;
	uint8_t x128 = UINT8_MAX;

	t31 = ((x125^(x126|x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int64_t x131 = INT64_MIN;
	static int32_t t32 = 5980;

	t32 = ((x129^(x130|x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	int16_t x134 = 2;
	uint16_t x135 = 1U;

	t33 = ((x133^(x134|x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = -1;
	int32_t t34 = 59;

	t34 = ((x137^(x138|x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -705358;
	int16_t x142 = -6782;
	int8_t x143 = INT8_MIN;
	static volatile int64_t x144 = INT64_MIN;
	static volatile int32_t t35 = 1;

	t35 = ((x141^(x142|x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MAX;
	uint64_t x146 = 6432389979205LLU;
	volatile int32_t t36 = 9354;

	t36 = ((x145^(x146|x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = INT64_MIN;
	volatile uint64_t x151 = 2084830495934364200LLU;
	uint32_t x152 = 3U;

	t37 = ((x149^(x150|x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 1U;
	uint16_t x154 = 258U;
	int32_t x155 = INT32_MIN;
	uint32_t x156 = UINT32_MAX;

	t38 = ((x153^(x154|x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MAX;
	static int32_t x158 = -25989;
	static int32_t x159 = 209551;
	volatile int32_t t39 = 4607;

	t39 = ((x157^(x158|x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 12U;
	volatile int64_t x164 = INT64_MAX;
	int32_t t40 = 23014;

	t40 = ((x161^(x162|x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 4U;
	uint64_t x166 = 2642074052032035LLU;
	int32_t x167 = INT32_MAX;
	int16_t x168 = -1;
	static int32_t t41 = 87;

	t41 = ((x165^(x166|x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x170 = -1;
	int32_t x171 = INT32_MIN;
	static uint16_t x172 = 3U;
	volatile int32_t t42 = 34446;

	t42 = ((x169^(x170|x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 79U;
	int8_t x174 = INT8_MIN;
	int8_t x175 = -1;
	uint16_t x176 = 23126U;
	static int32_t t43 = 25778;

	t43 = ((x173^(x174|x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -2022810;
	int8_t x178 = INT8_MIN;
	static int64_t x179 = 2044933641687LL;
	int64_t x180 = 1LL;
	int32_t t44 = -12;

	t44 = ((x177^(x178|x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = -2LL;
	static int32_t x183 = INT32_MIN;
	static uint64_t x184 = 522047838LLU;
	volatile int32_t t45 = -81660;

	t45 = ((x181^(x182|x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = -1;
	int16_t x186 = -252;
	uint64_t x187 = UINT64_MAX;

	t46 = ((x185^(x186|x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	int32_t x190 = -1;
	int16_t x191 = -13;
	volatile int32_t t47 = -1608;

	t47 = ((x189^(x190|x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 107U;
	int64_t x194 = INT64_MIN;
	int64_t x195 = INT64_MAX;
	static int32_t t48 = 3;

	t48 = ((x193^(x194|x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -12;
	volatile int32_t x198 = -753;
	uint8_t x199 = UINT8_MAX;
	static volatile int8_t x200 = INT8_MAX;
	int32_t t49 = 807044176;

	t49 = ((x197^(x198|x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	int16_t x202 = 1;
	static volatile int64_t x203 = INT64_MIN;
	volatile int64_t x204 = INT64_MIN;
	int32_t t50 = 2146634;

	t50 = ((x201^(x202|x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = UINT16_MAX;
	static uint8_t x208 = UINT8_MAX;
	int32_t t51 = -6253;

	t51 = ((x205^(x206|x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = -1;
	volatile uint64_t x211 = UINT64_MAX;
	volatile int64_t x212 = -1LL;
	volatile int32_t t52 = 278207;

	t52 = ((x209^(x210|x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 3U;
	uint8_t x214 = 61U;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = INT8_MAX;

	t53 = ((x213^(x214|x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 63;
	volatile int64_t x218 = INT64_MAX;
	static int16_t x219 = 206;
	static volatile int32_t t54 = 2131;

	t54 = ((x217^(x218|x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = -1;
	uint64_t x224 = 848087189862270LLU;
	int32_t t55 = -55677;

	t55 = ((x221^(x222|x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int64_t x226 = -1LL;
	static int16_t x227 = -1;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t56 = 121;

	t56 = ((x225^(x226|x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	static int64_t x230 = INT64_MIN;
	int32_t t57 = 0;

	t57 = ((x229^(x230|x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	static uint16_t x236 = UINT16_MAX;

	t58 = ((x233^(x234|x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	static int16_t x239 = 7962;
	int32_t t59 = 2068742;

	t59 = ((x237^(x238|x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 993997754665LL;
	int32_t x243 = -1;
	int16_t x244 = INT16_MIN;
	int32_t t60 = 121;

	t60 = ((x241^(x242|x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	uint8_t x247 = 15U;
	static volatile uint8_t x248 = 3U;
	volatile int32_t t61 = -121273;

	t61 = ((x245^(x246|x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static int16_t x250 = INT16_MIN;
	static uint64_t x251 = 138611752859043417LLU;
	volatile int8_t x252 = -2;

	t62 = ((x249^(x250|x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = -1;
	static uint32_t x256 = 100213U;
	int32_t t63 = 1523275;

	t63 = ((x253^(x254|x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = -1;
	int8_t x258 = INT8_MIN;
	static volatile int8_t x259 = INT8_MAX;
	static uint32_t x260 = UINT32_MAX;
	int32_t t64 = 44888;

	t64 = ((x257^(x258|x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 1U;
	int16_t x262 = -783;
	int32_t x263 = 616165;
	static volatile int32_t t65 = -1;

	t65 = ((x261^(x262|x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int32_t x266 = INT32_MIN;
	uint32_t x267 = 2111917562U;

	t66 = ((x265^(x266|x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -41;
	int32_t x270 = 1;
	volatile int8_t x271 = INT8_MIN;
	uint64_t x272 = UINT64_MAX;

	t67 = ((x269^(x270|x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x274 = 617707U;
	int32_t x276 = 13;
	int32_t t68 = 81282408;

	t68 = ((x273^(x274|x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 11U;
	int16_t x278 = INT16_MIN;
	static int64_t x279 = 11021272LL;
	volatile int8_t x280 = -1;
	volatile int32_t t69 = -4;

	t69 = ((x277^(x278|x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x282 = 7735;
	volatile int32_t x283 = -1;
	uint16_t x284 = 93U;
	volatile int32_t t70 = 155870932;

	t70 = ((x281^(x282|x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	int32_t x286 = INT32_MAX;
	uint16_t x287 = 39U;
	int32_t t71 = 1;

	t71 = ((x285^(x286|x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MIN;
	int32_t t72 = -448;

	t72 = ((x289^(x290|x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x294 = -7608;
	volatile uint16_t x296 = UINT16_MAX;

	t73 = ((x293^(x294|x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	volatile int8_t x298 = -13;
	int16_t x299 = INT16_MIN;
	uint64_t x300 = UINT64_MAX;
	int32_t t74 = 558868;

	t74 = ((x297^(x298|x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int32_t x302 = -90562978;
	static uint8_t x303 = UINT8_MAX;
	static uint64_t x304 = 1685280198586397766LLU;
	volatile int32_t t75 = 675363;

	t75 = ((x301^(x302|x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MAX;
	volatile int32_t t76 = -3;

	t76 = ((x305^(x306|x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	static int32_t x310 = INT32_MAX;
	volatile uint16_t x312 = 9U;
	int32_t t77 = 324629824;

	t77 = ((x309^(x310|x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 52U;
	int8_t x314 = INT8_MAX;
	static uint16_t x315 = 16146U;
	int32_t x316 = INT32_MIN;
	int32_t t78 = -945696;

	t78 = ((x313^(x314|x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = UINT8_MAX;
	int64_t x318 = -1LL;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	int32_t t79 = -382975;

	t79 = ((x317^(x318|x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	static int32_t x324 = 720;
	volatile int32_t t80 = 47659442;

	t80 = ((x321^(x322|x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -326795222652571747LL;
	static volatile int16_t x326 = 9;
	uint32_t x327 = 7255835U;
	volatile int64_t x328 = 0LL;
	volatile int32_t t81 = -4956;

	t81 = ((x325^(x326|x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = UINT8_MAX;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = -228243489457864LL;

	t82 = ((x329^(x330|x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MIN;
	volatile uint64_t x334 = 825962117531872LLU;
	int32_t t83 = -27879086;

	t83 = ((x333^(x334|x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x339 = 1683U;
	uint32_t x340 = 331370818U;
	static volatile int32_t t84 = -497;

	t84 = ((x337^(x338|x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 498097;
	uint64_t x343 = UINT64_MAX;
	uint8_t x344 = UINT8_MAX;

	t85 = ((x341^(x342|x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 515788711684483759LLU;
	uint8_t x346 = UINT8_MAX;
	static int64_t x347 = 59942351382LL;
	static int64_t x348 = -6843414LL;
	int32_t t86 = 3;

	t86 = ((x345^(x346|x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = UINT64_MAX;
	uint32_t x351 = 0U;
	static volatile int32_t t87 = 160417815;

	t87 = ((x349^(x350|x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MAX;
	volatile uint64_t x355 = 53028129LLU;
	static int16_t x356 = INT16_MAX;
	volatile int32_t t88 = -138539;

	t88 = ((x353^(x354|x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t t89 = 71;

	t89 = ((x357^(x358|x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	uint16_t x362 = 0U;
	int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MIN;

	t90 = ((x361^(x362|x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = INT16_MAX;
	uint16_t x366 = UINT16_MAX;
	int8_t x367 = INT8_MIN;
	int32_t x368 = -69219484;
	int32_t t91 = 6715;

	t91 = ((x365^(x366|x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = INT16_MIN;
	int32_t x370 = -1;
	int8_t x371 = INT8_MIN;
	static volatile int32_t t92 = 1021;

	t92 = ((x369^(x370|x371))<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 1U;
	int8_t x375 = INT8_MIN;
	volatile uint8_t x376 = 15U;
	int32_t t93 = -10750;

	t93 = ((x373^(x374|x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = 84U;
	uint16_t x379 = 535U;

	t94 = ((x377^(x378|x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x382 = 244U;
	uint16_t x383 = 56U;
	static int64_t x384 = -4462LL;
	int32_t t95 = 15972827;

	t95 = ((x381^(x382|x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	int32_t t96 = -22960;

	t96 = ((x385^(x386|x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int32_t x391 = 9814;
	static uint16_t x392 = 3965U;
	volatile int32_t t97 = 1260;

	t97 = ((x389^(x390|x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	volatile uint8_t x395 = 8U;
	int8_t x396 = INT8_MAX;
	static volatile int32_t t98 = -47912398;

	t98 = ((x393^(x394|x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 2U;
	static uint32_t x398 = UINT32_MAX;
	uint16_t x400 = 841U;
	volatile int32_t t99 = -687868;

	t99 = ((x397^(x398|x399))<x400);

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
