
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

int8_t x7 = 0;
int32_t x14 = INT32_MAX;
volatile int64_t x15 = 501144496549836817LL;
uint8_t x17 = UINT8_MAX;
uint64_t x24 = 117295512121612LLU;
volatile int32_t t5 = 62044;
int16_t x27 = INT16_MIN;
volatile int32_t t6 = 355;
int64_t x39 = INT64_MIN;
volatile int32_t t9 = -14058;
int32_t x41 = INT32_MIN;
volatile int32_t t10 = 269198513;
static uint16_t x45 = UINT16_MAX;
int32_t x48 = 163487;
volatile int32_t t13 = -4154;
volatile uint8_t x61 = 2U;
static uint64_t x67 = 46230893767395891LLU;
int64_t x68 = -1LL;
int16_t x70 = INT16_MIN;
int32_t x72 = INT32_MIN;
static volatile int64_t x76 = INT64_MIN;
int64_t x77 = INT64_MIN;
int16_t x86 = INT16_MIN;
int32_t t21 = 921549301;
volatile int32_t x93 = INT32_MAX;
int64_t x100 = INT64_MIN;
int16_t x101 = INT16_MIN;
int16_t x103 = -1;
volatile int32_t t25 = 1277367;
volatile int8_t x108 = INT8_MIN;
volatile int32_t t26 = -50128128;
volatile int64_t x114 = INT64_MIN;
static int16_t x115 = -1;
static volatile int32_t t29 = 195023;
static uint64_t x123 = UINT64_MAX;
volatile int64_t x129 = INT64_MIN;
int64_t x130 = -1LL;
static int8_t x133 = 0;
volatile int64_t x135 = INT64_MIN;
volatile uint32_t x142 = UINT32_MAX;
uint16_t x147 = 245U;
static uint8_t x153 = UINT8_MAX;
int16_t x161 = INT16_MAX;
static int64_t x164 = 42194LL;
static int64_t x169 = -1LL;
int64_t x177 = INT64_MIN;
volatile uint8_t x181 = 0U;
volatile int8_t x185 = -61;
static uint8_t x186 = 5U;
static volatile int32_t x187 = INT32_MIN;
uint64_t x189 = UINT64_MAX;
volatile int16_t x190 = INT16_MIN;
uint16_t x199 = 2U;
volatile int32_t t49 = -461060;
static volatile int32_t t50 = -3192;
int8_t x205 = 1;
volatile int64_t x210 = 114049666LL;
static int64_t x218 = -2890048407870240LL;
static uint16_t x220 = 205U;
int32_t x224 = INT32_MAX;
uint8_t x226 = 2U;
uint32_t x230 = 36581U;
volatile int64_t x234 = 68134LL;
static volatile int32_t x239 = INT32_MAX;
int32_t x246 = -1;
static uint8_t x256 = 105U;
volatile int64_t x257 = -176443812840075597LL;
int64_t x258 = INT64_MIN;
int8_t x259 = INT8_MIN;
static volatile uint64_t x260 = 51596519481LLU;
static uint32_t x262 = 1334765940U;
uint32_t x263 = 1178U;
int64_t x264 = INT64_MAX;
volatile int64_t x265 = -1LL;
volatile int32_t t67 = -3702;
static uint16_t x273 = 10U;
int32_t x276 = INT32_MIN;
int32_t t68 = -1;
int8_t x281 = 2;
int32_t t71 = -115;
static int8_t x290 = 13;
int32_t x294 = INT32_MIN;
volatile uint32_t x295 = 122U;
int32_t x297 = 1920;
static uint64_t x301 = 506678568LLU;
uint8_t x302 = 3U;
int16_t x306 = INT16_MAX;
static int32_t x308 = -40;
int64_t x312 = -113859LL;
int64_t x320 = INT64_MAX;
volatile int8_t x323 = INT8_MIN;
volatile uint16_t x324 = 240U;
uint16_t x325 = 3U;
int64_t x332 = INT64_MAX;
int16_t x334 = -2;
volatile int32_t x336 = 4791728;
volatile int32_t x337 = INT32_MIN;
int64_t x338 = 4293775161880LL;
int64_t x339 = INT64_MIN;
int8_t x340 = -5;
static int32_t x353 = INT32_MAX;
int32_t t88 = -3485388;
uint64_t x361 = UINT64_MAX;
int8_t x362 = 1;
uint64_t x363 = 171528LLU;
int32_t x366 = 64680;
static volatile int32_t x373 = INT32_MIN;
volatile int32_t x376 = INT32_MIN;
int8_t x380 = -1;
uint32_t x384 = 2U;
int8_t x385 = -1;
int8_t x393 = INT8_MIN;
volatile int32_t t99 = 192272;
int32_t x401 = INT32_MIN;
volatile int32_t x405 = INT32_MIN;
uint8_t x406 = UINT8_MAX;
int32_t t101 = 963407;
uint8_t x415 = 22U;
int32_t t106 = -53569506;
int8_t x429 = -3;
volatile int8_t x437 = -6;
int16_t x440 = INT16_MAX;
volatile int32_t t109 = -368455;
static int8_t x444 = 2;
volatile int32_t t110 = 56993;
static uint16_t x446 = 2732U;
static volatile int16_t x450 = INT16_MAX;
static volatile int32_t x457 = 739084;
volatile int64_t x465 = 281951416LL;
int32_t t116 = -409;
int32_t x471 = -127627;
int32_t x473 = INT32_MIN;
int64_t x475 = 96869218471LL;
int8_t x485 = 5;
static int32_t x488 = -10452348;
static volatile int64_t x497 = INT64_MAX;
int32_t x499 = -3;
uint32_t x500 = UINT32_MAX;
int8_t x503 = -1;
int64_t x505 = 1097LL;
int16_t x514 = 3;
volatile uint16_t x518 = 1102U;
int32_t x520 = INT32_MIN;
uint16_t x523 = 1U;
int8_t x527 = INT8_MIN;
int64_t x528 = -1LL;
static int64_t x530 = INT64_MAX;
int64_t x531 = 118299760806149228LL;
volatile int16_t x538 = -3015;
int16_t x540 = -13854;
int16_t x543 = INT16_MAX;
volatile uint64_t x550 = 429213860168LLU;
int8_t x552 = -1;
uint16_t x553 = UINT16_MAX;
int16_t x554 = INT16_MAX;
static int64_t x556 = INT64_MAX;
uint32_t x559 = 9462717U;
int64_t x560 = 2246971040087436619LL;
volatile int32_t t141 = -2;
int64_t x575 = INT64_MAX;
static volatile int32_t t144 = 695331340;
int64_t x584 = INT64_MIN;
volatile int16_t x585 = INT16_MIN;
static volatile int32_t t146 = -1;
uint16_t x595 = 1806U;
int32_t t148 = 110668310;
int16_t x604 = INT16_MAX;
int32_t x606 = -1;
uint32_t x608 = 187U;
volatile int32_t t151 = 0;
static volatile int8_t x609 = -1;
static uint8_t x611 = 1U;
volatile int32_t t152 = -336223428;
uint32_t x617 = 7452U;
volatile uint8_t x618 = 1U;
static volatile uint32_t x619 = 190U;
uint16_t x622 = 285U;
volatile int32_t t156 = 0;
int8_t x633 = INT8_MIN;
uint8_t x637 = UINT8_MAX;
int16_t x644 = -1;
int8_t x656 = 23;
volatile uint32_t x657 = 7U;
uint64_t x658 = UINT64_MAX;
int32_t t164 = 0;
uint8_t x662 = 111U;
int32_t x669 = -1;
volatile int8_t x671 = -3;
int32_t x676 = -3305;
int32_t t168 = 480320958;
uint64_t x677 = UINT64_MAX;
uint32_t x680 = UINT32_MAX;
int64_t x682 = -60811248LL;
static volatile int16_t x687 = -1;
volatile int32_t t172 = 257222682;
int64_t x704 = 1049041982LL;
volatile uint8_t x707 = UINT8_MAX;
volatile uint32_t x710 = UINT32_MAX;
uint64_t x712 = 73190680904LLU;
static int32_t x717 = -353652;
volatile int64_t x727 = INT64_MIN;
uint32_t x728 = 311317440U;
static int64_t x729 = INT64_MIN;
static uint32_t x732 = UINT32_MAX;
static volatile int32_t t184 = 449;
int64_t x744 = 3LL;
uint32_t x748 = UINT32_MAX;
int16_t x751 = INT16_MIN;
int32_t t187 = -5021;
uint8_t x753 = 0U;
volatile int8_t x754 = -1;
int32_t x759 = -98;
static int64_t x760 = -1204023451565LL;
int16_t x764 = 952;
int32_t x767 = 0;
volatile int64_t x768 = -190931644051467311LL;
volatile int32_t t191 = -46311434;
uint8_t x770 = UINT8_MAX;
int8_t x773 = INT8_MIN;
int8_t x778 = INT8_MIN;
volatile uint32_t x785 = 11U;
int64_t x789 = INT64_MIN;
int16_t x791 = INT16_MAX;
static int16_t x797 = -1;
int16_t x800 = -1;


void f0(void) {
    	static int64_t x1 = 2124621979384764129LL;
	int16_t x2 = INT16_MIN;
	int8_t x3 = -1;
	static int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 0;

    t0 = (x1>(x2^(x3==x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int16_t x6 = INT16_MAX;
	static int64_t x8 = -1LL;
	static volatile int32_t t1 = -1508;

    t1 = (x5>(x6^(x7==x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	volatile uint16_t x10 = UINT16_MAX;
	volatile int8_t x11 = -1;
	uint8_t x12 = 1U;
	volatile int32_t t2 = -5;

    t2 = (x9>(x10^(x11==x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	int16_t x16 = INT16_MAX;
	int32_t t3 = 9397;

    t3 = (x13>(x14^(x15==x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -2830590983120589LL;
	uint16_t x19 = UINT16_MAX;
	uint32_t x20 = 30056054U;
	volatile int32_t t4 = -1;

    t4 = (x17>(x18^(x19==x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	static int64_t x22 = -2LL;
	static int8_t x23 = INT8_MIN;

    t5 = (x21>(x22^(x23==x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MIN;
	volatile int32_t x26 = 9639;
	volatile int64_t x28 = INT64_MIN;

    t6 = (x25>(x26^(x27==x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MAX;
	int32_t x32 = -1;
	volatile int32_t t7 = -412400210;

    t7 = (x29>(x30^(x31==x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = UINT64_MAX;
	volatile uint32_t x34 = 2801545U;
	volatile uint16_t x35 = 4406U;
	int16_t x36 = 288;
	volatile int32_t t8 = 197080650;

    t8 = (x33>(x34^(x35==x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	int16_t x40 = INT16_MIN;

    t9 = (x37>(x38^(x39==x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = -42;
	uint16_t x43 = 0U;
	volatile int8_t x44 = -1;

    t10 = (x41>(x42^(x43==x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x46 = 154;
	int16_t x47 = -1;
	int32_t t11 = -13042;

    t11 = (x45>(x46^(x47==x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = UINT8_MAX;
	int32_t x50 = INT32_MIN;
	static int8_t x51 = -1;
	static int8_t x52 = -1;
	int32_t t12 = 64821;

    t12 = (x49>(x50^(x51==x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	int32_t x54 = INT32_MAX;
	static int8_t x55 = 3;
	static int64_t x56 = -1LL;

    t13 = (x53>(x54^(x55==x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x57 = 129;
	static uint8_t x58 = 13U;
	int32_t x59 = 1044959929;
	int8_t x60 = -5;
	volatile int32_t t14 = -1;

    t14 = (x57>(x58^(x59==x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x62 = INT16_MIN;
	uint8_t x63 = 114U;
	uint32_t x64 = 140U;
	volatile int32_t t15 = -6;

    t15 = (x61>(x62^(x63==x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x65 = 9960U;
	static uint8_t x66 = UINT8_MAX;
	volatile int32_t t16 = 317709831;

    t16 = (x65>(x66^(x67==x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	static int16_t x71 = 0;
	volatile int32_t t17 = -602;

    t17 = (x69>(x70^(x71==x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 120;
	static volatile int64_t x74 = INT64_MAX;
	static volatile int8_t x75 = INT8_MAX;
	static volatile int32_t t18 = -1812677;

    t18 = (x73>(x74^(x75==x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x78 = INT8_MAX;
	int64_t x79 = INT64_MIN;
	volatile int8_t x80 = -1;
	volatile int32_t t19 = -120;

    t19 = (x77>(x78^(x79==x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = 26;
	static int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MIN;
	int32_t t20 = -52;

    t20 = (x81>(x82^(x83==x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = 9009489127179206LLU;
	static uint16_t x87 = UINT16_MAX;
	uint16_t x88 = 23875U;

    t21 = (x85>(x86^(x87==x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 1U;
	volatile int32_t x90 = INT32_MAX;
	uint64_t x91 = 443LLU;
	int64_t x92 = INT64_MAX;
	volatile int32_t t22 = 0;

    t22 = (x89>(x90^(x91==x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	uint16_t x96 = 11537U;
	int32_t t23 = -1;

    t23 = (x93>(x94^(x95==x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x97 = INT16_MIN;
	volatile int32_t x98 = INT32_MIN;
	static uint32_t x99 = 12865715U;
	volatile int32_t t24 = 1;

    t24 = (x97>(x98^(x99==x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x102 = INT16_MAX;
	int64_t x104 = INT64_MIN;

    t25 = (x101>(x102^(x103==x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 3U;
	static int16_t x106 = INT16_MIN;
	int8_t x107 = -1;

    t26 = (x105>(x106^(x107==x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x109 = UINT64_MAX;
	volatile int8_t x110 = 0;
	volatile int32_t x111 = -421920992;
	volatile int8_t x112 = -1;
	static volatile int32_t t27 = 2;

    t27 = (x109>(x110^(x111==x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = UINT16_MAX;
	int32_t x116 = 4967;
	int32_t t28 = 36660;

    t28 = (x113>(x114^(x115==x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = 2;
	uint16_t x118 = 86U;
	int64_t x119 = 2307132068200750222LL;
	uint16_t x120 = 7945U;

    t29 = (x117>(x118^(x119==x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x121 = UINT64_MAX;
	int16_t x122 = 6;
	int64_t x124 = 28133933305991331LL;
	volatile int32_t t30 = 26195769;

    t30 = (x121>(x122^(x123==x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 567904560496139452LLU;
	static int8_t x126 = INT8_MIN;
	uint8_t x127 = 5U;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = 698157484;

    t31 = (x125>(x126^(x127==x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x131 = INT8_MAX;
	static uint8_t x132 = 21U;
	static int32_t t32 = 114875;

    t32 = (x129>(x130^(x131==x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x134 = INT64_MAX;
	int32_t x136 = 95;
	static volatile int32_t t33 = 17894;

    t33 = (x133>(x134^(x135==x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 2U;
	int16_t x138 = 99;
	static volatile uint8_t x139 = UINT8_MAX;
	uint8_t x140 = 2U;
	static int32_t t34 = 1;

    t34 = (x137>(x138^(x139==x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	int16_t x143 = -1;
	int64_t x144 = INT64_MIN;
	static volatile int32_t t35 = 2955;

    t35 = (x141>(x142^(x143==x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 30984U;
	int32_t x146 = INT32_MIN;
	int8_t x148 = -2;
	volatile int32_t t36 = 67;

    t36 = (x145>(x146^(x147==x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MIN;
	static int16_t x151 = INT16_MAX;
	int8_t x152 = INT8_MIN;
	int32_t t37 = -10;

    t37 = (x149>(x150^(x151==x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = INT32_MAX;
	int64_t x155 = INT64_MIN;
	uint32_t x156 = 13562U;
	static volatile int32_t t38 = -17;

    t38 = (x153>(x154^(x155==x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = UINT8_MAX;
	static volatile int16_t x158 = INT16_MIN;
	int16_t x159 = -3;
	int16_t x160 = INT16_MAX;
	int32_t t39 = 1191315;

    t39 = (x157>(x158^(x159==x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x162 = -2298333698443902LL;
	int64_t x163 = INT64_MIN;
	volatile int32_t t40 = 796869428;

    t40 = (x161>(x162^(x163==x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x165 = -3094433301449014LL;
	uint16_t x166 = 14U;
	uint64_t x167 = UINT64_MAX;
	static volatile int32_t x168 = 362;
	volatile int32_t t41 = -3485489;

    t41 = (x165>(x166^(x167==x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = -51;
	uint32_t x171 = 271186U;
	uint16_t x172 = 15099U;
	volatile int32_t t42 = 36754;

    t42 = (x169>(x170^(x171==x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -427797130;
	volatile int64_t x174 = 785946250171194714LL;
	int8_t x175 = INT8_MIN;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 7392528;

    t43 = (x173>(x174^(x175==x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x178 = INT32_MAX;
	static uint32_t x179 = UINT32_MAX;
	static int64_t x180 = -1LL;
	int32_t t44 = 6;

    t44 = (x177>(x178^(x179==x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	static volatile int16_t x184 = -2;
	static volatile int32_t t45 = 3553556;

    t45 = (x181>(x182^(x183==x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = 62362204;

    t46 = (x185>(x186^(x187==x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x191 = INT32_MAX;
	static uint16_t x192 = 206U;
	volatile int32_t t47 = 13838606;

    t47 = (x189>(x190^(x191==x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x193 = 21161091U;
	uint8_t x194 = 10U;
	int32_t x195 = INT32_MIN;
	static uint16_t x196 = 6U;
	int32_t t48 = -3903070;

    t48 = (x193>(x194^(x195==x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 0;
	int64_t x198 = INT64_MIN;
	int32_t x200 = -104;

    t49 = (x197>(x198^(x199==x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	int32_t x202 = -2;
	static uint32_t x203 = 227U;
	int32_t x204 = -114425;

    t50 = (x201>(x202^(x203==x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x206 = 0U;
	uint32_t x207 = 0U;
	int32_t x208 = -345;
	int32_t t51 = -6;

    t51 = (x205>(x206^(x207==x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x209 = 507363779519LLU;
	int8_t x211 = 1;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = 11;

    t52 = (x209>(x210^(x211==x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MIN;
	int32_t x216 = -4425474;
	volatile int32_t t53 = -416;

    t53 = (x213>(x214^(x215==x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	int8_t x219 = INT8_MIN;
	int32_t t54 = -19879;

    t54 = (x217>(x218^(x219==x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -1;
	int32_t x222 = INT32_MIN;
	volatile int64_t x223 = INT64_MIN;
	volatile int32_t t55 = -846;

    t55 = (x221>(x222^(x223==x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = UINT16_MAX;
	volatile int16_t x227 = INT16_MIN;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -12701;

    t56 = (x225>(x226^(x227==x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 13U;
	int64_t x231 = INT64_MAX;
	volatile int8_t x232 = -1;
	volatile int32_t t57 = -52;

    t57 = (x229>(x230^(x231==x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	uint8_t x235 = 26U;
	volatile uint16_t x236 = UINT16_MAX;
	static volatile int32_t t58 = 56776;

    t58 = (x233>(x234^(x235==x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = UINT32_MAX;
	uint32_t x238 = 2U;
	int8_t x240 = -1;
	int32_t t59 = -6618196;

    t59 = (x237>(x238^(x239==x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -1;
	uint8_t x242 = UINT8_MAX;
	static int32_t x243 = 59803949;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = 812104;

    t60 = (x241>(x242^(x243==x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = INT64_MIN;
	static int16_t x247 = INT16_MAX;
	uint64_t x248 = UINT64_MAX;
	int32_t t61 = -1038717;

    t61 = (x245>(x246^(x247==x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	uint8_t x250 = UINT8_MAX;
	int16_t x251 = -1;
	int64_t x252 = INT64_MAX;
	static int32_t t62 = 237755;

    t62 = (x249>(x250^(x251==x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	uint64_t x254 = 12547175553LLU;
	uint8_t x255 = 73U;
	int32_t t63 = -7;

    t63 = (x253>(x254^(x255==x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t t64 = 0;

    t64 = (x257>(x258^(x259==x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	volatile int32_t t65 = -4;

    t65 = (x261>(x262^(x263==x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = INT32_MAX;
	volatile uint16_t x267 = 3981U;
	uint16_t x268 = 1U;
	int32_t t66 = -1946187;

    t66 = (x265>(x266^(x267==x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MAX;
	uint32_t x270 = 3022081U;
	uint32_t x271 = 156U;
	uint32_t x272 = 4098422U;

    t67 = (x269>(x270^(x271==x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x274 = -1;
	int32_t x275 = INT32_MIN;

    t68 = (x273>(x274^(x275==x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = UINT64_MAX;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = 8080U;
	static int8_t x280 = INT8_MAX;
	int32_t t69 = -16;

    t69 = (x277>(x278^(x279==x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x282 = 10U;
	static volatile int32_t x283 = 951;
	static int16_t x284 = INT16_MIN;
	int32_t t70 = 232;

    t70 = (x281>(x282^(x283==x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MAX;
	int8_t x286 = INT8_MAX;
	uint8_t x287 = 0U;
	static int64_t x288 = -325403325175LL;

    t71 = (x285>(x286^(x287==x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = UINT64_MAX;
	int16_t x291 = -1;
	uint8_t x292 = 101U;
	volatile int32_t t72 = 1;

    t72 = (x289>(x290^(x291==x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = 5;
	int32_t x296 = INT32_MAX;
	int32_t t73 = -1005431;

    t73 = (x293>(x294^(x295==x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = INT64_MAX;
	int64_t x299 = 430234045736230403LL;
	int64_t x300 = -90733000157888LL;
	static int32_t t74 = 1581188;

    t74 = (x297>(x298^(x299==x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x303 = 30U;
	volatile int8_t x304 = 13;
	volatile int32_t t75 = -1141;

    t75 = (x301>(x302^(x303==x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x305 = 363U;
	volatile uint16_t x307 = 22631U;
	int32_t t76 = -24052;

    t76 = (x305>(x306^(x307==x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 11877U;
	uint8_t x310 = 3U;
	static int64_t x311 = INT64_MIN;
	volatile int32_t t77 = -4070;

    t77 = (x309>(x310^(x311==x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MAX;
	int16_t x314 = -1;
	int16_t x315 = -1;
	int16_t x316 = -1;
	volatile int32_t t78 = -9;

    t78 = (x313>(x314^(x315==x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x317 = 17U;
	int32_t x318 = 17;
	volatile int8_t x319 = INT8_MIN;
	volatile int32_t t79 = -41414864;

    t79 = (x317>(x318^(x319==x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x321 = 0U;
	uint8_t x322 = 13U;
	static int32_t t80 = -598;

    t80 = (x321>(x322^(x323==x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x326 = -606;
	int16_t x327 = INT16_MAX;
	volatile uint16_t x328 = UINT16_MAX;
	volatile int32_t t81 = -148331;

    t81 = (x325>(x326^(x327==x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = UINT32_MAX;
	uint32_t x330 = 416U;
	static volatile uint64_t x331 = 8337583LLU;
	volatile int32_t t82 = 2764605;

    t82 = (x329>(x330^(x331==x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 4U;
	static uint16_t x335 = 1U;
	int32_t t83 = -776140;

    t83 = (x333>(x334^(x335==x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t t84 = 14241;

    t84 = (x337>(x338^(x339==x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	volatile int16_t x342 = INT16_MAX;
	uint8_t x343 = 0U;
	uint64_t x344 = UINT64_MAX;
	int32_t t85 = -403381566;

    t85 = (x341>(x342^(x343==x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = -1;
	int64_t x346 = INT64_MAX;
	uint64_t x347 = 4238LLU;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 3228945;

    t86 = (x345>(x346^(x347==x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x349 = -1LL;
	uint8_t x350 = 89U;
	static uint64_t x351 = 17LLU;
	static int32_t x352 = -1;
	int32_t t87 = -1916;

    t87 = (x349>(x350^(x351==x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x354 = UINT16_MAX;
	int8_t x355 = -1;
	static volatile uint16_t x356 = 5939U;

    t88 = (x353>(x354^(x355==x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 73192LLU;
	uint64_t x358 = 173679012147LLU;
	volatile uint64_t x359 = 43553911604576LLU;
	int32_t x360 = INT32_MIN;
	int32_t t89 = -40338817;

    t89 = (x357>(x358^(x359==x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x364 = INT8_MAX;
	int32_t t90 = -2978453;

    t90 = (x361>(x362^(x363==x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -20;
	static uint8_t x367 = 1U;
	volatile int32_t x368 = -1;
	static volatile int32_t t91 = -490;

    t91 = (x365>(x366^(x367==x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -83;
	static uint64_t x370 = 13LLU;
	int32_t x371 = 8263;
	uint64_t x372 = 0LLU;
	int32_t t92 = 6285011;

    t92 = (x369>(x370^(x371==x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x374 = INT16_MIN;
	uint16_t x375 = UINT16_MAX;
	int32_t t93 = 1;

    t93 = (x373>(x374^(x375==x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = -1LL;
	static uint64_t x378 = 660727LLU;
	volatile uint64_t x379 = 522164LLU;
	volatile int32_t t94 = 1;

    t94 = (x377>(x378^(x379==x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = UINT32_MAX;
	int32_t x382 = INT32_MIN;
	static volatile int32_t x383 = -508;
	volatile int32_t t95 = 108107;

    t95 = (x381>(x382^(x383==x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x386 = 14817U;
	volatile uint8_t x387 = 29U;
	int32_t x388 = -1;
	int32_t t96 = 432;

    t96 = (x385>(x386^(x387==x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x389 = UINT8_MAX;
	uint64_t x390 = 4542167375009LLU;
	int8_t x391 = INT8_MIN;
	int16_t x392 = 3706;
	volatile int32_t t97 = 0;

    t97 = (x389>(x390^(x391==x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x394 = INT8_MIN;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = INT64_MIN;
	int32_t t98 = -1;

    t98 = (x393>(x394^(x395==x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -41383377;
	static int64_t x398 = INT64_MIN;
	static int64_t x399 = -134067649LL;
	uint16_t x400 = UINT16_MAX;

    t99 = (x397>(x398^(x399==x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x402 = INT16_MAX;
	uint32_t x403 = UINT32_MAX;
	int8_t x404 = INT8_MAX;
	volatile int32_t t100 = -118517062;

    t100 = (x401>(x402^(x403==x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x407 = INT64_MIN;
	uint16_t x408 = 9633U;

    t101 = (x405>(x406^(x407==x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	static uint16_t x410 = 198U;
	volatile int64_t x411 = INT64_MIN;
	int8_t x412 = 1;
	static volatile int32_t t102 = -135;

    t102 = (x409>(x410^(x411==x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 289U;
	volatile int8_t x414 = INT8_MIN;
	static int8_t x416 = -2;
	volatile int32_t t103 = -94437962;

    t103 = (x413>(x414^(x415==x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 17095316087615LLU;
	static volatile int32_t x418 = -8475285;
	volatile int32_t x419 = INT32_MIN;
	volatile int64_t x420 = INT64_MIN;
	static volatile int32_t t104 = -241140106;

    t104 = (x417>(x418^(x419==x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = -1LL;
	volatile int32_t x422 = INT32_MIN;
	int16_t x423 = INT16_MAX;
	int8_t x424 = INT8_MIN;
	volatile int32_t t105 = -161490;

    t105 = (x421>(x422^(x423==x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 11773;
	volatile uint8_t x426 = UINT8_MAX;
	int16_t x427 = INT16_MAX;
	uint8_t x428 = 3U;

    t106 = (x425>(x426^(x427==x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x430 = 3590795U;
	int64_t x431 = INT64_MIN;
	int16_t x432 = 1;
	int32_t t107 = 1960128;

    t107 = (x429>(x430^(x431==x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x433 = 29U;
	static uint8_t x434 = 28U;
	int8_t x435 = -2;
	static int8_t x436 = -1;
	volatile int32_t t108 = 521028;

    t108 = (x433>(x434^(x435==x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = INT16_MIN;
	static int8_t x439 = INT8_MIN;

    t109 = (x437>(x438^(x439==x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	int8_t x442 = 0;
	int32_t x443 = 3;

    t110 = (x441>(x442^(x443==x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	int64_t x447 = -196LL;
	uint16_t x448 = 770U;
	int32_t t111 = -8;

    t111 = (x445>(x446^(x447==x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 54U;
	int32_t x451 = -3866;
	uint32_t x452 = 4605U;
	static volatile int32_t t112 = -372087584;

    t112 = (x449>(x450^(x451==x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	int64_t x454 = INT64_MAX;
	volatile int64_t x455 = INT64_MIN;
	volatile uint8_t x456 = UINT8_MAX;
	int32_t t113 = 7737;

    t113 = (x453>(x454^(x455==x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = INT32_MIN;
	int16_t x459 = 3;
	static uint32_t x460 = UINT32_MAX;
	int32_t t114 = 34556691;

    t114 = (x457>(x458^(x459==x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = 0;
	int16_t x462 = INT16_MIN;
	int8_t x463 = -1;
	uint32_t x464 = 62383343U;
	volatile int32_t t115 = 33421692;

    t115 = (x461>(x462^(x463==x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x466 = UINT64_MAX;
	int32_t x467 = -28;
	static volatile int32_t x468 = INT32_MIN;

    t116 = (x465>(x466^(x467==x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MIN;
	uint16_t x470 = 31U;
	int8_t x472 = -8;
	volatile int32_t t117 = 2;

    t117 = (x469>(x470^(x471==x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x474 = -49;
	volatile uint32_t x476 = 22U;
	static int32_t t118 = 5;

    t118 = (x473>(x474^(x475==x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x477 = -1;
	uint16_t x478 = 1U;
	int32_t x479 = -1;
	int64_t x480 = 1928975430LL;
	volatile int32_t t119 = -30725;

    t119 = (x477>(x478^(x479==x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	int8_t x482 = INT8_MIN;
	int64_t x483 = INT64_MIN;
	volatile int64_t x484 = INT64_MIN;
	int32_t t120 = -53;

    t120 = (x481>(x482^(x483==x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x486 = 704868;
	static uint32_t x487 = 5U;
	int32_t t121 = 0;

    t121 = (x485>(x486^(x487==x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MAX;
	int32_t x490 = 112806;
	int64_t x491 = INT64_MIN;
	volatile int64_t x492 = INT64_MIN;
	volatile int32_t t122 = -2857;

    t122 = (x489>(x490^(x491==x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	int32_t x494 = INT32_MAX;
	static int8_t x495 = INT8_MAX;
	static int8_t x496 = -57;
	int32_t t123 = -57255;

    t123 = (x493>(x494^(x495==x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x498 = 13692121433075135LLU;
	int32_t t124 = 1;

    t124 = (x497>(x498^(x499==x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -92434166913201299LL;
	int8_t x502 = -1;
	uint16_t x504 = 1U;
	int32_t t125 = 1;

    t125 = (x501>(x502^(x503==x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x506 = 11U;
	int8_t x507 = INT8_MIN;
	int64_t x508 = -1LL;
	int32_t t126 = 407;

    t126 = (x505>(x506^(x507==x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 7261269LLU;
	int32_t x510 = INT32_MIN;
	uint64_t x511 = 621033284399054LLU;
	volatile int32_t x512 = INT32_MIN;
	int32_t t127 = 28985775;

    t127 = (x509>(x510^(x511==x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = 58233097703384288LLU;
	volatile int16_t x515 = -758;
	int16_t x516 = 2666;
	int32_t t128 = -902063605;

    t128 = (x513>(x514^(x515==x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 348371706803LLU;
	int32_t x519 = INT32_MAX;
	int32_t t129 = 8119;

    t129 = (x517>(x518^(x519==x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = INT32_MAX;
	static int16_t x522 = INT16_MIN;
	static int8_t x524 = INT8_MAX;
	int32_t t130 = 16;

    t130 = (x521>(x522^(x523==x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	int8_t x526 = INT8_MAX;
	int32_t t131 = -799;

    t131 = (x525>(x526^(x527==x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	uint16_t x532 = UINT16_MAX;
	static int32_t t132 = 0;

    t132 = (x529>(x530^(x531==x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	static volatile int16_t x534 = INT16_MAX;
	volatile int8_t x535 = INT8_MIN;
	int32_t x536 = INT32_MAX;
	volatile int32_t t133 = 21512;

    t133 = (x533>(x534^(x535==x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = INT16_MIN;
	int64_t x539 = INT64_MAX;
	int32_t t134 = 456404;

    t134 = (x537>(x538^(x539==x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -2996;
	int64_t x542 = INT64_MIN;
	int64_t x544 = INT64_MAX;
	int32_t t135 = -199784;

    t135 = (x541>(x542^(x543==x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MAX;
	int32_t x546 = INT32_MAX;
	uint16_t x547 = 28813U;
	int64_t x548 = INT64_MIN;
	volatile int32_t t136 = 2;

    t136 = (x545>(x546^(x547==x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = INT64_MIN;
	uint64_t x551 = UINT64_MAX;
	volatile int32_t t137 = 12536738;

    t137 = (x549>(x550^(x551==x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x555 = 102U;
	int32_t t138 = -7;

    t138 = (x553>(x554^(x555==x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = UINT64_MAX;
	volatile int16_t x558 = INT16_MAX;
	volatile int32_t t139 = 76;

    t139 = (x557>(x558^(x559==x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 88LLU;
	uint16_t x562 = 4U;
	int8_t x563 = INT8_MIN;
	uint64_t x564 = 1918776LLU;
	static int32_t t140 = -6293562;

    t140 = (x561>(x562^(x563==x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int16_t x565 = -1;
	uint32_t x566 = UINT32_MAX;
	int64_t x567 = 984102332441668391LL;
	int16_t x568 = INT16_MIN;

    t141 = (x565>(x566^(x567==x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	volatile uint8_t x570 = UINT8_MAX;
	int16_t x571 = -15110;
	int8_t x572 = -2;
	int32_t t142 = 113507159;

    t142 = (x569>(x570^(x571==x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x573 = 11U;
	uint64_t x574 = 772LLU;
	uint32_t x576 = UINT32_MAX;
	volatile int32_t t143 = -1;

    t143 = (x573>(x574^(x575==x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	static int16_t x578 = -1;
	int8_t x579 = INT8_MIN;
	int32_t x580 = INT32_MAX;

    t144 = (x577>(x578^(x579==x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x581 = 1002U;
	uint16_t x582 = 6947U;
	int64_t x583 = INT64_MAX;
	static volatile int32_t t145 = -1853;

    t145 = (x581>(x582^(x583==x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x586 = 25505U;
	static int32_t x587 = -1;
	static volatile int8_t x588 = INT8_MAX;

    t146 = (x585>(x586^(x587==x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MAX;
	uint16_t x590 = 3U;
	uint64_t x591 = 358LLU;
	uint32_t x592 = UINT32_MAX;
	volatile int32_t t147 = 1010144987;

    t147 = (x589>(x590^(x591==x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	int8_t x594 = -24;
	int8_t x596 = INT8_MIN;

    t148 = (x593>(x594^(x595==x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	int8_t x598 = -56;
	volatile uint16_t x599 = 15U;
	static int8_t x600 = -8;
	volatile int32_t t149 = 115181388;

    t149 = (x597>(x598^(x599==x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = 277525LL;
	int32_t x602 = INT32_MIN;
	static int32_t x603 = INT32_MIN;
	volatile int32_t t150 = 58170;

    t150 = (x601>(x602^(x603==x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 0U;
	volatile int16_t x607 = 279;

    t151 = (x605>(x606^(x607==x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x610 = UINT16_MAX;
	static int32_t x612 = 66982693;

    t152 = (x609>(x610^(x611==x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = UINT32_MAX;
	uint16_t x614 = UINT16_MAX;
	int8_t x615 = -1;
	int8_t x616 = -1;
	int32_t t153 = -994690;

    t153 = (x613>(x614^(x615==x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x620 = INT8_MIN;
	int32_t t154 = -537897;

    t154 = (x617>(x618^(x619==x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = UINT16_MAX;
	volatile int16_t x623 = 2695;
	static int64_t x624 = -1LL;
	volatile int32_t t155 = -1;

    t155 = (x621>(x622^(x623==x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = UINT16_MAX;
	int8_t x626 = INT8_MAX;
	static volatile uint64_t x627 = 4222891940936LLU;
	int8_t x628 = INT8_MIN;

    t156 = (x625>(x626^(x627==x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = UINT8_MAX;
	int16_t x630 = -97;
	volatile int8_t x631 = INT8_MIN;
	int64_t x632 = INT64_MAX;
	volatile int32_t t157 = -14417068;

    t157 = (x629>(x630^(x631==x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint64_t x634 = 18184527232LLU;
	uint8_t x635 = 45U;
	uint16_t x636 = UINT16_MAX;
	int32_t t158 = -1;

    t158 = (x633>(x634^(x635==x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x638 = 29U;
	volatile int64_t x639 = INT64_MAX;
	uint64_t x640 = 4258373034LLU;
	int32_t t159 = -980;

    t159 = (x637>(x638^(x639==x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	volatile uint8_t x642 = 10U;
	int8_t x643 = 0;
	volatile int32_t t160 = -14774;

    t160 = (x641>(x642^(x643==x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	uint32_t x646 = UINT32_MAX;
	uint64_t x647 = UINT64_MAX;
	volatile int16_t x648 = -1;
	int32_t t161 = 0;

    t161 = (x645>(x646^(x647==x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 1U;
	int8_t x650 = 0;
	int32_t x651 = 13530;
	uint64_t x652 = 21441811654384829LLU;
	int32_t t162 = 798897843;

    t162 = (x649>(x650^(x651==x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = UINT64_MAX;
	volatile uint64_t x654 = UINT64_MAX;
	volatile int64_t x655 = INT64_MIN;
	int32_t t163 = 1198281;

    t163 = (x653>(x654^(x655==x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x659 = 914050LL;
	uint8_t x660 = UINT8_MAX;

    t164 = (x657>(x658^(x659==x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x661 = 1U;
	uint32_t x663 = 7967649U;
	uint32_t x664 = 18U;
	int32_t t165 = 9;

    t165 = (x661>(x662^(x663==x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	int64_t x666 = -1LL;
	int8_t x667 = INT8_MAX;
	volatile int16_t x668 = INT16_MAX;
	volatile int32_t t166 = -42991136;

    t166 = (x665>(x666^(x667==x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x670 = 4007;
	int8_t x672 = INT8_MIN;
	volatile int32_t t167 = 296;

    t167 = (x669>(x670^(x671==x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MAX;
	uint32_t x674 = UINT32_MAX;
	int64_t x675 = -1LL;

    t168 = (x673>(x674^(x675==x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x678 = 7U;
	int64_t x679 = -124235586161484435LL;
	int32_t t169 = 704;

    t169 = (x677>(x678^(x679==x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 18;
	uint16_t x683 = 1803U;
	static int8_t x684 = -1;
	int32_t t170 = -3620;

    t170 = (x681>(x682^(x683==x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 3491U;
	int8_t x686 = -15;
	static volatile uint64_t x688 = UINT64_MAX;
	int32_t t171 = -394;

    t171 = (x685>(x686^(x687==x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -3;
	volatile uint32_t x690 = 124980U;
	int8_t x691 = INT8_MAX;
	int32_t x692 = INT32_MIN;

    t172 = (x689>(x690^(x691==x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x693 = 0U;
	int16_t x694 = -1;
	static int8_t x695 = 1;
	int32_t x696 = 38033023;
	volatile int32_t t173 = -417680;

    t173 = (x693>(x694^(x695==x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	int16_t x698 = -5;
	uint16_t x699 = UINT16_MAX;
	int16_t x700 = INT16_MAX;
	static volatile int32_t t174 = -22205304;

    t174 = (x697>(x698^(x699==x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = INT64_MIN;
	uint64_t x702 = 401788353LLU;
	static int32_t x703 = INT32_MIN;
	volatile int32_t t175 = -111;

    t175 = (x701>(x702^(x703==x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	uint8_t x706 = 8U;
	int8_t x708 = -1;
	volatile int32_t t176 = -2;

    t176 = (x705>(x706^(x707==x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	int64_t x711 = INT64_MAX;
	static int32_t t177 = -179;

    t177 = (x709>(x710^(x711==x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 40U;
	int8_t x714 = 0;
	int16_t x715 = INT16_MIN;
	static int16_t x716 = -1;
	volatile int32_t t178 = 175;

    t178 = (x713>(x714^(x715==x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x718 = 8963U;
	uint32_t x719 = 3773964U;
	static volatile int8_t x720 = INT8_MAX;
	volatile int32_t t179 = -168;

    t179 = (x717>(x718^(x719==x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 9695547LLU;
	static volatile int64_t x722 = INT64_MIN;
	int32_t x723 = -1;
	static volatile int16_t x724 = INT16_MIN;
	int32_t t180 = -5306831;

    t180 = (x721>(x722^(x723==x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MIN;
	int64_t x726 = INT64_MIN;
	volatile int32_t t181 = -25781890;

    t181 = (x725>(x726^(x727==x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = INT8_MAX;
	int32_t x731 = INT32_MAX;
	int32_t t182 = 21;

    t182 = (x729>(x730^(x731==x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x733 = 579U;
	uint64_t x734 = UINT64_MAX;
	int16_t x735 = 6;
	volatile int32_t x736 = INT32_MAX;
	volatile int32_t t183 = -1;

    t183 = (x733>(x734^(x735==x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 1U;
	static int64_t x738 = INT64_MAX;
	static int64_t x739 = 0LL;
	static int16_t x740 = INT16_MIN;

    t184 = (x737>(x738^(x739==x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = -597;
	int16_t x742 = 74;
	volatile int16_t x743 = -1;
	volatile int32_t t185 = -774371;

    t185 = (x741>(x742^(x743==x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x745 = INT64_MIN;
	volatile int8_t x746 = INT8_MIN;
	static int32_t x747 = 2617692;
	volatile int32_t t186 = -124753;

    t186 = (x745>(x746^(x747==x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x749 = INT16_MAX;
	int64_t x750 = -1LL;
	int16_t x752 = INT16_MAX;

    t187 = (x749>(x750^(x751==x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x755 = 145675357U;
	static volatile int64_t x756 = INT64_MAX;
	volatile int32_t t188 = -607283786;

    t188 = (x753>(x754^(x755==x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 9177662U;
	uint32_t x758 = 57347749U;
	int32_t t189 = -52;

    t189 = (x757>(x758^(x759==x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MIN;
	int16_t x762 = -38;
	static volatile int32_t x763 = INT32_MIN;
	volatile int32_t t190 = 1090;

    t190 = (x761>(x762^(x763==x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = -34082282266LL;
	int64_t x766 = INT64_MIN;

    t191 = (x765>(x766^(x767==x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -51688380LL;
	uint8_t x771 = 14U;
	int64_t x772 = INT64_MAX;
	int32_t t192 = 33701740;

    t192 = (x769>(x770^(x771==x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x774 = 127725065U;
	int8_t x775 = -2;
	uint32_t x776 = 5U;
	int32_t t193 = 0;

    t193 = (x773>(x774^(x775==x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x777 = 1710U;
	static int16_t x779 = INT16_MIN;
	int64_t x780 = INT64_MAX;
	volatile int32_t t194 = -571;

    t194 = (x777>(x778^(x779==x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MAX;
	uint8_t x782 = 1U;
	int32_t x783 = INT32_MIN;
	int8_t x784 = INT8_MIN;
	int32_t t195 = -1;

    t195 = (x781>(x782^(x783==x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = INT16_MIN;
	uint32_t x787 = 68611346U;
	int8_t x788 = INT8_MIN;
	int32_t t196 = -158;

    t196 = (x785>(x786^(x787==x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x790 = -1;
	int16_t x792 = INT16_MAX;
	volatile int32_t t197 = -51396980;

    t197 = (x789>(x790^(x791==x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 57U;
	uint8_t x794 = 23U;
	uint64_t x795 = UINT64_MAX;
	static volatile int8_t x796 = INT8_MIN;
	volatile int32_t t198 = -40139324;

    t198 = (x793>(x794^(x795==x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x798 = UINT16_MAX;
	uint64_t x799 = 7753768941LLU;
	int32_t t199 = 33;

    t199 = (x797>(x798^(x799==x800)));

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

