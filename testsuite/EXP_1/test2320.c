
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x9 = -1586;
static volatile uint16_t x11 = 19U;
int64_t x16 = -1LL;
int64_t x19 = INT64_MAX;
int64_t x23 = 29144748LL;
uint16_t x31 = 190U;
volatile int32_t t7 = -14223;
uint8_t x39 = UINT8_MAX;
uint64_t x41 = 269580LLU;
volatile int64_t x43 = -192245LL;
int32_t x49 = INT32_MIN;
int16_t x53 = INT16_MAX;
static int16_t x57 = 0;
int8_t x61 = INT8_MAX;
volatile int16_t x62 = INT16_MAX;
volatile uint64_t x64 = UINT64_MAX;
static uint16_t x76 = UINT16_MAX;
int64_t x86 = INT64_MIN;
int32_t x102 = -26;
int32_t t25 = -1;
static int64_t x108 = -1LL;
volatile int32_t x109 = -1;
volatile uint32_t x111 = 32861223U;
int32_t x112 = INT32_MIN;
volatile int16_t x121 = -2;
static int32_t x124 = INT32_MAX;
uint32_t x128 = 16470238U;
int32_t t31 = 12178;
uint16_t x132 = UINT16_MAX;
int8_t x134 = -7;
static int32_t t33 = 0;
static volatile int8_t x140 = INT8_MIN;
volatile uint32_t x145 = 44U;
static int16_t x146 = 9978;
int8_t x149 = -1;
uint32_t x155 = 40285U;
int32_t x159 = -1;
int16_t x169 = INT16_MIN;
int16_t x170 = INT16_MIN;
int16_t x172 = -1;
uint8_t x175 = 2U;
int8_t x177 = INT8_MAX;
volatile int32_t t44 = -106;
int32_t x182 = 0;
static uint8_t x183 = 0U;
int32_t x184 = INT32_MIN;
int32_t t45 = -5098;
volatile int8_t x187 = INT8_MAX;
int64_t x189 = INT64_MIN;
volatile uint16_t x198 = 557U;
static uint32_t x200 = UINT32_MAX;
int32_t t49 = -327518021;
static int32_t x202 = INT32_MIN;
static int64_t x209 = INT64_MIN;
uint64_t x210 = 1697336403LLU;
static int8_t x213 = INT8_MAX;
int8_t x219 = -1;
static volatile int32_t t55 = -20982;
int16_t x227 = 82;
int64_t x231 = 21916169726795LL;
uint32_t x238 = 24485767U;
volatile uint64_t x254 = 15573201407LLU;
int32_t t65 = 5920;
int32_t t66 = -711028;
volatile int16_t x274 = INT16_MIN;
static int64_t x284 = 10944516LL;
volatile int32_t t70 = 56704;
static int32_t t71 = -13;
volatile uint8_t x293 = 6U;
int32_t x296 = INT32_MAX;
volatile int32_t t73 = 300;
volatile uint32_t x304 = 6043U;
volatile int64_t x305 = INT64_MIN;
uint64_t x307 = UINT64_MAX;
volatile int8_t x308 = -16;
volatile int16_t x317 = 0;
uint16_t x318 = UINT16_MAX;
volatile uint64_t x333 = UINT64_MAX;
int32_t x336 = -2003934;
static uint32_t x341 = 1U;
static int32_t x342 = 438;
int16_t x344 = -1;
int32_t x345 = INT32_MIN;
static int64_t x347 = -687115799LL;
int8_t x354 = 1;
volatile int8_t x363 = -37;
static uint32_t x365 = UINT32_MAX;
volatile uint64_t x370 = UINT64_MAX;
volatile uint8_t x371 = UINT8_MAX;
volatile int8_t x372 = INT8_MIN;
static int64_t x376 = 0LL;
int32_t t93 = 6174325;
volatile uint64_t x381 = 13921626122116LLU;
uint32_t x382 = UINT32_MAX;
uint64_t x386 = UINT64_MAX;
volatile uint16_t x387 = 286U;
int8_t x388 = 0;
int64_t x390 = -4414812821524970LL;
uint16_t x392 = 24311U;
int32_t x393 = 471474;
int8_t x395 = 0;
volatile int32_t t101 = 10676226;
int8_t x411 = INT8_MIN;
volatile int8_t x419 = INT8_MIN;
int8_t x420 = INT8_MIN;
int64_t x422 = INT64_MAX;
volatile int32_t x430 = -1;
uint8_t x442 = UINT8_MAX;
int8_t x444 = INT8_MAX;
int32_t t110 = -9062306;
uint64_t x446 = UINT64_MAX;
static volatile int32_t t111 = 4058;
int32_t x450 = -1;
volatile int32_t t112 = 66105872;
uint64_t x459 = 3068333013080629LLU;
uint64_t x462 = 33565919237770934LLU;
volatile int8_t x466 = INT8_MAX;
int64_t x467 = -103144989043LL;
volatile uint8_t x469 = 0U;
static int8_t x474 = -1;
volatile int64_t x476 = -18908618753337LL;
static volatile int8_t x478 = -1;
uint16_t x479 = 13U;
int32_t x490 = -1;
volatile int16_t x497 = -1;
static uint64_t x498 = UINT64_MAX;
static int64_t x502 = INT64_MIN;
int8_t x506 = INT8_MIN;
int64_t x514 = INT64_MAX;
volatile uint32_t x515 = UINT32_MAX;
uint8_t x520 = UINT8_MAX;
int8_t x521 = INT8_MAX;
uint64_t x524 = 42471394568LLU;
int32_t t130 = -103241862;
int8_t x531 = 7;
static int64_t x533 = -106299341510LL;
int32_t x535 = INT32_MIN;
uint64_t x537 = UINT64_MAX;
int16_t x539 = INT16_MIN;
static volatile int16_t x540 = INT16_MIN;
static int16_t x544 = INT16_MIN;
volatile int32_t t135 = -8536371;
uint8_t x546 = UINT8_MAX;
int64_t x550 = -871578022912496LL;
static uint8_t x554 = 105U;
uint8_t x555 = 17U;
uint64_t x557 = 3487LLU;
volatile int32_t t139 = 358;
volatile uint16_t x561 = UINT16_MAX;
uint16_t x565 = 0U;
uint32_t x567 = 609651924U;
uint8_t x569 = UINT8_MAX;
int32_t t142 = -513127;
volatile int32_t t143 = 47;
volatile int32_t t144 = -326184536;
int64_t x583 = INT64_MIN;
volatile uint8_t x591 = 102U;
int64_t x593 = INT64_MAX;
int32_t x596 = INT32_MAX;
int8_t x597 = INT8_MIN;
static int64_t x604 = INT64_MIN;
uint64_t x605 = 494184201LLU;
static int8_t x606 = INT8_MIN;
int16_t x616 = -3;
volatile int32_t x618 = INT32_MAX;
int16_t x619 = -578;
uint8_t x620 = 24U;
volatile int32_t t154 = 1336;
int32_t x628 = INT32_MIN;
int16_t x630 = INT16_MIN;
uint64_t x632 = 3LLU;
volatile int32_t t157 = 15810140;
static int8_t x638 = INT8_MIN;
static volatile int32_t t159 = -4423860;
volatile int8_t x643 = INT8_MIN;
int64_t x644 = 43LL;
static int32_t x646 = INT32_MIN;
static int64_t x649 = -1LL;
volatile uint8_t x651 = 26U;
int16_t x658 = INT16_MAX;
volatile uint64_t x662 = 11LLU;
uint8_t x666 = UINT8_MAX;
int16_t x673 = INT16_MIN;
int64_t x678 = -39842LL;
int32_t x682 = INT32_MIN;
uint64_t x687 = 429169LLU;
int32_t t173 = -582945741;
int32_t x697 = INT32_MIN;
int16_t x698 = -1;
volatile int32_t t174 = 182155;
volatile int8_t x710 = INT8_MIN;
volatile uint64_t x711 = 241299209939884723LLU;
volatile int32_t x715 = -1;
uint16_t x718 = 16U;
static int32_t t180 = 2;
uint16_t x728 = 57U;
volatile uint64_t x734 = UINT64_MAX;
int8_t x735 = -1;
int64_t x742 = INT64_MIN;
volatile int32_t t186 = -79;
uint64_t x751 = 434645309277187846LLU;
int32_t x765 = INT32_MAX;
int8_t x768 = INT8_MAX;
int16_t x771 = INT16_MIN;
int8_t x772 = INT8_MIN;
int8_t x774 = INT8_MIN;
int32_t t193 = 264646453;
int32_t x777 = -22;
volatile int32_t t194 = 183435830;
uint8_t x783 = UINT8_MAX;
uint16_t x784 = UINT16_MAX;
volatile int32_t t195 = -1415;
static uint16_t x790 = 39U;
uint16_t x793 = UINT16_MAX;
volatile int32_t t199 = -373106;


void f0(void) {
    	static int16_t x1 = 61;
	int64_t x2 = INT64_MIN;
	uint32_t x3 = 124517601U;
	static volatile int64_t x4 = 2299973409LL;
	static volatile int32_t t0 = 0;

    t0 = (((x1&x2)&x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint8_t x6 = UINT8_MAX;
	int8_t x7 = INT8_MAX;
	volatile int64_t x8 = INT64_MAX;
	static volatile int32_t t1 = -6883;

    t1 = (((x5&x6)&x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x10 = INT64_MAX;
	static int16_t x12 = INT16_MAX;
	static volatile int32_t t2 = -24;

    t2 = (((x9&x10)&x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	int32_t x14 = -1;
	uint8_t x15 = UINT8_MAX;
	volatile int32_t t3 = -120788;

    t3 = (((x13&x14)&x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	static int32_t x18 = INT32_MAX;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 0;

    t4 = (((x17&x18)&x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 1;
	int64_t x22 = -4276231040929896004LL;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 1;

    t5 = (((x21&x22)&x23)<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = INT64_MIN;
	volatile int16_t x26 = -219;
	uint8_t x27 = 25U;
	int64_t x28 = INT64_MAX;
	int32_t t6 = -8041;

    t6 = (((x25&x26)&x27)<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = INT64_MIN;
	static int64_t x30 = -1LL;
	uint8_t x32 = UINT8_MAX;

    t7 = (((x29&x30)&x31)<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	volatile int8_t x34 = -1;
	int8_t x35 = INT8_MIN;
	volatile uint64_t x36 = 965818769LLU;
	static volatile int32_t t8 = -1251;

    t8 = (((x33&x34)&x35)<=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	int8_t x38 = 0;
	static int64_t x40 = INT64_MAX;
	volatile int32_t t9 = 31;

    t9 = (((x37&x38)&x39)<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MIN;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t10 = -3;

    t10 = (((x41&x42)&x43)<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int32_t x46 = -991;
	static volatile uint8_t x47 = 63U;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 265401373;

    t11 = (((x45&x46)&x47)<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = 1;
	int16_t x51 = INT16_MIN;
	static volatile uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 128133700;

    t12 = (((x49&x50)&x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = 3;
	int64_t x55 = 202626707626493208LL;
	static int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -1;

    t13 = (((x53&x54)&x55)<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = 102969;
	static volatile int16_t x59 = -1;
	volatile int64_t x60 = INT64_MIN;
	int32_t t14 = 2591;

    t14 = (((x57&x58)&x59)<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x63 = 43;
	volatile int32_t t15 = -1497199;

    t15 = (((x61&x62)&x63)<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MIN;
	static uint64_t x67 = 139493736808629673LLU;
	int32_t x68 = -94;
	volatile int32_t t16 = -740;

    t16 = (((x65&x66)&x67)<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	uint16_t x70 = UINT16_MAX;
	volatile int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 82148512;

    t17 = (((x69&x70)&x71)<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = INT16_MAX;
	int8_t x74 = 25;
	int32_t x75 = INT32_MIN;
	int32_t t18 = 1;

    t18 = (((x73&x74)&x75)<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1848798;
	int16_t x78 = -1;
	static uint8_t x79 = 13U;
	int32_t x80 = 8;
	volatile int32_t t19 = -37;

    t19 = (((x77&x78)&x79)<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 1450576812U;
	static int64_t x82 = -13987186853973LL;
	static int64_t x83 = -10578LL;
	int32_t x84 = -1;
	volatile int32_t t20 = 68926;

    t20 = (((x81&x82)&x83)<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	int16_t x87 = -4;
	volatile int64_t x88 = INT64_MIN;
	volatile int32_t t21 = -866050802;

    t21 = (((x85&x86)&x87)<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	static int32_t x90 = 859787;
	int64_t x91 = INT64_MIN;
	int32_t x92 = 1495258;
	volatile int32_t t22 = -109672216;

    t22 = (((x89&x90)&x91)<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 11U;
	static uint64_t x94 = UINT64_MAX;
	int64_t x95 = INT64_MIN;
	uint8_t x96 = 1U;
	static int32_t t23 = 15135;

    t23 = (((x93&x94)&x95)<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x97 = UINT8_MAX;
	volatile int32_t x98 = INT32_MIN;
	static uint16_t x99 = UINT16_MAX;
	static volatile int32_t x100 = -1;
	volatile int32_t t24 = -8737;

    t24 = (((x97&x98)&x99)<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	uint8_t x103 = 11U;
	static int8_t x104 = -1;

    t25 = (((x101&x102)&x103)<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = 47;
	int64_t x106 = INT64_MIN;
	int16_t x107 = 3722;
	static int32_t t26 = -531;

    t26 = (((x105&x106)&x107)<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x110 = 13U;
	volatile int32_t t27 = 968292608;

    t27 = (((x109&x110)&x111)<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 227U;
	uint16_t x114 = 2002U;
	int16_t x115 = INT16_MAX;
	uint32_t x116 = 1U;
	int32_t t28 = -267681;

    t28 = (((x113&x114)&x115)<=x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MAX;
	static volatile uint64_t x119 = 4452247558971803572LLU;
	int64_t x120 = -1LL;
	volatile int32_t t29 = 189509318;

    t29 = (((x117&x118)&x119)<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x122 = -14;
	volatile int16_t x123 = INT16_MIN;
	int32_t t30 = 88;

    t30 = (((x121&x122)&x123)<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 2U;
	int32_t x126 = -80223312;
	int16_t x127 = 777;

    t31 = (((x125&x126)&x127)<=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = 1U;
	uint32_t x130 = 29U;
	int8_t x131 = -1;
	int32_t t32 = 1;

    t32 = (((x129&x130)&x131)<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = -1;
	int64_t x135 = INT64_MAX;
	volatile int8_t x136 = INT8_MIN;

    t33 = (((x133&x134)&x135)<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 192U;
	int64_t x138 = 1LL;
	uint8_t x139 = UINT8_MAX;
	volatile int32_t t34 = -95;

    t34 = (((x137&x138)&x139)<=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = INT16_MIN;
	int8_t x142 = -11;
	volatile uint64_t x143 = 369551967LLU;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -30818;

    t35 = (((x141&x142)&x143)<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x147 = 673744610U;
	static uint8_t x148 = 89U;
	volatile int32_t t36 = -562;

    t36 = (((x145&x146)&x147)<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = INT32_MIN;
	int64_t x151 = 0LL;
	uint64_t x152 = 11083867101521417LLU;
	volatile int32_t t37 = 595304398;

    t37 = (((x149&x150)&x151)<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MIN;
	uint32_t x156 = 13383U;
	volatile int32_t t38 = 94;

    t38 = (((x153&x154)&x155)<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	int16_t x158 = INT16_MIN;
	int64_t x160 = -1LL;
	int32_t t39 = 131546;

    t39 = (((x157&x158)&x159)<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x161 = 79190LLU;
	int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MAX;
	uint64_t x164 = 2321761623679259075LLU;
	int32_t t40 = 72;

    t40 = (((x161&x162)&x163)<=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = 0;
	int64_t x166 = INT64_MIN;
	uint64_t x167 = 64007135657143LLU;
	int8_t x168 = 0;
	volatile int32_t t41 = 1;

    t41 = (((x165&x166)&x167)<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x171 = UINT16_MAX;
	static int32_t t42 = -1972984;

    t42 = (((x169&x170)&x171)<=x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = 6;
	int8_t x174 = -1;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -614;

    t43 = (((x173&x174)&x175)<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MIN;

    t44 = (((x177&x178)&x179)<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = INT8_MIN;

    t45 = (((x181&x182)&x183)<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = UINT64_MAX;
	int64_t x186 = -9449422LL;
	static volatile uint16_t x188 = 6U;
	int32_t t46 = -1359114;

    t46 = (((x185&x186)&x187)<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x190 = -6902;
	int16_t x191 = INT16_MAX;
	int16_t x192 = INT16_MAX;
	int32_t t47 = -2031101;

    t47 = (((x189&x190)&x191)<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x193 = UINT16_MAX;
	int8_t x194 = 1;
	int32_t x195 = INT32_MIN;
	int32_t x196 = -46328735;
	volatile int32_t t48 = -22480897;

    t48 = (((x193&x194)&x195)<=x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -53595387;
	int8_t x199 = 0;

    t49 = (((x197&x198)&x199)<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = INT64_MIN;
	int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MIN;
	static int32_t t50 = 236;

    t50 = (((x201&x202)&x203)<=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 4336U;
	int64_t x206 = INT64_MIN;
	static int64_t x207 = -1LL;
	int16_t x208 = 4158;
	int32_t t51 = -1425922;

    t51 = (((x205&x206)&x207)<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x211 = UINT8_MAX;
	int64_t x212 = INT64_MIN;
	static volatile int32_t t52 = -1;

    t52 = (((x209&x210)&x211)<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x214 = 1U;
	int64_t x215 = INT64_MIN;
	uint8_t x216 = 0U;
	volatile int32_t t53 = 38;

    t53 = (((x213&x214)&x215)<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MAX;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -13;

    t54 = (((x217&x218)&x219)<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 2U;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 35U;
	uint32_t x224 = 6U;

    t55 = (((x221&x222)&x223)<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	static int16_t x226 = INT16_MIN;
	uint64_t x228 = 4784478980LLU;
	static int32_t t56 = -317695104;

    t56 = (((x225&x226)&x227)<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 2714860U;
	int64_t x230 = -1LL;
	static int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 6;

    t57 = (((x229&x230)&x231)<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	uint16_t x234 = 12U;
	static int64_t x235 = 270492335999LL;
	int32_t x236 = -23178;
	int32_t t58 = -894856;

    t58 = (((x233&x234)&x235)<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = INT16_MAX;
	int16_t x239 = INT16_MIN;
	static int32_t x240 = -3522;
	int32_t t59 = -417611329;

    t59 = (((x237&x238)&x239)<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = 0;
	static uint16_t x242 = UINT16_MAX;
	int16_t x243 = INT16_MIN;
	int64_t x244 = -1LL;
	volatile int32_t t60 = -1375261;

    t60 = (((x241&x242)&x243)<=x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -308055010;
	uint8_t x246 = UINT8_MAX;
	int16_t x247 = INT16_MIN;
	uint32_t x248 = 1U;
	volatile int32_t t61 = 876;

    t61 = (((x245&x246)&x247)<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	static uint8_t x250 = UINT8_MAX;
	static int32_t x251 = INT32_MIN;
	static volatile int64_t x252 = 61120831298LL;
	int32_t t62 = -14555;

    t62 = (((x249&x250)&x251)<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -19304837;
	uint64_t x255 = 122978237918238LLU;
	int64_t x256 = -1LL;
	static int32_t t63 = -6901253;

    t63 = (((x253&x254)&x255)<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	static int16_t x258 = INT16_MIN;
	uint16_t x259 = 6U;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t64 = -1;

    t64 = (((x257&x258)&x259)<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 50446122U;
	static uint16_t x262 = 817U;
	uint64_t x263 = 27633772LLU;
	volatile uint64_t x264 = 55LLU;

    t65 = (((x261&x262)&x263)<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -6692;
	static int64_t x266 = INT64_MAX;
	uint64_t x267 = UINT64_MAX;
	volatile int16_t x268 = INT16_MAX;

    t66 = (((x265&x266)&x267)<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	int64_t x271 = INT64_MAX;
	volatile int16_t x272 = 1161;
	int32_t t67 = -237406729;

    t67 = (((x269&x270)&x271)<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 50LL;
	int8_t x275 = INT8_MIN;
	static int64_t x276 = 90238990221409LL;
	static int32_t t68 = -1015464915;

    t68 = (((x273&x274)&x275)<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	static int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -15136432;

    t69 = (((x277&x278)&x279)<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 75U;
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = INT8_MIN;

    t70 = (((x281&x282)&x283)<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 0LLU;
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = 1;
	int8_t x288 = -1;

    t71 = (((x285&x286)&x287)<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = -836550844831704LL;
	int32_t x290 = INT32_MAX;
	int8_t x291 = -1;
	static volatile uint16_t x292 = 21U;
	int32_t t72 = 98;

    t72 = (((x289&x290)&x291)<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = INT8_MIN;
	uint64_t x295 = 3LLU;

    t73 = (((x293&x294)&x295)<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MAX;
	uint32_t x298 = 140U;
	static int8_t x299 = -1;
	int64_t x300 = -1778LL;
	volatile int32_t t74 = 34;

    t74 = (((x297&x298)&x299)<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MAX;
	uint64_t x302 = 1198606467853175LLU;
	int64_t x303 = INT64_MAX;
	int32_t t75 = -6694;

    t75 = (((x301&x302)&x303)<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x306 = 4U;
	volatile int32_t t76 = -1;

    t76 = (((x305&x306)&x307)<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 3U;
	static int16_t x310 = -1;
	uint8_t x311 = 3U;
	int64_t x312 = INT64_MIN;
	static int32_t t77 = 2;

    t77 = (((x309&x310)&x311)<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 2U;
	volatile int32_t x314 = -43936;
	volatile int16_t x315 = INT16_MIN;
	uint64_t x316 = 1074573681322LLU;
	int32_t t78 = -5;

    t78 = (((x313&x314)&x315)<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x319 = 35U;
	uint64_t x320 = UINT64_MAX;
	int32_t t79 = -96360;

    t79 = (((x317&x318)&x319)<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = 6;
	uint16_t x322 = UINT16_MAX;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	int32_t t80 = -59;

    t80 = (((x321&x322)&x323)<=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MAX;
	static int8_t x326 = INT8_MIN;
	int16_t x327 = 0;
	int16_t x328 = 1;
	int32_t t81 = -54383619;

    t81 = (((x325&x326)&x327)<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MIN;
	static volatile int8_t x330 = INT8_MIN;
	volatile uint16_t x331 = 13266U;
	int16_t x332 = -3886;
	int32_t t82 = 281;

    t82 = (((x329&x330)&x331)<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x334 = INT64_MAX;
	static volatile int8_t x335 = INT8_MIN;
	volatile int32_t t83 = 191;

    t83 = (((x333&x334)&x335)<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	uint64_t x338 = UINT64_MAX;
	static volatile uint16_t x339 = 732U;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 112360;

    t84 = (((x337&x338)&x339)<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x343 = INT8_MIN;
	volatile int32_t t85 = -94;

    t85 = (((x341&x342)&x343)<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = INT8_MIN;
	static uint32_t x348 = 2U;
	volatile int32_t t86 = -649431800;

    t86 = (((x345&x346)&x347)<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MAX;
	volatile int8_t x351 = -13;
	volatile uint64_t x352 = 2901561113319493807LLU;
	volatile int32_t t87 = 4020774;

    t87 = (((x349&x350)&x351)<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x353 = 2189555147782773809LLU;
	static volatile int16_t x355 = 131;
	int16_t x356 = INT16_MAX;
	int32_t t88 = -18;

    t88 = (((x353&x354)&x355)<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 48177190179046LLU;
	int8_t x358 = INT8_MIN;
	int64_t x359 = 32210988436LL;
	volatile int64_t x360 = -1LL;
	int32_t t89 = -12;

    t89 = (((x357&x358)&x359)<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -1LL;
	int8_t x362 = -1;
	uint8_t x364 = 14U;
	int32_t t90 = 5910;

    t90 = (((x361&x362)&x363)<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x366 = 111U;
	int8_t x367 = 1;
	int32_t x368 = -1;
	static int32_t t91 = -56113085;

    t91 = (((x365&x366)&x367)<=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = INT32_MIN;
	static volatile int32_t t92 = 0;

    t92 = (((x369&x370)&x371)<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	uint32_t x374 = UINT32_MAX;
	uint64_t x375 = 5540LLU;

    t93 = (((x373&x374)&x375)<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = INT64_MIN;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = INT32_MIN;
	uint8_t x380 = 2U;
	volatile int32_t t94 = 971234;

    t94 = (((x377&x378)&x379)<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x383 = 12U;
	static int16_t x384 = INT16_MAX;
	volatile int32_t t95 = -19;

    t95 = (((x381&x382)&x383)<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 4191U;
	volatile int32_t t96 = 1184;

    t96 = (((x385&x386)&x387)<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x391 = INT8_MIN;
	volatile int32_t t97 = 37;

    t97 = (((x389&x390)&x391)<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x394 = UINT64_MAX;
	int64_t x396 = 13932295LL;
	volatile int32_t t98 = 7857040;

    t98 = (((x393&x394)&x395)<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = 1635;
	static int8_t x398 = 2;
	volatile uint32_t x399 = 427731207U;
	volatile int16_t x400 = INT16_MIN;
	static int32_t t99 = -119;

    t99 = (((x397&x398)&x399)<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = -133679209LL;
	volatile int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	int64_t x404 = -1LL;
	volatile int32_t t100 = -12;

    t100 = (((x401&x402)&x403)<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x405 = UINT8_MAX;
	static int16_t x406 = INT16_MIN;
	uint64_t x407 = 1961602572151717LLU;
	static uint8_t x408 = UINT8_MAX;

    t101 = (((x405&x406)&x407)<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	static int64_t x410 = 15LL;
	static volatile int8_t x412 = INT8_MIN;
	static int32_t t102 = -8324124;

    t102 = (((x409&x410)&x411)<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	uint8_t x414 = 5U;
	uint32_t x415 = 525577U;
	int16_t x416 = 0;
	static volatile int32_t t103 = 1769810;

    t103 = (((x413&x414)&x415)<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MAX;
	volatile uint8_t x418 = UINT8_MAX;
	int32_t t104 = -235603;

    t104 = (((x417&x418)&x419)<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = INT8_MIN;
	uint16_t x423 = 19536U;
	int32_t x424 = INT32_MIN;
	volatile int32_t t105 = 1065638438;

    t105 = (((x421&x422)&x423)<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x425 = INT32_MIN;
	volatile uint64_t x426 = UINT64_MAX;
	volatile int16_t x427 = 267;
	static uint32_t x428 = UINT32_MAX;
	volatile int32_t t106 = 504;

    t106 = (((x425&x426)&x427)<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = 2;
	int8_t x431 = INT8_MIN;
	static int64_t x432 = INT64_MIN;
	volatile int32_t t107 = 26061;

    t107 = (((x429&x430)&x431)<=x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 100;
	volatile uint64_t x434 = UINT64_MAX;
	static int16_t x435 = -587;
	int64_t x436 = 8008341299077LL;
	static volatile int32_t t108 = 266;

    t108 = (((x433&x434)&x435)<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = INT32_MIN;
	volatile uint16_t x438 = 930U;
	static int8_t x439 = INT8_MIN;
	uint16_t x440 = 1U;
	int32_t t109 = -57;

    t109 = (((x437&x438)&x439)<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -943;
	volatile int16_t x443 = INT16_MIN;

    t110 = (((x441&x442)&x443)<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = INT8_MIN;
	uint8_t x447 = 61U;
	static int16_t x448 = INT16_MIN;

    t111 = (((x445&x446)&x447)<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x449 = INT64_MIN;
	int64_t x451 = 712202LL;
	volatile int8_t x452 = INT8_MIN;

    t112 = (((x449&x450)&x451)<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = 0;
	int16_t x454 = INT16_MIN;
	int8_t x455 = INT8_MIN;
	static uint64_t x456 = 5639LLU;
	int32_t t113 = -1;

    t113 = (((x453&x454)&x455)<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -1;
	int64_t x458 = INT64_MIN;
	volatile uint32_t x460 = 41U;
	int32_t t114 = 1;

    t114 = (((x457&x458)&x459)<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	uint32_t x463 = UINT32_MAX;
	int64_t x464 = INT64_MIN;
	int32_t t115 = -116384;

    t115 = (((x461&x462)&x463)<=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = INT16_MIN;
	volatile int8_t x468 = INT8_MIN;
	int32_t t116 = 85448;

    t116 = (((x465&x466)&x467)<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x470 = 21U;
	int64_t x471 = INT64_MAX;
	int64_t x472 = -1LL;
	int32_t t117 = -576;

    t117 = (((x469&x470)&x471)<=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 78U;
	volatile int8_t x475 = -1;
	volatile int32_t t118 = -3850;

    t118 = (((x473&x474)&x475)<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 86183943U;
	int8_t x480 = INT8_MAX;
	volatile int32_t t119 = -85836;

    t119 = (((x477&x478)&x479)<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	uint16_t x482 = 18164U;
	volatile int64_t x483 = 189LL;
	int64_t x484 = 1455LL;
	volatile int32_t t120 = -4597;

    t120 = (((x481&x482)&x483)<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	int8_t x486 = -22;
	static int8_t x487 = INT8_MIN;
	int8_t x488 = -1;
	int32_t t121 = 142504733;

    t121 = (((x485&x486)&x487)<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1;
	uint8_t x491 = 3U;
	static uint64_t x492 = UINT64_MAX;
	static int32_t t122 = 249330235;

    t122 = (((x489&x490)&x491)<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 1657U;
	static uint32_t x494 = 199U;
	volatile int32_t x495 = 7;
	int64_t x496 = -9334LL;
	int32_t t123 = -1;

    t123 = (((x493&x494)&x495)<=x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x499 = 17066U;
	int64_t x500 = -1831497LL;
	int32_t t124 = 1964840;

    t124 = (((x497&x498)&x499)<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x501 = 25U;
	int16_t x503 = 9;
	static int16_t x504 = -1;
	static int32_t t125 = -649102;

    t125 = (((x501&x502)&x503)<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	int64_t x507 = -1LL;
	volatile uint32_t x508 = UINT32_MAX;
	volatile int32_t t126 = -11882;

    t126 = (((x505&x506)&x507)<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x509 = -69584LL;
	uint64_t x510 = 196007628LLU;
	int8_t x511 = 38;
	int8_t x512 = -57;
	volatile int32_t t127 = 160;

    t127 = (((x509&x510)&x511)<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	static uint64_t x516 = 2331453023742455LLU;
	static volatile int32_t t128 = 10;

    t128 = (((x513&x514)&x515)<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -1;
	uint32_t x518 = UINT32_MAX;
	int8_t x519 = 49;
	static volatile int32_t t129 = 680563;

    t129 = (((x517&x518)&x519)<=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x522 = 109U;
	int64_t x523 = -21218206679201LL;

    t130 = (((x521&x522)&x523)<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 1142U;
	volatile uint32_t x526 = 325U;
	int64_t x527 = INT64_MIN;
	uint64_t x528 = 1LLU;
	volatile int32_t t131 = 300285;

    t131 = (((x525&x526)&x527)<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 178137U;
	uint32_t x530 = 210570534U;
	uint8_t x532 = 0U;
	volatile int32_t t132 = -203075769;

    t132 = (((x529&x530)&x531)<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x534 = -104;
	int16_t x536 = INT16_MIN;
	static volatile int32_t t133 = 9;

    t133 = (((x533&x534)&x535)<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x538 = -1LL;
	volatile int32_t t134 = 1242087;

    t134 = (((x537&x538)&x539)<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 5;
	uint64_t x542 = UINT64_MAX;
	int16_t x543 = 1;

    t135 = (((x541&x542)&x543)<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = -1;
	static int16_t x547 = -1;
	int64_t x548 = -981212821133LL;
	static int32_t t136 = -7549053;

    t136 = (((x545&x546)&x547)<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x549 = 65566474235710LL;
	static int8_t x551 = INT8_MAX;
	int8_t x552 = INT8_MAX;
	static int32_t t137 = 909418;

    t137 = (((x549&x550)&x551)<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 63U;
	int16_t x556 = -1;
	static int32_t t138 = 23;

    t138 = (((x553&x554)&x555)<=x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x558 = INT64_MIN;
	uint32_t x559 = 28538429U;
	int32_t x560 = INT32_MIN;

    t139 = (((x557&x558)&x559)<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x562 = 1U;
	int32_t x563 = INT32_MIN;
	volatile int32_t x564 = INT32_MIN;
	volatile int32_t t140 = 3;

    t140 = (((x561&x562)&x563)<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x566 = UINT32_MAX;
	static int32_t x568 = INT32_MIN;
	int32_t t141 = 21682;

    t141 = (((x565&x566)&x567)<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = 11481510U;
	uint8_t x571 = UINT8_MAX;
	static int32_t x572 = INT32_MIN;

    t142 = (((x569&x570)&x571)<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 868241217;
	uint16_t x574 = 0U;
	uint8_t x575 = 2U;
	int16_t x576 = 324;

    t143 = (((x573&x574)&x575)<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 2249423939341615170LLU;
	static uint32_t x578 = 2U;
	int32_t x579 = -1;
	int64_t x580 = INT64_MIN;

    t144 = (((x577&x578)&x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = UINT8_MAX;
	uint8_t x582 = 14U;
	uint8_t x584 = 6U;
	volatile int32_t t145 = 2;

    t145 = (((x581&x582)&x583)<=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = INT16_MIN;
	uint16_t x586 = UINT16_MAX;
	int16_t x587 = -1;
	int8_t x588 = INT8_MIN;
	int32_t t146 = 1066;

    t146 = (((x585&x586)&x587)<=x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int8_t x589 = INT8_MIN;
	volatile int8_t x590 = INT8_MIN;
	static int32_t x592 = INT32_MAX;
	volatile int32_t t147 = 1;

    t147 = (((x589&x590)&x591)<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x594 = UINT16_MAX;
	int64_t x595 = INT64_MAX;
	static volatile int32_t t148 = -20156;

    t148 = (((x593&x594)&x595)<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x598 = 200LLU;
	int8_t x599 = -1;
	int64_t x600 = -1LL;
	static volatile int32_t t149 = 41877;

    t149 = (((x597&x598)&x599)<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x601 = UINT16_MAX;
	int64_t x602 = INT64_MIN;
	int8_t x603 = INT8_MIN;
	static int32_t t150 = 71;

    t150 = (((x601&x602)&x603)<=x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x607 = -1;
	uint64_t x608 = UINT64_MAX;
	int32_t t151 = 1623080;

    t151 = (((x605&x606)&x607)<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	volatile uint32_t x610 = 26670U;
	int64_t x611 = 17241LL;
	uint16_t x612 = UINT16_MAX;
	static int32_t t152 = 74330752;

    t152 = (((x609&x610)&x611)<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -110875106485966017LL;
	int32_t x614 = INT32_MIN;
	uint32_t x615 = UINT32_MAX;
	volatile int32_t t153 = -328;

    t153 = (((x613&x614)&x615)<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MAX;

    t154 = (((x617&x618)&x619)<=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	uint32_t x622 = 1964U;
	volatile uint32_t x623 = UINT32_MAX;
	int16_t x624 = -7;
	int32_t t155 = 787;

    t155 = (((x621&x622)&x623)<=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 0U;
	static volatile int16_t x626 = INT16_MIN;
	int16_t x627 = INT16_MIN;
	volatile int32_t t156 = -7070;

    t156 = (((x625&x626)&x627)<=x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 598U;
	int16_t x631 = INT16_MIN;

    t157 = (((x629&x630)&x631)<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 64U;
	volatile int8_t x634 = INT8_MIN;
	static int64_t x635 = INT64_MAX;
	int64_t x636 = -1LL;
	int32_t t158 = 22;

    t158 = (((x633&x634)&x635)<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = -1;
	int64_t x639 = INT64_MIN;
	uint32_t x640 = 1U;

    t159 = (((x637&x638)&x639)<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 171LLU;
	volatile uint16_t x642 = UINT16_MAX;
	volatile int32_t t160 = -11;

    t160 = (((x641&x642)&x643)<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = 15;
	int16_t x647 = INT16_MIN;
	int8_t x648 = -3;
	static volatile int32_t t161 = -6101266;

    t161 = (((x645&x646)&x647)<=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x650 = 153;
	int32_t x652 = INT32_MAX;
	int32_t t162 = 1;

    t162 = (((x649&x650)&x651)<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x653 = 80961085330569LLU;
	volatile int32_t x654 = -3071;
	int8_t x655 = 3;
	volatile int16_t x656 = INT16_MAX;
	volatile int32_t t163 = 1454;

    t163 = (((x653&x654)&x655)<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MAX;
	int8_t x659 = INT8_MIN;
	volatile int64_t x660 = INT64_MIN;
	int32_t t164 = 96502450;

    t164 = (((x657&x658)&x659)<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x661 = UINT32_MAX;
	uint64_t x663 = 0LLU;
	static uint32_t x664 = UINT32_MAX;
	int32_t t165 = -30779829;

    t165 = (((x661&x662)&x663)<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = -226181638LL;
	uint16_t x667 = 9U;
	volatile uint64_t x668 = 63989LLU;
	int32_t t166 = 230304;

    t166 = (((x665&x666)&x667)<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = -20;
	volatile uint64_t x670 = 8195625291098289LLU;
	int16_t x671 = -50;
	int64_t x672 = -1LL;
	int32_t t167 = 102851547;

    t167 = (((x669&x670)&x671)<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x674 = 882U;
	uint64_t x675 = 2963869705LLU;
	int32_t x676 = -4437134;
	int32_t t168 = 29;

    t168 = (((x673&x674)&x675)<=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	int16_t x679 = -1;
	int8_t x680 = -1;
	volatile int32_t t169 = 1;

    t169 = (((x677&x678)&x679)<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = 26;
	int16_t x683 = 0;
	volatile int16_t x684 = -671;
	int32_t t170 = 950;

    t170 = (((x681&x682)&x683)<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x685 = 12U;
	int32_t x686 = -7;
	uint32_t x688 = UINT32_MAX;
	volatile int32_t t171 = -83;

    t171 = (((x685&x686)&x687)<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = 406204900996795916LL;
	uint16_t x690 = UINT16_MAX;
	volatile int8_t x691 = 6;
	volatile int8_t x692 = -53;
	int32_t t172 = -75403011;

    t172 = (((x689&x690)&x691)<=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -1;
	int32_t x694 = -1;
	int64_t x695 = INT64_MIN;
	uint64_t x696 = 2465591996830LLU;

    t173 = (((x693&x694)&x695)<=x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x699 = -1LL;
	int16_t x700 = INT16_MIN;

    t174 = (((x697&x698)&x699)<=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	volatile int16_t x702 = 0;
	uint64_t x703 = 4266495648833260LLU;
	int64_t x704 = INT64_MIN;
	volatile int32_t t175 = -15801;

    t175 = (((x701&x702)&x703)<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MIN;
	int8_t x706 = -1;
	int32_t x707 = -1;
	static int32_t x708 = INT32_MAX;
	int32_t t176 = -1845091;

    t176 = (((x705&x706)&x707)<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 16765020U;
	static int64_t x712 = -1LL;
	volatile int32_t t177 = 0;

    t177 = (((x709&x710)&x711)<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	static int16_t x714 = INT16_MIN;
	static uint8_t x716 = 31U;
	volatile int32_t t178 = 55;

    t178 = (((x713&x714)&x715)<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 24478954U;
	int64_t x719 = -7108473LL;
	int16_t x720 = INT16_MIN;
	volatile int32_t t179 = 171914;

    t179 = (((x717&x718)&x719)<=x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1;
	int8_t x722 = 5;
	static int64_t x723 = -7144651LL;
	int8_t x724 = -1;

    t180 = (((x721&x722)&x723)<=x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = -1LL;
	static volatile uint16_t x726 = UINT16_MAX;
	int64_t x727 = 7896204182LL;
	int32_t t181 = 0;

    t181 = (((x725&x726)&x727)<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -675;
	volatile int8_t x730 = INT8_MAX;
	int64_t x731 = 755LL;
	int64_t x732 = -1LL;
	volatile int32_t t182 = 3591;

    t182 = (((x729&x730)&x731)<=x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MIN;
	int32_t x736 = -3092;
	volatile int32_t t183 = -606117;

    t183 = (((x733&x734)&x735)<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x737 = 15;
	uint32_t x738 = 54724U;
	int8_t x739 = INT8_MIN;
	int64_t x740 = INT64_MIN;
	int32_t t184 = 1913413;

    t184 = (((x737&x738)&x739)<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = INT8_MAX;
	static int16_t x743 = INT16_MIN;
	int64_t x744 = INT64_MIN;
	volatile int32_t t185 = 135582;

    t185 = (((x741&x742)&x743)<=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	uint64_t x746 = UINT64_MAX;
	volatile int32_t x747 = -480315;
	static int64_t x748 = -1LL;

    t186 = (((x745&x746)&x747)<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x749 = UINT16_MAX;
	int64_t x750 = -1LL;
	int32_t x752 = -1;
	int32_t t187 = -14053;

    t187 = (((x749&x750)&x751)<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = UINT16_MAX;
	uint8_t x754 = UINT8_MAX;
	int8_t x755 = -1;
	static int8_t x756 = INT8_MIN;
	int32_t t188 = 29166225;

    t188 = (((x753&x754)&x755)<=x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = -1;
	volatile int32_t x758 = 6;
	volatile int16_t x759 = INT16_MAX;
	int32_t x760 = INT32_MAX;
	volatile int32_t t189 = 0;

    t189 = (((x757&x758)&x759)<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = 2;
	uint64_t x762 = UINT64_MAX;
	uint16_t x763 = UINT16_MAX;
	uint8_t x764 = 3U;
	int32_t t190 = -7;

    t190 = (((x761&x762)&x763)<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = INT32_MIN;
	int8_t x767 = INT8_MIN;
	volatile int32_t t191 = 118253;

    t191 = (((x765&x766)&x767)<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	int8_t x770 = INT8_MAX;
	static volatile int32_t t192 = 5788494;

    t192 = (((x769&x770)&x771)<=x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	int16_t x775 = INT16_MAX;
	uint16_t x776 = 3052U;

    t193 = (((x773&x774)&x775)<=x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x778 = 1;
	uint64_t x779 = UINT64_MAX;
	int64_t x780 = INT64_MIN;

    t194 = (((x777&x778)&x779)<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x781 = 73046361LLU;
	int16_t x782 = INT16_MIN;

    t195 = (((x781&x782)&x783)<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x785 = INT64_MIN;
	int16_t x786 = INT16_MIN;
	volatile int8_t x787 = 2;
	uint64_t x788 = 119541LLU;
	static volatile int32_t t196 = -13930528;

    t196 = (((x785&x786)&x787)<=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -1LL;
	volatile uint8_t x791 = UINT8_MAX;
	int8_t x792 = INT8_MIN;
	volatile int32_t t197 = -2;

    t197 = (((x789&x790)&x791)<=x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x794 = INT16_MIN;
	uint8_t x795 = 1U;
	int16_t x796 = INT16_MIN;
	volatile int32_t t198 = 56170645;

    t198 = (((x793&x794)&x795)<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 1131U;
	uint16_t x798 = 0U;
	static uint16_t x799 = 3U;
	uint64_t x800 = 1422515650476521LLU;

    t199 = (((x797&x798)&x799)<=x800);

    if (t199 != 1) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

