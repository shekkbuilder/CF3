
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

volatile int8_t x3 = INT8_MIN;
volatile int8_t x4 = 57;
uint16_t x11 = 3U;
static volatile int32_t t2 = 1187;
int64_t t3 = 1109728LL;
uint32_t t4 = 102U;
int64_t x22 = -125LL;
uint32_t x25 = 233749U;
static int8_t x29 = INT8_MIN;
static int32_t t7 = -245;
int8_t x34 = INT8_MAX;
volatile int32_t x37 = -8;
uint8_t x49 = 27U;
int32_t x50 = INT32_MAX;
uint32_t x52 = 887912U;
int32_t x56 = 1199077;
int32_t t13 = 1;
uint8_t x59 = 0U;
int32_t t14 = -4;
int32_t x61 = -1;
volatile uint64_t t15 = 1961370549LLU;
static volatile int16_t x67 = INT16_MAX;
static int8_t x70 = INT8_MIN;
volatile int32_t x71 = -22569;
uint8_t x72 = 57U;
static uint64_t x78 = 1016684LLU;
static int64_t x80 = -36LL;
volatile int32_t t20 = 1043514;
int32_t x87 = -1;
uint8_t x101 = 0U;
uint8_t x103 = UINT8_MAX;
int64_t x109 = -1LL;
int8_t x110 = -3;
uint32_t x123 = UINT32_MAX;
int32_t x124 = INT32_MIN;
static uint32_t t30 = 233725U;
volatile int16_t x127 = 7;
uint8_t x141 = 0U;
int8_t x142 = 1;
static int64_t x149 = INT64_MIN;
uint8_t x154 = UINT8_MAX;
int32_t t38 = -2389;
uint16_t x161 = 262U;
static uint64_t x170 = 14416419453LLU;
volatile int64_t x171 = -2171190774859499LL;
static uint8_t x172 = UINT8_MAX;
int64_t x179 = -3185LL;
static int64_t x184 = INT64_MAX;
int64_t t45 = 29948451060LL;
int8_t x188 = INT8_MIN;
volatile int32_t t48 = 147;
static uint64_t x202 = 12174546279605093LLU;
int16_t x205 = 1;
uint16_t x209 = UINT16_MAX;
uint64_t t52 = 6553073466742LLU;
int16_t x213 = 0;
static uint32_t t53 = 19U;
int16_t x224 = -1;
int32_t t55 = 57598770;
uint16_t x225 = UINT16_MAX;
static volatile uint32_t x226 = 168309U;
static uint64_t x242 = 70652115LLU;
static uint32_t x244 = 351952U;
static int16_t x246 = INT16_MAX;
static int8_t x247 = -1;
int64_t x251 = 1817LL;
static volatile int8_t x254 = 18;
uint8_t x259 = 31U;
uint32_t x262 = UINT32_MAX;
int16_t x263 = INT16_MAX;
int8_t x264 = -1;
int16_t x265 = INT16_MIN;
volatile uint32_t t65 = 7724964U;
int16_t x273 = 7052;
int16_t x276 = -1;
int64_t t68 = -7LL;
volatile int64_t x284 = INT64_MIN;
static int64_t t69 = -489930080498681789LL;
int32_t x286 = INT32_MIN;
int8_t x288 = 45;
int32_t t70 = -1420999;
uint8_t x290 = UINT8_MAX;
int16_t x297 = 3;
volatile uint16_t x299 = 61U;
static int8_t x304 = -15;
static int16_t x308 = -1510;
int16_t x309 = -1;
int16_t x312 = INT16_MIN;
volatile int64_t t77 = -152345444987578877LL;
volatile int32_t t78 = 7;
uint8_t x327 = 17U;
uint32_t t80 = 550356U;
int32_t x331 = -1648;
int32_t x333 = 336413878;
int32_t x343 = 3;
int32_t x346 = -1;
int64_t x347 = INT64_MAX;
int16_t x366 = -14233;
int32_t x368 = INT32_MIN;
static int16_t x379 = INT16_MIN;
volatile int32_t x382 = 458459;
static volatile uint16_t x383 = 200U;
int32_t x384 = -1;
volatile int16_t x385 = -32;
int8_t x388 = INT8_MIN;
int8_t x391 = INT8_MIN;
int32_t t97 = -6049;
uint32_t x405 = 7U;
static uint16_t x421 = 6U;
uint32_t x425 = 71U;
volatile uint32_t x426 = 379U;
int64_t x439 = 6729778927LL;
uint16_t x444 = 215U;
volatile int32_t t110 = 4174;
uint16_t x449 = UINT16_MAX;
volatile int8_t x456 = INT8_MAX;
uint8_t x457 = 1U;
static uint32_t x466 = 1048750183U;
int32_t x483 = -432578;
int32_t x491 = -1;
uint8_t x494 = 0U;
volatile int8_t x501 = INT8_MIN;
volatile uint32_t x504 = 209317U;
int8_t x508 = 1;
static int16_t x512 = INT16_MAX;
int8_t x516 = INT8_MIN;
volatile int32_t x519 = -1;
int64_t x520 = 2LL;
volatile int8_t x523 = -1;
int32_t x527 = INT32_MAX;
int8_t x528 = 16;
volatile int64_t x536 = -1LL;
int16_t x539 = -1;
int32_t x544 = INT32_MIN;
static uint16_t x545 = UINT16_MAX;
static volatile uint16_t x552 = UINT16_MAX;
static int32_t x553 = INT32_MIN;
uint64_t t137 = 30708LLU;
static int16_t x560 = -1;
static int32_t x561 = -31483;
static int32_t x562 = -480786;
int64_t x564 = INT64_MIN;
volatile int16_t x565 = INT16_MAX;
uint32_t t140 = 847U;
static int16_t x570 = INT16_MIN;
volatile int64_t t141 = -301271323355635852LL;
uint16_t x573 = UINT16_MAX;
int16_t x575 = INT16_MIN;
volatile int32_t t142 = 12994;
volatile int16_t x583 = INT16_MIN;
int16_t x593 = -1;
volatile uint64_t x595 = 1880LLU;
uint64_t t150 = 2818268LLU;
static volatile int64_t x611 = 104960990465LL;
static uint32_t t152 = 2781U;
static uint32_t x618 = UINT32_MAX;
volatile int64_t t154 = -60132575833070195LL;
int32_t x625 = -1;
int16_t x630 = INT16_MIN;
volatile int64_t x632 = INT64_MIN;
volatile int8_t x633 = INT8_MAX;
int32_t x634 = -4640510;
int16_t x636 = 93;
int64_t x637 = INT64_MIN;
int16_t x640 = -1;
volatile int32_t t158 = -46;
int32_t t159 = 372;
int32_t x645 = 11;
volatile uint32_t t160 = 344403U;
uint32_t t161 = 8U;
int8_t x654 = INT8_MIN;
static volatile int64_t x656 = -4291311098944755LL;
volatile int64_t t162 = -29787582476822359LL;
uint64_t t163 = 1007400LLU;
uint64_t x667 = 49498LLU;
static int64_t x670 = -151188110255111553LL;
int64_t x671 = INT64_MIN;
volatile int64_t t166 = 13787309953LL;
int16_t x674 = INT16_MAX;
int16_t x676 = 5;
int16_t x677 = INT16_MAX;
volatile uint64_t x678 = UINT64_MAX;
uint16_t x679 = 387U;
uint8_t x680 = 77U;
int32_t t169 = 395765;
int64_t x687 = INT64_MIN;
volatile int32_t t171 = 1;
static int16_t x695 = -1;
int64_t x698 = INT64_MAX;
int64_t x704 = 2LL;
volatile int64_t t178 = -1664LL;
int32_t x723 = 111;
int64_t x726 = INT64_MIN;
uint8_t x731 = 36U;
int32_t x732 = INT32_MIN;
int32_t x733 = -115757;
static int32_t x734 = 7;
uint16_t x738 = UINT16_MAX;
int16_t x742 = INT16_MAX;
int32_t x751 = -1;
int32_t x753 = -15613003;
volatile int16_t x755 = INT16_MAX;
static volatile int64_t x759 = INT64_MIN;
volatile int64_t t188 = 5763472LL;
int64_t x762 = INT64_MIN;
int32_t t190 = -201;
int8_t x774 = -1;
volatile int8_t x785 = INT8_MIN;
int8_t x789 = 3;
int64_t x796 = -549026967147411LL;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	volatile uint16_t x2 = UINT16_MAX;
	volatile int32_t t0 = 398382;

    t0 = ((x1==x2)*(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -261183417683995LL;
	int32_t x6 = 83713757;
	uint32_t x7 = UINT32_MAX;
	volatile int16_t x8 = -1;
	static volatile uint32_t t1 = 24841553U;

    t1 = ((x5==x6)*(x7/x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MAX;
	static uint16_t x10 = 9U;
	int32_t x12 = INT32_MIN;

    t2 = ((x9==x10)*(x11/x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = 68506959287361LL;
	int16_t x14 = INT16_MAX;
	int64_t x15 = INT64_MIN;
	int16_t x16 = 19;

    t3 = ((x13==x14)*(x15/x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x17 = UINT32_MAX;
	int8_t x18 = 1;
	volatile uint32_t x19 = UINT32_MAX;
	volatile int32_t x20 = -243180852;

    t4 = ((x17==x18)*(x19/x20));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 289357U;
	uint8_t x23 = 0U;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -516236;

    t5 = ((x21==x22)*(x23/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x26 = 0U;
	uint32_t x27 = 287126018U;
	uint8_t x28 = 30U;
	uint32_t t6 = 0U;

    t6 = ((x25==x26)*(x27/x28));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = -1;
	int8_t x31 = -1;
	volatile int32_t x32 = INT32_MAX;

    t7 = ((x29==x30)*(x31/x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 9LLU;
	uint64_t x35 = 238451883LLU;
	static int64_t x36 = -1LL;
	volatile uint64_t t8 = 4685LLU;

    t8 = ((x33==x34)*(x35/x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = 0;
	static int32_t x39 = -1;
	uint64_t x40 = 628262820068LLU;
	uint64_t t9 = 27266526LLU;

    t9 = ((x37==x38)*(x39/x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -114;
	int8_t x42 = -6;
	int64_t x43 = 6699LL;
	uint8_t x44 = 17U;
	int64_t t10 = -137852426LL;

    t10 = ((x41==x42)*(x43/x44));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = -1;
	volatile int32_t x46 = INT32_MIN;
	int32_t x47 = -44;
	uint32_t x48 = 2310U;
	volatile uint32_t t11 = 1099U;

    t11 = ((x45==x46)*(x47/x48));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x51 = -1;
	volatile uint32_t t12 = 66627580U;

    t12 = ((x49==x50)*(x51/x52));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = 12;
	int64_t x54 = INT64_MIN;
	uint8_t x55 = UINT8_MAX;

    t13 = ((x53==x54)*(x55/x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	uint32_t x58 = 157996U;
	int32_t x60 = 161;

    t14 = ((x57==x58)*(x59/x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x62 = 422U;
	volatile uint64_t x63 = UINT64_MAX;
	int8_t x64 = -2;

    t15 = ((x61==x62)*(x63/x64));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int8_t x66 = -1;
	static int8_t x68 = -1;
	static int32_t t16 = -81143;

    t16 = ((x65==x66)*(x67/x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	volatile int32_t t17 = 679;

    t17 = ((x69==x70)*(x71/x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 114U;
	static int8_t x74 = INT8_MIN;
	int8_t x75 = -1;
	int16_t x76 = INT16_MAX;
	static int32_t t18 = -6502854;

    t18 = ((x73==x74)*(x75/x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	static int32_t x79 = -1;
	volatile int64_t t19 = 1376066988619LL;

    t19 = ((x77==x78)*(x79/x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	volatile int8_t x82 = INT8_MIN;
	static volatile int8_t x83 = INT8_MIN;
	int16_t x84 = -1;

    t20 = ((x81==x82)*(x83/x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = INT16_MAX;
	int16_t x86 = INT16_MIN;
	int8_t x88 = -1;
	volatile int32_t t21 = 111;

    t21 = ((x85==x86)*(x87/x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = -1;
	static int64_t x90 = INT64_MIN;
	int8_t x91 = -13;
	volatile uint8_t x92 = 5U;
	static int32_t t22 = -15;

    t22 = ((x89==x90)*(x91/x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	volatile int16_t x94 = -11;
	int64_t x95 = INT64_MAX;
	volatile int64_t x96 = INT64_MAX;
	int64_t t23 = -91828929133527929LL;

    t23 = ((x93==x94)*(x95/x96));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = -1;
	int16_t x98 = INT16_MIN;
	int32_t x99 = -6;
	static uint8_t x100 = 56U;
	int32_t t24 = 117858944;

    t24 = ((x97==x98)*(x99/x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = INT64_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -1903;

    t25 = ((x101==x102)*(x103/x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x105 = 668U;
	int64_t x106 = -1LL;
	volatile int32_t x107 = 133;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 104037938;

    t26 = ((x105==x106)*(x107/x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x111 = INT16_MAX;
	int64_t x112 = 431556LL;
	volatile int64_t t27 = 427309300LL;

    t27 = ((x109==x110)*(x111/x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	uint8_t x114 = 33U;
	volatile uint8_t x115 = UINT8_MAX;
	volatile int8_t x116 = INT8_MIN;
	int32_t t28 = 7180;

    t28 = ((x113==x114)*(x115/x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	uint64_t x118 = 45127595451LLU;
	uint32_t x119 = 42U;
	volatile int64_t x120 = INT64_MIN;
	int64_t t29 = -1086099133653940LL;

    t29 = ((x117==x118)*(x119/x120));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x121 = 100508U;
	static uint64_t x122 = 13538328924LLU;

    t30 = ((x121==x122)*(x123/x124));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	int64_t x128 = -1LL;
	static volatile int64_t t31 = -2872LL;

    t31 = ((x125==x126)*(x127/x128));

    if (t31 != -7LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 26U;
	int32_t x130 = INT32_MAX;
	uint8_t x131 = UINT8_MAX;
	int8_t x132 = -1;
	int32_t t32 = -3;

    t32 = ((x129==x130)*(x131/x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x133 = INT64_MIN;
	int32_t x134 = -1;
	uint16_t x135 = 125U;
	uint16_t x136 = 2U;
	volatile int32_t t33 = 579;

    t33 = ((x133==x134)*(x135/x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MAX;
	static volatile int64_t t34 = 16179048276767LL;

    t34 = ((x137==x138)*(x139/x140));

    if (t34 != -281483566907400LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x143 = 0;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = 64910870;

    t35 = ((x141==x142)*(x143/x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = INT32_MIN;
	uint8_t x146 = 30U;
	uint8_t x147 = 29U;
	static uint32_t x148 = 2190413U;
	volatile uint32_t t36 = 233432U;

    t36 = ((x145==x146)*(x147/x148));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x150 = 2670307430375187LLU;
	int8_t x151 = INT8_MAX;
	static volatile uint64_t x152 = 21321LLU;
	static uint64_t t37 = 7812693049197LLU;

    t37 = ((x149==x150)*(x151/x152));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 37756445103LLU;
	static int32_t x155 = -1;
	static volatile int16_t x156 = 1;

    t38 = ((x153==x154)*(x155/x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x157 = 6U;
	uint32_t x158 = 6131U;
	volatile int64_t x159 = INT64_MIN;
	volatile int32_t x160 = 828967;
	static volatile int64_t t39 = -222461176770887346LL;

    t39 = ((x157==x158)*(x159/x160));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x162 = -1;
	volatile int8_t x163 = -1;
	static int32_t x164 = -763592500;
	static volatile int32_t t40 = -3087809;

    t40 = ((x161==x162)*(x163/x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = -1LL;
	static uint32_t x166 = 34U;
	int64_t x167 = -1LL;
	int32_t x168 = -2739;
	int64_t t41 = 131115LL;

    t41 = ((x165==x166)*(x167/x168));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x169 = 0U;
	volatile int64_t t42 = 2071321732914LL;

    t42 = ((x169==x170)*(x171/x172));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 1U;
	static uint8_t x174 = 56U;
	uint32_t x175 = 2927885U;
	uint64_t x176 = 93723634LLU;
	volatile uint64_t t43 = 717661379649697LLU;

    t43 = ((x173==x174)*(x175/x176));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = -1;
	int8_t x178 = 13;
	uint16_t x180 = 6950U;
	static volatile int64_t t44 = 29LL;

    t44 = ((x177==x178)*(x179/x180));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -4;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;

    t45 = ((x181==x182)*(x183/x184));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	static volatile int8_t x186 = -5;
	static volatile int64_t x187 = 2805LL;
	int64_t t46 = -24177293208LL;

    t46 = ((x185==x186)*(x187/x188));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = UINT16_MAX;
	volatile uint64_t x190 = 217LLU;
	int32_t x191 = INT32_MIN;
	volatile int64_t x192 = -1LL;
	int64_t t47 = -8307287054717046LL;

    t47 = ((x189==x190)*(x191/x192));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = -1;
	int16_t x194 = -1;
	int32_t x195 = INT32_MIN;
	uint16_t x196 = 36U;

    t48 = ((x193==x194)*(x195/x196));

    if (t48 != -59652323) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int8_t x198 = -1;
	static int32_t x199 = -1;
	int32_t x200 = INT32_MIN;
	int32_t t49 = -25;

    t49 = ((x197==x198)*(x199/x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 691119265U;
	int32_t x203 = 254;
	int16_t x204 = -1;
	volatile int32_t t50 = -1485914;

    t50 = ((x201==x202)*(x203/x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x206 = INT64_MAX;
	uint32_t x207 = 77760596U;
	int64_t x208 = INT64_MIN;
	static volatile int64_t t51 = 200920155238LL;

    t51 = ((x205==x206)*(x207/x208));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x210 = 1461U;
	uint64_t x211 = 18014738131LLU;
	int32_t x212 = -2;

    t52 = ((x209==x210)*(x211/x212));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x214 = UINT16_MAX;
	int8_t x215 = 9;
	uint32_t x216 = 705U;

    t53 = ((x213==x214)*(x215/x216));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = INT8_MAX;
	uint64_t x218 = UINT64_MAX;
	static int16_t x219 = INT16_MIN;
	int16_t x220 = -499;
	int32_t t54 = -1981856;

    t54 = ((x217==x218)*(x219/x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = INT64_MIN;
	static uint64_t x222 = 14206410LLU;
	volatile uint8_t x223 = 1U;

    t55 = ((x221==x222)*(x223/x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x227 = 52U;
	int32_t x228 = INT32_MIN;
	volatile uint32_t t56 = 165U;

    t56 = ((x225==x226)*(x227/x228));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -1;
	int8_t x230 = 2;
	int32_t x231 = 1;
	static uint64_t x232 = UINT64_MAX;
	uint64_t t57 = 51391765536660129LLU;

    t57 = ((x229==x230)*(x231/x232));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = -1;
	int64_t x238 = INT64_MIN;
	int32_t x239 = -1;
	static int8_t x240 = INT8_MAX;
	volatile int32_t t58 = -8;

    t58 = ((x237==x238)*(x239/x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x241 = INT16_MIN;
	uint8_t x243 = 68U;
	uint32_t t59 = 128765976U;

    t59 = ((x241==x242)*(x243/x244));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = INT8_MAX;
	int32_t x248 = INT32_MAX;
	int32_t t60 = 21401;

    t60 = ((x245==x246)*(x247/x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x249 = -1LL;
	int8_t x250 = INT8_MIN;
	int8_t x252 = -1;
	volatile int64_t t61 = -1296158349874974LL;

    t61 = ((x249==x250)*(x251/x252));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x253 = UINT8_MAX;
	static int16_t x255 = INT16_MIN;
	volatile int64_t x256 = -1LL;
	volatile int64_t t62 = -935981402LL;

    t62 = ((x253==x254)*(x255/x256));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = INT8_MIN;
	int64_t x258 = -27498LL;
	int16_t x260 = -4391;
	volatile int32_t t63 = -7309588;

    t63 = ((x257==x258)*(x259/x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x261 = INT16_MAX;
	volatile int32_t t64 = 109398;

    t64 = ((x261==x262)*(x263/x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x266 = -15794627078905LL;
	static uint16_t x267 = 21099U;
	static uint32_t x268 = 1039646218U;

    t65 = ((x265==x266)*(x267/x268));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x269 = UINT8_MAX;
	static int64_t x270 = INT64_MAX;
	int32_t x271 = INT32_MAX;
	int32_t x272 = INT32_MAX;
	volatile int32_t t66 = 265824;

    t66 = ((x269==x270)*(x271/x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x274 = INT32_MAX;
	uint64_t x275 = 1652678546193181LLU;
	uint64_t t67 = 24075LLU;

    t67 = ((x273==x274)*(x275/x276));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x277 = UINT64_MAX;
	static volatile int32_t x278 = INT32_MIN;
	int64_t x279 = 2922057045439165LL;
	int16_t x280 = -3;

    t68 = ((x277==x278)*(x279/x280));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x281 = UINT8_MAX;
	static int8_t x282 = -1;
	uint32_t x283 = 778758U;

    t69 = ((x281==x282)*(x283/x284));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x285 = -1LL;
	static int32_t x287 = INT32_MIN;

    t70 = ((x285==x286)*(x287/x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x289 = -1083523LL;
	volatile uint8_t x291 = 3U;
	uint64_t x292 = 533628083LLU;
	volatile uint64_t t71 = 358914517531487783LLU;

    t71 = ((x289==x290)*(x291/x292));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint32_t x293 = 65504U;
	int16_t x294 = -9611;
	volatile uint32_t x295 = UINT32_MAX;
	static uint32_t x296 = 531361318U;
	volatile uint32_t t72 = 53U;

    t72 = ((x293==x294)*(x295/x296));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x298 = 32924558336863LL;
	int64_t x300 = INT64_MIN;
	int64_t t73 = -4549LL;

    t73 = ((x297==x298)*(x299/x300));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = -15;
	int32_t x302 = 2941363;
	static volatile int32_t x303 = INT32_MIN;
	static int32_t t74 = -768227592;

    t74 = ((x301==x302)*(x303/x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x305 = -30;
	volatile uint64_t x306 = UINT64_MAX;
	int8_t x307 = -1;
	volatile int32_t t75 = -997325816;

    t75 = ((x305==x306)*(x307/x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x310 = 41U;
	volatile uint64_t x311 = 90LLU;
	uint64_t t76 = 1652683LLU;

    t76 = ((x309==x310)*(x311/x312));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x313 = -126;
	volatile int8_t x314 = 12;
	uint16_t x315 = 34U;
	int64_t x316 = 36256LL;

    t77 = ((x313==x314)*(x315/x316));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x317 = -1LL;
	volatile int64_t x318 = INT64_MIN;
	int8_t x319 = INT8_MIN;
	int8_t x320 = -1;

    t78 = ((x317==x318)*(x319/x320));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x321 = 38404767U;
	int64_t x322 = -1LL;
	int8_t x323 = 11;
	int32_t x324 = -1;
	volatile int32_t t79 = -1;

    t79 = ((x321==x322)*(x323/x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x325 = 11;
	int16_t x326 = INT16_MIN;
	uint32_t x328 = 3U;

    t80 = ((x325==x326)*(x327/x328));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = INT16_MIN;
	static volatile int8_t x330 = INT8_MAX;
	volatile int16_t x332 = INT16_MAX;
	volatile int32_t t81 = 1728;

    t81 = ((x329==x330)*(x331/x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x334 = -185486853257537LL;
	int16_t x335 = INT16_MIN;
	int8_t x336 = -1;
	int32_t t82 = -715303506;

    t82 = ((x333==x334)*(x335/x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x337 = UINT8_MAX;
	int64_t x338 = -444087LL;
	uint16_t x339 = 2346U;
	int32_t x340 = INT32_MAX;
	static int32_t t83 = -13447;

    t83 = ((x337==x338)*(x339/x340));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x341 = 438030590394988298LLU;
	int16_t x342 = INT16_MIN;
	volatile uint16_t x344 = UINT16_MAX;
	int32_t t84 = -3694;

    t84 = ((x341==x342)*(x343/x344));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x345 = INT8_MIN;
	volatile int16_t x348 = 11478;
	volatile int64_t t85 = 10727407LL;

    t85 = ((x345==x346)*(x347/x348));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x349 = 270U;
	uint32_t x350 = UINT32_MAX;
	uint8_t x351 = 1U;
	volatile int32_t x352 = INT32_MAX;
	static int32_t t86 = -222863;

    t86 = ((x349==x350)*(x351/x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x353 = UINT32_MAX;
	int32_t x354 = -2119;
	static uint32_t x355 = 9U;
	uint16_t x356 = UINT16_MAX;
	uint32_t t87 = 4266U;

    t87 = ((x353==x354)*(x355/x356));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = INT8_MAX;
	volatile int16_t x358 = INT16_MIN;
	uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t88 = -380;

    t88 = ((x357==x358)*(x359/x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x361 = -1;
	int8_t x362 = -1;
	int16_t x363 = 1;
	int64_t x364 = INT64_MIN;
	int64_t t89 = -16571740LL;

    t89 = ((x361==x362)*(x363/x364));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = 1841;
	int16_t x367 = INT16_MIN;
	static int32_t t90 = 105611812;

    t90 = ((x365==x366)*(x367/x368));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x369 = -1;
	volatile int64_t x370 = INT64_MAX;
	volatile int16_t x371 = -2;
	int8_t x372 = -15;
	volatile int32_t t91 = 844740;

    t91 = ((x369==x370)*(x371/x372));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x373 = INT8_MIN;
	int16_t x374 = -66;
	volatile uint8_t x375 = UINT8_MAX;
	volatile int32_t x376 = -1;
	int32_t t92 = 2;

    t92 = ((x373==x374)*(x375/x376));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x377 = INT8_MIN;
	static uint64_t x378 = 5472054635701534LLU;
	int32_t x380 = -15938;
	int32_t t93 = 6184222;

    t93 = ((x377==x378)*(x379/x380));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x381 = -1;
	volatile int32_t t94 = -139;

    t94 = ((x381==x382)*(x383/x384));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x386 = INT64_MIN;
	static volatile uint64_t x387 = 64324360320317985LLU;
	volatile uint64_t t95 = 3765773689823336778LLU;

    t95 = ((x385==x386)*(x387/x388));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x389 = -1262124906678LL;
	int32_t x390 = 0;
	static int32_t x392 = 1;
	volatile int32_t t96 = -25;

    t96 = ((x389==x390)*(x391/x392));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x393 = 1;
	volatile uint32_t x394 = 520U;
	static int16_t x395 = -7;
	uint8_t x396 = UINT8_MAX;

    t97 = ((x393==x394)*(x395/x396));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x397 = 217096329765840LLU;
	uint16_t x398 = UINT16_MAX;
	uint16_t x399 = 22U;
	int64_t x400 = -1LL;
	int64_t t98 = -3565715180LL;

    t98 = ((x397==x398)*(x399/x400));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x401 = 37U;
	int64_t x402 = -1LL;
	int8_t x403 = INT8_MAX;
	static int64_t x404 = INT64_MIN;
	int64_t t99 = 831597318LL;

    t99 = ((x401==x402)*(x403/x404));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x406 = UINT16_MAX;
	uint32_t x407 = 9518507U;
	int16_t x408 = INT16_MIN;
	uint32_t t100 = 94820505U;

    t100 = ((x405==x406)*(x407/x408));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x409 = 0;
	int32_t x410 = INT32_MAX;
	int64_t x411 = -295932LL;
	static uint16_t x412 = 14570U;
	static volatile int64_t t101 = -995149639LL;

    t101 = ((x409==x410)*(x411/x412));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x413 = 3U;
	uint32_t x414 = 81106U;
	volatile int64_t x415 = INT64_MIN;
	uint8_t x416 = 42U;
	int64_t t102 = -1288296LL;

    t102 = ((x413==x414)*(x415/x416));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x417 = 0U;
	static int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	static int64_t x420 = -12495912440540LL;
	static int64_t t103 = 127LL;

    t103 = ((x417==x418)*(x419/x420));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x422 = 9;
	volatile uint32_t x423 = 35U;
	uint16_t x424 = UINT16_MAX;
	uint32_t t104 = 2U;

    t104 = ((x421==x422)*(x423/x424));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x427 = UINT8_MAX;
	uint32_t x428 = UINT32_MAX;
	uint32_t t105 = 88U;

    t105 = ((x425==x426)*(x427/x428));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x429 = 0U;
	int8_t x430 = -1;
	uint32_t x431 = UINT32_MAX;
	volatile int64_t x432 = INT64_MIN;
	int64_t t106 = -67945016872LL;

    t106 = ((x429==x430)*(x431/x432));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x433 = -10040;
	uint16_t x434 = 5U;
	int16_t x435 = 211;
	int64_t x436 = 37371LL;
	volatile int64_t t107 = -3625108LL;

    t107 = ((x433==x434)*(x435/x436));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x437 = 26LLU;
	int16_t x438 = -6548;
	static uint32_t x440 = UINT32_MAX;
	int64_t t108 = -324341LL;

    t108 = ((x437==x438)*(x439/x440));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x441 = INT8_MIN;
	static int16_t x442 = INT16_MAX;
	volatile int16_t x443 = INT16_MIN;
	volatile int32_t t109 = 29666961;

    t109 = ((x441==x442)*(x443/x444));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x445 = 42U;
	uint64_t x446 = 953LLU;
	volatile int32_t x447 = INT32_MIN;
	int16_t x448 = INT16_MAX;

    t110 = ((x445==x446)*(x447/x448));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x450 = INT32_MIN;
	uint8_t x451 = 2U;
	static int8_t x452 = INT8_MIN;
	volatile int32_t t111 = -4252237;

    t111 = ((x449==x450)*(x451/x452));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x453 = 650U;
	uint8_t x454 = 0U;
	int16_t x455 = INT16_MIN;
	volatile int32_t t112 = 2383;

    t112 = ((x453==x454)*(x455/x456));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x458 = INT32_MIN;
	int16_t x459 = -44;
	static int8_t x460 = -1;
	int32_t t113 = 78;

    t113 = ((x457==x458)*(x459/x460));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x461 = 3U;
	int8_t x462 = INT8_MIN;
	uint32_t x463 = UINT32_MAX;
	uint64_t x464 = 531010841024LLU;
	static uint64_t t114 = 7LLU;

    t114 = ((x461==x462)*(x463/x464));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x465 = INT64_MIN;
	int16_t x467 = 10;
	static int16_t x468 = -1594;
	volatile int32_t t115 = -1;

    t115 = ((x465==x466)*(x467/x468));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x469 = -1;
	int16_t x470 = -1;
	static int8_t x471 = -11;
	static volatile uint32_t x472 = 464U;
	volatile uint32_t t116 = 28U;

    t116 = ((x469==x470)*(x471/x472));

    if (t116 != 9256395U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x473 = -200821486265345629LL;
	int64_t x474 = INT64_MIN;
	uint64_t x475 = UINT64_MAX;
	static int32_t x476 = INT32_MIN;
	uint64_t t117 = 35137895134LLU;

    t117 = ((x473==x474)*(x475/x476));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x477 = UINT32_MAX;
	volatile int8_t x478 = 15;
	int16_t x479 = INT16_MAX;
	uint64_t x480 = 12225550607LLU;
	volatile uint64_t t118 = 6868854630098075LLU;

    t118 = ((x477==x478)*(x479/x480));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x481 = 184U;
	static int64_t x482 = INT64_MIN;
	static int16_t x484 = -6176;
	static int32_t t119 = -675349553;

    t119 = ((x481==x482)*(x483/x484));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x485 = 3U;
	uint8_t x486 = 1U;
	static uint16_t x487 = 124U;
	uint16_t x488 = 508U;
	static int32_t t120 = -4874;

    t120 = ((x485==x486)*(x487/x488));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x489 = -5;
	static int64_t x490 = INT64_MIN;
	uint8_t x492 = UINT8_MAX;
	int32_t t121 = -328;

    t121 = ((x489==x490)*(x491/x492));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x493 = INT8_MIN;
	int32_t x495 = INT32_MIN;
	uint8_t x496 = 120U;
	int32_t t122 = 828;

    t122 = ((x493==x494)*(x495/x496));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x497 = 6394658955177LLU;
	uint8_t x498 = 6U;
	uint16_t x499 = UINT16_MAX;
	static int16_t x500 = INT16_MIN;
	volatile int32_t t123 = 6706543;

    t123 = ((x497==x498)*(x499/x500));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x502 = INT64_MAX;
	static int8_t x503 = INT8_MIN;
	volatile uint32_t t124 = 21U;

    t124 = ((x501==x502)*(x503/x504));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x505 = 34071127503828170LLU;
	volatile uint64_t x506 = UINT64_MAX;
	uint8_t x507 = 8U;
	int32_t t125 = -34882;

    t125 = ((x505==x506)*(x507/x508));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x509 = -1;
	volatile uint32_t x510 = 407958U;
	uint64_t x511 = 341509750580640LLU;
	volatile uint64_t t126 = 15409071LLU;

    t126 = ((x509==x510)*(x511/x512));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x513 = 0U;
	static uint16_t x514 = 4U;
	static int8_t x515 = -1;
	volatile int32_t t127 = 4;

    t127 = ((x513==x514)*(x515/x516));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x517 = -1;
	int32_t x518 = -1;
	int64_t t128 = -146045252759476961LL;

    t128 = ((x517==x518)*(x519/x520));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x521 = INT16_MIN;
	int64_t x522 = -4LL;
	uint32_t x524 = 3801U;
	uint32_t t129 = 4776930U;

    t129 = ((x521==x522)*(x523/x524));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x525 = UINT32_MAX;
	volatile uint64_t x526 = UINT64_MAX;
	int32_t t130 = 19122;

    t130 = ((x525==x526)*(x527/x528));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x529 = INT64_MIN;
	uint8_t x530 = 3U;
	int8_t x531 = -1;
	uint64_t x532 = UINT64_MAX;
	volatile uint64_t t131 = 1094322954931389LLU;

    t131 = ((x529==x530)*(x531/x532));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x533 = INT32_MAX;
	volatile uint64_t x534 = UINT64_MAX;
	int64_t x535 = INT64_MAX;
	int64_t t132 = 281218321844617LL;

    t132 = ((x533==x534)*(x535/x536));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x537 = INT32_MIN;
	int32_t x538 = -1;
	volatile uint32_t x540 = 3U;
	static volatile uint32_t t133 = 24U;

    t133 = ((x537==x538)*(x539/x540));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x541 = UINT32_MAX;
	int8_t x542 = -30;
	int32_t x543 = -1;
	static int32_t t134 = -4251;

    t134 = ((x541==x542)*(x543/x544));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x546 = 21593973U;
	int64_t x547 = INT64_MIN;
	static int8_t x548 = 7;
	int64_t t135 = -5186699203933LL;

    t135 = ((x545==x546)*(x547/x548));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x549 = 683383173U;
	static uint8_t x550 = 0U;
	volatile int8_t x551 = INT8_MIN;
	static int32_t t136 = 41434;

    t136 = ((x549==x550)*(x551/x552));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x554 = 792;
	volatile uint64_t x555 = UINT64_MAX;
	uint32_t x556 = 299U;

    t137 = ((x553==x554)*(x555/x556));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x557 = INT16_MIN;
	volatile int32_t x558 = -1;
	int8_t x559 = 1;
	static volatile int32_t t138 = 6;

    t138 = ((x557==x558)*(x559/x560));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x563 = 4;
	int64_t t139 = 34552850243LL;

    t139 = ((x561==x562)*(x563/x564));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x566 = -1LL;
	uint32_t x567 = UINT32_MAX;
	static uint32_t x568 = 1U;

    t140 = ((x565==x566)*(x567/x568));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x569 = -1;
	int64_t x571 = -189316152248LL;
	static uint8_t x572 = UINT8_MAX;

    t141 = ((x569==x570)*(x571/x572));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x574 = 7U;
	int32_t x576 = -1;

    t142 = ((x573==x574)*(x575/x576));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x577 = 20U;
	uint64_t x578 = 12533686LLU;
	uint32_t x579 = UINT32_MAX;
	uint32_t x580 = 15607U;
	volatile uint32_t t143 = 487683998U;

    t143 = ((x577==x578)*(x579/x580));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x581 = INT8_MIN;
	int8_t x582 = INT8_MIN;
	int16_t x584 = INT16_MIN;
	volatile int32_t t144 = -3120;

    t144 = ((x581==x582)*(x583/x584));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x585 = INT8_MAX;
	int64_t x586 = INT64_MIN;
	int8_t x587 = INT8_MAX;
	int8_t x588 = INT8_MIN;
	volatile int32_t t145 = 1428;

    t145 = ((x585==x586)*(x587/x588));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x589 = 0U;
	static int64_t x590 = INT64_MIN;
	int64_t x591 = -5064461LL;
	volatile int64_t x592 = INT64_MIN;
	volatile int64_t t146 = -61659736LL;

    t146 = ((x589==x590)*(x591/x592));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x594 = 0;
	uint32_t x596 = 2U;
	volatile uint64_t t147 = 4285146LLU;

    t147 = ((x593==x594)*(x595/x596));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x597 = 56937953U;
	volatile int32_t x598 = INT32_MIN;
	volatile uint16_t x599 = UINT16_MAX;
	static int8_t x600 = -1;
	int32_t t148 = 1919893;

    t148 = ((x597==x598)*(x599/x600));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x601 = 478030525;
	static volatile uint8_t x602 = UINT8_MAX;
	volatile int64_t x603 = -1LL;
	int16_t x604 = 6;
	volatile int64_t t149 = 32761LL;

    t149 = ((x601==x602)*(x603/x604));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x605 = INT8_MAX;
	int32_t x606 = -55980;
	int16_t x607 = -3084;
	uint64_t x608 = UINT64_MAX;

    t150 = ((x605==x606)*(x607/x608));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x609 = INT64_MAX;
	volatile int16_t x610 = INT16_MAX;
	uint64_t x612 = UINT64_MAX;
	volatile uint64_t t151 = 1019LLU;

    t151 = ((x609==x610)*(x611/x612));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x613 = -1;
	volatile int8_t x614 = INT8_MIN;
	uint32_t x615 = 55777U;
	static uint8_t x616 = UINT8_MAX;

    t152 = ((x613==x614)*(x615/x616));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x617 = 8558459590393988LL;
	volatile uint16_t x619 = 0U;
	int32_t x620 = INT32_MIN;
	static volatile int32_t t153 = 437;

    t153 = ((x617==x618)*(x619/x620));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x621 = -49776370321489LL;
	static int8_t x622 = INT8_MIN;
	uint32_t x623 = 15U;
	int64_t x624 = INT64_MAX;

    t154 = ((x621==x622)*(x623/x624));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x626 = INT64_MIN;
	uint16_t x627 = UINT16_MAX;
	int32_t x628 = INT32_MAX;
	static volatile int32_t t155 = -9726319;

    t155 = ((x625==x626)*(x627/x628));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x629 = 6490319U;
	int8_t x631 = INT8_MIN;
	static int64_t t156 = 6588089082045883LL;

    t156 = ((x629==x630)*(x631/x632));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x635 = UINT16_MAX;
	static int32_t t157 = -197;

    t157 = ((x633==x634)*(x635/x636));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x638 = 5;
	int16_t x639 = INT16_MIN;

    t158 = ((x637==x638)*(x639/x640));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x641 = 1U;
	static uint64_t x642 = 1004098135632960375LLU;
	int32_t x643 = INT32_MAX;
	int8_t x644 = INT8_MIN;

    t159 = ((x641==x642)*(x643/x644));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x646 = -1LL;
	uint32_t x647 = UINT32_MAX;
	int16_t x648 = INT16_MAX;

    t160 = ((x645==x646)*(x647/x648));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x649 = UINT64_MAX;
	static volatile int32_t x650 = -213514;
	uint32_t x651 = 373596U;
	int16_t x652 = INT16_MIN;

    t161 = ((x649==x650)*(x651/x652));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x653 = INT32_MAX;
	int8_t x655 = INT8_MAX;

    t162 = ((x653==x654)*(x655/x656));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x657 = 2;
	int64_t x658 = INT64_MIN;
	static int16_t x659 = -1;
	static uint64_t x660 = 449825479988453LLU;

    t163 = ((x657==x658)*(x659/x660));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x661 = 27;
	int16_t x662 = -1;
	uint32_t x663 = 80U;
	uint16_t x664 = 30901U;
	uint32_t t164 = 313513535U;

    t164 = ((x661==x662)*(x663/x664));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x665 = 9U;
	int64_t x666 = INT64_MAX;
	int16_t x668 = 2;
	volatile uint64_t t165 = 194LLU;

    t165 = ((x665==x666)*(x667/x668));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x669 = -7987LL;
	volatile int16_t x672 = -4266;

    t166 = ((x669==x670)*(x671/x672));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x673 = INT32_MAX;
	int32_t x675 = INT32_MAX;
	int32_t t167 = -728788;

    t167 = ((x673==x674)*(x675/x676));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t t168 = -55;

    t168 = ((x677==x678)*(x679/x680));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x681 = 0U;
	volatile int64_t x682 = -38717300LL;
	int8_t x683 = -3;
	int8_t x684 = INT8_MIN;

    t169 = ((x681==x682)*(x683/x684));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x685 = INT8_MAX;
	uint8_t x686 = UINT8_MAX;
	uint16_t x688 = 7U;
	volatile int64_t t170 = 27875528396657529LL;

    t170 = ((x685==x686)*(x687/x688));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x689 = -5002;
	int8_t x690 = -1;
	int32_t x691 = -396;
	static int32_t x692 = -100;

    t171 = ((x689==x690)*(x691/x692));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x693 = INT16_MAX;
	int8_t x694 = INT8_MIN;
	uint8_t x696 = 4U;
	int32_t t172 = -10292524;

    t172 = ((x693==x694)*(x695/x696));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x697 = 51;
	int64_t x699 = -2505LL;
	volatile int16_t x700 = INT16_MAX;
	int64_t t173 = -299117203LL;

    t173 = ((x697==x698)*(x699/x700));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x701 = UINT32_MAX;
	uint32_t x702 = 1679411882U;
	int16_t x703 = INT16_MIN;
	int64_t t174 = 467528904549363863LL;

    t174 = ((x701==x702)*(x703/x704));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x705 = 5U;
	static int16_t x706 = -1;
	static int8_t x707 = -1;
	static uint16_t x708 = 20U;
	int32_t t175 = 86400;

    t175 = ((x705==x706)*(x707/x708));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x709 = 35;
	int64_t x710 = -1LL;
	int64_t x711 = -1LL;
	uint16_t x712 = UINT16_MAX;
	int64_t t176 = -22492126LL;

    t176 = ((x709==x710)*(x711/x712));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x713 = -1;
	uint16_t x714 = 4U;
	int32_t x715 = 215;
	int16_t x716 = -1;
	int32_t t177 = -5707926;

    t177 = ((x713==x714)*(x715/x716));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x717 = -2;
	volatile int8_t x718 = -1;
	static int64_t x719 = INT64_MIN;
	int8_t x720 = INT8_MIN;

    t178 = ((x717==x718)*(x719/x720));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x721 = INT64_MIN;
	volatile uint64_t x722 = UINT64_MAX;
	uint8_t x724 = 24U;
	static int32_t t179 = 89;

    t179 = ((x721==x722)*(x723/x724));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x725 = 11721483LL;
	int64_t x727 = INT64_MAX;
	int32_t x728 = 417548;
	static int64_t t180 = 89497553006986LL;

    t180 = ((x725==x726)*(x727/x728));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x729 = INT8_MIN;
	volatile int16_t x730 = INT16_MIN;
	volatile int32_t t181 = 1020151197;

    t181 = ((x729==x730)*(x731/x732));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x735 = INT16_MIN;
	int32_t x736 = INT32_MIN;
	static volatile int32_t t182 = -523075;

    t182 = ((x733==x734)*(x735/x736));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x737 = INT8_MIN;
	int8_t x739 = INT8_MAX;
	uint16_t x740 = 14U;
	int32_t t183 = -118;

    t183 = ((x737==x738)*(x739/x740));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x741 = UINT16_MAX;
	uint32_t x743 = 5269U;
	int16_t x744 = INT16_MAX;
	volatile uint32_t t184 = 11741061U;

    t184 = ((x741==x742)*(x743/x744));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x745 = 58LLU;
	int64_t x746 = INT64_MAX;
	int16_t x747 = INT16_MIN;
	static int8_t x748 = INT8_MIN;
	static int32_t t185 = 1;

    t185 = ((x745==x746)*(x747/x748));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x749 = INT16_MAX;
	int32_t x750 = INT32_MIN;
	volatile int64_t x752 = -1LL;
	static int64_t t186 = 6411968514296043LL;

    t186 = ((x749==x750)*(x751/x752));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x754 = INT64_MIN;
	volatile uint16_t x756 = 7271U;
	volatile int32_t t187 = -77413194;

    t187 = ((x753==x754)*(x755/x756));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x757 = -14230;
	uint64_t x758 = 217643492LLU;
	static int16_t x760 = INT16_MIN;

    t188 = ((x757==x758)*(x759/x760));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x761 = 234;
	int32_t x763 = -1;
	int32_t x764 = INT32_MAX;
	int32_t t189 = 0;

    t189 = ((x761==x762)*(x763/x764));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x765 = -7;
	volatile uint64_t x766 = 425681LLU;
	uint16_t x767 = 50U;
	int8_t x768 = -1;

    t190 = ((x765==x766)*(x767/x768));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x769 = 1418046U;
	static int64_t x770 = INT64_MIN;
	uint64_t x771 = UINT64_MAX;
	int8_t x772 = INT8_MAX;
	uint64_t t191 = 3110746892526612LLU;

    t191 = ((x769==x770)*(x771/x772));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x773 = UINT16_MAX;
	int8_t x775 = -1;
	uint16_t x776 = UINT16_MAX;
	volatile int32_t t192 = 40;

    t192 = ((x773==x774)*(x775/x776));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x777 = 5U;
	uint32_t x778 = UINT32_MAX;
	int8_t x779 = INT8_MAX;
	volatile uint32_t x780 = 4844U;
	volatile uint32_t t193 = 227100406U;

    t193 = ((x777==x778)*(x779/x780));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x781 = -1;
	volatile int64_t x782 = INT64_MAX;
	int8_t x783 = INT8_MIN;
	uint64_t x784 = 993LLU;
	volatile uint64_t t194 = 9038490541007476LLU;

    t194 = ((x781==x782)*(x783/x784));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x786 = 239152250LL;
	int64_t x787 = INT64_MIN;
	volatile uint32_t x788 = 19629U;
	int64_t t195 = -14516456LL;

    t195 = ((x785==x786)*(x787/x788));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x790 = -104;
	int64_t x791 = -1LL;
	uint8_t x792 = 19U;
	int64_t t196 = 204248593271172LL;

    t196 = ((x789==x790)*(x791/x792));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x793 = 68U;
	int16_t x794 = 30;
	static volatile int16_t x795 = INT16_MIN;
	volatile int64_t t197 = 2277547415LL;

    t197 = ((x793==x794)*(x795/x796));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x797 = INT64_MIN;
	int32_t x798 = INT32_MIN;
	int8_t x799 = INT8_MIN;
	int8_t x800 = INT8_MIN;
	int32_t t198 = -71080549;

    t198 = ((x797==x798)*(x799/x800));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x801 = INT8_MIN;
	static uint8_t x802 = 9U;
	uint32_t x803 = 2195975U;
	volatile uint32_t x804 = 7U;
	static uint32_t t199 = 58029U;

    t199 = ((x801==x802)*(x803/x804));

    if (t199 != 0U) { NG(); } else { ; }
	
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

