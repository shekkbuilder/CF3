#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = 532804168LLU;
uint64_t t1 = 640LLU;
static int8_t x22 = INT8_MIN;
int64_t x28 = 38751250LL;
volatile int64_t x30 = -13846738809653506LL;
uint64_t x33 = 129527LLU;
int32_t x42 = 1381915;
volatile uint64_t t12 = 13149859587312LLU;
int16_t x56 = INT16_MIN;
volatile int8_t x60 = INT8_MIN;
volatile uint64_t t14 = 61045LLU;
int32_t x62 = INT32_MIN;
uint64_t t15 = 210420128264041LLU;
int16_t x70 = -1;
static volatile int8_t x72 = 0;
int64_t x76 = INT64_MAX;
uint16_t x86 = UINT16_MAX;
int16_t x89 = -1885;
volatile int8_t x96 = 7;
int16_t x101 = INT16_MIN;
static int8_t x108 = INT8_MIN;
static volatile int32_t t26 = -104575813;
volatile int64_t x115 = -1LL;
int64_t x118 = INT64_MIN;
uint16_t x126 = 504U;
int32_t x127 = INT32_MAX;
int32_t x134 = INT32_MIN;
volatile uint16_t x137 = 6760U;
int8_t x153 = 0;
int8_t x159 = INT8_MAX;
static volatile int32_t x162 = 850927;
volatile uint64_t t40 = 4403665451545132177LLU;
uint8_t x171 = 112U;
static int64_t x176 = -234405LL;
int64_t t43 = -3186LL;
int64_t t44 = 75LL;
int16_t x182 = INT16_MIN;
volatile int32_t t45 = -233;
int8_t x188 = INT8_MIN;
uint32_t x189 = UINT32_MAX;
volatile int64_t t47 = 196739512059LL;
uint64_t x196 = 57LLU;
volatile int16_t x207 = INT16_MIN;
int8_t x208 = -1;
int64_t x215 = INT64_MIN;
volatile int32_t x220 = -6;
volatile uint64_t t54 = 42LLU;
int16_t x222 = 48;
int64_t x224 = INT64_MAX;
volatile int16_t x230 = 289;
static int32_t x244 = -1;
int16_t x245 = 0;
int8_t x247 = -1;
volatile int16_t x248 = -2321;
int32_t t61 = 115;
int8_t x252 = 2;
static int16_t x253 = 109;
int32_t x263 = -1;
int8_t x270 = INT8_MAX;
int64_t x277 = -349523810018600170LL;
int64_t t69 = 11975628LL;
uint8_t x281 = UINT8_MAX;
int32_t x283 = INT32_MIN;
int16_t x286 = 5;
uint16_t x294 = 58U;
int32_t x296 = -1090;
volatile int64_t t73 = -1362953320486LL;
int64_t x303 = -2LL;
int64_t t75 = 12778LL;
uint64_t x305 = UINT64_MAX;
volatile int32_t x312 = -1;
int64_t x313 = INT64_MIN;
volatile int64_t x314 = INT64_MAX;
uint16_t x322 = UINT16_MAX;
int64_t x324 = 51168330LL;
static int32_t x327 = 0;
int64_t t81 = -512702838LL;
uint64_t x329 = UINT64_MAX;
uint64_t t82 = 3LLU;
int64_t t83 = -3016473LL;
volatile uint64_t t84 = 322725964420LLU;
int8_t x351 = INT8_MIN;
int8_t x353 = INT8_MIN;
uint8_t x358 = 1U;
static int64_t x359 = 51266LL;
uint8_t x363 = UINT8_MAX;
volatile int8_t x368 = -1;
int64_t t92 = -13246034116860116LL;
uint32_t x376 = UINT32_MAX;
static int32_t t94 = -119450150;
int64_t t95 = -242144LL;
volatile int8_t x385 = -1;
int8_t x386 = -58;
int16_t x387 = INT16_MAX;
uint8_t x395 = 8U;
uint8_t x398 = 1U;


void f0(void) {
	int16_t x1 = -26;
	uint32_t x2 = UINT32_MAX;
	uint16_t x3 = UINT16_MAX;
	volatile uint32_t x4 = 12349036U;
	static volatile uint32_t t0 = 203030U;

	t0 = (((x1&x2)^x3)&x4);

	if (t0 != 12320776U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MIN;

	t1 = (((x5&x6)^x7)&x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 259207983474692LLU;
	int8_t x10 = 8;
	static uint64_t x11 = 250605657342590LLU;
	int8_t x12 = -1;
	uint64_t t2 = 1962LLU;

	t2 = (((x9&x10)^x11)&x12);

	if (t2 != 250605657342590LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1U;
	static uint16_t x14 = 1U;
	int32_t x15 = INT32_MIN;
	static int64_t x16 = 2022805LL;
	static volatile int64_t t3 = 26236819961730012LL;

	t3 = (((x13&x14)^x15)&x16);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -2652;
	static int8_t x18 = INT8_MAX;
	volatile int32_t x19 = -552;
	volatile int32_t x20 = INT32_MIN;
	volatile int32_t t4 = INT32_MIN;

	t4 = (((x17&x18)^x19)&x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	static int32_t x23 = INT32_MAX;
	int64_t x24 = INT64_MIN;
	int64_t t5 = 1196LL;

	t5 = (((x21&x22)^x23)&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 1310U;
	uint8_t x26 = UINT8_MAX;
	int8_t x27 = -1;
	volatile int64_t t6 = -6033LL;

	t6 = (((x25&x26)^x27)&x28);

	if (t6 != 38751232LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint8_t x31 = 13U;
	uint64_t x32 = 5345LLU;
	uint64_t t7 = 1577LLU;

	t7 = (((x29&x30)^x31)&x32);

	if (t7 != 5345LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	volatile int16_t x35 = INT16_MAX;
	int32_t x36 = 10312996;
	volatile uint64_t t8 = 232525290823096LLU;

	t8 = (((x33&x34)^x35)&x36);

	if (t8 != 89380LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int32_t x38 = INT32_MIN;
	uint8_t x39 = 1U;
	volatile int16_t x40 = -1;
	static int32_t t9 = -28835205;

	t9 = (((x37&x38)^x39)&x40);

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x43 = UINT64_MAX;
	static int64_t x44 = -1LL;
	volatile uint64_t t10 = 36583LLU;

	t10 = (((x41&x42)^x43)&x44);

	if (t10 != 18446744073708169727LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x45 = INT64_MIN;
	uint16_t x46 = 533U;
	volatile uint16_t x47 = UINT16_MAX;
	static uint16_t x48 = UINT16_MAX;
	int64_t t11 = -9568123035778LL;

	t11 = (((x45&x46)^x47)&x48);

	if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	uint64_t x50 = 77019442942763LLU;
	int8_t x51 = INT8_MAX;
	static volatile int8_t x52 = -1;

	t12 = (((x49&x50)^x51)&x52);

	if (t12 != 2089390932LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = 3;
	int32_t x54 = -1;
	volatile int8_t x55 = INT8_MIN;
	volatile int32_t t13 = 797;

	t13 = (((x53&x54)^x55)&x56);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = INT8_MAX;
	int64_t x58 = INT64_MIN;
	uint64_t x59 = 112415186939138554LLU;

	t14 = (((x57&x58)^x59)&x60);

	if (t14 != 112415186939138432LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = UINT32_MAX;
	int16_t x63 = INT16_MIN;
	uint64_t x64 = UINT64_MAX;

	t15 = (((x61&x62)^x63)&x64);

	if (t15 != 2147450880LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MAX;
	static uint32_t x68 = 1U;
	uint32_t t16 = 1358390447U;

	t16 = (((x65&x66)^x67)&x68);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -1;
	int16_t x71 = INT16_MIN;
	volatile int32_t t17 = -10575;

	t17 = (((x69&x70)^x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int16_t x74 = -189;
	static volatile int64_t x75 = -208LL;
	int64_t t18 = 26611471129617LL;

	t18 = (((x73&x74)^x75)&x76);

	if (t18 != 115LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -5146;
	int64_t x78 = -1LL;
	int8_t x79 = INT8_MAX;
	static int32_t x80 = INT32_MIN;
	volatile int64_t t19 = 29822026518422752LL;

	t19 = (((x77&x78)^x79)&x80);

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = UINT64_MAX;
	static int16_t x82 = 0;
	int16_t x83 = INT16_MIN;
	volatile int32_t x84 = INT32_MAX;
	uint64_t t20 = 35754135641211338LLU;

	t20 = (((x81&x82)^x83)&x84);

	if (t20 != 2147450880LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 372369LLU;
	int8_t x87 = -1;
	static int16_t x88 = -1139;
	volatile uint64_t t21 = 5LLU;

	t21 = (((x85&x86)^x87)&x88);

	if (t21 != 18446744073709506828LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x90 = UINT8_MAX;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = 60050797050439LLU;
	static volatile uint64_t t22 = 87202LLU;

	t22 = (((x89&x90)^x91)&x92);

	if (t22 != 60050797050371LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 53U;
	int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	static int64_t t23 = -246094003LL;

	t23 = (((x93&x94)^x95)&x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = 33U;
	int8_t x98 = -60;
	int64_t x99 = 0LL;
	int64_t x100 = INT64_MAX;
	volatile int64_t t24 = -3397278125718LL;

	t24 = (((x97&x98)^x99)&x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = 3183U;
	int16_t x103 = 1;
	int32_t x104 = 0;
	static int32_t t25 = -2404082;

	t25 = (((x101&x102)^x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = UINT8_MAX;
	int8_t x106 = 1;
	volatile int8_t x107 = INT8_MIN;

	t26 = (((x105&x106)^x107)&x108);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MIN;
	int32_t x111 = -962485;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t27 = -61912823;

	t27 = (((x109&x110)^x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MAX;
	int8_t x114 = INT8_MIN;
	uint8_t x116 = 5U;
	static int64_t t28 = 1569485088422155945LL;

	t28 = (((x113&x114)^x115)&x116);

	if (t28 != 5LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 123332815LLU;
	uint32_t x119 = 1U;
	int16_t x120 = INT16_MAX;
	volatile uint64_t t29 = 144390468377985748LLU;

	t29 = (((x117&x118)^x119)&x120);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	uint16_t x122 = UINT16_MAX;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = 7U;
	int32_t t30 = 1375;

	t30 = (((x121&x122)^x123)&x124);

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 115U;
	volatile uint32_t x128 = 1438566U;
	volatile uint32_t t31 = 1460398U;

	t31 = (((x125&x126)^x127)&x128);

	if (t31 != 1438470U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 40520435U;
	int64_t x130 = INT64_MIN;
	uint8_t x131 = 121U;
	volatile int16_t x132 = INT16_MIN;
	static volatile int64_t t32 = -7012572620934LL;

	t32 = (((x129&x130)^x131)&x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	int64_t x135 = -1LL;
	static int32_t x136 = INT32_MAX;
	volatile int64_t t33 = 3937575796782469LL;

	t33 = (((x133&x134)^x135)&x136);

	if (t33 != 2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = INT32_MIN;
	static int64_t x139 = 260844LL;
	int16_t x140 = INT16_MIN;
	volatile int64_t t34 = 1550LL;

	t34 = (((x137&x138)^x139)&x140);

	if (t34 != 229376LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	volatile int64_t x142 = INT64_MAX;
	uint32_t x143 = 161530U;
	int8_t x144 = INT8_MIN;
	volatile int64_t t35 = 196842101LL;

	t35 = (((x141&x142)^x143)&x144);

	if (t35 != 9223372036854614272LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	uint32_t x146 = 2365235U;
	int32_t x147 = -34;
	static int32_t x148 = 147775008;
	volatile uint32_t t36 = 28931U;

	t36 = (((x145&x146)^x147)&x148);

	if (t36 != 147512832U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 6U;
	static int64_t x150 = INT64_MIN;
	static int8_t x151 = 1;
	volatile int32_t x152 = INT32_MAX;
	int64_t t37 = -12034284LL;

	t37 = (((x149&x150)^x151)&x152);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x154 = INT16_MAX;
	int32_t x155 = -1;
	volatile int8_t x156 = -5;
	volatile int32_t t38 = -918;

	t38 = (((x153&x154)^x155)&x156);

	if (t38 != -5) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = 33530865666LLU;
	volatile int64_t x158 = -1LL;
	static volatile int8_t x160 = INT8_MIN;
	volatile uint64_t t39 = 3095LLU;

	t39 = (((x157&x158)^x159)&x160);

	if (t39 != 33530865664LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	uint64_t x163 = 15504058323340743LLU;
	int64_t x164 = INT64_MAX;

	t40 = (((x161&x162)^x163)&x164);

	if (t40 != 15504058323340743LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MAX;
	uint64_t x166 = 128428LLU;
	uint64_t x167 = 25558LLU;
	uint32_t x168 = 4118U;
	uint64_t t41 = 6661394309LLU;

	t41 = (((x165&x166)^x167)&x168);

	if (t41 != 4114LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -15;
	static int16_t x170 = 17;
	static volatile uint8_t x172 = UINT8_MAX;
	int32_t t42 = 6826474;

	t42 = (((x169&x170)^x171)&x172);

	if (t42 != 97) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = 24530027334717279LL;
	uint32_t x174 = 22148U;
	uint8_t x175 = 32U;

	t43 = (((x173&x174)^x175)&x176);

	if (t43 != 17408LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MIN;
	volatile int32_t x179 = 5;
	int32_t x180 = INT32_MAX;

	t44 = (((x177&x178)^x179)&x180);

	if (t44 != 5LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = 113U;
	int16_t x183 = 7;
	uint16_t x184 = UINT16_MAX;

	t45 = (((x181&x182)^x183)&x184);

	if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = 30;
	static uint16_t x186 = 5639U;
	int64_t x187 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

	t46 = (((x185&x186)^x187)&x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = UINT8_MAX;
	static int8_t x191 = INT8_MIN;
	volatile int64_t x192 = -504LL;

	t47 = (((x189&x190)^x191)&x192);

	if (t47 != 4294966792LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	int16_t x194 = -83;
	int16_t x195 = INT16_MIN;
	uint64_t t48 = 674863445168078207LLU;

	t48 = (((x193&x194)^x195)&x196);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 13U;
	volatile uint64_t x198 = UINT64_MAX;
	static uint8_t x199 = UINT8_MAX;
	volatile int32_t x200 = -1;
	uint64_t t49 = 116720690121LLU;

	t49 = (((x197&x198)^x199)&x200);

	if (t49 != 242LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	int8_t x202 = 14;
	static int32_t x203 = -1;
	volatile uint16_t x204 = 23314U;
	volatile int32_t t50 = 209138121;

	t50 = (((x201&x202)^x203)&x204);

	if (t50 != 23312) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 640967LLU;
	static int64_t x206 = INT64_MIN;
	uint64_t t51 = 1242034273479101655LLU;

	t51 = (((x205&x206)^x207)&x208);

	if (t51 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x209 = -382638410525516446LL;
	uint32_t x210 = 865U;
	int16_t x211 = INT16_MAX;
	uint64_t x212 = 4857279199482141LLU;
	volatile uint64_t t52 = 582169LLU;

	t52 = (((x209&x210)^x211)&x212);

	if (t52 != 4125LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	static int16_t x214 = -1;
	uint16_t x216 = UINT16_MAX;
	volatile int64_t t53 = -1542810479368539902LL;

	t53 = (((x213&x214)^x215)&x216);

	if (t53 != 65535LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -1LL;
	uint64_t x218 = UINT64_MAX;
	uint16_t x219 = UINT16_MAX;

	t54 = (((x217&x218)^x219)&x220);

	if (t54 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	volatile int64_t t55 = -53348LL;

	t55 = (((x221&x222)^x223)&x224);

	if (t55 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	int16_t x226 = INT16_MIN;
	volatile int16_t x227 = INT16_MAX;
	int16_t x228 = -7;
	volatile int64_t t56 = -1778531474194LL;

	t56 = (((x225&x226)^x227)&x228);

	if (t56 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = INT16_MAX;
	int16_t x231 = INT16_MIN;
	volatile int8_t x232 = -1;
	int32_t t57 = 23;

	t57 = (((x229&x230)^x231)&x232);

	if (t57 != -32479) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	volatile uint16_t x234 = UINT16_MAX;
	volatile uint32_t x235 = 3U;
	uint8_t x236 = UINT8_MAX;
	volatile uint32_t t58 = 280470674U;

	t58 = (((x233&x234)^x235)&x236);

	if (t58 != 131U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MAX;
	int16_t x239 = INT16_MAX;
	volatile int16_t x240 = INT16_MIN;
	volatile int64_t t59 = -3264944493129561LL;

	t59 = (((x237&x238)^x239)&x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -12;
	volatile int64_t x242 = 278262613932115005LL;
	uint64_t x243 = 260541768440582247LLU;
	uint64_t t60 = 226LLU;

	t60 = (((x241&x242)^x243)&x244);

	if (t60 != 18356364422124627LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = INT16_MIN;

	t61 = (((x245&x246)^x247)&x248);

	if (t61 != -2321) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -132790535LL;
	int32_t x250 = -4690053;
	int64_t x251 = -1LL;
	static volatile int64_t t62 = 1971639584718LL;

	t62 = (((x249&x250)^x251)&x252);

	if (t62 != 2LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x254 = 1778807U;
	uint64_t x255 = UINT64_MAX;
	uint64_t x256 = 4162303174405891LLU;
	volatile uint64_t t63 = 4507089925763LLU;

	t63 = (((x253&x254)^x255)&x256);

	if (t63 != 4162303174405890LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	volatile int8_t x258 = -1;
	int16_t x259 = 54;
	int32_t x260 = 10028;
	volatile int32_t t64 = -129591;

	t64 = (((x257&x258)^x259)&x260);

	if (t64 != 36) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 3;
	uint32_t x262 = UINT32_MAX;
	volatile int64_t x264 = INT64_MAX;
	volatile int64_t t65 = 1618089547LL;

	t65 = (((x261&x262)^x263)&x264);

	if (t65 != 4294967292LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 411107994883LLU;
	uint16_t x267 = 7696U;
	uint8_t x268 = 56U;
	volatile uint64_t t66 = 295335331651089LLU;

	t66 = (((x265&x266)^x267)&x268);

	if (t66 != 16LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = -9351;
	volatile int16_t x271 = -1;
	int16_t x272 = 119;
	volatile int32_t t67 = -22;

	t67 = (((x269&x270)^x271)&x272);

	if (t67 != 6) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -2312891140LL;
	int8_t x274 = INT8_MIN;
	uint64_t x275 = 125189LLU;
	int64_t x276 = INT64_MAX;
	uint64_t t68 = 68LLU;

	t68 = (((x273&x274)^x275)&x276);

	if (t68 != 9223372034542009733LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = 3166;
	uint32_t x279 = 722U;
	static int64_t x280 = 808247158304117LL;

	t69 = (((x277&x278)^x279)&x280);

	if (t69 != 2116LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = INT8_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = -47609645;

	t70 = (((x281&x282)^x283)&x284);

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 1U;
	uint16_t x287 = 1U;
	volatile uint32_t x288 = 94797784U;
	uint32_t t71 = 528865U;

	t71 = (((x285&x286)^x287)&x288);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int32_t x290 = 51651155;
	uint8_t x291 = 70U;
	int16_t x292 = 1;
	volatile int32_t t72 = -19509;

	t72 = (((x289&x290)^x291)&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MAX;
	static int8_t x295 = INT8_MIN;

	t73 = (((x293&x294)^x295)&x296);

	if (t73 != -1094LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 1LLU;
	static int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MAX;
	int32_t x300 = -1;
	uint64_t t74 = 592023190LLU;

	t74 = (((x297&x298)^x299)&x300);

	if (t74 != 32767LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = 5U;
	uint16_t x302 = 4U;
	static int8_t x304 = INT8_MAX;

	t75 = (((x301&x302)^x303)&x304);

	if (t75 != 122LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x306 = UINT16_MAX;
	uint16_t x307 = 104U;
	int64_t x308 = 43LL;
	volatile uint64_t t76 = 2140703842150LLU;

	t76 = (((x305&x306)^x307)&x308);

	if (t76 != 3LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	static uint16_t x310 = UINT16_MAX;
	int8_t x311 = INT8_MAX;
	int32_t t77 = 296566361;

	t77 = (((x309&x310)^x311)&x312);

	if (t77 != 65408) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x315 = 35U;
	int32_t x316 = -1;
	volatile int64_t t78 = 16119LL;

	t78 = (((x313&x314)^x315)&x316);

	if (t78 != 35LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -2;
	int64_t x318 = -687LL;
	int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	int64_t t79 = -1708477133088LL;

	t79 = (((x317&x318)^x319)&x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -58;
	int8_t x323 = -1;
	int64_t t80 = -8343399298120036LL;

	t80 = (((x321&x322)^x323)&x324);

	if (t80 != 51118088LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	int64_t x326 = 34481723500860184LL;
	uint8_t x328 = 2U;

	t81 = (((x325&x326)^x327)&x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MAX;
	static int64_t x331 = INT64_MIN;
	int8_t x332 = 36;

	t82 = (((x329&x330)^x331)&x332);

	if (t82 != 36LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	int64_t x334 = INT64_MIN;
	int64_t x335 = -1LL;
	volatile uint32_t x336 = UINT32_MAX;

	t83 = (((x333&x334)^x335)&x336);

	if (t83 != 4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 0;
	volatile uint64_t x338 = 14LLU;
	static int8_t x339 = 11;
	int8_t x340 = INT8_MIN;

	t84 = (((x337&x338)^x339)&x340);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 3342003LLU;
	static int64_t x342 = INT64_MAX;
	static int64_t x343 = -1LL;
	volatile int16_t x344 = -1;
	uint64_t t85 = 221025LLU;

	t85 = (((x341&x342)^x343)&x344);

	if (t85 != 18446744073706209612LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int16_t x346 = -1;
	int32_t x347 = -1;
	uint16_t x348 = UINT16_MAX;
	int32_t t86 = 0;

	t86 = (((x345&x346)^x347)&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MAX;
	static volatile int64_t x350 = INT64_MIN;
	int64_t x352 = INT64_MIN;
	volatile int64_t t87 = INT64_MIN;

	t87 = (((x349&x350)^x351)&x352);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = INT8_MIN;
	int32_t x355 = 2;
	static volatile uint8_t x356 = 9U;
	static volatile int32_t t88 = 1;

	t88 = (((x353&x354)^x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 102U;
	volatile int16_t x360 = 0;
	int64_t t89 = 829LL;

	t89 = (((x357&x358)^x359)&x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	int8_t x362 = INT8_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 3;

	t90 = (((x361&x362)^x363)&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	uint32_t x366 = 92471171U;
	uint8_t x367 = UINT8_MAX;
	static volatile uint32_t t91 = 14256282U;

	t91 = (((x365&x366)^x367)&x368);

	if (t91 != 32636U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 1611;
	volatile int64_t x370 = INT64_MIN;
	volatile int32_t x371 = 830735842;
	int8_t x372 = 4;

	t92 = (((x369&x370)^x371)&x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 57U;
	volatile int32_t x374 = 3047;
	volatile uint8_t x375 = UINT8_MAX;
	static volatile uint32_t t93 = 1U;

	t93 = (((x373&x374)^x375)&x376);

	if (t93 != 222U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = -1;
	int32_t x378 = INT32_MAX;
	int16_t x379 = INT16_MIN;
	int16_t x380 = -2785;

	t94 = (((x377&x378)^x379)&x380);

	if (t94 != -2147453665) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = UINT16_MAX;
	static int64_t x382 = -19461544891LL;
	int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MAX;

	t95 = (((x381&x382)^x383)&x384);

	if (t95 != 25669LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x388 = INT32_MAX;
	volatile int32_t t96 = -622751644;

	t96 = (((x385&x386)^x387)&x388);

	if (t96 != 2147450937) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MAX;
	int64_t x390 = INT64_MIN;
	uint64_t x391 = 7630982240034965779LLU;
	int16_t x392 = -5997;
	static uint64_t t97 = 116052125833020083LLU;

	t97 = (((x389&x390)^x391)&x392);

	if (t97 != 7630982240034965523LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	int16_t x394 = INT16_MIN;
	uint32_t x396 = UINT32_MAX;
	volatile int64_t t98 = 371104467LL;

	t98 = (((x393&x394)^x395)&x396);

	if (t98 != 4294934536LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 1;
	int64_t x399 = 2901LL;
	int32_t x400 = -1;
	int64_t t99 = -1152564373821598112LL;

	t99 = (((x397&x398)^x399)&x400);

	if (t99 != 2900LL) { NG(); } else { ; }
	
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
