
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

static int8_t x3 = 4;
static volatile int32_t t0 = 8;
uint32_t x9 = UINT32_MAX;
static volatile uint32_t x18 = 31U;
uint16_t x30 = 19U;
static int32_t x35 = -1;
static uint64_t x36 = 369968153844LLU;
uint16_t x45 = 40U;
volatile uint32_t x46 = 1U;
int32_t t10 = 2;
volatile uint64_t x49 = UINT64_MAX;
static uint16_t x50 = UINT16_MAX;
static volatile int16_t x55 = -1;
volatile int32_t t12 = -337;
static uint16_t x61 = UINT16_MAX;
int8_t x62 = -1;
static int8_t x69 = 47;
int16_t x73 = INT16_MIN;
uint32_t x75 = 609616722U;
static volatile uint8_t x80 = 0U;
int16_t x86 = -1;
uint64_t x88 = 115335144LLU;
int16_t x91 = -3401;
volatile int32_t t20 = -76245;
static int16_t x93 = -31;
static int64_t x101 = -13294220419206LL;
static int64_t x102 = 8014932628LL;
int8_t x115 = -1;
int8_t x116 = -1;
uint64_t x125 = 5015957279LLU;
int32_t x126 = 220;
static int64_t x131 = -1LL;
static uint16_t x132 = UINT16_MAX;
static volatile int64_t x133 = 3996247736211239270LL;
int16_t x136 = INT16_MIN;
int64_t x138 = INT64_MAX;
uint32_t x149 = UINT32_MAX;
int8_t x156 = -1;
int64_t x162 = INT64_MAX;
int16_t x163 = INT16_MAX;
uint64_t x177 = 2821496114413093269LLU;
int8_t x180 = -1;
volatile int32_t x188 = INT32_MAX;
static volatile int64_t x189 = INT64_MAX;
int64_t x191 = INT64_MIN;
static int16_t x195 = INT16_MAX;
int32_t x197 = -1;
uint16_t x208 = UINT16_MAX;
int8_t x212 = -4;
int32_t t50 = 73;
int8_t x221 = -1;
int64_t x224 = -10856450730167LL;
int8_t x225 = -13;
uint64_t x230 = 4214017211LLU;
int16_t x232 = INT16_MIN;
static int16_t x234 = INT16_MIN;
static uint64_t x237 = UINT64_MAX;
int16_t x245 = INT16_MIN;
int8_t x248 = INT8_MIN;
static int16_t x249 = 1;
static int32_t x252 = INT32_MIN;
int32_t t59 = -34219;
static int32_t x253 = INT32_MIN;
uint64_t x254 = 2689605789541955LLU;
int16_t x260 = INT16_MIN;
int32_t t62 = -61817;
static int16_t x269 = 5340;
int16_t x270 = INT16_MIN;
int64_t x272 = INT64_MIN;
static int8_t x274 = 1;
int8_t x277 = -1;
uint8_t x280 = 1U;
static volatile int32_t t65 = 65055;
static uint16_t x282 = 12257U;
uint8_t x297 = 5U;
int16_t x299 = -369;
uint16_t x300 = 51U;
int8_t x306 = 10;
volatile uint32_t x308 = UINT32_MAX;
static int32_t x314 = -1;
int16_t x318 = 18;
uint16_t x319 = UINT16_MAX;
int64_t x322 = -1LL;
int32_t x323 = INT32_MIN;
volatile uint32_t x326 = 38U;
static uint8_t x327 = 16U;
uint64_t x329 = 1LLU;
volatile int16_t x334 = INT16_MAX;
volatile uint32_t x338 = 3947U;
volatile uint64_t x339 = 377181640917LLU;
uint16_t x343 = 3662U;
uint8_t x357 = UINT8_MAX;
volatile int16_t x359 = -1;
int16_t x361 = -115;
static int64_t x364 = -90259271LL;
int8_t x368 = INT8_MIN;
volatile int32_t t87 = -2;
int16_t x374 = 702;
int8_t x375 = INT8_MAX;
uint64_t x377 = UINT64_MAX;
volatile int8_t x380 = INT8_MIN;
int32_t t91 = 1;
static uint32_t x395 = 1U;
volatile int16_t x398 = -1;
int32_t t94 = -3062778;
int8_t x403 = INT8_MIN;
int32_t x404 = INT32_MAX;
int8_t x411 = INT8_MAX;
static volatile uint16_t x412 = UINT16_MAX;
int16_t x417 = INT16_MIN;
uint8_t x420 = 15U;
volatile int8_t x422 = -1;
int32_t t100 = 49395257;
uint32_t x425 = UINT32_MAX;
static volatile int32_t t101 = -1;
volatile int16_t x429 = INT16_MIN;
int64_t x430 = INT64_MAX;
volatile int16_t x432 = INT16_MAX;
volatile int32_t t107 = 529907;
int64_t x455 = -244147811794LL;
int64_t x459 = INT64_MIN;
volatile uint32_t x467 = 24760575U;
int32_t t111 = -1;
volatile int32_t x481 = INT32_MIN;
uint64_t x482 = UINT64_MAX;
int64_t x492 = INT64_MIN;
int16_t x493 = INT16_MAX;
static int8_t x495 = INT8_MIN;
static volatile int16_t x498 = INT16_MIN;
static int8_t x500 = -1;
uint16_t x503 = 527U;
static volatile int32_t t121 = 4;
static int16_t x515 = -20;
int32_t t125 = 2783621;
volatile int32_t t126 = -98103974;
uint64_t x534 = 8697467343279947LLU;
int32_t x552 = INT32_MIN;
static int32_t x553 = INT32_MIN;
int32_t t133 = -331383;
uint8_t x562 = 2U;
static volatile int32_t t134 = -149;
int32_t t135 = 1997;
int8_t x569 = INT8_MIN;
uint64_t x575 = 4241946887567331LLU;
volatile int32_t t137 = -7803932;
static uint8_t x578 = 17U;
static volatile int16_t x581 = INT16_MIN;
static int32_t t139 = 7;
uint8_t x587 = 68U;
int64_t x590 = INT64_MIN;
volatile int32_t x591 = 2;
uint16_t x596 = 1421U;
int32_t t142 = -26;
volatile int32_t x597 = -1;
int8_t x598 = INT8_MAX;
volatile uint16_t x600 = 4U;
int8_t x603 = INT8_MAX;
int64_t x607 = 86903432202LL;
int64_t x618 = INT64_MAX;
static int32_t x622 = INT32_MIN;
int16_t x624 = INT16_MAX;
static volatile int8_t x634 = -1;
volatile int64_t x639 = -507932075022301LL;
int8_t x641 = -28;
uint8_t x645 = 23U;
uint32_t x652 = 560U;
static volatile int16_t x653 = 2;
volatile int16_t x663 = -1;
uint16_t x666 = 101U;
static int8_t x679 = INT8_MIN;
volatile int32_t t161 = -2032;
volatile int16_t x687 = INT16_MIN;
int32_t x688 = -357232;
int32_t t163 = -1;
int64_t x695 = INT64_MIN;
int32_t t165 = 546208;
uint16_t x697 = 1360U;
uint16_t x698 = 31U;
int32_t t168 = -240892;
uint32_t x714 = 39757U;
static uint32_t x715 = 346U;
volatile int8_t x720 = INT8_MAX;
uint64_t x724 = 1351LLU;
static int8_t x725 = 0;
static uint64_t x728 = 78955061216304LLU;
int64_t x730 = INT64_MIN;
int32_t t176 = 15583614;
int8_t x749 = INT8_MIN;
uint8_t x750 = 63U;
int32_t t179 = -1803;
static int64_t x753 = INT64_MIN;
volatile int32_t t181 = 169;
int32_t x763 = 2;
volatile int16_t x766 = 36;
volatile int32_t x777 = INT32_MIN;
volatile int32_t t186 = 268;
int16_t x781 = INT16_MIN;
volatile int32_t t187 = -24;
int32_t x786 = INT32_MIN;
volatile uint8_t x790 = 2U;
static uint64_t x795 = UINT64_MAX;
int32_t x796 = INT32_MIN;
static volatile uint32_t x798 = UINT32_MAX;
static int64_t x799 = -97273582LL;
int32_t x801 = -1;
static uint8_t x803 = 109U;
int64_t x809 = INT64_MIN;
int32_t x810 = -1;
volatile uint16_t x823 = 28732U;
volatile int32_t t197 = -2735;
volatile int16_t x828 = -1;
volatile int32_t x829 = INT32_MIN;
static volatile uint64_t x830 = UINT64_MAX;


void f0(void) {
    	static volatile int8_t x1 = INT8_MIN;
	int16_t x2 = 40;
	int16_t x4 = 600;

    t0 = ((x1%x2)>(x3|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MIN;
	int32_t x7 = INT32_MIN;
	volatile int8_t x8 = -1;
	static volatile int32_t t1 = -193764529;

    t1 = ((x5%x6)>(x7|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = 8U;
	uint32_t x11 = 197018U;
	int32_t x12 = INT32_MIN;
	int32_t t2 = -1;

    t2 = ((x9%x10)>(x11|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MAX;
	int32_t x19 = INT32_MAX;
	uint8_t x20 = UINT8_MAX;
	int32_t t3 = 3;

    t3 = ((x17%x18)>(x19|x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x21 = INT32_MIN;
	int64_t x22 = -1LL;
	volatile int64_t x23 = -1LL;
	volatile uint64_t x24 = UINT64_MAX;
	int32_t t4 = 88743;

    t4 = ((x21%x22)>(x23|x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = 0;
	int64_t x26 = -1LL;
	uint32_t x27 = UINT32_MAX;
	int16_t x28 = 2757;
	volatile int32_t t5 = 37;

    t5 = ((x25%x26)>(x27|x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x29 = INT64_MIN;
	int16_t x31 = 1;
	int16_t x32 = -1;
	static int32_t t6 = -680018728;

    t6 = ((x29%x30)>(x31|x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = 5335;
	static int32_t x34 = -4077;
	volatile int32_t t7 = -3274123;

    t7 = ((x33%x34)>(x35|x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = -1;
	uint32_t x38 = 113U;
	static uint32_t x39 = 8U;
	int8_t x40 = INT8_MIN;
	volatile int32_t t8 = 1;

    t8 = ((x37%x38)>(x39|x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 3592U;
	static int8_t x42 = INT8_MAX;
	volatile int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MAX;
	int32_t t9 = 141;

    t9 = ((x41%x42)>(x43|x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x47 = 203172458328604519LLU;
	static int64_t x48 = 0LL;

    t10 = ((x45%x46)>(x47|x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MIN;
	static int32_t t11 = 2204;

    t11 = ((x49%x50)>(x51|x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -1;
	int16_t x54 = INT16_MAX;
	int64_t x56 = 421896524830099135LL;

    t12 = ((x53%x54)>(x55|x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -1;
	int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MAX;
	int16_t x60 = -1;
	int32_t t13 = 40;

    t13 = ((x57%x58)>(x59|x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x63 = UINT64_MAX;
	volatile int16_t x64 = INT16_MAX;
	static volatile int32_t t14 = -2891776;

    t14 = ((x61%x62)>(x63|x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -1LL;
	static int16_t x66 = INT16_MIN;
	uint8_t x67 = 2U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t15 = 644;

    t15 = ((x65%x66)>(x67|x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x70 = -1362091314557283999LL;
	volatile int64_t x71 = -1202LL;
	static uint16_t x72 = 11U;
	volatile int32_t t16 = -2191;

    t16 = ((x69%x70)>(x71|x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x74 = -1;
	static uint64_t x76 = 2069299441455093509LLU;
	static volatile int32_t t17 = 18;

    t17 = ((x73%x74)>(x75|x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x77 = 1U;
	static int64_t x78 = -1LL;
	int8_t x79 = INT8_MAX;
	int32_t t18 = 28397470;

    t18 = ((x77%x78)>(x79|x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x85 = INT64_MIN;
	int32_t x87 = 131;
	volatile int32_t t19 = 312160;

    t19 = ((x85%x86)>(x87|x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = -1;
	int16_t x90 = -1;
	volatile int64_t x92 = -3638539LL;

    t20 = ((x89%x90)>(x91|x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x94 = 193LL;
	uint32_t x95 = UINT32_MAX;
	uint16_t x96 = 201U;
	int32_t t21 = 20;

    t21 = ((x93%x94)>(x95|x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x97 = INT64_MIN;
	int32_t x98 = -116402957;
	volatile int8_t x99 = INT8_MIN;
	int32_t x100 = -483;
	volatile int32_t t22 = -5;

    t22 = ((x97%x98)>(x99|x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x103 = 7;
	static int8_t x104 = INT8_MIN;
	static int32_t t23 = -1;

    t23 = ((x101%x102)>(x103|x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = 21803U;
	int16_t x106 = 1;
	static int32_t x107 = -23;
	volatile int8_t x108 = -1;
	volatile int32_t t24 = 43;

    t24 = ((x105%x106)>(x107|x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = INT16_MIN;
	volatile int64_t x110 = -1LL;
	int32_t x111 = -1;
	int32_t x112 = INT32_MAX;
	volatile int32_t t25 = -75865158;

    t25 = ((x109%x110)>(x111|x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x113 = -1;
	volatile uint64_t x114 = UINT64_MAX;
	volatile int32_t t26 = 41529;

    t26 = ((x113%x114)>(x115|x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x117 = INT64_MAX;
	int64_t x118 = -1LL;
	int32_t x119 = -15842697;
	int64_t x120 = INT64_MAX;
	int32_t t27 = -252539759;

    t27 = ((x117%x118)>(x119|x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x121 = UINT32_MAX;
	static int64_t x122 = INT64_MIN;
	static volatile int8_t x123 = -1;
	int32_t x124 = -1;
	static volatile int32_t t28 = -210871;

    t28 = ((x121%x122)>(x123|x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x127 = -1;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t29 = 1385;

    t29 = ((x125%x126)>(x127|x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = 732955LL;
	int8_t x130 = INT8_MAX;
	int32_t t30 = -7467;

    t30 = ((x129%x130)>(x131|x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x134 = INT16_MIN;
	uint16_t x135 = 26116U;
	int32_t t31 = 122046;

    t31 = ((x133%x134)>(x135|x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x137 = INT64_MAX;
	static volatile uint8_t x139 = 102U;
	int8_t x140 = 7;
	static int32_t t32 = 848805735;

    t32 = ((x137%x138)>(x139|x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x141 = 130749020U;
	uint32_t x142 = UINT32_MAX;
	int64_t x143 = INT64_MIN;
	volatile int16_t x144 = INT16_MAX;
	volatile int32_t t33 = -22262;

    t33 = ((x141%x142)>(x143|x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint8_t x150 = 7U;
	uint32_t x151 = UINT32_MAX;
	int8_t x152 = INT8_MAX;
	int32_t t34 = -38023;

    t34 = ((x149%x150)>(x151|x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x153 = UINT32_MAX;
	uint8_t x154 = UINT8_MAX;
	volatile int32_t x155 = INT32_MIN;
	volatile int32_t t35 = 6491047;

    t35 = ((x153%x154)>(x155|x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x157 = -79;
	uint8_t x158 = UINT8_MAX;
	uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MIN;
	static int32_t t36 = 426960696;

    t36 = ((x157%x158)>(x159|x160));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = INT32_MIN;
	uint8_t x164 = 2U;
	int32_t t37 = 8;

    t37 = ((x161%x162)>(x163|x164));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x165 = -1;
	int16_t x166 = INT16_MIN;
	static volatile int64_t x167 = -1LL;
	static uint8_t x168 = 7U;
	int32_t t38 = 431931840;

    t38 = ((x165%x166)>(x167|x168));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = -1LL;
	int16_t x170 = -4837;
	int8_t x171 = INT8_MIN;
	int32_t x172 = 12708;
	volatile int32_t t39 = 75;

    t39 = ((x169%x170)>(x171|x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = -11;
	static int8_t x174 = INT8_MAX;
	int8_t x175 = INT8_MAX;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t40 = 38;

    t40 = ((x173%x174)>(x175|x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x178 = 5542321242LLU;
	static volatile uint8_t x179 = 4U;
	int32_t t41 = 0;

    t41 = ((x177%x178)>(x179|x180));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x181 = -7710;
	static uint64_t x182 = 8778887467LLU;
	static int8_t x183 = 3;
	int16_t x184 = INT16_MIN;
	int32_t t42 = 66647481;

    t42 = ((x181%x182)>(x183|x184));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x185 = 2785;
	int64_t x186 = INT64_MAX;
	int16_t x187 = INT16_MAX;
	int32_t t43 = -509943913;

    t43 = ((x185%x186)>(x187|x188));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x190 = INT64_MAX;
	int32_t x192 = 3047107;
	volatile int32_t t44 = 100403;

    t44 = ((x189%x190)>(x191|x192));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x193 = 181689998U;
	static uint64_t x194 = 17356109839197LLU;
	static volatile int8_t x196 = INT8_MAX;
	volatile int32_t t45 = -1196205;

    t45 = ((x193%x194)>(x195|x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x198 = -1LL;
	int32_t x199 = 13;
	int8_t x200 = 3;
	volatile int32_t t46 = 38081311;

    t46 = ((x197%x198)>(x199|x200));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x201 = -1;
	volatile int16_t x202 = INT16_MIN;
	static volatile int32_t x203 = -1;
	int8_t x204 = -1;
	volatile int32_t t47 = -1637;

    t47 = ((x201%x202)>(x203|x204));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x205 = INT16_MIN;
	static int8_t x206 = -41;
	volatile uint32_t x207 = 27U;
	volatile int32_t t48 = 18286504;

    t48 = ((x205%x206)>(x207|x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MIN;
	static int64_t x211 = -7308012303LL;
	int32_t t49 = 57998;

    t49 = ((x209%x210)>(x211|x212));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x213 = 3;
	uint32_t x214 = UINT32_MAX;
	volatile uint64_t x215 = 193LLU;
	volatile int32_t x216 = 895;

    t50 = ((x213%x214)>(x215|x216));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = INT8_MAX;
	static int8_t x218 = -35;
	uint32_t x219 = 1033153833U;
	int64_t x220 = -65577474LL;
	static volatile int32_t t51 = -40828;

    t51 = ((x217%x218)>(x219|x220));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x222 = INT64_MAX;
	uint64_t x223 = UINT64_MAX;
	int32_t t52 = 1040912410;

    t52 = ((x221%x222)>(x223|x224));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x226 = 3U;
	int16_t x227 = INT16_MAX;
	uint32_t x228 = 1U;
	static int32_t t53 = -55;

    t53 = ((x225%x226)>(x227|x228));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = INT32_MAX;
	uint16_t x231 = 1759U;
	volatile int32_t t54 = -366592;

    t54 = ((x229%x230)>(x231|x232));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x233 = -1;
	int8_t x235 = INT8_MIN;
	int64_t x236 = 2235089709697824LL;
	volatile int32_t t55 = 14;

    t55 = ((x233%x234)>(x235|x236));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x238 = -2;
	static volatile uint16_t x239 = UINT16_MAX;
	volatile uint32_t x240 = 936635U;
	volatile int32_t t56 = 0;

    t56 = ((x237%x238)>(x239|x240));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x241 = UINT32_MAX;
	static int16_t x242 = -1;
	uint16_t x243 = UINT16_MAX;
	int16_t x244 = -1;
	volatile int32_t t57 = 22;

    t57 = ((x241%x242)>(x243|x244));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x246 = INT32_MAX;
	static int16_t x247 = -1;
	volatile int32_t t58 = -511;

    t58 = ((x245%x246)>(x247|x248));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x250 = 1980U;
	uint8_t x251 = UINT8_MAX;

    t59 = ((x249%x250)>(x251|x252));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x255 = -7595850014620LL;
	uint16_t x256 = 14U;
	int32_t t60 = 117150591;

    t60 = ((x253%x254)>(x255|x256));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x257 = -1;
	uint64_t x258 = 12LLU;
	volatile int64_t x259 = -1LL;
	volatile int32_t t61 = 3;

    t61 = ((x257%x258)>(x259|x260));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = INT32_MAX;
	int64_t x262 = -1LL;
	int16_t x263 = -1;
	int8_t x264 = INT8_MIN;

    t62 = ((x261%x262)>(x263|x264));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x271 = -1;
	volatile int32_t t63 = -221;

    t63 = ((x269%x270)>(x271|x272));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = INT16_MIN;
	int32_t x275 = 892917742;
	int16_t x276 = INT16_MAX;
	volatile int32_t t64 = 3749838;

    t64 = ((x273%x274)>(x275|x276));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MIN;

    t65 = ((x277%x278)>(x279|x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x281 = INT32_MAX;
	static int16_t x283 = INT16_MAX;
	int64_t x284 = 124842886703LL;
	volatile int32_t t66 = 1983192;

    t66 = ((x281%x282)>(x283|x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x285 = INT16_MIN;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = -1;
	volatile int64_t x288 = INT64_MIN;
	int32_t t67 = -555;

    t67 = ((x285%x286)>(x287|x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x289 = -247;
	uint8_t x290 = UINT8_MAX;
	uint16_t x291 = 50U;
	static uint32_t x292 = UINT32_MAX;
	volatile int32_t t68 = 1;

    t68 = ((x289%x290)>(x291|x292));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x293 = -1LL;
	int16_t x294 = -1;
	int8_t x295 = INT8_MIN;
	volatile int32_t x296 = 1;
	int32_t t69 = -34120800;

    t69 = ((x293%x294)>(x295|x296));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x298 = INT64_MIN;
	int32_t t70 = -1404993;

    t70 = ((x297%x298)>(x299|x300));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x301 = INT8_MIN;
	int16_t x302 = 3493;
	static uint32_t x303 = UINT32_MAX;
	static int8_t x304 = -1;
	int32_t t71 = -52;

    t71 = ((x301%x302)>(x303|x304));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x305 = 2033491850LLU;
	uint16_t x307 = UINT16_MAX;
	volatile int32_t t72 = -4667193;

    t72 = ((x305%x306)>(x307|x308));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x309 = 5829078610LLU;
	uint64_t x310 = 4078LLU;
	int64_t x311 = INT64_MIN;
	static int16_t x312 = -492;
	int32_t t73 = 227;

    t73 = ((x309%x310)>(x311|x312));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x313 = UINT64_MAX;
	static int16_t x315 = INT16_MAX;
	int16_t x316 = INT16_MIN;
	volatile int32_t t74 = -22;

    t74 = ((x313%x314)>(x315|x316));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x317 = 1105U;
	static uint64_t x320 = 357364LLU;
	static int32_t t75 = 3;

    t75 = ((x317%x318)>(x319|x320));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = -1LL;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t76 = 1966;

    t76 = ((x321%x322)>(x323|x324));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x325 = -38439903392637LL;
	int16_t x328 = 584;
	volatile int32_t t77 = 22;

    t77 = ((x325%x326)>(x327|x328));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x330 = 4048133219LLU;
	static int8_t x331 = -1;
	int64_t x332 = INT64_MIN;
	int32_t t78 = -778;

    t78 = ((x329%x330)>(x331|x332));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x333 = -27334581;
	static int16_t x335 = INT16_MAX;
	static uint8_t x336 = 60U;
	int32_t t79 = 11986339;

    t79 = ((x333%x334)>(x335|x336));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x337 = 25296U;
	static int16_t x340 = INT16_MIN;
	int32_t t80 = 29;

    t80 = ((x337%x338)>(x339|x340));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x341 = -1;
	int16_t x342 = -1;
	static int8_t x344 = -1;
	volatile int32_t t81 = 2;

    t81 = ((x341%x342)>(x343|x344));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x349 = 63;
	static uint32_t x350 = 6U;
	volatile int16_t x351 = 6080;
	volatile int64_t x352 = INT64_MAX;
	volatile int32_t t82 = -12093588;

    t82 = ((x349%x350)>(x351|x352));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x353 = -1LL;
	int16_t x354 = INT16_MAX;
	uint64_t x355 = 60757179LLU;
	uint64_t x356 = 2LLU;
	int32_t t83 = -27;

    t83 = ((x353%x354)>(x355|x356));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x358 = -1;
	int32_t x360 = INT32_MAX;
	volatile int32_t t84 = -2958039;

    t84 = ((x357%x358)>(x359|x360));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x362 = 204999086U;
	uint8_t x363 = 2U;
	int32_t t85 = -66359;

    t85 = ((x361%x362)>(x363|x364));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x365 = 223572827LLU;
	volatile int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MAX;
	volatile int32_t t86 = 137561788;

    t86 = ((x365%x366)>(x367|x368));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x369 = INT16_MAX;
	static volatile uint32_t x370 = UINT32_MAX;
	volatile uint8_t x371 = 26U;
	static int16_t x372 = 1;

    t87 = ((x369%x370)>(x371|x372));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x373 = 27091U;
	int8_t x376 = INT8_MIN;
	static int32_t t88 = -146;

    t88 = ((x373%x374)>(x375|x376));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MIN;
	int32_t t89 = 582117078;

    t89 = ((x377%x378)>(x379|x380));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x381 = 3U;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 1U;
	uint8_t x384 = 30U;
	static volatile int32_t t90 = -5;

    t90 = ((x381%x382)>(x383|x384));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x385 = INT8_MIN;
	int16_t x386 = 491;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = -950;

    t91 = ((x385%x386)>(x387|x388));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x389 = -1;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = -62;
	uint64_t x392 = UINT64_MAX;
	int32_t t92 = -26651484;

    t92 = ((x389%x390)>(x391|x392));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x393 = UINT32_MAX;
	int16_t x394 = -1;
	uint64_t x396 = 2446289355851828426LLU;
	int32_t t93 = -4699553;

    t93 = ((x393%x394)>(x395|x396));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x397 = 1;
	static int8_t x399 = INT8_MIN;
	uint16_t x400 = 19U;

    t94 = ((x397%x398)>(x399|x400));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x401 = INT16_MIN;
	int64_t x402 = INT64_MAX;
	int32_t t95 = -54912;

    t95 = ((x401%x402)>(x403|x404));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x405 = -1LL;
	volatile int8_t x406 = INT8_MIN;
	static int32_t x407 = 21969167;
	int64_t x408 = INT64_MAX;
	volatile int32_t t96 = 1;

    t96 = ((x405%x406)>(x407|x408));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x409 = -1;
	int32_t x410 = INT32_MIN;
	int32_t t97 = -1972051;

    t97 = ((x409%x410)>(x411|x412));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x413 = -1LL;
	int16_t x414 = -1;
	int8_t x415 = 1;
	int32_t x416 = INT32_MAX;
	int32_t t98 = 66847;

    t98 = ((x413%x414)>(x415|x416));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x418 = 56U;
	uint32_t x419 = UINT32_MAX;
	static int32_t t99 = 35;

    t99 = ((x417%x418)>(x419|x420));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x421 = 3222;
	uint8_t x423 = 4U;
	int64_t x424 = INT64_MIN;

    t100 = ((x421%x422)>(x423|x424));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x426 = UINT8_MAX;
	int8_t x427 = INT8_MAX;
	static uint16_t x428 = UINT16_MAX;

    t101 = ((x425%x426)>(x427|x428));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x431 = UINT16_MAX;
	volatile int32_t t102 = -100587;

    t102 = ((x429%x430)>(x431|x432));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x433 = INT16_MAX;
	static volatile int16_t x434 = INT16_MIN;
	uint64_t x435 = 1926632437248959LLU;
	static uint32_t x436 = 127511789U;
	int32_t t103 = -483;

    t103 = ((x433%x434)>(x435|x436));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x437 = -1;
	uint32_t x438 = 217228U;
	int16_t x439 = INT16_MAX;
	int16_t x440 = -1;
	volatile int32_t t104 = -51007;

    t104 = ((x437%x438)>(x439|x440));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x441 = INT8_MIN;
	int64_t x442 = INT64_MIN;
	int32_t x443 = INT32_MAX;
	int8_t x444 = -1;
	static int32_t t105 = 129030751;

    t105 = ((x441%x442)>(x443|x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x445 = INT8_MIN;
	int32_t x446 = INT32_MAX;
	volatile uint16_t x447 = 17141U;
	int8_t x448 = INT8_MAX;
	static int32_t t106 = 232;

    t106 = ((x445%x446)>(x447|x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x449 = INT64_MAX;
	int16_t x450 = -1;
	volatile uint32_t x451 = UINT32_MAX;
	volatile uint64_t x452 = UINT64_MAX;

    t107 = ((x449%x450)>(x451|x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x453 = 1U;
	int32_t x454 = -63;
	int64_t x456 = INT64_MIN;
	volatile int32_t t108 = 184;

    t108 = ((x453%x454)>(x455|x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x457 = UINT32_MAX;
	static int8_t x458 = INT8_MAX;
	uint64_t x460 = 179LLU;
	volatile int32_t t109 = -344497741;

    t109 = ((x457%x458)>(x459|x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x461 = INT16_MIN;
	int64_t x462 = INT64_MIN;
	int64_t x463 = -27197683775146LL;
	uint8_t x464 = 17U;
	volatile int32_t t110 = -4719;

    t110 = ((x461%x462)>(x463|x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x465 = -1;
	volatile int16_t x466 = INT16_MIN;
	int16_t x468 = -1;

    t111 = ((x465%x466)>(x467|x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x469 = INT16_MAX;
	static volatile int8_t x470 = INT8_MIN;
	int64_t x471 = -66901LL;
	static int32_t x472 = -33735;
	int32_t t112 = 23491192;

    t112 = ((x469%x470)>(x471|x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x473 = INT64_MIN;
	int16_t x474 = INT16_MIN;
	int8_t x475 = INT8_MAX;
	uint8_t x476 = 48U;
	int32_t t113 = 129954;

    t113 = ((x473%x474)>(x475|x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x477 = INT32_MIN;
	int64_t x478 = -1LL;
	uint32_t x479 = UINT32_MAX;
	int16_t x480 = -1704;
	volatile int32_t t114 = 1833483;

    t114 = ((x477%x478)>(x479|x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x483 = UINT8_MAX;
	uint64_t x484 = 39879462905228LLU;
	volatile int32_t t115 = 991;

    t115 = ((x481%x482)>(x483|x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x485 = 0U;
	int32_t x486 = INT32_MIN;
	int64_t x487 = INT64_MAX;
	uint64_t x488 = 14983LLU;
	volatile int32_t t116 = 3183;

    t116 = ((x485%x486)>(x487|x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x489 = 14305;
	volatile uint32_t x490 = 13334996U;
	int16_t x491 = -1;
	volatile int32_t t117 = -244932;

    t117 = ((x489%x490)>(x491|x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x494 = 3427U;
	static int8_t x496 = 1;
	volatile int32_t t118 = 1070287631;

    t118 = ((x493%x494)>(x495|x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x497 = 227U;
	int16_t x499 = INT16_MAX;
	int32_t t119 = 13536;

    t119 = ((x497%x498)>(x499|x500));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x501 = -1;
	int8_t x502 = INT8_MIN;
	volatile int16_t x504 = 5875;
	volatile int32_t t120 = 12593311;

    t120 = ((x501%x502)>(x503|x504));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x509 = -1;
	int32_t x510 = INT32_MIN;
	uint8_t x511 = UINT8_MAX;
	volatile int64_t x512 = INT64_MIN;

    t121 = ((x509%x510)>(x511|x512));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x513 = INT16_MIN;
	volatile int16_t x514 = INT16_MIN;
	int8_t x516 = -25;
	static volatile int32_t t122 = 17585;

    t122 = ((x513%x514)>(x515|x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x517 = -1;
	int8_t x518 = -1;
	static int64_t x519 = 300843563509045LL;
	uint8_t x520 = 14U;
	int32_t t123 = 9575780;

    t123 = ((x517%x518)>(x519|x520));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x521 = -1;
	uint8_t x522 = 35U;
	volatile int8_t x523 = -1;
	uint8_t x524 = 10U;
	int32_t t124 = -107776;

    t124 = ((x521%x522)>(x523|x524));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x525 = 100092371312698973LLU;
	uint8_t x526 = 43U;
	uint32_t x527 = 34U;
	static volatile int64_t x528 = INT64_MIN;

    t125 = ((x525%x526)>(x527|x528));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x529 = INT64_MIN;
	static int16_t x530 = -1;
	volatile int8_t x531 = 5;
	int32_t x532 = 505610383;

    t126 = ((x529%x530)>(x531|x532));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x533 = INT64_MIN;
	static int16_t x535 = INT16_MIN;
	static uint32_t x536 = 205408952U;
	volatile int32_t t127 = 229926086;

    t127 = ((x533%x534)>(x535|x536));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x537 = UINT32_MAX;
	int8_t x538 = -1;
	volatile uint16_t x539 = UINT16_MAX;
	uint16_t x540 = 5U;
	volatile int32_t t128 = 0;

    t128 = ((x537%x538)>(x539|x540));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x541 = 760746307U;
	static volatile int32_t x542 = INT32_MIN;
	static int64_t x543 = INT64_MIN;
	int32_t x544 = INT32_MIN;
	int32_t t129 = -1892645;

    t129 = ((x541%x542)>(x543|x544));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x545 = INT8_MIN;
	static int8_t x546 = 2;
	int64_t x547 = INT64_MIN;
	int8_t x548 = -1;
	int32_t t130 = 15676;

    t130 = ((x545%x546)>(x547|x548));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x549 = 7U;
	volatile int64_t x550 = 7014LL;
	int8_t x551 = INT8_MIN;
	int32_t t131 = 3806;

    t131 = ((x549%x550)>(x551|x552));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x554 = UINT16_MAX;
	volatile int64_t x555 = -1LL;
	static uint8_t x556 = 28U;
	int32_t t132 = -44293;

    t132 = ((x553%x554)>(x555|x556));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint32_t x557 = 1928144895U;
	volatile int16_t x558 = 1;
	int64_t x559 = INT64_MIN;
	static uint8_t x560 = 0U;

    t133 = ((x557%x558)>(x559|x560));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x561 = INT8_MIN;
	int32_t x563 = INT32_MIN;
	uint8_t x564 = 8U;

    t134 = ((x561%x562)>(x563|x564));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x565 = -1LL;
	uint8_t x566 = 7U;
	int16_t x567 = INT16_MIN;
	volatile uint8_t x568 = 52U;

    t135 = ((x565%x566)>(x567|x568));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x570 = -1;
	static uint16_t x571 = 95U;
	volatile uint64_t x572 = UINT64_MAX;
	volatile int32_t t136 = -5049;

    t136 = ((x569%x570)>(x571|x572));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x573 = -26619467;
	volatile int8_t x574 = INT8_MIN;
	int16_t x576 = -1;

    t137 = ((x573%x574)>(x575|x576));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x577 = 0;
	uint16_t x579 = 972U;
	volatile int8_t x580 = -1;
	static int32_t t138 = 171229;

    t138 = ((x577%x578)>(x579|x580));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x582 = 18322521U;
	static volatile int32_t x583 = INT32_MAX;
	uint64_t x584 = 7790193420LLU;

    t139 = ((x581%x582)>(x583|x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x585 = -1;
	static uint64_t x586 = UINT64_MAX;
	static int8_t x588 = INT8_MIN;
	volatile int32_t t140 = -55089;

    t140 = ((x585%x586)>(x587|x588));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x589 = INT16_MIN;
	uint32_t x592 = 1933634U;
	volatile int32_t t141 = 10254748;

    t141 = ((x589%x590)>(x591|x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x593 = INT64_MIN;
	int64_t x594 = 763009888085LL;
	volatile int8_t x595 = INT8_MAX;

    t142 = ((x593%x594)>(x595|x596));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x599 = -981348872;
	int32_t t143 = -2;

    t143 = ((x597%x598)>(x599|x600));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x601 = INT16_MIN;
	volatile int64_t x602 = -1LL;
	static uint32_t x604 = UINT32_MAX;
	volatile int32_t t144 = 1979;

    t144 = ((x601%x602)>(x603|x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x605 = -30;
	volatile int16_t x606 = INT16_MIN;
	static int16_t x608 = 490;
	static int32_t t145 = -63714971;

    t145 = ((x605%x606)>(x607|x608));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x609 = -1;
	volatile int16_t x610 = -118;
	volatile int64_t x611 = 38088523170LL;
	static volatile int64_t x612 = INT64_MIN;
	volatile int32_t t146 = -180854963;

    t146 = ((x609%x610)>(x611|x612));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x617 = INT64_MIN;
	uint64_t x619 = 98LLU;
	int64_t x620 = INT64_MIN;
	static int32_t t147 = 48;

    t147 = ((x617%x618)>(x619|x620));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x621 = 929;
	int32_t x623 = INT32_MIN;
	volatile int32_t t148 = -3248;

    t148 = ((x621%x622)>(x623|x624));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x625 = -5550714087187LL;
	static int32_t x626 = -15960049;
	volatile uint8_t x627 = 3U;
	int8_t x628 = 48;
	int32_t t149 = -33993062;

    t149 = ((x625%x626)>(x627|x628));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x629 = INT16_MIN;
	static int32_t x630 = -1;
	uint16_t x631 = UINT16_MAX;
	int32_t x632 = INT32_MAX;
	static volatile int32_t t150 = 0;

    t150 = ((x629%x630)>(x631|x632));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x633 = -12;
	int64_t x635 = -1LL;
	volatile uint16_t x636 = 4588U;
	static volatile int32_t t151 = 4224;

    t151 = ((x633%x634)>(x635|x636));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x637 = -8257;
	volatile int16_t x638 = 1;
	static volatile uint64_t x640 = UINT64_MAX;
	volatile int32_t t152 = -14399;

    t152 = ((x637%x638)>(x639|x640));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x642 = INT64_MIN;
	volatile int32_t x643 = INT32_MAX;
	volatile uint8_t x644 = 3U;
	static int32_t t153 = 21;

    t153 = ((x641%x642)>(x643|x644));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x646 = INT32_MIN;
	uint16_t x647 = 1511U;
	int64_t x648 = -2856299104910LL;
	int32_t t154 = -62359;

    t154 = ((x645%x646)>(x647|x648));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x649 = INT16_MAX;
	volatile int8_t x650 = INT8_MIN;
	static uint64_t x651 = 1332430998127LLU;
	volatile int32_t t155 = 254099227;

    t155 = ((x649%x650)>(x651|x652));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x654 = 429;
	volatile int64_t x655 = INT64_MIN;
	volatile uint16_t x656 = 2U;
	static volatile int32_t t156 = -860457322;

    t156 = ((x653%x654)>(x655|x656));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x657 = 45U;
	uint32_t x658 = 1U;
	int8_t x659 = INT8_MIN;
	int32_t x660 = INT32_MAX;
	int32_t t157 = 38;

    t157 = ((x657%x658)>(x659|x660));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x661 = INT32_MAX;
	int64_t x662 = -1LL;
	uint64_t x664 = 8232LLU;
	static volatile int32_t t158 = -470843;

    t158 = ((x661%x662)>(x663|x664));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x665 = -1;
	uint16_t x667 = UINT16_MAX;
	volatile int64_t x668 = 40257554LL;
	static int32_t t159 = -98925877;

    t159 = ((x665%x666)>(x667|x668));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x673 = 3960LLU;
	int64_t x674 = INT64_MIN;
	int8_t x675 = INT8_MIN;
	static uint64_t x676 = 22LLU;
	volatile int32_t t160 = 462;

    t160 = ((x673%x674)>(x675|x676));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x677 = 1768129679495LLU;
	static uint32_t x678 = 215U;
	uint8_t x680 = 1U;

    t161 = ((x677%x678)>(x679|x680));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x681 = -1;
	int8_t x682 = -1;
	static int32_t x683 = INT32_MAX;
	int8_t x684 = -1;
	volatile int32_t t162 = -106723;

    t162 = ((x681%x682)>(x683|x684));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x685 = INT32_MIN;
	int16_t x686 = 3124;

    t163 = ((x685%x686)>(x687|x688));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x689 = INT64_MIN;
	static int32_t x690 = -1;
	uint8_t x691 = 1U;
	static int32_t x692 = INT32_MIN;
	int32_t t164 = 38268;

    t164 = ((x689%x690)>(x691|x692));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x693 = INT64_MIN;
	volatile uint8_t x694 = UINT8_MAX;
	int64_t x696 = INT64_MIN;

    t165 = ((x693%x694)>(x695|x696));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x699 = 0;
	int32_t x700 = -1;
	volatile int32_t t166 = -309912;

    t166 = ((x697%x698)>(x699|x700));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x701 = -1;
	int16_t x702 = -4;
	volatile int32_t x703 = -47648188;
	uint16_t x704 = 11953U;
	int32_t t167 = -3090973;

    t167 = ((x701%x702)>(x703|x704));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x705 = 13;
	static uint8_t x706 = 4U;
	int64_t x707 = -1LL;
	uint32_t x708 = 285537U;

    t168 = ((x705%x706)>(x707|x708));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x709 = INT32_MAX;
	int8_t x710 = -1;
	int64_t x711 = -1LL;
	int8_t x712 = 2;
	int32_t t169 = 33814615;

    t169 = ((x709%x710)>(x711|x712));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x713 = 5922871193818918LLU;
	uint8_t x716 = 84U;
	volatile int32_t t170 = -2117;

    t170 = ((x713%x714)>(x715|x716));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x717 = INT8_MIN;
	static uint8_t x718 = 59U;
	int16_t x719 = -3;
	volatile int32_t t171 = 9916369;

    t171 = ((x717%x718)>(x719|x720));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x721 = 0U;
	static int8_t x722 = INT8_MIN;
	static uint32_t x723 = 662019851U;
	int32_t t172 = 14;

    t172 = ((x721%x722)>(x723|x724));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x726 = 20LL;
	int8_t x727 = INT8_MAX;
	static int32_t t173 = 45641729;

    t173 = ((x725%x726)>(x727|x728));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x729 = -1;
	static uint32_t x731 = 366350034U;
	uint32_t x732 = UINT32_MAX;
	int32_t t174 = 133960;

    t174 = ((x729%x730)>(x731|x732));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x733 = 20U;
	static int16_t x734 = INT16_MAX;
	int32_t x735 = -1;
	int64_t x736 = INT64_MIN;
	volatile int32_t t175 = 110985841;

    t175 = ((x733%x734)>(x735|x736));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x737 = 108595470658LLU;
	uint16_t x738 = UINT16_MAX;
	int8_t x739 = INT8_MIN;
	uint32_t x740 = 193698716U;

    t176 = ((x737%x738)>(x739|x740));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x741 = UINT32_MAX;
	int32_t x742 = 75821574;
	int8_t x743 = 3;
	int64_t x744 = 686657229LL;
	static int32_t t177 = -204890785;

    t177 = ((x741%x742)>(x743|x744));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x745 = INT16_MIN;
	static uint64_t x746 = 1643939569528LLU;
	int8_t x747 = -10;
	uint16_t x748 = 71U;
	volatile int32_t t178 = -489235;

    t178 = ((x745%x746)>(x747|x748));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x751 = 6U;
	static uint64_t x752 = 1417118536570LLU;

    t179 = ((x749%x750)>(x751|x752));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x754 = 386463;
	static uint32_t x755 = UINT32_MAX;
	int32_t x756 = 4331;
	volatile int32_t t180 = -9;

    t180 = ((x753%x754)>(x755|x756));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x757 = UINT32_MAX;
	int64_t x758 = INT64_MIN;
	uint8_t x759 = 4U;
	volatile int8_t x760 = INT8_MIN;

    t181 = ((x757%x758)>(x759|x760));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x761 = 41U;
	volatile int64_t x762 = INT64_MIN;
	int16_t x764 = -1;
	static int32_t t182 = -2494;

    t182 = ((x761%x762)>(x763|x764));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x765 = -1;
	static volatile int16_t x767 = -1;
	volatile int64_t x768 = INT64_MAX;
	static volatile int32_t t183 = 499105504;

    t183 = ((x765%x766)>(x767|x768));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x769 = 1752349776U;
	int64_t x770 = INT64_MIN;
	volatile uint32_t x771 = 45603U;
	int32_t x772 = INT32_MIN;
	int32_t t184 = -14997;

    t184 = ((x769%x770)>(x771|x772));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x773 = INT64_MIN;
	int8_t x774 = INT8_MIN;
	static int64_t x775 = INT64_MAX;
	int16_t x776 = INT16_MIN;
	volatile int32_t t185 = 0;

    t185 = ((x773%x774)>(x775|x776));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x778 = 6U;
	int8_t x779 = INT8_MIN;
	int64_t x780 = INT64_MAX;

    t186 = ((x777%x778)>(x779|x780));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x782 = 3;
	static int64_t x783 = INT64_MAX;
	int64_t x784 = INT64_MAX;

    t187 = ((x781%x782)>(x783|x784));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x785 = -1LL;
	uint16_t x787 = 128U;
	int16_t x788 = 2;
	int32_t t188 = 2295177;

    t188 = ((x785%x786)>(x787|x788));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x789 = INT8_MIN;
	static int32_t x791 = 74;
	uint64_t x792 = 3763845866LLU;
	int32_t t189 = 58638945;

    t189 = ((x789%x790)>(x791|x792));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x793 = UINT64_MAX;
	static int32_t x794 = INT32_MIN;
	volatile int32_t t190 = 0;

    t190 = ((x793%x794)>(x795|x796));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x797 = INT8_MIN;
	uint16_t x800 = UINT16_MAX;
	int32_t t191 = 943;

    t191 = ((x797%x798)>(x799|x800));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x802 = 35;
	volatile int64_t x804 = -1LL;
	volatile int32_t t192 = -40434;

    t192 = ((x801%x802)>(x803|x804));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x805 = INT16_MAX;
	static uint8_t x806 = UINT8_MAX;
	int64_t x807 = INT64_MIN;
	volatile uint32_t x808 = UINT32_MAX;
	int32_t t193 = -32115764;

    t193 = ((x805%x806)>(x807|x808));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x811 = UINT64_MAX;
	int16_t x812 = 41;
	volatile int32_t t194 = 36918;

    t194 = ((x809%x810)>(x811|x812));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x813 = 0U;
	volatile uint8_t x814 = UINT8_MAX;
	volatile int64_t x815 = 757705318204LL;
	static uint64_t x816 = UINT64_MAX;
	static int32_t t195 = -979;

    t195 = ((x813%x814)>(x815|x816));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x817 = INT8_MIN;
	int32_t x818 = INT32_MAX;
	int32_t x819 = -83;
	int16_t x820 = -1;
	static volatile int32_t t196 = -7930;

    t196 = ((x817%x818)>(x819|x820));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x821 = INT8_MIN;
	int8_t x822 = INT8_MIN;
	static uint8_t x824 = UINT8_MAX;

    t197 = ((x821%x822)>(x823|x824));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x825 = INT16_MAX;
	static volatile int32_t x826 = -3132607;
	uint32_t x827 = 83U;
	static volatile int32_t t198 = 27;

    t198 = ((x825%x826)>(x827|x828));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x831 = 78LL;
	volatile int8_t x832 = INT8_MIN;
	volatile int32_t t199 = -2136810;

    t199 = ((x829%x830)>(x831|x832));

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

