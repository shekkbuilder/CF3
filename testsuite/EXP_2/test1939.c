
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

volatile int16_t x1 = INT16_MIN;
int32_t x6 = INT32_MIN;
static int32_t x13 = -1;
volatile int64_t x15 = INT64_MIN;
int16_t x20 = INT16_MAX;
volatile int32_t t4 = -57056814;
static int64_t x22 = -1LL;
int32_t t6 = 193723684;
int32_t t8 = 146447;
static volatile int8_t x40 = -33;
int64_t x41 = INT64_MIN;
volatile int32_t t10 = 0;
volatile uint16_t x48 = 337U;
volatile int32_t t11 = -413395305;
volatile uint16_t x51 = UINT16_MAX;
int8_t x55 = 10;
static volatile int32_t x63 = -4994081;
int16_t x67 = INT16_MIN;
uint8_t x69 = UINT8_MAX;
uint8_t x78 = 26U;
int32_t t22 = 29;
uint32_t x97 = 115U;
volatile int16_t x99 = INT16_MIN;
uint32_t x102 = 7849180U;
uint64_t x104 = 3242140LLU;
int8_t x106 = INT8_MAX;
int8_t x108 = -1;
static int64_t x112 = 26153854LL;
volatile int8_t x117 = INT8_MIN;
volatile uint16_t x120 = 435U;
volatile int8_t x137 = INT8_MIN;
int16_t x141 = INT16_MAX;
uint32_t x154 = 1592413901U;
static uint8_t x161 = 46U;
int32_t x165 = -1;
int64_t x167 = 417869LL;
int32_t t41 = -6728;
int32_t x169 = -5249006;
volatile int32_t t42 = -421763;
volatile int32_t t43 = -933155505;
uint16_t x178 = 301U;
static volatile int32_t x187 = INT32_MIN;
int32_t t46 = -691489;
static int32_t x190 = INT32_MAX;
int8_t x193 = -1;
volatile int16_t x195 = INT16_MIN;
int32_t x197 = -1;
int32_t t49 = -175379;
static uint32_t x202 = 554537U;
uint16_t x207 = 538U;
static int32_t t51 = -865574537;
static int8_t x209 = -1;
volatile uint8_t x217 = 52U;
uint8_t x223 = UINT8_MAX;
volatile int32_t t55 = 47615;
int8_t x227 = INT8_MIN;
volatile int16_t x228 = INT16_MIN;
static volatile int32_t x229 = INT32_MAX;
volatile uint64_t x230 = UINT64_MAX;
volatile uint16_t x233 = UINT16_MAX;
uint16_t x236 = UINT16_MAX;
int32_t t58 = 117;
int32_t x238 = INT32_MIN;
uint8_t x254 = UINT8_MAX;
uint8_t x257 = 0U;
volatile int32_t t64 = -5991743;
int64_t x275 = INT64_MIN;
uint32_t x279 = UINT32_MAX;
static int32_t t69 = -596;
volatile int8_t x281 = -14;
volatile int32_t x289 = INT32_MIN;
uint64_t x290 = 10LLU;
static volatile int32_t t72 = -16200525;
volatile int32_t t73 = 307129216;
int32_t x303 = INT32_MIN;
static int16_t x307 = 3;
static int8_t x310 = -1;
volatile int64_t x312 = 402004602154415212LL;
uint64_t x313 = 25869485734227553LLU;
volatile int8_t x314 = -1;
uint64_t x315 = UINT64_MAX;
int32_t t78 = 115079138;
volatile uint64_t x320 = 1166067LLU;
static volatile int8_t x322 = INT8_MIN;
static int32_t t81 = 10801755;
uint32_t x332 = 1953602U;
int32_t t82 = 621;
volatile int32_t t83 = 92888;
int64_t x338 = 7487741405628LL;
static uint32_t x341 = 1764U;
static volatile int32_t t86 = -3689;
int8_t x351 = INT8_MAX;
uint64_t x352 = 517743306826LLU;
volatile int64_t x354 = INT64_MIN;
volatile int32_t t88 = -393955027;
uint32_t x358 = UINT32_MAX;
uint16_t x359 = 92U;
volatile uint32_t x363 = 1U;
volatile uint8_t x366 = 21U;
volatile int64_t x367 = INT64_MAX;
volatile int32_t t91 = 1;
int32_t x374 = INT32_MAX;
uint32_t x389 = 95423576U;
int64_t x395 = INT64_MIN;
int8_t x411 = INT8_MIN;
int32_t t104 = -7926;
int32_t t106 = -3186893;
int16_t x432 = INT16_MIN;
int32_t x435 = 49466005;
uint64_t x437 = UINT64_MAX;
int32_t x439 = -1;
int32_t x441 = INT32_MIN;
int8_t x445 = INT8_MAX;
uint16_t x446 = 305U;
int16_t x452 = -5;
uint8_t x464 = 6U;
int32_t t116 = 3;
volatile int32_t t117 = -46627417;
int64_t x473 = INT64_MAX;
volatile int32_t t119 = 337352822;
volatile int32_t x481 = 1023;
uint8_t x483 = UINT8_MAX;
uint16_t x503 = 1U;
uint32_t x504 = 118086600U;
uint32_t x508 = 28888444U;
uint32_t x519 = 913471407U;
int32_t x521 = INT32_MIN;
int32_t t130 = -7079;
static volatile int32_t t131 = -45958039;
uint64_t x538 = UINT64_MAX;
int32_t x544 = INT32_MIN;
int32_t t136 = -144924967;
static int32_t x550 = -865712146;
uint16_t x553 = 18250U;
int64_t x562 = -175777711LL;
int64_t x571 = INT64_MIN;
static int32_t t142 = 1162;
int8_t x574 = -1;
int32_t t143 = -3084301;
static int16_t x583 = INT16_MIN;
int64_t x585 = INT64_MIN;
int32_t x589 = INT32_MAX;
int8_t x614 = INT8_MAX;
int32_t t153 = 7867492;
int32_t t154 = -105;
int32_t t155 = -53637;
uint32_t x625 = UINT32_MAX;
volatile int8_t x632 = -40;
volatile int32_t t157 = -116244;
int64_t x636 = INT64_MAX;
static uint16_t x657 = 1818U;
static volatile int32_t x665 = -1;
int64_t x670 = 273829573LL;
int32_t t167 = 1;
volatile int16_t x679 = INT16_MAX;
uint16_t x682 = 21175U;
int16_t x687 = INT16_MIN;
static uint32_t x689 = UINT32_MAX;
int8_t x697 = -13;
int16_t x713 = -1;
uint32_t x716 = UINT32_MAX;
static int32_t x722 = INT32_MIN;
int16_t x724 = 3218;
int32_t t180 = 334686818;
volatile int16_t x725 = -1;
uint8_t x738 = 63U;
int64_t x743 = INT64_MAX;
uint32_t x750 = 28021552U;
int32_t x756 = INT32_MIN;
int16_t x761 = INT16_MIN;
int64_t x762 = INT64_MIN;
int64_t x767 = INT64_MIN;
volatile int32_t t192 = 17295;
volatile int32_t x774 = INT32_MIN;
uint32_t x784 = 0U;
uint16_t x787 = 1117U;
static volatile int64_t x794 = INT64_MAX;
volatile int32_t x795 = INT32_MAX;


void f0(void) {
    	int8_t x2 = 18;
	int32_t x3 = INT32_MAX;
	uint32_t x4 = 831743U;
	volatile int32_t t0 = -4;

    t0 = ((x1|(x2<=x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -94577LL;
	static int64_t x7 = -472204658414LL;
	int8_t x8 = 2;
	int32_t t1 = -3;

    t1 = ((x5|(x6<=x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = INT64_MIN;
	int32_t x10 = INT32_MIN;
	volatile int64_t x11 = INT64_MIN;
	volatile int64_t x12 = 956707088LL;
	static int32_t t2 = 92444019;

    t2 = ((x9|(x10<=x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 22U;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 6201;

    t3 = ((x13|(x14<=x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	uint64_t x18 = 13608665756833LLU;
	int8_t x19 = -12;

    t4 = ((x17|(x18<=x19))!=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 798U;
	static int32_t x23 = INT32_MIN;
	int64_t x24 = -1LL;
	int32_t t5 = -5550606;

    t5 = ((x21|(x22<=x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MIN;
	int32_t x28 = -90487;

    t6 = ((x25|(x26<=x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	uint8_t x30 = 5U;
	static int16_t x31 = INT16_MIN;
	static int8_t x32 = -1;
	int32_t t7 = -10886053;

    t7 = ((x29|(x30<=x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -6;
	static uint32_t x34 = UINT32_MAX;
	int8_t x35 = -15;
	uint16_t x36 = UINT16_MAX;

    t8 = ((x33|(x34<=x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -2466770306017038330LL;
	volatile uint16_t x38 = UINT16_MAX;
	int32_t x39 = 1;
	int32_t t9 = -2;

    t9 = ((x37|(x38<=x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = 903915LL;
	volatile int16_t x43 = INT16_MAX;
	volatile uint8_t x44 = 12U;

    t10 = ((x41|(x42<=x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = INT32_MAX;
	int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MIN;

    t11 = ((x45|(x46<=x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 7111423589LLU;
	uint32_t x50 = 10628638U;
	uint32_t x52 = UINT32_MAX;
	static volatile int32_t t12 = 1;

    t12 = ((x49|(x50<=x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	static int8_t x54 = INT8_MIN;
	static uint16_t x56 = UINT16_MAX;
	static int32_t t13 = 82823;

    t13 = ((x53|(x54<=x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = INT16_MAX;
	int64_t x58 = 5950651930678736LL;
	int64_t x59 = INT64_MAX;
	volatile int64_t x60 = -157864891047372LL;
	volatile int32_t t14 = 168367673;

    t14 = ((x57|(x58<=x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = -1558119;
	int8_t x62 = INT8_MAX;
	int64_t x64 = -1LL;
	static volatile int32_t t15 = -108609;

    t15 = ((x61|(x62<=x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 74U;
	static volatile int16_t x66 = INT16_MIN;
	int64_t x68 = -1LL;
	int32_t t16 = -8077363;

    t16 = ((x65|(x66<=x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = -1;
	volatile int32_t x71 = INT32_MIN;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = 9218;

    t17 = ((x69|(x70<=x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MIN;
	static uint64_t x75 = UINT64_MAX;
	int8_t x76 = 5;
	static int32_t t18 = -770283346;

    t18 = ((x73|(x74<=x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int32_t x79 = 84346595;
	uint32_t x80 = 575U;
	volatile int32_t t19 = 346493;

    t19 = ((x77|(x78<=x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	volatile int32_t x82 = -1;
	int16_t x83 = -1;
	uint16_t x84 = 923U;
	int32_t t20 = 19397;

    t20 = ((x81|(x82<=x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	volatile int32_t x86 = INT32_MIN;
	volatile int8_t x87 = -1;
	uint64_t x88 = 4LLU;
	int32_t t21 = -3;

    t21 = ((x85|(x86<=x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	int32_t x90 = INT32_MIN;
	volatile int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MAX;

    t22 = ((x89|(x90<=x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = -6009;
	uint8_t x94 = UINT8_MAX;
	volatile int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MIN;
	volatile int32_t t23 = -1841;

    t23 = ((x93|(x94<=x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x98 = 759U;
	volatile int32_t x100 = 410765;
	volatile int32_t t24 = -137760;

    t24 = ((x97|(x98<=x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	volatile int8_t x103 = 29;
	volatile int32_t t25 = -251561;

    t25 = ((x101|(x102<=x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 4130862362719LL;
	int64_t x107 = INT64_MIN;
	volatile int32_t t26 = -121553507;

    t26 = ((x105|(x106<=x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MAX;
	volatile int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MIN;
	static int32_t t27 = 170300;

    t27 = ((x109|(x110<=x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	static int64_t x114 = -1494648882061242272LL;
	int64_t x115 = -13012221238LL;
	uint64_t x116 = 8358064177LLU;
	int32_t t28 = -54330551;

    t28 = ((x113|(x114<=x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x118 = INT8_MAX;
	uint8_t x119 = 6U;
	volatile int32_t t29 = 5;

    t29 = ((x117|(x118<=x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MIN;
	static int32_t x123 = INT32_MAX;
	static volatile int8_t x124 = -61;
	static int32_t t30 = -15;

    t30 = ((x121|(x122<=x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = 1;
	uint32_t x126 = 966U;
	uint16_t x127 = UINT16_MAX;
	int64_t x128 = 16127280LL;
	volatile int32_t t31 = -98;

    t31 = ((x125|(x126<=x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 978059LL;
	static int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 22996;

    t32 = ((x129|(x130<=x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -3LL;
	int64_t x134 = 377LL;
	int16_t x135 = 1095;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t33 = -23;

    t33 = ((x133|(x134<=x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x138 = 439U;
	int64_t x139 = -1LL;
	static uint32_t x140 = UINT32_MAX;
	volatile int32_t t34 = -59363036;

    t34 = ((x137|(x138<=x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x142 = -1LL;
	static uint16_t x143 = UINT16_MAX;
	int8_t x144 = INT8_MAX;
	static volatile int32_t t35 = -2669297;

    t35 = ((x141|(x142<=x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -94376352762LL;
	static uint8_t x146 = 1U;
	int8_t x147 = INT8_MAX;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = -8683;

    t36 = ((x145|(x146<=x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	int16_t x150 = -1;
	int8_t x151 = -43;
	volatile uint8_t x152 = 16U;
	static volatile int32_t t37 = 1;

    t37 = ((x149|(x150<=x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	uint8_t x155 = UINT8_MAX;
	uint64_t x156 = 261604LLU;
	int32_t t38 = 1440;

    t38 = ((x153|(x154<=x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = UINT64_MAX;
	int64_t x158 = INT64_MIN;
	int16_t x159 = 9;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = -14;

    t39 = ((x157|(x158<=x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x162 = INT16_MIN;
	uint16_t x163 = 14246U;
	int64_t x164 = -1LL;
	int32_t t40 = -4580636;

    t40 = ((x161|(x162<=x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x166 = 14;
	uint16_t x168 = 4U;

    t41 = ((x165|(x166<=x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x170 = INT64_MIN;
	uint64_t x171 = 3LLU;
	int8_t x172 = -1;

    t42 = ((x169|(x170<=x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x173 = 689U;
	volatile int16_t x174 = -1;
	volatile uint64_t x175 = 123569953116643817LLU;
	static int16_t x176 = INT16_MAX;

    t43 = ((x173|(x174<=x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 611197977410629852LLU;
	int64_t x179 = INT64_MIN;
	static int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -117851;

    t44 = ((x177|(x178<=x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	int64_t x182 = -1LL;
	int64_t x183 = INT64_MAX;
	int8_t x184 = -29;
	int32_t t45 = -1;

    t45 = ((x181|(x182<=x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -9171542;
	int8_t x186 = 44;
	uint32_t x188 = 11308U;

    t46 = ((x185|(x186<=x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = UINT16_MAX;
	static int16_t x191 = -154;
	int32_t x192 = INT32_MIN;
	static int32_t t47 = 31;

    t47 = ((x189|(x190<=x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x194 = 5782295808810428LLU;
	int16_t x196 = INT16_MIN;
	int32_t t48 = -18516;

    t48 = ((x193|(x194<=x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = INT32_MIN;
	int8_t x199 = INT8_MIN;
	static uint8_t x200 = 0U;

    t49 = ((x197|(x198<=x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -1LL;
	int8_t x203 = INT8_MAX;
	int16_t x204 = -10;
	int32_t t50 = -60829;

    t50 = ((x201|(x202<=x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	int8_t x206 = INT8_MIN;
	volatile int32_t x208 = INT32_MIN;

    t51 = ((x205|(x206<=x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x210 = 225U;
	uint16_t x211 = UINT16_MAX;
	static uint8_t x212 = 3U;
	volatile int32_t t52 = -122;

    t52 = ((x209|(x210<=x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	uint32_t x214 = UINT32_MAX;
	volatile uint16_t x215 = 2285U;
	volatile int16_t x216 = INT16_MAX;
	int32_t t53 = -2234988;

    t53 = ((x213|(x214<=x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x218 = INT64_MAX;
	volatile uint8_t x219 = UINT8_MAX;
	volatile int8_t x220 = -1;
	volatile int32_t t54 = 5700;

    t54 = ((x217|(x218<=x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 9590U;
	volatile int16_t x222 = INT16_MIN;
	uint32_t x224 = UINT32_MAX;

    t55 = ((x221|(x222<=x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MAX;
	volatile int32_t t56 = 355412302;

    t56 = ((x225|(x226<=x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x231 = -1;
	int16_t x232 = INT16_MIN;
	int32_t t57 = 48159108;

    t57 = ((x229|(x230<=x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = INT16_MIN;
	static int16_t x235 = -1;

    t58 = ((x233|(x234<=x235))!=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x237 = 4404U;
	volatile uint32_t x239 = UINT32_MAX;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = 1393;

    t59 = ((x237|(x238<=x239))!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	int32_t x242 = -1481266;
	int64_t x243 = -1LL;
	uint8_t x244 = 20U;
	volatile int32_t t60 = -1;

    t60 = ((x241|(x242<=x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = -1;
	int64_t x246 = 634817271979LL;
	int16_t x247 = INT16_MAX;
	uint64_t x248 = 322044808LLU;
	static int32_t t61 = -17377095;

    t61 = ((x245|(x246<=x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -1LL;
	uint16_t x250 = 22853U;
	uint32_t x251 = UINT32_MAX;
	int8_t x252 = -1;
	volatile int32_t t62 = 214;

    t62 = ((x249|(x250<=x251))!=x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	int64_t x255 = 8124260037041855LL;
	volatile int32_t x256 = -25;
	int32_t t63 = -1215;

    t63 = ((x253|(x254<=x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = INT16_MAX;
	volatile uint8_t x259 = 4U;
	uint32_t x260 = 282051227U;

    t64 = ((x257|(x258<=x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	volatile int16_t x262 = 218;
	int32_t x263 = 50190;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -223;

    t65 = ((x261|(x262<=x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = INT32_MAX;
	static volatile int8_t x266 = INT8_MAX;
	uint16_t x267 = 7U;
	static volatile uint64_t x268 = UINT64_MAX;
	volatile int32_t t66 = -165235;

    t66 = ((x265|(x266<=x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	int16_t x270 = -1;
	int64_t x271 = 609657458LL;
	int8_t x272 = -1;
	static volatile int32_t t67 = -7361;

    t67 = ((x269|(x270<=x271))!=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	volatile uint8_t x274 = 1U;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 226124;

    t68 = ((x273|(x274<=x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	uint32_t x278 = 1890948447U;
	uint32_t x280 = 0U;

    t69 = ((x277|(x278<=x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x282 = -1;
	int64_t x283 = INT64_MIN;
	uint16_t x284 = UINT16_MAX;
	static int32_t t70 = 934;

    t70 = ((x281|(x282<=x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = INT64_MAX;
	volatile uint8_t x286 = 123U;
	int64_t x287 = INT64_MIN;
	int32_t x288 = 4052;
	static volatile int32_t t71 = 170727463;

    t71 = ((x285|(x286<=x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MIN;

    t72 = ((x289|(x290<=x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 888626U;
	static volatile int32_t x294 = INT32_MIN;
	int32_t x295 = 133643;
	volatile int32_t x296 = -1;

    t73 = ((x293|(x294<=x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = 1;
	uint8_t x298 = 92U;
	uint64_t x299 = 3LLU;
	int8_t x300 = -1;
	static int32_t t74 = 18089595;

    t74 = ((x297|(x298<=x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x301 = INT8_MIN;
	static int64_t x302 = INT64_MAX;
	uint32_t x304 = UINT32_MAX;
	int32_t t75 = -174937;

    t75 = ((x301|(x302<=x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x305 = 0U;
	volatile int16_t x306 = INT16_MAX;
	int32_t x308 = 1473;
	volatile int32_t t76 = 339552;

    t76 = ((x305|(x306<=x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 416123048U;
	int8_t x311 = INT8_MIN;
	volatile int32_t t77 = -479471;

    t77 = ((x309|(x310<=x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x316 = INT64_MIN;

    t78 = ((x313|(x314<=x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -1LL;
	uint64_t x318 = 1733129529LLU;
	int16_t x319 = -1;
	int32_t t79 = -3;

    t79 = ((x317|(x318<=x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	volatile uint16_t x323 = 897U;
	int16_t x324 = INT16_MAX;
	int32_t t80 = -1;

    t80 = ((x321|(x322<=x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	int64_t x326 = INT64_MAX;
	int64_t x327 = -43753577176LL;
	int8_t x328 = INT8_MAX;

    t81 = ((x325|(x326<=x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = -81;
	uint16_t x330 = UINT16_MAX;
	static uint64_t x331 = UINT64_MAX;

    t82 = ((x329|(x330<=x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	uint64_t x334 = 991708727LLU;
	int16_t x335 = -1;
	int64_t x336 = INT64_MAX;

    t83 = ((x333|(x334<=x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x337 = 27U;
	uint16_t x339 = 1U;
	uint32_t x340 = 2128986U;
	volatile int32_t t84 = -7529;

    t84 = ((x337|(x338<=x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x342 = 1;
	int16_t x343 = INT16_MAX;
	uint32_t x344 = 947429U;
	static volatile int32_t t85 = -687;

    t85 = ((x341|(x342<=x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	static volatile int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	volatile int32_t x348 = INT32_MAX;

    t86 = ((x345|(x346<=x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x349 = 12U;
	int8_t x350 = 0;
	volatile int32_t t87 = -103;

    t87 = ((x349|(x350<=x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = UINT32_MAX;
	int16_t x355 = 0;
	uint16_t x356 = 75U;

    t88 = ((x353|(x354<=x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = -1LL;
	int8_t x360 = INT8_MAX;
	volatile int32_t t89 = 0;

    t89 = ((x357|(x358<=x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 56245701U;
	static int8_t x362 = INT8_MAX;
	volatile int16_t x364 = INT16_MAX;
	int32_t t90 = -19558087;

    t90 = ((x361|(x362<=x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 5540LLU;
	volatile int64_t x368 = INT64_MIN;

    t91 = ((x365|(x366<=x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	volatile int16_t x371 = -30;
	uint8_t x372 = 48U;
	static volatile int32_t t92 = 8635;

    t92 = ((x369|(x370<=x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 8U;
	static int64_t x375 = -1LL;
	static int8_t x376 = 3;
	int32_t t93 = -38190;

    t93 = ((x373|(x374<=x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 2;
	int8_t x378 = INT8_MAX;
	static int8_t x379 = -1;
	static uint16_t x380 = 0U;
	static int32_t t94 = -842919;

    t94 = ((x377|(x378<=x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	int16_t x382 = 6232;
	int32_t x383 = -394190997;
	int8_t x384 = 0;
	volatile int32_t t95 = -201;

    t95 = ((x381|(x382<=x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x385 = 11U;
	uint16_t x386 = 5118U;
	int16_t x387 = -1;
	uint16_t x388 = 15U;
	int32_t t96 = -29836;

    t96 = ((x385|(x386<=x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = INT16_MIN;
	static uint16_t x391 = 401U;
	volatile int8_t x392 = -1;
	int32_t t97 = -11076843;

    t97 = ((x389|(x390<=x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x393 = UINT8_MAX;
	int32_t x394 = 3215079;
	uint32_t x396 = UINT32_MAX;
	int32_t t98 = -50478;

    t98 = ((x393|(x394<=x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 4972009588LLU;
	volatile int64_t x398 = -167044583196386LL;
	static int8_t x399 = INT8_MIN;
	volatile uint64_t x400 = 20078014893LLU;
	volatile int32_t t99 = 458220561;

    t99 = ((x397|(x398<=x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = -21;
	int16_t x402 = INT16_MAX;
	volatile uint64_t x403 = UINT64_MAX;
	int64_t x404 = INT64_MIN;
	static int32_t t100 = -841774262;

    t100 = ((x401|(x402<=x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = INT8_MAX;
	volatile int64_t x406 = -1LL;
	static int8_t x407 = -28;
	static volatile int8_t x408 = 2;
	int32_t t101 = 109;

    t101 = ((x405|(x406<=x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = INT32_MAX;
	volatile int32_t x410 = INT32_MIN;
	int16_t x412 = INT16_MIN;
	volatile int32_t t102 = -483243;

    t102 = ((x409|(x410<=x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x413 = INT16_MIN;
	uint16_t x414 = UINT16_MAX;
	int16_t x415 = INT16_MAX;
	static volatile int32_t x416 = -1;
	int32_t t103 = -2;

    t103 = ((x413|(x414<=x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x417 = 2090U;
	uint32_t x418 = 232U;
	int16_t x419 = INT16_MAX;
	int64_t x420 = 63LL;

    t104 = ((x417|(x418<=x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	static volatile uint64_t x422 = 535598614719019731LLU;
	int32_t x423 = INT32_MIN;
	volatile uint32_t x424 = 100156U;
	int32_t t105 = -216876;

    t105 = ((x421|(x422<=x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 4;
	uint16_t x426 = 1680U;
	static int8_t x427 = 0;
	static uint8_t x428 = UINT8_MAX;

    t106 = ((x425|(x426<=x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	static int8_t x430 = 7;
	int8_t x431 = -4;
	volatile int32_t t107 = -14684;

    t107 = ((x429|(x430<=x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 30U;
	volatile int8_t x434 = 42;
	int32_t x436 = INT32_MIN;
	static int32_t t108 = -10335;

    t108 = ((x433|(x434<=x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x438 = -125;
	static int64_t x440 = -1LL;
	static int32_t t109 = -65986;

    t109 = ((x437|(x438<=x439))!=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x442 = 42;
	uint32_t x443 = 338335U;
	volatile int8_t x444 = INT8_MIN;
	volatile int32_t t110 = 5127046;

    t110 = ((x441|(x442<=x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x447 = 1;
	static int32_t x448 = INT32_MIN;
	static volatile int32_t t111 = -6027;

    t111 = ((x445|(x446<=x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -1;
	int64_t x450 = 515557LL;
	int8_t x451 = INT8_MIN;
	int32_t t112 = 29;

    t112 = ((x449|(x450<=x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MAX;
	uint16_t x454 = 0U;
	int64_t x455 = -13284944169LL;
	static uint64_t x456 = 395248864196500456LLU;
	int32_t t113 = -3;

    t113 = ((x453|(x454<=x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	int32_t x458 = 8180;
	int8_t x459 = -1;
	uint32_t x460 = UINT32_MAX;
	volatile int32_t t114 = -2614;

    t114 = ((x457|(x458<=x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile uint16_t x462 = 343U;
	volatile uint8_t x463 = UINT8_MAX;
	int32_t t115 = -6554524;

    t115 = ((x461|(x462<=x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	int64_t x466 = 1055LL;
	int8_t x467 = 4;
	uint8_t x468 = UINT8_MAX;

    t116 = ((x465|(x466<=x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x469 = UINT64_MAX;
	uint16_t x470 = UINT16_MAX;
	int32_t x471 = INT32_MIN;
	int32_t x472 = -1;

    t117 = ((x469|(x470<=x471))!=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int32_t x474 = INT32_MIN;
	static volatile uint8_t x475 = 2U;
	int32_t x476 = INT32_MIN;
	volatile int32_t t118 = 192880;

    t118 = ((x473|(x474<=x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 2512U;
	static int64_t x478 = -1LL;
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = -1;

    t119 = ((x477|(x478<=x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x482 = 41U;
	uint8_t x484 = 69U;
	static volatile int32_t t120 = -2;

    t120 = ((x481|(x482<=x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = INT32_MIN;
	volatile uint16_t x486 = 5U;
	static uint64_t x487 = UINT64_MAX;
	volatile uint16_t x488 = 18U;
	volatile int32_t t121 = 2694;

    t121 = ((x485|(x486<=x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -15;
	volatile uint16_t x490 = 5U;
	volatile uint16_t x491 = 46U;
	int32_t x492 = 8376;
	volatile int32_t t122 = 3996;

    t122 = ((x489|(x490<=x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = 533400964;
	static volatile int16_t x494 = INT16_MIN;
	uint16_t x495 = UINT16_MAX;
	uint64_t x496 = UINT64_MAX;
	static volatile int32_t t123 = 0;

    t123 = ((x493|(x494<=x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 44U;
	static int64_t x498 = -1LL;
	uint64_t x499 = UINT64_MAX;
	uint16_t x500 = 0U;
	int32_t t124 = 66;

    t124 = ((x497|(x498<=x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 5U;
	volatile int64_t x502 = -4472220480662886LL;
	volatile int32_t t125 = -5;

    t125 = ((x501|(x502<=x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	int64_t x506 = INT64_MIN;
	volatile int32_t x507 = -1;
	volatile int32_t t126 = -3;

    t126 = ((x505|(x506<=x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	uint16_t x510 = UINT16_MAX;
	volatile uint16_t x511 = 23410U;
	volatile uint32_t x512 = 121424U;
	volatile int32_t t127 = 23764;

    t127 = ((x509|(x510<=x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = 325147;
	int16_t x514 = INT16_MAX;
	volatile int32_t x515 = INT32_MAX;
	static int16_t x516 = -1;
	static int32_t t128 = -4445578;

    t128 = ((x513|(x514<=x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	int8_t x518 = 2;
	static int16_t x520 = INT16_MIN;
	volatile int32_t t129 = 798470;

    t129 = ((x517|(x518<=x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x522 = UINT32_MAX;
	int64_t x523 = 566LL;
	uint16_t x524 = UINT16_MAX;

    t130 = ((x521|(x522<=x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = UINT32_MAX;
	int16_t x526 = INT16_MAX;
	int8_t x527 = 0;
	uint64_t x528 = 5288044348LLU;

    t131 = ((x525|(x526<=x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 1U;
	int8_t x530 = -1;
	int64_t x531 = INT64_MIN;
	volatile uint8_t x532 = UINT8_MAX;
	volatile int32_t t132 = -157283481;

    t132 = ((x529|(x530<=x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = 31610341477223LL;
	int32_t x534 = INT32_MIN;
	uint8_t x535 = 6U;
	int32_t x536 = 1;
	static volatile int32_t t133 = -4;

    t133 = ((x533|(x534<=x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	int32_t x539 = INT32_MIN;
	int64_t x540 = -4067786107LL;
	volatile int32_t t134 = -164080;

    t134 = ((x537|(x538<=x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	int16_t x542 = -1702;
	int16_t x543 = INT16_MIN;
	static volatile int32_t t135 = -8;

    t135 = ((x541|(x542<=x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 1012318967821LLU;
	static uint32_t x546 = 499085454U;
	int8_t x547 = -1;
	int16_t x548 = INT16_MIN;

    t136 = ((x545|(x546<=x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = 0;
	volatile uint16_t x551 = UINT16_MAX;
	int16_t x552 = INT16_MIN;
	volatile int32_t t137 = -11963955;

    t137 = ((x549|(x550<=x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = 22;
	int64_t x555 = INT64_MIN;
	uint16_t x556 = 24U;
	volatile int32_t t138 = -5618791;

    t138 = ((x553|(x554<=x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = INT32_MAX;
	int16_t x558 = -1;
	int32_t x559 = -1;
	int64_t x560 = 901180684LL;
	volatile int32_t t139 = 716479;

    t139 = ((x557|(x558<=x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = -951;
	int8_t x563 = 1;
	int16_t x564 = INT16_MAX;
	int32_t t140 = -807;

    t140 = ((x561|(x562<=x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MAX;
	static int64_t x566 = INT64_MIN;
	int64_t x567 = INT64_MIN;
	volatile uint8_t x568 = UINT8_MAX;
	int32_t t141 = 54;

    t141 = ((x565|(x566<=x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	uint8_t x570 = UINT8_MAX;
	int8_t x572 = INT8_MAX;

    t142 = ((x569|(x570<=x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 64U;
	int64_t x575 = -1LL;
	int64_t x576 = INT64_MIN;

    t143 = ((x573|(x574<=x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = UINT64_MAX;
	int64_t x578 = 3LL;
	int32_t x579 = 0;
	volatile uint8_t x580 = 7U;
	int32_t t144 = 6895;

    t144 = ((x577|(x578<=x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = 7;
	static uint32_t x582 = 2U;
	int8_t x584 = INT8_MIN;
	volatile int32_t t145 = 1563;

    t145 = ((x581|(x582<=x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x586 = 5025U;
	uint64_t x587 = 15708097176289877LLU;
	int64_t x588 = INT64_MIN;
	volatile int32_t t146 = -108460284;

    t146 = ((x585|(x586<=x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x590 = -1;
	uint32_t x591 = 0U;
	static uint8_t x592 = 37U;
	volatile int32_t t147 = -62951790;

    t147 = ((x589|(x590<=x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	static volatile int64_t x594 = 1313738815836LL;
	volatile uint16_t x595 = UINT16_MAX;
	uint16_t x596 = 3U;
	int32_t t148 = -468362;

    t148 = ((x593|(x594<=x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -309175905;
	static uint16_t x598 = UINT16_MAX;
	int64_t x599 = INT64_MIN;
	int64_t x600 = -1LL;
	int32_t t149 = -21679;

    t149 = ((x597|(x598<=x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	int64_t x602 = INT64_MAX;
	int64_t x603 = 182566LL;
	int32_t x604 = INT32_MIN;
	volatile int32_t t150 = 455;

    t150 = ((x601|(x602<=x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	int16_t x606 = 1160;
	static int16_t x607 = INT16_MIN;
	uint8_t x608 = 2U;
	volatile int32_t t151 = -4106;

    t151 = ((x605|(x606<=x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = UINT16_MAX;
	static int64_t x610 = -82036956483854239LL;
	int64_t x611 = -1LL;
	int64_t x612 = 6868504830098LL;
	volatile int32_t t152 = -5;

    t152 = ((x609|(x610<=x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = 1570;
	uint32_t x615 = UINT32_MAX;
	uint8_t x616 = 15U;

    t153 = ((x613|(x614<=x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = UINT8_MAX;
	volatile int16_t x618 = 0;
	int16_t x619 = INT16_MAX;
	int8_t x620 = 0;

    t154 = ((x617|(x618<=x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 4U;
	int32_t x622 = INT32_MIN;
	int16_t x623 = 6284;
	static int16_t x624 = INT16_MIN;

    t155 = ((x621|(x622<=x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x626 = UINT32_MAX;
	int64_t x627 = INT64_MAX;
	int32_t x628 = INT32_MAX;
	volatile int32_t t156 = -84;

    t156 = ((x625|(x626<=x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -1;
	int8_t x630 = -24;
	static int16_t x631 = INT16_MIN;

    t157 = ((x629|(x630<=x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x633 = INT8_MAX;
	volatile int64_t x634 = INT64_MIN;
	static volatile int32_t x635 = INT32_MIN;
	int32_t t158 = -117776291;

    t158 = ((x633|(x634<=x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = 1244;
	static uint16_t x638 = UINT16_MAX;
	uint16_t x639 = 1017U;
	volatile uint8_t x640 = 2U;
	int32_t t159 = -16580;

    t159 = ((x637|(x638<=x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = 1;
	uint32_t x642 = 3044U;
	int8_t x643 = 8;
	int8_t x644 = -1;
	int32_t t160 = -28950095;

    t160 = ((x641|(x642<=x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MAX;
	int16_t x646 = 198;
	int32_t x647 = INT32_MAX;
	uint64_t x648 = 541LLU;
	static volatile int32_t t161 = 30542;

    t161 = ((x645|(x646<=x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x649 = 3;
	int64_t x650 = INT64_MIN;
	static int32_t x651 = -1;
	uint32_t x652 = 0U;
	volatile int32_t t162 = -534856305;

    t162 = ((x649|(x650<=x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 1U;
	int16_t x654 = -42;
	int64_t x655 = 7065347348621223LL;
	int32_t x656 = INT32_MIN;
	int32_t t163 = 932303359;

    t163 = ((x653|(x654<=x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x658 = 206653U;
	uint32_t x659 = UINT32_MAX;
	volatile int64_t x660 = -139377682227004LL;
	int32_t t164 = 11;

    t164 = ((x657|(x658<=x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = INT32_MIN;
	int64_t x662 = INT64_MIN;
	int8_t x663 = -2;
	static int16_t x664 = INT16_MIN;
	int32_t t165 = 89;

    t165 = ((x661|(x662<=x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = -1LL;
	volatile int32_t x667 = -6;
	volatile uint8_t x668 = UINT8_MAX;
	int32_t t166 = -5079213;

    t166 = ((x665|(x666<=x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 3551U;
	static volatile int64_t x671 = INT64_MIN;
	static int8_t x672 = INT8_MIN;

    t167 = ((x669|(x670<=x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x674 = INT8_MAX;
	int16_t x675 = INT16_MIN;
	static uint64_t x676 = 12LLU;
	int32_t t168 = 1;

    t168 = ((x673|(x674<=x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -1LL;
	uint64_t x678 = UINT64_MAX;
	int64_t x680 = -1LL;
	volatile int32_t t169 = -64;

    t169 = ((x677|(x678<=x679))!=x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = INT8_MIN;
	uint32_t x683 = UINT32_MAX;
	int16_t x684 = -1;
	volatile int32_t t170 = 2;

    t170 = ((x681|(x682<=x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	static uint32_t x686 = 1713U;
	volatile int8_t x688 = INT8_MIN;
	volatile int32_t t171 = 3537119;

    t171 = ((x685|(x686<=x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = INT16_MIN;
	volatile int16_t x691 = INT16_MAX;
	int64_t x692 = -440330218956868LL;
	int32_t t172 = -893022;

    t172 = ((x689|(x690<=x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x693 = UINT32_MAX;
	volatile int64_t x694 = -9298521058LL;
	uint8_t x695 = 3U;
	volatile int32_t x696 = INT32_MAX;
	int32_t t173 = -1;

    t173 = ((x693|(x694<=x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x698 = 183715974065090LLU;
	static uint16_t x699 = 3U;
	static int32_t x700 = 4921005;
	volatile int32_t t174 = 317652;

    t174 = ((x697|(x698<=x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = UINT16_MAX;
	int8_t x702 = -5;
	static uint16_t x703 = UINT16_MAX;
	uint32_t x704 = 32U;
	int32_t t175 = 0;

    t175 = ((x701|(x702<=x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	static volatile int32_t x706 = -1;
	uint64_t x707 = 6554100191527LLU;
	int16_t x708 = INT16_MIN;
	volatile int32_t t176 = 1;

    t176 = ((x705|(x706<=x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -1;
	uint16_t x710 = 15156U;
	int32_t x711 = -243;
	uint32_t x712 = UINT32_MAX;
	static volatile int32_t t177 = 1;

    t177 = ((x709|(x710<=x711))!=x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = INT32_MAX;
	uint32_t x715 = UINT32_MAX;
	volatile int32_t t178 = -265347481;

    t178 = ((x713|(x714<=x715))!=x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = INT64_MIN;
	uint32_t x718 = 839U;
	static uint16_t x719 = 25701U;
	int16_t x720 = INT16_MIN;
	volatile int32_t t179 = 268841;

    t179 = ((x717|(x718<=x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 3U;
	int64_t x723 = 594459782117630LL;

    t180 = ((x721|(x722<=x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = -1LL;
	static int16_t x727 = -7779;
	volatile int32_t x728 = INT32_MIN;
	volatile int32_t t181 = -855;

    t181 = ((x725|(x726<=x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MAX;
	static int8_t x730 = INT8_MIN;
	static int32_t x731 = INT32_MIN;
	int8_t x732 = 3;
	int32_t t182 = -8;

    t182 = ((x729|(x730<=x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = 0;
	static volatile int64_t x734 = -1LL;
	int32_t x735 = INT32_MAX;
	uint32_t x736 = 1958234U;
	int32_t t183 = -1439407;

    t183 = ((x733|(x734<=x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = INT32_MIN;
	int32_t x739 = INT32_MAX;
	uint64_t x740 = 19330LLU;
	int32_t t184 = 1033;

    t184 = ((x737|(x738<=x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	static volatile int32_t x742 = -1;
	static volatile int16_t x744 = 674;
	int32_t t185 = 709;

    t185 = ((x741|(x742<=x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	int16_t x746 = INT16_MIN;
	int32_t x747 = INT32_MIN;
	static int32_t x748 = 0;
	int32_t t186 = -90;

    t186 = ((x745|(x746<=x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -4939;
	int8_t x751 = INT8_MAX;
	volatile int32_t x752 = -132;
	volatile int32_t t187 = 23;

    t187 = ((x749|(x750<=x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x753 = UINT32_MAX;
	uint16_t x754 = UINT16_MAX;
	static int64_t x755 = INT64_MAX;
	int32_t t188 = 17000;

    t188 = ((x753|(x754<=x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	static int16_t x758 = 13471;
	int8_t x759 = -1;
	int32_t x760 = INT32_MIN;
	volatile int32_t t189 = -62968540;

    t189 = ((x757|(x758<=x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x763 = UINT16_MAX;
	static int64_t x764 = INT64_MAX;
	static volatile int32_t t190 = -425;

    t190 = ((x761|(x762<=x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	int16_t x766 = INT16_MAX;
	volatile int64_t x768 = INT64_MIN;
	static int32_t t191 = 249;

    t191 = ((x765|(x766<=x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 16393;
	int16_t x770 = -14;
	static volatile int16_t x771 = -1;
	int64_t x772 = INT64_MAX;

    t192 = ((x769|(x770<=x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 8LLU;
	uint8_t x775 = 10U;
	int64_t x776 = INT64_MIN;
	static volatile int32_t t193 = 56779280;

    t193 = ((x773|(x774<=x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MAX;
	int8_t x778 = 31;
	volatile int16_t x779 = -4;
	static int32_t x780 = INT32_MAX;
	static volatile int32_t t194 = -163563639;

    t194 = ((x777|(x778<=x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	int32_t x782 = INT32_MIN;
	uint32_t x783 = UINT32_MAX;
	int32_t t195 = 885452340;

    t195 = ((x781|(x782<=x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MAX;
	int64_t x786 = 108LL;
	static int16_t x788 = -77;
	volatile int32_t t196 = 44;

    t196 = ((x785|(x786<=x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = INT64_MAX;
	volatile int64_t x790 = INT64_MIN;
	static uint32_t x791 = 12551673U;
	int32_t x792 = -1;
	volatile int32_t t197 = 102790382;

    t197 = ((x789|(x790<=x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	static uint8_t x796 = UINT8_MAX;
	static volatile int32_t t198 = 2817;

    t198 = ((x793|(x794<=x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x797 = 53146338;
	int64_t x798 = 7004690470606178LL;
	int32_t x799 = INT32_MIN;
	static int16_t x800 = INT16_MIN;
	static int32_t t199 = 14638735;

    t199 = ((x797|(x798<=x799))!=x800);

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

