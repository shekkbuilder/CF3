
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

static uint16_t x5 = 145U;
volatile uint32_t x10 = 350U;
uint8_t x14 = UINT8_MAX;
int16_t x15 = INT16_MIN;
static volatile int32_t t3 = -404392241;
int32_t x22 = 11;
int32_t t5 = -44662373;
static int16_t x30 = -1583;
static uint32_t x35 = 241U;
volatile int16_t x38 = INT16_MIN;
static int32_t t10 = -143410258;
int32_t x46 = INT32_MAX;
volatile int8_t x50 = INT8_MAX;
static int16_t x54 = -1;
volatile int8_t x64 = INT8_MIN;
volatile int32_t t17 = -25;
volatile int8_t x73 = INT8_MAX;
int32_t t19 = -2369;
static int8_t x85 = 1;
static int32_t t21 = 513440418;
volatile int64_t x90 = INT64_MAX;
int16_t x91 = -1;
uint32_t x92 = 131873U;
static uint16_t x93 = 795U;
int8_t x96 = INT8_MIN;
int8_t x104 = -1;
int64_t x108 = INT64_MAX;
int16_t x115 = INT16_MAX;
static volatile int32_t t28 = -146;
volatile uint16_t x117 = UINT16_MAX;
volatile uint64_t x118 = 34083LLU;
int8_t x123 = INT8_MIN;
volatile int32_t t31 = 207;
int16_t x135 = INT16_MIN;
int32_t x140 = INT32_MAX;
int32_t x148 = -1;
int32_t t37 = -331838;
int16_t x156 = -2478;
int8_t x159 = INT8_MIN;
int64_t x162 = -1LL;
static uint32_t x171 = 312892784U;
volatile int64_t x175 = INT64_MIN;
int32_t t44 = 0;
static int64_t x181 = 28495236854LL;
static int32_t x188 = INT32_MAX;
static int32_t x193 = INT32_MIN;
volatile int32_t t48 = 86867391;
int64_t x199 = INT64_MIN;
int32_t t49 = 87545;
uint16_t x205 = UINT16_MAX;
int16_t x213 = INT16_MIN;
int16_t x215 = INT16_MIN;
int64_t x224 = INT64_MIN;
volatile int8_t x227 = 0;
uint64_t x229 = UINT64_MAX;
int32_t t57 = 96822334;
static uint16_t x239 = 2U;
static volatile uint8_t x244 = UINT8_MAX;
static volatile int32_t t60 = -648619;
int32_t x246 = INT32_MAX;
static uint32_t x252 = 5U;
uint32_t x254 = UINT32_MAX;
int8_t x259 = INT8_MAX;
uint32_t x261 = UINT32_MAX;
int8_t x262 = INT8_MAX;
uint8_t x268 = 42U;
volatile uint32_t x271 = 188U;
static int8_t x276 = -1;
static volatile uint8_t x279 = UINT8_MAX;
int32_t x280 = -1;
volatile int16_t x283 = INT16_MAX;
int32_t t72 = -206898;
int64_t x299 = INT64_MIN;
int32_t x301 = INT32_MIN;
static uint16_t x303 = 117U;
static volatile int32_t t75 = -4;
int16_t x307 = INT16_MIN;
uint8_t x310 = 63U;
int64_t x313 = INT64_MIN;
int8_t x315 = -1;
int32_t t80 = 1;
static int32_t x327 = 2031704;
volatile int32_t t81 = -321254;
int32_t t82 = 5114;
uint64_t x336 = 88657LLU;
volatile int32_t x340 = INT32_MAX;
static volatile int32_t t84 = -126993035;
volatile int8_t x347 = 2;
int64_t x353 = INT64_MIN;
int64_t x354 = -1LL;
int32_t x357 = -1;
uint8_t x366 = UINT8_MAX;
int64_t x367 = -1LL;
static volatile int64_t x379 = -1LL;
volatile int32_t t95 = 79768;
int64_t x385 = INT64_MIN;
volatile int32_t t97 = -7;
int16_t x402 = -254;
int32_t t100 = 42;
volatile int8_t x417 = INT8_MIN;
volatile uint16_t x420 = 3U;
int8_t x423 = INT8_MAX;
int8_t x435 = INT8_MIN;
int32_t x440 = -1;
volatile int16_t x443 = INT16_MIN;
static uint64_t x455 = UINT64_MAX;
volatile int64_t x463 = -6288611063565118LL;
static int32_t x465 = -1;
int64_t x469 = -1LL;
int32_t x471 = INT32_MIN;
int8_t x473 = INT8_MIN;
uint16_t x474 = UINT16_MAX;
uint16_t x479 = UINT16_MAX;
uint16_t x488 = 25U;
volatile int32_t t123 = -1262086;
int32_t x501 = INT32_MIN;
static int8_t x502 = -3;
volatile uint64_t x503 = UINT64_MAX;
uint16_t x504 = UINT16_MAX;
static uint32_t x507 = 1109U;
int32_t t126 = -439;
static uint16_t x511 = 91U;
static uint64_t x512 = 1019265650316380487LLU;
volatile int16_t x514 = INT16_MIN;
volatile int8_t x524 = -1;
int16_t x530 = -1;
int64_t x531 = INT64_MAX;
int32_t t133 = 272;
static int32_t x539 = -332;
int32_t t134 = -743850214;
uint32_t x543 = 39796520U;
static uint16_t x547 = UINT16_MAX;
int64_t x561 = -345572794556828LL;
static uint16_t x562 = UINT16_MAX;
static uint64_t x563 = 2963698LLU;
uint16_t x570 = 21343U;
volatile uint64_t x571 = 142163445836435936LLU;
static volatile int32_t t144 = 104155;
volatile int16_t x588 = INT16_MAX;
int32_t t146 = 672023206;
volatile int8_t x590 = 0;
int64_t x594 = -1626853LL;
int16_t x595 = -10;
int16_t x605 = INT16_MAX;
uint16_t x606 = 368U;
int32_t x620 = INT32_MAX;
int64_t x626 = INT64_MIN;
volatile int16_t x630 = INT16_MAX;
volatile int32_t t158 = -969138715;
static volatile int32_t t159 = -1451;
uint8_t x643 = UINT8_MAX;
volatile int32_t t160 = -223121;
uint64_t x653 = 124182933140256856LLU;
int32_t t164 = 253625;
int8_t x661 = 6;
volatile int64_t x667 = -5LL;
volatile int32_t x673 = 44037;
uint64_t x679 = 4299LLU;
volatile uint8_t x683 = 6U;
int32_t x691 = -1098;
int64_t x698 = -1LL;
uint64_t x700 = UINT64_MAX;
static int32_t t174 = -654;
volatile uint32_t x703 = 261U;
int32_t x704 = -7;
volatile int32_t t175 = -36418386;
int8_t x705 = -23;
static uint16_t x706 = UINT16_MAX;
uint64_t x715 = UINT64_MAX;
volatile uint32_t x723 = 6U;
int8_t x725 = INT8_MIN;
int64_t x728 = INT64_MIN;
static int16_t x729 = -216;
int64_t x732 = INT64_MIN;
volatile int32_t t182 = -7154503;
static int16_t x740 = INT16_MIN;
static int8_t x742 = INT8_MIN;
uint16_t x748 = 2U;
volatile int32_t t186 = 159227;
uint64_t x752 = 10334527104336LLU;
static volatile int32_t x758 = INT32_MAX;
volatile int8_t x763 = INT8_MAX;
int8_t x764 = 34;
static volatile int8_t x766 = INT8_MIN;
uint64_t x769 = 35061473794LLU;
uint32_t x772 = 186695089U;
uint64_t x776 = UINT64_MAX;
int8_t x779 = INT8_MIN;
int16_t x783 = INT16_MAX;
static uint8_t x790 = 13U;
static volatile int64_t x791 = INT64_MIN;
int16_t x794 = 0;
int32_t t198 = -1775;
volatile int16_t x799 = -1;


void f0(void) {
    	uint64_t x1 = 6271270LLU;
	int8_t x2 = INT8_MIN;
	int32_t x3 = -1;
	uint16_t x4 = 9U;
	volatile int32_t t0 = 1;

    t0 = ((x1>x2)*(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x6 = INT32_MAX;
	volatile uint16_t x7 = UINT16_MAX;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 0;

    t1 = ((x5>x6)*(x7==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	uint32_t x11 = 17797U;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -118210535;

    t2 = ((x9>x10)*(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	int8_t x16 = 3;

    t3 = ((x13>x14)*(x15==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 153960868128697957LLU;
	int8_t x18 = 0;
	int32_t x19 = 5402;
	int16_t x20 = 10400;
	int32_t t4 = -1655123;

    t4 = ((x17>x18)*(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = INT32_MAX;
	uint16_t x23 = 112U;
	static uint8_t x24 = 0U;

    t5 = ((x21>x22)*(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 0LLU;
	int64_t x26 = INT64_MAX;
	int32_t x27 = 295215;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 1;

    t6 = ((x25>x26)*(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = 18284532272464LLU;
	static int64_t x31 = 17798940815771LL;
	int32_t x32 = -1;
	static volatile int32_t t7 = 0;

    t7 = ((x29>x30)*(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile int16_t x34 = 1306;
	volatile uint64_t x36 = 390968062818785LLU;
	static volatile int32_t t8 = 61873170;

    t8 = ((x33>x34)*(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = 707802067LLU;
	int32_t x39 = -1;
	int8_t x40 = INT8_MAX;
	int32_t t9 = 128558;

    t9 = ((x37>x38)*(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	static uint64_t x42 = 776349421728544LLU;
	int32_t x43 = 350175156;
	volatile uint16_t x44 = UINT16_MAX;

    t10 = ((x41>x42)*(x43==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MIN;
	int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 180121200;

    t11 = ((x45>x46)*(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	static uint8_t x51 = 1U;
	int8_t x52 = INT8_MAX;
	static volatile int32_t t12 = 15813005;

    t12 = ((x49>x50)*(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MIN;
	int64_t x55 = 73078625037LL;
	volatile uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = -2658;

    t13 = ((x53>x54)*(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 21087LLU;
	int16_t x58 = INT16_MIN;
	static int64_t x59 = INT64_MAX;
	int32_t x60 = -1;
	volatile int32_t t14 = -23;

    t14 = ((x57>x58)*(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MAX;
	static uint16_t x63 = UINT16_MAX;
	int32_t t15 = -122402;

    t15 = ((x61>x62)*(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	int16_t x66 = 0;
	int8_t x67 = -1;
	uint8_t x68 = 1U;
	volatile int32_t t16 = -393785684;

    t16 = ((x65>x66)*(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	volatile int64_t x70 = -3525LL;
	int32_t x71 = 65128;
	static int64_t x72 = -2253959LL;

    t17 = ((x69>x70)*(x71==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x74 = 3U;
	int16_t x75 = -116;
	int16_t x76 = -13880;
	int32_t t18 = -2;

    t18 = ((x73>x74)*(x75==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = INT64_MIN;
	int8_t x78 = 1;
	int8_t x79 = -13;
	static int64_t x80 = 4403000687372258LL;

    t19 = ((x77>x78)*(x79==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -69094922329LL;
	uint16_t x82 = UINT16_MAX;
	int16_t x83 = 1;
	volatile int8_t x84 = -1;
	volatile int32_t t20 = -12;

    t20 = ((x81>x82)*(x83==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x86 = UINT32_MAX;
	int8_t x87 = -12;
	int8_t x88 = INT8_MIN;

    t21 = ((x85>x86)*(x87==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = -28;
	volatile int32_t t22 = -1156;

    t22 = ((x89>x90)*(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = 18U;
	int64_t x95 = INT64_MAX;
	volatile int32_t t23 = 56;

    t23 = ((x93>x94)*(x95==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	volatile int64_t x98 = INT64_MIN;
	int16_t x99 = 6790;
	int64_t x100 = -1LL;
	volatile int32_t t24 = 141;

    t24 = ((x97>x98)*(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = INT8_MAX;
	int8_t x102 = -4;
	int8_t x103 = INT8_MIN;
	volatile int32_t t25 = -255;

    t25 = ((x101>x102)*(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x105 = INT64_MIN;
	uint32_t x106 = 316116868U;
	static int64_t x107 = INT64_MIN;
	volatile int32_t t26 = 24474282;

    t26 = ((x105>x106)*(x107==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = INT64_MIN;
	int8_t x110 = INT8_MAX;
	int64_t x111 = INT64_MAX;
	uint64_t x112 = 27455LLU;
	static volatile int32_t t27 = -164020;

    t27 = ((x109>x110)*(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 6U;
	int64_t x114 = -1LL;
	uint8_t x116 = 112U;

    t28 = ((x113>x114)*(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x119 = -815590LL;
	static uint16_t x120 = 0U;
	int32_t t29 = 49712;

    t29 = ((x117>x118)*(x119==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int64_t x122 = INT64_MIN;
	static volatile int16_t x124 = -1;
	volatile int32_t t30 = 6693071;

    t30 = ((x121>x122)*(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = INT64_MIN;
	int32_t x126 = -394797635;
	uint8_t x127 = UINT8_MAX;
	int8_t x128 = -1;

    t31 = ((x125>x126)*(x127==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MIN;
	uint32_t x130 = 230380U;
	int8_t x131 = 6;
	int8_t x132 = 1;
	volatile int32_t t32 = 344399696;

    t32 = ((x129>x130)*(x131==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = INT16_MIN;
	static uint64_t x134 = 233269LLU;
	static int64_t x136 = INT64_MIN;
	volatile int32_t t33 = 0;

    t33 = ((x133>x134)*(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	uint8_t x138 = UINT8_MAX;
	uint64_t x139 = UINT64_MAX;
	int32_t t34 = 11664;

    t34 = ((x137>x138)*(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 237U;
	static int16_t x142 = -1;
	int16_t x143 = INT16_MAX;
	int32_t x144 = -13243627;
	volatile int32_t t35 = -902285;

    t35 = ((x141>x142)*(x143==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x145 = 5U;
	int32_t x146 = -1;
	static volatile uint32_t x147 = 3168U;
	int32_t t36 = -310;

    t36 = ((x145>x146)*(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = 21655LL;
	int8_t x150 = INT8_MAX;
	static int16_t x151 = -1;
	int64_t x152 = 131357402331LL;

    t37 = ((x149>x150)*(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	int8_t x154 = -1;
	uint8_t x155 = 5U;
	int32_t t38 = 1393;

    t38 = ((x153>x154)*(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = INT64_MIN;
	uint64_t x158 = UINT64_MAX;
	int64_t x160 = INT64_MIN;
	int32_t t39 = 1;

    t39 = ((x157>x158)*(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 19U;
	uint16_t x163 = 1433U;
	static volatile int64_t x164 = INT64_MAX;
	static int32_t t40 = -581;

    t40 = ((x161>x162)*(x163==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 763U;
	int16_t x166 = INT16_MIN;
	volatile uint64_t x167 = 1013323304LLU;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = -2385928;

    t41 = ((x165>x166)*(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -1LL;
	volatile uint8_t x170 = 0U;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t42 = -54389;

    t42 = ((x169>x170)*(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	volatile int16_t x174 = 22;
	int64_t x176 = -1LL;
	volatile int32_t t43 = 10;

    t43 = ((x173>x174)*(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	int32_t x178 = -1;
	int16_t x179 = INT16_MAX;
	volatile int32_t x180 = -1;

    t44 = ((x177>x178)*(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = INT64_MAX;
	int64_t x183 = 1298234LL;
	int16_t x184 = INT16_MIN;
	int32_t t45 = 1;

    t45 = ((x181>x182)*(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 3U;
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	volatile int32_t t46 = 1317426;

    t46 = ((x185>x186)*(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -98;
	int32_t x190 = INT32_MAX;
	int64_t x191 = 1252455291549LL;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = 49291902;

    t47 = ((x189>x190)*(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x194 = INT16_MIN;
	volatile uint64_t x195 = 3430086406785LLU;
	int16_t x196 = INT16_MIN;

    t48 = ((x193>x194)*(x195==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = 20483LL;
	uint32_t x198 = UINT32_MAX;
	int64_t x200 = INT64_MIN;

    t49 = ((x197>x198)*(x199==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = INT32_MIN;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = UINT64_MAX;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = -22181;

    t50 = ((x201>x202)*(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x206 = UINT32_MAX;
	static int64_t x207 = INT64_MIN;
	int32_t x208 = INT32_MAX;
	volatile int32_t t51 = 15430065;

    t51 = ((x205>x206)*(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MAX;
	static uint64_t x210 = 4443393LLU;
	uint64_t x211 = UINT64_MAX;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = -31165;

    t52 = ((x209>x210)*(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = -1;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = -19962695;

    t53 = ((x213>x214)*(x215==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x217 = UINT8_MAX;
	uint16_t x218 = UINT16_MAX;
	uint16_t x219 = 54U;
	uint64_t x220 = 23464286351LLU;
	volatile int32_t t54 = -6026;

    t54 = ((x217>x218)*(x219==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int64_t x222 = 58470551088974LL;
	int8_t x223 = 4;
	volatile int32_t t55 = 23038;

    t55 = ((x221>x222)*(x223==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = INT16_MIN;
	int64_t x226 = -637595692LL;
	static int32_t x228 = -1;
	volatile int32_t t56 = 20032;

    t56 = ((x225>x226)*(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = -7;
	uint32_t x231 = UINT32_MAX;
	static int32_t x232 = -48560928;

    t57 = ((x229>x230)*(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	int16_t x234 = -879;
	uint32_t x235 = 5518417U;
	int32_t x236 = INT32_MIN;
	static int32_t t58 = -5870703;

    t58 = ((x233>x234)*(x235==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -552054642818589LL;
	static volatile uint8_t x238 = UINT8_MAX;
	volatile int32_t x240 = -3;
	int32_t t59 = -6;

    t59 = ((x237>x238)*(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x241 = 55U;
	int32_t x242 = INT32_MIN;
	static volatile uint16_t x243 = UINT16_MAX;

    t60 = ((x241>x242)*(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = 6;
	int32_t x247 = 2;
	uint16_t x248 = 1600U;
	static int32_t t61 = 4192563;

    t61 = ((x245>x246)*(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = 4410492329LL;
	uint8_t x250 = UINT8_MAX;
	uint8_t x251 = 8U;
	int32_t t62 = -4110384;

    t62 = ((x249>x250)*(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	uint16_t x255 = 538U;
	uint16_t x256 = 3540U;
	volatile int32_t t63 = 2;

    t63 = ((x253>x254)*(x255==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -25;
	static volatile int16_t x258 = -1;
	uint16_t x260 = 8U;
	static int32_t t64 = -2;

    t64 = ((x257>x258)*(x259==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x263 = INT16_MIN;
	int8_t x264 = 6;
	static volatile int32_t t65 = -115558853;

    t65 = ((x261>x262)*(x263==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = 20015457602205LL;
	int32_t x266 = 139104723;
	volatile int8_t x267 = INT8_MAX;
	volatile int32_t t66 = -125465;

    t66 = ((x265>x266)*(x267==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = -1LL;
	static int16_t x270 = -440;
	int16_t x272 = INT16_MIN;
	int32_t t67 = -1013728474;

    t67 = ((x269>x270)*(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	volatile uint16_t x274 = UINT16_MAX;
	int16_t x275 = INT16_MIN;
	int32_t t68 = -4;

    t68 = ((x273>x274)*(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 242;
	int32_t x278 = INT32_MAX;
	volatile int32_t t69 = -1;

    t69 = ((x277>x278)*(x279==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	static uint16_t x282 = 22U;
	int32_t x284 = -312656;
	int32_t t70 = -1;

    t70 = ((x281>x282)*(x283==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	static int8_t x286 = 2;
	static int8_t x287 = -1;
	volatile int8_t x288 = INT8_MIN;
	int32_t t71 = 12381;

    t71 = ((x285>x286)*(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x289 = 28U;
	static int32_t x290 = -1;
	static int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;

    t72 = ((x289>x290)*(x291==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = INT8_MIN;
	static int16_t x294 = INT16_MIN;
	int64_t x295 = 1486114LL;
	uint8_t x296 = 6U;
	int32_t t73 = 32063931;

    t73 = ((x293>x294)*(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	volatile int8_t x298 = INT8_MIN;
	int32_t x300 = 22327;
	volatile int32_t t74 = 25425;

    t74 = ((x297>x298)*(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = INT32_MAX;
	int64_t x304 = 0LL;

    t75 = ((x301>x302)*(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	uint8_t x306 = 90U;
	int32_t x308 = INT32_MAX;
	volatile int32_t t76 = -89089640;

    t76 = ((x305>x306)*(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x309 = 95U;
	int16_t x311 = INT16_MIN;
	volatile uint8_t x312 = 6U;
	static int32_t t77 = 259592;

    t77 = ((x309>x310)*(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = INT16_MIN;
	int32_t x316 = 290;
	static int32_t t78 = -1923;

    t78 = ((x313>x314)*(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = UINT8_MAX;
	int8_t x318 = INT8_MIN;
	int8_t x319 = -1;
	int32_t x320 = 612550;
	volatile int32_t t79 = 187587248;

    t79 = ((x317>x318)*(x319==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = INT8_MIN;
	static int16_t x322 = INT16_MIN;
	int64_t x323 = -317531580067LL;
	static int64_t x324 = INT64_MIN;

    t80 = ((x321>x322)*(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	static uint8_t x326 = UINT8_MAX;
	volatile int64_t x328 = INT64_MIN;

    t81 = ((x325>x326)*(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = INT64_MIN;
	volatile int16_t x330 = -1;
	int32_t x331 = -1;
	volatile uint64_t x332 = 52LLU;

    t82 = ((x329>x330)*(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -1LL;
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = 189;
	volatile int32_t t83 = 74;

    t83 = ((x333>x334)*(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 2U;
	uint32_t x338 = UINT32_MAX;
	uint64_t x339 = 3516LLU;

    t84 = ((x337>x338)*(x339==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x341 = -4258333160203LL;
	int32_t x342 = 50574;
	volatile int32_t x343 = 1;
	static int8_t x344 = INT8_MIN;
	int32_t t85 = -1;

    t85 = ((x341>x342)*(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	int64_t x346 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 44521;

    t86 = ((x345>x346)*(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x349 = 33LL;
	uint64_t x350 = 17840252LLU;
	static volatile int8_t x351 = INT8_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 519649;

    t87 = ((x349>x350)*(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	static volatile int32_t t88 = 564;

    t88 = ((x353>x354)*(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x358 = 0LL;
	uint32_t x359 = 121062U;
	static int32_t x360 = INT32_MIN;
	volatile int32_t t89 = 40;

    t89 = ((x357>x358)*(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = -1LL;
	static uint32_t x362 = 4340U;
	uint32_t x363 = 1035450145U;
	uint8_t x364 = 1U;
	volatile int32_t t90 = -56;

    t90 = ((x361>x362)*(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = INT16_MIN;
	volatile int16_t x368 = -1;
	volatile int32_t t91 = 2880;

    t91 = ((x365>x366)*(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	uint32_t x370 = 50158U;
	int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -1;

    t92 = ((x369>x370)*(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	volatile int64_t x374 = INT64_MIN;
	volatile uint16_t x375 = 6697U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 12;

    t93 = ((x373>x374)*(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x377 = 922;
	int16_t x378 = INT16_MIN;
	int64_t x380 = 1LL;
	static volatile int32_t t94 = 0;

    t94 = ((x377>x378)*(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x381 = UINT16_MAX;
	int16_t x382 = INT16_MIN;
	static int8_t x383 = -1;
	int64_t x384 = INT64_MIN;

    t95 = ((x381>x382)*(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x386 = -1;
	int16_t x387 = -1;
	volatile int16_t x388 = -25;
	static volatile int32_t t96 = 1155;

    t96 = ((x385>x386)*(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -12;
	int8_t x390 = INT8_MAX;
	int32_t x391 = -123253043;
	int32_t x392 = INT32_MAX;

    t97 = ((x389>x390)*(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MIN;
	int16_t x394 = -1;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t98 = -495414;

    t98 = ((x393>x394)*(x395==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MIN;
	static volatile int16_t x398 = INT16_MAX;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MAX;
	volatile int32_t t99 = -547;

    t99 = ((x397>x398)*(x399==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -21;
	int8_t x403 = -1;
	static int64_t x404 = INT64_MIN;

    t100 = ((x401>x402)*(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	volatile uint32_t x406 = 57689U;
	int64_t x407 = INT64_MAX;
	static int64_t x408 = INT64_MIN;
	static volatile int32_t t101 = -53;

    t101 = ((x405>x406)*(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	static uint16_t x410 = 27U;
	int16_t x411 = INT16_MIN;
	static int32_t x412 = -282262;
	int32_t t102 = -1;

    t102 = ((x409>x410)*(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = 2;
	static uint32_t x414 = 279U;
	volatile uint64_t x415 = UINT64_MAX;
	int64_t x416 = -58811414976LL;
	volatile int32_t t103 = 14;

    t103 = ((x413>x414)*(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x418 = -1;
	uint32_t x419 = UINT32_MAX;
	volatile int32_t t104 = 542;

    t104 = ((x417>x418)*(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x421 = UINT16_MAX;
	int64_t x422 = 0LL;
	uint64_t x424 = UINT64_MAX;
	int32_t t105 = 240790784;

    t105 = ((x421>x422)*(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 19U;
	static int64_t x426 = -1LL;
	uint16_t x427 = UINT16_MAX;
	int8_t x428 = INT8_MIN;
	volatile int32_t t106 = 1;

    t106 = ((x425>x426)*(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 255852838U;
	uint64_t x430 = 99861350621LLU;
	static int64_t x431 = -7LL;
	int64_t x432 = -1LL;
	int32_t t107 = 50;

    t107 = ((x429>x430)*(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x433 = INT16_MAX;
	int8_t x434 = INT8_MAX;
	int32_t x436 = -1;
	static volatile int32_t t108 = -147219195;

    t108 = ((x433>x434)*(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	uint32_t x438 = UINT32_MAX;
	int16_t x439 = -14153;
	static int32_t t109 = -9;

    t109 = ((x437>x438)*(x439==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	int64_t x442 = 12403LL;
	uint32_t x444 = 16U;
	volatile int32_t t110 = 22;

    t110 = ((x441>x442)*(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = UINT64_MAX;
	uint16_t x446 = 10780U;
	int8_t x447 = INT8_MIN;
	volatile uint32_t x448 = 1663034567U;
	volatile int32_t t111 = 13;

    t111 = ((x445>x446)*(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = 39080632568LLU;
	static int64_t x450 = INT64_MAX;
	int64_t x451 = 40811LL;
	int32_t x452 = -1;
	static int32_t t112 = 5091266;

    t112 = ((x449>x450)*(x451==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -16;
	int64_t x454 = -1LL;
	int8_t x456 = -1;
	volatile int32_t t113 = 812979;

    t113 = ((x453>x454)*(x455==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -1;
	static uint16_t x458 = 945U;
	static int16_t x459 = 6;
	int32_t x460 = INT32_MIN;
	volatile int32_t t114 = 16296156;

    t114 = ((x457>x458)*(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = 30;
	int64_t x462 = 35013032309318LL;
	int64_t x464 = INT64_MIN;
	volatile int32_t t115 = 2111822;

    t115 = ((x461>x462)*(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x466 = INT8_MAX;
	volatile int8_t x467 = INT8_MIN;
	static uint8_t x468 = 1U;
	volatile int32_t t116 = 45833913;

    t116 = ((x465>x466)*(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x470 = UINT16_MAX;
	int32_t x472 = INT32_MAX;
	int32_t t117 = -92790982;

    t117 = ((x469>x470)*(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x475 = -1;
	int8_t x476 = INT8_MIN;
	static volatile int32_t t118 = -148055617;

    t118 = ((x473>x474)*(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MAX;
	uint8_t x478 = 7U;
	int8_t x480 = INT8_MIN;
	int32_t t119 = 7193;

    t119 = ((x477>x478)*(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	uint64_t x482 = 2034172292412558LLU;
	int32_t x483 = INT32_MIN;
	volatile uint8_t x484 = 0U;
	int32_t t120 = -51167;

    t120 = ((x481>x482)*(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	int32_t x486 = INT32_MAX;
	int16_t x487 = INT16_MAX;
	volatile int32_t t121 = 73953603;

    t121 = ((x485>x486)*(x487==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = 20;
	int8_t x490 = INT8_MIN;
	int8_t x491 = INT8_MAX;
	int64_t x492 = -1LL;
	static int32_t t122 = -2;

    t122 = ((x489>x490)*(x491==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	int32_t x494 = INT32_MIN;
	volatile int16_t x495 = -27;
	static uint32_t x496 = 108616955U;

    t123 = ((x493>x494)*(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int16_t x498 = INT16_MIN;
	uint32_t x499 = 406591U;
	static uint32_t x500 = 417878676U;
	int32_t t124 = 8137067;

    t124 = ((x497>x498)*(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t t125 = 674;

    t125 = ((x501>x502)*(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x505 = 28401922931426047LLU;
	int16_t x506 = INT16_MIN;
	uint16_t x508 = 847U;

    t126 = ((x505>x506)*(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x509 = UINT32_MAX;
	volatile int64_t x510 = -71232670963LL;
	int32_t t127 = 6;

    t127 = ((x509>x510)*(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = INT16_MIN;
	static volatile int32_t x515 = INT32_MIN;
	uint16_t x516 = 718U;
	volatile int32_t t128 = -17405;

    t128 = ((x513>x514)*(x515==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x517 = -3958;
	static uint16_t x518 = UINT16_MAX;
	uint16_t x519 = 3174U;
	uint32_t x520 = 112906U;
	static volatile int32_t t129 = 1261;

    t129 = ((x517>x518)*(x519==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	int16_t x522 = 457;
	int32_t x523 = INT32_MIN;
	int32_t t130 = 52309129;

    t130 = ((x521>x522)*(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MAX;
	int16_t x526 = -3068;
	volatile uint16_t x527 = UINT16_MAX;
	static int16_t x528 = INT16_MIN;
	volatile int32_t t131 = 4003;

    t131 = ((x525>x526)*(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = 52;
	uint8_t x532 = 3U;
	static int32_t t132 = 714;

    t132 = ((x529>x530)*(x531==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = 682;
	uint32_t x534 = 1U;
	uint16_t x535 = UINT16_MAX;
	static int8_t x536 = INT8_MIN;

    t133 = ((x533>x534)*(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = UINT16_MAX;
	static uint32_t x538 = UINT32_MAX;
	uint64_t x540 = UINT64_MAX;

    t134 = ((x537>x538)*(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x541 = 6U;
	int16_t x542 = INT16_MIN;
	static int8_t x544 = -13;
	volatile int32_t t135 = 241;

    t135 = ((x541>x542)*(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x545 = 374799890551LLU;
	int8_t x546 = -1;
	int64_t x548 = INT64_MIN;
	int32_t t136 = -232302727;

    t136 = ((x545>x546)*(x547==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = 138U;
	int32_t x550 = -1;
	int32_t x551 = INT32_MIN;
	int32_t x552 = -30618;
	int32_t t137 = 17139;

    t137 = ((x549>x550)*(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -19;
	volatile int16_t x554 = INT16_MIN;
	int8_t x555 = INT8_MIN;
	static int8_t x556 = 14;
	int32_t t138 = 646395;

    t138 = ((x553>x554)*(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MAX;
	int64_t x558 = INT64_MIN;
	int32_t x559 = -1;
	uint64_t x560 = UINT64_MAX;
	int32_t t139 = -2;

    t139 = ((x557>x558)*(x559==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x564 = UINT16_MAX;
	int32_t t140 = 0;

    t140 = ((x561>x562)*(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MAX;
	static uint16_t x566 = 0U;
	int16_t x567 = -1;
	int64_t x568 = -1LL;
	int32_t t141 = 104376;

    t141 = ((x565>x566)*(x567==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	static int32_t x572 = -60980;
	volatile int32_t t142 = -8;

    t142 = ((x569>x570)*(x571==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x573 = INT16_MIN;
	int32_t x574 = INT32_MIN;
	static int64_t x575 = -118613896916LL;
	volatile uint8_t x576 = 18U;
	int32_t t143 = 5;

    t143 = ((x573>x574)*(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	volatile uint64_t x578 = UINT64_MAX;
	uint16_t x579 = UINT16_MAX;
	volatile uint16_t x580 = UINT16_MAX;

    t144 = ((x577>x578)*(x579==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x581 = INT8_MIN;
	static uint64_t x582 = 14532829552893239LLU;
	uint64_t x583 = UINT64_MAX;
	int16_t x584 = -11396;
	volatile int32_t t145 = 68614;

    t145 = ((x581>x582)*(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 819;
	int16_t x586 = INT16_MIN;
	uint32_t x587 = 1U;

    t146 = ((x585>x586)*(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = INT8_MIN;
	int16_t x591 = -1;
	int16_t x592 = INT16_MAX;
	volatile int32_t t147 = 3782031;

    t147 = ((x589>x590)*(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	volatile uint8_t x596 = 30U;
	int32_t t148 = -1;

    t148 = ((x593>x594)*(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x597 = -1;
	int8_t x598 = INT8_MIN;
	volatile uint64_t x599 = 1LLU;
	int64_t x600 = INT64_MAX;
	volatile int32_t t149 = -658833345;

    t149 = ((x597>x598)*(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	int8_t x602 = 5;
	uint32_t x603 = 1U;
	volatile uint16_t x604 = UINT16_MAX;
	static int32_t t150 = -282782;

    t150 = ((x601>x602)*(x603==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x607 = -1LL;
	int64_t x608 = INT64_MIN;
	static int32_t t151 = -105428145;

    t151 = ((x605>x606)*(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int32_t x610 = 2048178;
	int64_t x611 = 16132LL;
	static uint32_t x612 = 980770U;
	int32_t t152 = 12;

    t152 = ((x609>x610)*(x611==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 30830870881835LLU;
	static int64_t x614 = 5975357941LL;
	static uint16_t x615 = UINT16_MAX;
	uint64_t x616 = 5952LLU;
	int32_t t153 = 2245813;

    t153 = ((x613>x614)*(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 13877947766896LLU;
	uint32_t x618 = UINT32_MAX;
	int8_t x619 = 17;
	volatile int32_t t154 = -167;

    t154 = ((x617>x618)*(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = INT8_MIN;
	volatile int32_t x622 = -6440;
	int16_t x623 = INT16_MAX;
	static int32_t x624 = INT32_MIN;
	int32_t t155 = 105;

    t155 = ((x621>x622)*(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 18U;
	volatile int32_t x627 = -1;
	int16_t x628 = INT16_MIN;
	static volatile int32_t t156 = 19893;

    t156 = ((x625>x626)*(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x629 = UINT8_MAX;
	volatile uint64_t x631 = UINT64_MAX;
	static int64_t x632 = -1LL;
	volatile int32_t t157 = 213945365;

    t157 = ((x629>x630)*(x631==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = 65;
	volatile int8_t x634 = 46;
	uint16_t x635 = 23587U;
	int64_t x636 = 1118089293959335LL;

    t158 = ((x633>x634)*(x635==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x637 = INT64_MIN;
	int32_t x638 = INT32_MAX;
	uint32_t x639 = 0U;
	uint32_t x640 = 31862U;

    t159 = ((x637>x638)*(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x641 = INT16_MIN;
	static uint8_t x642 = 0U;
	uint32_t x644 = UINT32_MAX;

    t160 = ((x641>x642)*(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	volatile uint32_t x646 = UINT32_MAX;
	int16_t x647 = -1;
	uint8_t x648 = 0U;
	volatile int32_t t161 = 925926354;

    t161 = ((x645>x646)*(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 9777U;
	int64_t x650 = INT64_MIN;
	int32_t x651 = -5529;
	int64_t x652 = -1LL;
	static int32_t t162 = -1450651;

    t162 = ((x649>x650)*(x651==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x654 = 3;
	uint64_t x655 = 5311144LLU;
	static uint32_t x656 = 76U;
	int32_t t163 = 980268;

    t163 = ((x653>x654)*(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1327;
	uint32_t x658 = 2226490U;
	int32_t x659 = INT32_MAX;
	volatile int64_t x660 = -7246LL;

    t164 = ((x657>x658)*(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = -1;
	uint16_t x663 = UINT16_MAX;
	int16_t x664 = -1;
	static int32_t t165 = 121739871;

    t165 = ((x661>x662)*(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	int8_t x666 = INT8_MAX;
	volatile int32_t x668 = INT32_MIN;
	int32_t t166 = 111053402;

    t166 = ((x665>x666)*(x667==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x669 = 104U;
	uint32_t x670 = UINT32_MAX;
	static volatile int16_t x671 = -1;
	static uint64_t x672 = 1615859LLU;
	volatile int32_t t167 = 482314781;

    t167 = ((x669>x670)*(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x674 = -1;
	int64_t x675 = -7704LL;
	static int16_t x676 = INT16_MIN;
	int32_t t168 = 19;

    t168 = ((x673>x674)*(x675==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	volatile int64_t x678 = INT64_MAX;
	uint32_t x680 = 1U;
	int32_t t169 = 14;

    t169 = ((x677>x678)*(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int8_t x682 = -27;
	int16_t x684 = -1;
	volatile int32_t t170 = 355422;

    t170 = ((x681>x682)*(x683==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x685 = 0U;
	volatile int16_t x686 = INT16_MIN;
	int32_t x687 = -11;
	int32_t x688 = -1;
	static int32_t t171 = 318;

    t171 = ((x685>x686)*(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MAX;
	int32_t x690 = INT32_MAX;
	int8_t x692 = INT8_MIN;
	int32_t t172 = 357158627;

    t172 = ((x689>x690)*(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MAX;
	uint8_t x694 = 21U;
	uint32_t x695 = UINT32_MAX;
	static uint64_t x696 = UINT64_MAX;
	volatile int32_t t173 = -3;

    t173 = ((x693>x694)*(x695==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	volatile int8_t x699 = 3;

    t174 = ((x697>x698)*(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = INT8_MAX;
	int32_t x702 = INT32_MIN;

    t175 = ((x701>x702)*(x703==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x707 = INT16_MIN;
	volatile uint32_t x708 = UINT32_MAX;
	int32_t t176 = 0;

    t176 = ((x705>x706)*(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1LL;
	int64_t x710 = INT64_MIN;
	int32_t x711 = -84;
	uint64_t x712 = UINT64_MAX;
	int32_t t177 = -3;

    t177 = ((x709>x710)*(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = 44;
	volatile int16_t x714 = INT16_MIN;
	int16_t x716 = -11754;
	int32_t t178 = 112115547;

    t178 = ((x713>x714)*(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MIN;
	static int64_t x718 = INT64_MIN;
	static uint64_t x719 = 17611251340LLU;
	volatile int64_t x720 = 111535LL;
	volatile int32_t t179 = -303358664;

    t179 = ((x717>x718)*(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -39LL;
	uint64_t x722 = UINT64_MAX;
	int32_t x724 = -6696;
	int32_t t180 = 72829;

    t180 = ((x721>x722)*(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x726 = INT8_MAX;
	int64_t x727 = INT64_MIN;
	volatile int32_t t181 = -180735479;

    t181 = ((x725>x726)*(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x730 = UINT8_MAX;
	int64_t x731 = 117301805127985429LL;

    t182 = ((x729>x730)*(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	int32_t x734 = INT32_MAX;
	volatile uint64_t x735 = 18LLU;
	uint8_t x736 = UINT8_MAX;
	static volatile int32_t t183 = 179075270;

    t183 = ((x733>x734)*(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = 54LL;
	uint32_t x738 = 56U;
	static int16_t x739 = 147;
	int32_t t184 = -15052614;

    t184 = ((x737>x738)*(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	int8_t x743 = INT8_MAX;
	uint32_t x744 = 72U;
	int32_t t185 = 48;

    t185 = ((x741>x742)*(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MIN;
	volatile uint32_t x746 = 3834U;
	volatile int32_t x747 = INT32_MAX;

    t186 = ((x745>x746)*(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 13U;
	static volatile uint32_t x750 = 376674164U;
	int32_t x751 = INT32_MIN;
	volatile int32_t t187 = 9067681;

    t187 = ((x749>x750)*(x751==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x753 = INT16_MAX;
	uint16_t x754 = 30779U;
	int32_t x755 = INT32_MIN;
	int64_t x756 = INT64_MIN;
	int32_t t188 = 423;

    t188 = ((x753>x754)*(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	uint32_t x759 = 2215325U;
	int8_t x760 = INT8_MAX;
	volatile int32_t t189 = -2678884;

    t189 = ((x757>x758)*(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = -162;
	uint64_t x762 = UINT64_MAX;
	volatile int32_t t190 = -557837872;

    t190 = ((x761>x762)*(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x765 = 2U;
	static int16_t x767 = 1890;
	int32_t x768 = 234;
	int32_t t191 = 61;

    t191 = ((x765>x766)*(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x770 = UINT8_MAX;
	static int64_t x771 = -14855843907778162LL;
	volatile int32_t t192 = -5845700;

    t192 = ((x769>x770)*(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = -14375385;
	volatile int64_t x774 = INT64_MIN;
	int8_t x775 = -1;
	int32_t t193 = -3371;

    t193 = ((x773>x774)*(x775==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MIN;
	int32_t x778 = INT32_MIN;
	int32_t x780 = INT32_MIN;
	int32_t t194 = 2;

    t194 = ((x777>x778)*(x779==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	int8_t x782 = -1;
	volatile int16_t x784 = -1;
	int32_t t195 = -22137016;

    t195 = ((x781>x782)*(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 1LLU;
	int8_t x786 = -63;
	uint32_t x787 = UINT32_MAX;
	int32_t x788 = -7;
	static volatile int32_t t196 = 3814;

    t196 = ((x785>x786)*(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x789 = 1U;
	uint8_t x792 = 8U;
	int32_t t197 = -993045175;

    t197 = ((x789>x790)*(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	static uint8_t x795 = 124U;
	uint64_t x796 = 730719530133842682LLU;

    t198 = ((x793>x794)*(x795==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	volatile int8_t x798 = -1;
	int8_t x800 = INT8_MIN;
	volatile int32_t t199 = 15669149;

    t199 = ((x797>x798)*(x799==x800));

    if (t199 != 0) { NG(); } else { ; }
	
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

