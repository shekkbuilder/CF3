#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x26 = -1LL;
uint32_t x28 = UINT32_MAX;
uint8_t x39 = 9U;
uint16_t x41 = UINT16_MAX;
uint8_t x43 = 0U;
int16_t x44 = INT16_MAX;
uint32_t x45 = 93768U;
static uint32_t x46 = UINT32_MAX;
int16_t x48 = INT16_MIN;
static volatile int16_t x50 = -1;
int32_t x52 = -6536849;
int8_t x54 = -1;
int32_t x92 = -173;
volatile int32_t t15 = 212310;
static uint16_t x93 = 81U;
int32_t x96 = INT32_MIN;
uint64_t x102 = 604168039540LLU;
int32_t x108 = -236572890;
int32_t t18 = -59;
static volatile int8_t x109 = INT8_MAX;
static int64_t x110 = -14838982227LL;
uint8_t x113 = 119U;
uint8_t x126 = UINT8_MAX;
int8_t x127 = INT8_MIN;
int8_t x133 = INT8_MAX;
volatile uint64_t t27 = UINT64_MAX;
volatile int32_t t28 = 17414;
volatile uint64_t x155 = 114491LLU;
int32_t x161 = -1310160;
volatile int8_t x163 = -1;
static int8_t x167 = INT8_MAX;
volatile int32_t t32 = -126869828;
int32_t x177 = INT32_MIN;
int64_t x183 = 116901759080LL;
volatile int16_t x194 = INT16_MAX;
volatile uint64_t x195 = 98787LLU;
int64_t x197 = -323544LL;
int32_t t37 = INT32_MIN;
static int32_t t38 = 342;
int16_t x210 = 7619;
int64_t x212 = 231406710537427176LL;
volatile int8_t x216 = INT8_MIN;
int32_t x229 = -371112;
int16_t x232 = 5;
uint16_t x234 = UINT16_MAX;
uint32_t x235 = 12U;
int16_t x238 = -1;
uint8_t x239 = 88U;
uint64_t x240 = UINT64_MAX;
static int8_t x249 = INT8_MIN;
volatile int16_t x250 = -1;
volatile int8_t x254 = 0;
static uint8_t x256 = 1U;
static int32_t t48 = 0;
int8_t x259 = INT8_MIN;
int8_t x268 = 3;
int16_t x282 = 81;
uint64_t x283 = UINT64_MAX;
volatile uint16_t x308 = 27981U;
static uint8_t x322 = 0U;
volatile int32_t t60 = -1338028;
int32_t x330 = INT32_MAX;
int8_t x353 = INT8_MAX;
int32_t t66 = -120;
volatile uint16_t x367 = 0U;
int16_t x374 = -5137;
int32_t t69 = 1157526;
int16_t x381 = -1;
int32_t x385 = -1;
int8_t x386 = INT8_MIN;
int32_t t73 = 28;
int32_t x406 = 5554;
static int32_t t75 = -158709214;
static int32_t x419 = -250;
int8_t x421 = -1;
uint64_t x424 = UINT64_MAX;
volatile uint64_t t77 = UINT64_MAX;
int64_t x426 = INT64_MIN;
volatile uint64_t x431 = 1839870750LLU;
volatile uint8_t x435 = 21U;
volatile uint16_t x436 = 11U;
int16_t x438 = INT16_MIN;
int32_t t81 = -74430;
uint64_t x443 = 1296532279039719591LLU;
int32_t t83 = 380750194;
static int64_t x459 = -1LL;
uint32_t x475 = 1875233U;
uint64_t x483 = 10LLU;
static int16_t x489 = -3;
volatile int32_t t89 = -29331637;
static int64_t x504 = 2LL;
uint32_t x506 = 1U;
static int8_t x521 = -1;
static int32_t x524 = 15925849;
int8_t x528 = -1;


void f0(void) {
	int32_t x5 = -177387170;
	static uint8_t x6 = 0U;
	int8_t x7 = -16;
	int8_t x8 = -1;
	static int32_t t0 = -1;

	t0 = ((x5<(x6*x7))*x8);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = UINT16_MAX;
	volatile uint64_t x10 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	uint16_t x12 = 10U;
	static int32_t t1 = -607949;

	t1 = ((x9<(x10*x11))*x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 4U;
	int32_t x14 = -38198;
	volatile int16_t x15 = INT16_MIN;
	int64_t x16 = -33049953077LL;
	int64_t t2 = -3835884LL;

	t2 = ((x13<(x14*x15))*x16);

	if (t2 != -33049953077LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = -1;
	volatile uint32_t x27 = UINT32_MAX;
	uint32_t t3 = 36U;

	t3 = ((x25<(x26*x27))*x28);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = INT64_MIN;
	volatile int16_t x38 = -96;
	int16_t x40 = -1;
	int32_t t4 = 5293128;

	t4 = ((x37<(x38*x39))*x40);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x42 = 4253809162845362LLU;
	volatile int32_t t5 = 168187365;

	t5 = ((x41<(x42*x43))*x44);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x47 = -454515;
	static int32_t t6 = -66;

	t6 = ((x45<(x46*x47))*x48);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x49 = 5219;
	int64_t x51 = 144357976405819LL;
	int32_t t7 = -7257;

	t7 = ((x49<(x50*x51))*x52);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = INT16_MAX;
	uint32_t x55 = 277957U;
	static int16_t x56 = INT16_MIN;
	int32_t t8 = 63101732;

	t8 = ((x53<(x54*x55))*x56);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x57 = -1LL;
	static int8_t x58 = INT8_MIN;
	static int64_t x59 = 81598023319LL;
	volatile int8_t x60 = 9;
	volatile int32_t t9 = -7855;

	t9 = ((x57<(x58*x59))*x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = INT8_MIN;
	static int64_t x63 = 68LL;
	volatile uint16_t x64 = 1434U;
	int32_t t10 = -5999455;

	t10 = ((x61<(x62*x63))*x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = 6U;
	uint32_t x66 = UINT32_MAX;
	uint64_t x67 = UINT64_MAX;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t11 = INT32_MIN;

	t11 = ((x65<(x66*x67))*x68);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x73 = -1;
	volatile int16_t x74 = 13033;
	int64_t x75 = -1LL;
	uint32_t x76 = 3157U;
	volatile uint32_t t12 = 11824907U;

	t12 = ((x73<(x74*x75))*x76);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = 0U;
	static int8_t x78 = INT8_MAX;
	uint16_t x79 = 35U;
	uint16_t x80 = 179U;
	int32_t t13 = -834018;

	t13 = ((x77<(x78*x79))*x80);

	if (t13 != 179) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = INT8_MIN;
	int64_t x84 = INT64_MIN;
	volatile int64_t t14 = 555708888561445111LL;

	t14 = ((x81<(x82*x83))*x84);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x89 = INT8_MAX;
	volatile int32_t x90 = -1102;
	int8_t x91 = -1;

	t15 = ((x89<(x90*x91))*x92);

	if (t15 != -173) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x94 = 2U;
	int8_t x95 = -1;
	int32_t t16 = -36123869;

	t16 = ((x93<(x94*x95))*x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = INT32_MIN;
	volatile uint64_t x103 = UINT64_MAX;
	int64_t x104 = INT64_MIN;
	volatile int64_t t17 = -35439913547972LL;

	t17 = ((x101<(x102*x103))*x104);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MIN;
	static int8_t x107 = -1;

	t18 = ((x105<(x106*x107))*x108);

	if (t18 != -236572890) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x111 = 3008LLU;
	static int8_t x112 = 0;
	volatile int32_t t19 = 29404127;

	t19 = ((x109<(x110*x111))*x112);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x114 = 32;
	uint16_t x115 = UINT16_MAX;
	int8_t x116 = INT8_MAX;
	int32_t t20 = 484;

	t20 = ((x113<(x114*x115))*x116);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MIN;
	uint64_t x123 = 179030576281353906LLU;
	int16_t x124 = INT16_MIN;
	volatile int32_t t21 = 117411718;

	t21 = ((x121<(x122*x123))*x124);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = INT32_MIN;
	int32_t x128 = -862;
	volatile int32_t t22 = 6093046;

	t22 = ((x125<(x126*x127))*x128);

	if (t22 != -862) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x129 = -1;
	volatile int16_t x130 = INT16_MIN;
	uint64_t x131 = 261010197812LLU;
	uint16_t x132 = 61U;
	volatile int32_t t23 = -248025;

	t23 = ((x129<(x130*x131))*x132);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = -14;
	int8_t x136 = 4;
	int32_t t24 = -6;

	t24 = ((x133<(x134*x135))*x136);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = INT16_MAX;
	int16_t x138 = 1;
	static int64_t x139 = -77106734LL;
	int32_t x140 = INT32_MAX;
	volatile int32_t t25 = -865491;

	t25 = ((x137<(x138*x139))*x140);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x141 = 508U;
	static int16_t x142 = INT16_MAX;
	volatile int16_t x143 = -1;
	static volatile uint64_t x144 = 38928567LLU;
	static volatile uint64_t t26 = 503LLU;

	t26 = ((x141<(x142*x143))*x144);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x145 = INT8_MIN;
	volatile int64_t x146 = -15205049318LL;
	int64_t x147 = -1LL;
	static uint64_t x148 = UINT64_MAX;

	t27 = ((x145<(x146*x147))*x148);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x149 = 1838U;
	int8_t x150 = -5;
	uint16_t x151 = UINT16_MAX;
	uint8_t x152 = 3U;

	t28 = ((x149<(x150*x151))*x152);

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = 301;
	int16_t x154 = INT16_MAX;
	int64_t x156 = INT64_MIN;
	static volatile int64_t t29 = INT64_MIN;

	t29 = ((x153<(x154*x155))*x156);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x157 = -1;
	volatile int32_t x158 = 0;
	int8_t x159 = 0;
	int8_t x160 = INT8_MIN;
	volatile int32_t t30 = 459986261;

	t30 = ((x157<(x158*x159))*x160);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x162 = 218955;
	int16_t x164 = INT16_MIN;
	volatile int32_t t31 = 69994;

	t31 = ((x161<(x162*x163))*x164);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = 49;
	int16_t x168 = INT16_MAX;

	t32 = ((x165<(x166*x167))*x168);

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x178 = -1;
	int32_t x179 = -7008;
	static int8_t x180 = INT8_MIN;
	int32_t t33 = 120398177;

	t33 = ((x177<(x178*x179))*x180);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = INT64_MIN;
	volatile uint64_t x182 = UINT64_MAX;
	int16_t x184 = 48;
	int32_t t34 = -1206076;

	t34 = ((x181<(x182*x183))*x184);

	if (t34 != 48) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x189 = INT16_MAX;
	int16_t x190 = 236;
	static uint32_t x191 = UINT32_MAX;
	int64_t x192 = -1465600985646LL;
	int64_t t35 = -127821LL;

	t35 = ((x189<(x190*x191))*x192);

	if (t35 != -1465600985646LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x193 = UINT64_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t36 = 28202980;

	t36 = ((x193<(x194*x195))*x196);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x198 = 433048959LL;
	uint32_t x199 = 3994288U;
	volatile int32_t x200 = INT32_MIN;

	t37 = ((x197<(x198*x199))*x200);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x205 = 36;
	int64_t x206 = -1LL;
	int8_t x207 = -11;
	uint8_t x208 = 34U;

	t38 = ((x205<(x206*x207))*x208);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x209 = INT32_MIN;
	int16_t x211 = INT16_MIN;
	int64_t t39 = -747LL;

	t39 = ((x209<(x210*x211))*x212);

	if (t39 != 231406710537427176LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = -1;
	uint16_t x214 = 29262U;
	volatile uint32_t x215 = 63U;
	volatile int32_t t40 = 60;

	t40 = ((x213<(x214*x215))*x216);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x225 = 6;
	volatile uint32_t x226 = 107029U;
	int16_t x227 = INT16_MAX;
	static volatile int16_t x228 = INT16_MIN;
	static int32_t t41 = -3483;

	t41 = ((x225<(x226*x227))*x228);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x230 = UINT64_MAX;
	volatile int8_t x231 = 4;
	int32_t t42 = -445;

	t42 = ((x229<(x230*x231))*x232);

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x233 = -12;
	uint16_t x236 = 160U;
	volatile int32_t t43 = -2537;

	t43 = ((x233<(x234*x235))*x236);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x237 = 2;
	uint64_t t44 = 2807149479749803LLU;

	t44 = ((x237<(x238*x239))*x240);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x241 = 12818;
	int16_t x242 = INT16_MAX;
	uint32_t x243 = 18U;
	uint32_t x244 = 1131954268U;
	volatile uint32_t t45 = 27U;

	t45 = ((x241<(x242*x243))*x244);

	if (t45 != 1131954268U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x245 = INT32_MIN;
	uint32_t x246 = 156497U;
	int8_t x247 = -1;
	volatile uint32_t x248 = 630509973U;
	static uint32_t t46 = 882019702U;

	t46 = ((x245<(x246*x247))*x248);

	if (t46 != 630509973U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x251 = 8;
	int64_t x252 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = ((x249<(x250*x251))*x252);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = 1;
	uint16_t x255 = 100U;

	t48 = ((x253<(x254*x255))*x256);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x257 = INT16_MIN;
	int16_t x258 = -1;
	volatile int16_t x260 = INT16_MIN;
	int32_t t49 = -120470477;

	t49 = ((x257<(x258*x259))*x260);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x265 = 19200U;
	uint64_t x266 = UINT64_MAX;
	uint16_t x267 = 3879U;
	int32_t t50 = 58;

	t50 = ((x265<(x266*x267))*x268);

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x281 = 132U;
	int16_t x284 = INT16_MIN;
	volatile int32_t t51 = 51;

	t51 = ((x281<(x282*x283))*x284);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x285 = UINT16_MAX;
	int16_t x286 = -1;
	int32_t x287 = 12199;
	static int64_t x288 = -1LL;
	int64_t t52 = 47963589LL;

	t52 = ((x285<(x286*x287))*x288);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x293 = 1548LL;
	uint32_t x294 = UINT32_MAX;
	volatile int8_t x295 = -53;
	int32_t x296 = -762951482;
	volatile int32_t t53 = -12656958;

	t53 = ((x293<(x294*x295))*x296);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x297 = 20976LL;
	uint64_t x298 = UINT64_MAX;
	int8_t x299 = -15;
	int32_t x300 = 3;
	int32_t t54 = 1;

	t54 = ((x297<(x298*x299))*x300);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x303 = -1;
	volatile int32_t x304 = 1;
	static volatile int32_t t55 = 23852;

	t55 = ((x301<(x302*x303))*x304);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x305 = INT64_MIN;
	int16_t x306 = -1;
	int16_t x307 = INT16_MAX;
	volatile int32_t t56 = 255706174;

	t56 = ((x305<(x306*x307))*x308);

	if (t56 != 27981) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x309 = 3U;
	uint16_t x310 = 20276U;
	uint64_t x311 = UINT64_MAX;
	volatile uint64_t x312 = 293725640LLU;
	volatile uint64_t t57 = 9402LLU;

	t57 = ((x309<(x310*x311))*x312);

	if (t57 != 293725640LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x313 = INT64_MAX;
	static uint8_t x314 = 32U;
	int32_t x315 = -1;
	static int16_t x316 = INT16_MAX;
	static volatile int32_t t58 = 15601170;

	t58 = ((x313<(x314*x315))*x316);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x317 = INT64_MIN;
	int64_t x318 = -1LL;
	int64_t x319 = 4LL;
	int32_t x320 = INT32_MIN;
	volatile int32_t t59 = INT32_MIN;

	t59 = ((x317<(x318*x319))*x320);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x321 = 9355186659471LLU;
	uint8_t x323 = 72U;
	int32_t x324 = INT32_MIN;

	t60 = ((x321<(x322*x323))*x324);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x329 = INT16_MIN;
	int8_t x331 = 1;
	int32_t x332 = -1;
	volatile int32_t t61 = 1383;

	t61 = ((x329<(x330*x331))*x332);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x345 = INT16_MAX;
	static uint8_t x346 = 30U;
	static int8_t x347 = INT8_MIN;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t62 = 4240;

	t62 = ((x345<(x346*x347))*x348);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x350 = UINT64_MAX;
	static volatile int16_t x351 = INT16_MAX;
	volatile uint8_t x352 = 1U;
	int32_t t63 = -121047100;

	t63 = ((x349<(x350*x351))*x352);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x354 = -62;
	uint32_t x355 = 187076916U;
	int32_t x356 = INT32_MIN;
	static int32_t t64 = INT32_MIN;

	t64 = ((x353<(x354*x355))*x356);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x357 = 87078422776216540LLU;
	volatile uint8_t x358 = 0U;
	uint16_t x359 = UINT16_MAX;
	uint64_t x360 = 8457801541LLU;
	volatile uint64_t t65 = 241049549253582LLU;

	t65 = ((x357<(x358*x359))*x360);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x361 = 231629046999599LL;
	volatile int16_t x362 = -1;
	int16_t x363 = -1;
	int32_t x364 = -22507768;

	t66 = ((x361<(x362*x363))*x364);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x365 = INT16_MIN;
	static int8_t x366 = INT8_MAX;
	static volatile int16_t x368 = -1;
	int32_t t67 = 90;

	t67 = ((x365<(x366*x367))*x368);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x369 = 0;
	static int8_t x370 = -1;
	int8_t x371 = 0;
	static uint64_t x372 = 4088127451733LLU;
	uint64_t t68 = 228LLU;

	t68 = ((x369<(x370*x371))*x372);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int16_t x375 = INT16_MIN;
	volatile int16_t x376 = INT16_MAX;

	t69 = ((x373<(x374*x375))*x376);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x382 = 37179802435089LLU;
	static uint64_t x383 = 236LLU;
	uint64_t x384 = UINT64_MAX;
	static volatile uint64_t t70 = 2433LLU;

	t70 = ((x381<(x382*x383))*x384);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x387 = 4U;
	uint16_t x388 = UINT16_MAX;
	int32_t t71 = 628;

	t71 = ((x385<(x386*x387))*x388);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x389 = 6U;
	int64_t x390 = -990610979950LL;
	uint64_t x391 = 397448692682653LLU;
	volatile int64_t x392 = -1LL;
	int64_t t72 = 521805762933257LL;

	t72 = ((x389<(x390*x391))*x392);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x393 = UINT8_MAX;
	uint16_t x394 = 5374U;
	int8_t x395 = 10;
	volatile int32_t x396 = -4337;

	t73 = ((x393<(x394*x395))*x396);

	if (t73 != -4337) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x405 = 125083U;
	uint8_t x407 = UINT8_MAX;
	uint32_t x408 = 7432U;
	uint32_t t74 = 109809U;

	t74 = ((x405<(x406*x407))*x408);

	if (t74 != 7432U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x409 = INT8_MAX;
	uint16_t x410 = 0U;
	int8_t x411 = INT8_MIN;
	static int16_t x412 = -1227;

	t75 = ((x409<(x410*x411))*x412);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x417 = 484386LLU;
	int16_t x418 = INT16_MIN;
	int64_t x420 = INT64_MIN;
	volatile int64_t t76 = INT64_MIN;

	t76 = ((x417<(x418*x419))*x420);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x422 = INT16_MIN;
	int16_t x423 = -1011;

	t77 = ((x421<(x422*x423))*x424);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x425 = INT16_MIN;
	int16_t x427 = 0;
	int32_t x428 = INT32_MAX;
	static volatile int32_t t78 = INT32_MAX;

	t78 = ((x425<(x426*x427))*x428);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x429 = 2101LLU;
	static int8_t x430 = INT8_MIN;
	int32_t x432 = -1;
	int32_t t79 = -9066883;

	t79 = ((x429<(x430*x431))*x432);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x433 = INT64_MAX;
	int16_t x434 = -2891;
	volatile int32_t t80 = 0;

	t80 = ((x433<(x434*x435))*x436);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x437 = 18;
	int8_t x439 = -6;
	int32_t x440 = -1;

	t81 = ((x437<(x438*x439))*x440);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x441 = INT8_MIN;
	volatile int64_t x442 = 3022034103355173508LL;
	int8_t x444 = 0;
	int32_t t82 = -171793;

	t82 = ((x441<(x442*x443))*x444);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x453 = UINT16_MAX;
	int16_t x454 = -1;
	uint32_t x455 = 13U;
	uint16_t x456 = UINT16_MAX;

	t83 = ((x453<(x454*x455))*x456);

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x457 = INT64_MAX;
	static int64_t x458 = 572878334LL;
	volatile int8_t x460 = -1;
	int32_t t84 = 390;

	t84 = ((x457<(x458*x459))*x460);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x465 = -3;
	uint16_t x466 = UINT16_MAX;
	volatile int8_t x467 = INT8_MAX;
	int8_t x468 = INT8_MIN;
	volatile int32_t t85 = 7;

	t85 = ((x465<(x466*x467))*x468);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x473 = INT64_MAX;
	volatile int16_t x474 = INT16_MIN;
	int32_t x476 = 3;
	int32_t t86 = -71816;

	t86 = ((x473<(x474*x475))*x476);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x481 = -309;
	static int16_t x482 = 0;
	uint32_t x484 = 1101U;
	uint32_t t87 = 2537U;

	t87 = ((x481<(x482*x483))*x484);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x485 = 3U;
	int64_t x486 = 1095321341LL;
	static uint16_t x487 = 210U;
	static uint8_t x488 = UINT8_MAX;
	int32_t t88 = 5799067;

	t88 = ((x485<(x486*x487))*x488);

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x490 = -194171588876LL;
	int64_t x491 = 438LL;
	uint16_t x492 = 30U;

	t89 = ((x489<(x490*x491))*x492);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x493 = INT8_MIN;
	int8_t x494 = INT8_MIN;
	int32_t x495 = -1;
	static uint8_t x496 = 1U;
	volatile int32_t t90 = -792990;

	t90 = ((x493<(x494*x495))*x496);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x501 = INT16_MIN;
	static volatile uint16_t x502 = 20940U;
	int64_t x503 = -1LL;
	static volatile int64_t t91 = -53621873LL;

	t91 = ((x501<(x502*x503))*x504);

	if (t91 != 2LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x505 = INT16_MIN;
	static uint32_t x507 = 244932U;
	int8_t x508 = INT8_MIN;
	volatile int32_t t92 = -140423;

	t92 = ((x505<(x506*x507))*x508);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x509 = -1;
	volatile int32_t x510 = 172977252;
	volatile uint64_t x511 = 136734LLU;
	static volatile int16_t x512 = INT16_MAX;
	static int32_t t93 = -4868;

	t93 = ((x509<(x510*x511))*x512);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x513 = 4740U;
	int8_t x514 = INT8_MIN;
	static uint64_t x515 = 13263304LLU;
	volatile int16_t x516 = 0;
	static int32_t t94 = 76542232;

	t94 = ((x513<(x514*x515))*x516);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x517 = 1;
	static volatile int64_t x518 = INT64_MIN;
	static uint64_t x519 = 1482634718367724905LLU;
	uint16_t x520 = 18159U;
	volatile int32_t t95 = 5389;

	t95 = ((x517<(x518*x519))*x520);

	if (t95 != 18159) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x522 = 940948U;
	uint8_t x523 = 3U;
	int32_t t96 = -5;

	t96 = ((x521<(x522*x523))*x524);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x525 = 2338370660064LLU;
	int64_t x526 = -1LL;
	static uint8_t x527 = 5U;
	int32_t t97 = -12700719;

	t97 = ((x525<(x526*x527))*x528);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x529 = UINT16_MAX;
	uint32_t x530 = UINT32_MAX;
	static volatile int32_t x531 = 30208485;
	int64_t x532 = -1LL;
	static volatile int64_t t98 = -3483524LL;

	t98 = ((x529<(x530*x531))*x532);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x545 = UINT16_MAX;
	int64_t x546 = INT64_MAX;
	int64_t x547 = -1LL;
	int32_t x548 = -1;
	volatile int32_t t99 = -211217;

	t99 = ((x545<(x546*x547))*x548);

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
