
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

static uint8_t x6 = 26U;
int16_t x7 = 43;
int32_t t1 = 1;
uint8_t x13 = 0U;
int16_t x16 = INT16_MAX;
volatile int32_t t3 = 29756;
int16_t x45 = INT16_MIN;
int16_t x49 = 2;
uint8_t x57 = 25U;
int64_t x59 = 14388LL;
static uint32_t x61 = UINT32_MAX;
volatile int32_t x93 = 6664768;
int32_t x96 = INT32_MAX;
int32_t t17 = 121;
int32_t t18 = -703857;
static volatile uint16_t x106 = 44U;
uint8_t x108 = 113U;
int32_t t19 = 404;
int32_t x126 = INT32_MAX;
int32_t t23 = 5;
int32_t x134 = -108;
static volatile int16_t x135 = 867;
uint32_t x137 = 338552U;
uint16_t x140 = UINT16_MAX;
uint64_t x143 = UINT64_MAX;
volatile int32_t t26 = -23981460;
volatile uint32_t x154 = UINT32_MAX;
static int16_t x155 = 3680;
int32_t x159 = 1;
static uint32_t x162 = UINT32_MAX;
int16_t x164 = INT16_MIN;
int64_t x166 = INT64_MAX;
int64_t x167 = -1243986615659077LL;
volatile uint64_t x173 = 1005810715202472217LLU;
static int16_t x185 = -1;
static int8_t x200 = INT8_MIN;
static int16_t x202 = INT16_MIN;
int32_t t35 = -3343307;
uint64_t x206 = 46733020712089LLU;
uint16_t x208 = 3U;
volatile int8_t x213 = -15;
int32_t x222 = 1;
uint32_t x226 = 7U;
volatile int8_t x231 = 1;
volatile int32_t t43 = 7985;
uint16_t x243 = 254U;
volatile int32_t t46 = -16154;
int64_t x260 = 34723550LL;
volatile int32_t t48 = -3944779;
static uint32_t x282 = 196U;
volatile int32_t t51 = 97;
volatile int16_t x290 = -3;
int32_t x292 = INT32_MAX;
volatile int32_t t53 = 20;
volatile int32_t t54 = -982309693;
int32_t t55 = -9963986;
volatile uint32_t x305 = 90627U;
int16_t x307 = INT16_MIN;
int16_t x308 = INT16_MIN;
volatile int16_t x311 = INT16_MIN;
int8_t x316 = -1;
int32_t x324 = 2;
volatile int32_t t59 = 88223;
uint64_t x326 = 145138401210834638LLU;
int16_t x327 = INT16_MAX;
static int16_t x330 = -7002;
int64_t x332 = INT64_MAX;
uint64_t x358 = 0LLU;
static int8_t x361 = 4;
int32_t x365 = -1;
int8_t x367 = -5;
int8_t x376 = -13;
volatile int32_t t69 = -491;
int8_t x393 = -1;
static int64_t x411 = -1126394063050829LL;
int8_t x422 = INT8_MIN;
int32_t t77 = -1949283;
int16_t x425 = -1;
int64_t x427 = -1188427LL;
int64_t x430 = 2341530950229537LL;
int8_t x433 = -1;
int32_t x437 = INT32_MIN;
int64_t x454 = -39197202096LL;
int8_t x465 = INT8_MAX;
int32_t x468 = -1;
int16_t x471 = INT16_MAX;
int32_t t89 = -76163;
volatile uint16_t x477 = UINT16_MAX;
int16_t x480 = INT16_MAX;
volatile int32_t t91 = -275087;
volatile int64_t x488 = -1LL;
volatile int32_t t94 = -46125868;
static uint64_t x499 = 84110336746LLU;
int16_t x506 = INT16_MAX;
volatile uint64_t x509 = UINT64_MAX;
uint64_t x517 = 2264709160LLU;
static int8_t x529 = -1;
uint16_t x532 = UINT16_MAX;
int64_t x539 = INT64_MIN;
volatile int16_t x540 = INT16_MAX;
int32_t t105 = 1;
int8_t x566 = 1;
static uint64_t x568 = UINT64_MAX;
uint64_t x572 = UINT64_MAX;
volatile int32_t x590 = 907908;
static int64_t x591 = INT64_MIN;
volatile int32_t t111 = -1230202;
volatile int64_t x605 = 34LL;
static int32_t x607 = -1;
volatile int8_t x611 = INT8_MIN;
uint16_t x612 = UINT16_MAX;
uint8_t x616 = 36U;
int64_t x620 = -6389616LL;
int16_t x625 = -1;
volatile uint16_t x627 = 7U;
int16_t x629 = INT16_MIN;
volatile int32_t t119 = -413;
volatile int32_t t120 = 55598;
int8_t x646 = INT8_MAX;
uint64_t x656 = UINT64_MAX;
volatile int32_t t124 = 12333;
volatile int16_t x659 = INT16_MIN;
int32_t t125 = -152187997;
int16_t x662 = INT16_MIN;
volatile int32_t x663 = INT32_MAX;
static volatile int8_t x666 = -1;
volatile int16_t x669 = INT16_MIN;
volatile int16_t x672 = INT16_MIN;
volatile int16_t x676 = -1;
int64_t x679 = -38LL;
static volatile int32_t x684 = INT32_MAX;
static volatile int32_t x687 = INT32_MIN;
uint64_t x691 = 14LLU;
volatile int32_t t133 = -2453627;
uint8_t x706 = UINT8_MAX;
static uint32_t x712 = UINT32_MAX;
int16_t x721 = -1;
uint16_t x728 = UINT16_MAX;
uint16_t x736 = UINT16_MAX;
int16_t x739 = -1;
uint8_t x740 = 1U;
uint8_t x750 = 15U;
uint16_t x762 = 9987U;
volatile int64_t x765 = INT64_MIN;
volatile int32_t t148 = -2;
int8_t x788 = INT8_MIN;
uint8_t x792 = 7U;
int32_t x793 = -1;
int32_t t154 = 113;
uint16_t x818 = UINT16_MAX;
volatile int64_t x823 = INT64_MIN;
volatile int32_t t157 = -4;
int32_t x826 = INT32_MIN;
static volatile uint64_t x845 = 2712178074LLU;
static uint64_t x848 = 1265LLU;
volatile int16_t x854 = -7;
int32_t x856 = 26778034;
int16_t x857 = 11;
int64_t x860 = 1032841LL;
static volatile int32_t x863 = INT32_MIN;
volatile int16_t x865 = -3809;
static int64_t x873 = INT64_MAX;
int32_t x885 = -1;
uint32_t x887 = UINT32_MAX;
int64_t x890 = -1678389092121498LL;
volatile uint32_t x893 = 16330U;
int64_t x896 = INT64_MIN;
int16_t x907 = -1;
volatile int32_t t176 = -109647;
uint16_t x910 = 6680U;
uint8_t x911 = 0U;
uint8_t x920 = 17U;
volatile uint16_t x927 = UINT16_MAX;
uint32_t x930 = 953303U;
int8_t x932 = INT8_MAX;
volatile int32_t x935 = INT32_MAX;
int16_t x939 = INT16_MIN;
static uint32_t x945 = UINT32_MAX;
int32_t x952 = INT32_MIN;
int32_t x963 = INT32_MIN;
uint32_t x968 = 3887U;
uint8_t x1004 = 36U;
int32_t x1012 = INT32_MAX;
int32_t t197 = 18164833;


void f0(void) {
    	volatile int16_t x1 = INT16_MIN;
	int64_t x2 = -1LL;
	static int8_t x3 = -1;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 9553565;

    t0 = ((x1*x2)!=(x3/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 1;
	uint64_t x8 = 56082002LLU;

    t1 = ((x5*x6)!=(x7/x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1008282186227325LL;
	static volatile int32_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	volatile int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 13830253;

    t2 = ((x9*x10)!=(x11/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = INT16_MIN;
	int16_t x15 = INT16_MIN;

    t3 = ((x13*x14)!=(x15/x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 23426727802764476LL;
	int8_t x18 = 55;
	volatile int8_t x19 = INT8_MIN;
	uint16_t x20 = 7922U;
	static volatile int32_t t4 = 61694;

    t4 = ((x17*x18)!=(x19/x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	uint8_t x22 = 19U;
	int64_t x23 = 1275440LL;
	int64_t x24 = INT64_MAX;
	int32_t t5 = 752;

    t5 = ((x21*x22)!=(x23/x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int8_t x26 = -1;
	int8_t x27 = -45;
	int64_t x28 = 549522LL;
	volatile int32_t t6 = -80886;

    t6 = ((x25*x26)!=(x27/x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = -1;
	int64_t x30 = INT64_MAX;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = 399U;
	static volatile int32_t t7 = 844174201;

    t7 = ((x29*x30)!=(x31/x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -1;
	int64_t x38 = INT64_MAX;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t8 = -31180229;

    t8 = ((x37*x38)!=(x39/x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x46 = 1885;
	uint8_t x47 = 0U;
	int16_t x48 = -24;
	int32_t t9 = -233870;

    t9 = ((x45*x46)!=(x47/x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x50 = 30U;
	volatile uint8_t x51 = UINT8_MAX;
	int64_t x52 = -1LL;
	int32_t t10 = -1;

    t10 = ((x49*x50)!=(x51/x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = 1;
	int32_t x54 = -5968535;
	int16_t x55 = -443;
	static uint8_t x56 = 84U;
	volatile int32_t t11 = -16303134;

    t11 = ((x53*x54)!=(x55/x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x58 = 29U;
	int8_t x60 = -1;
	volatile int32_t t12 = -11;

    t12 = ((x57*x58)!=(x59/x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x62 = INT16_MAX;
	volatile int8_t x63 = INT8_MIN;
	uint16_t x64 = 242U;
	volatile int32_t t13 = 0;

    t13 = ((x61*x62)!=(x63/x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = INT8_MIN;
	uint8_t x66 = 55U;
	int8_t x67 = INT8_MIN;
	static volatile int16_t x68 = INT16_MAX;
	static int32_t t14 = -2714;

    t14 = ((x65*x66)!=(x67/x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x85 = 189LL;
	uint8_t x86 = 9U;
	int8_t x87 = INT8_MIN;
	static uint8_t x88 = 83U;
	int32_t t15 = 576765691;

    t15 = ((x85*x86)!=(x87/x88));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x94 = 23U;
	int8_t x95 = -1;
	volatile int32_t t16 = 340243;

    t16 = ((x93*x94)!=(x95/x96));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x97 = INT8_MIN;
	int32_t x98 = 6;
	uint32_t x99 = 4U;
	static volatile int16_t x100 = INT16_MIN;

    t17 = ((x97*x98)!=(x99/x100));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x101 = 31U;
	uint8_t x102 = 43U;
	int16_t x103 = -174;
	int64_t x104 = 7611152LL;

    t18 = ((x101*x102)!=(x103/x104));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x105 = -9;
	static int16_t x107 = -1;

    t19 = ((x105*x106)!=(x107/x108));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x113 = 28766881897LLU;
	volatile uint32_t x114 = 2U;
	static int8_t x115 = -1;
	uint64_t x116 = 10LLU;
	static int32_t t20 = -1;

    t20 = ((x113*x114)!=(x115/x116));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x117 = 41U;
	volatile int16_t x118 = INT16_MAX;
	int8_t x119 = -1;
	int32_t x120 = INT32_MIN;
	volatile int32_t t21 = 6292684;

    t21 = ((x117*x118)!=(x119/x120));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x121 = -1;
	int16_t x122 = 131;
	int16_t x123 = -1;
	uint16_t x124 = UINT16_MAX;
	int32_t t22 = -15183;

    t22 = ((x121*x122)!=(x123/x124));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x125 = 0LLU;
	int16_t x127 = 10;
	int16_t x128 = 14;

    t23 = ((x125*x126)!=(x127/x128));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x133 = 0;
	volatile int64_t x136 = INT64_MIN;
	volatile int32_t t24 = -4595546;

    t24 = ((x133*x134)!=(x135/x136));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x138 = UINT8_MAX;
	volatile uint8_t x139 = 6U;
	static volatile int32_t t25 = 12910;

    t25 = ((x137*x138)!=(x139/x140));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x141 = 4;
	volatile int8_t x142 = INT8_MIN;
	int8_t x144 = INT8_MIN;

    t26 = ((x141*x142)!=(x143/x144));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x153 = INT16_MIN;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t27 = 578;

    t27 = ((x153*x154)!=(x155/x156));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x157 = INT8_MAX;
	int64_t x158 = 1LL;
	static volatile int64_t x160 = INT64_MIN;
	volatile int32_t t28 = -110123;

    t28 = ((x157*x158)!=(x159/x160));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x161 = 135;
	int16_t x163 = 1664;
	int32_t t29 = -10;

    t29 = ((x161*x162)!=(x163/x164));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x165 = -1;
	uint64_t x168 = 158862722021LLU;
	volatile int32_t t30 = -900846;

    t30 = ((x165*x166)!=(x167/x168));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x174 = UINT64_MAX;
	int8_t x175 = -1;
	static volatile uint16_t x176 = UINT16_MAX;
	volatile int32_t t31 = -37;

    t31 = ((x173*x174)!=(x175/x176));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x186 = 372072;
	int32_t x187 = 373490;
	uint32_t x188 = UINT32_MAX;
	static int32_t t32 = 2704;

    t32 = ((x185*x186)!=(x187/x188));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x193 = 3639U;
	uint64_t x194 = 15LLU;
	int64_t x195 = INT64_MAX;
	static volatile int32_t x196 = -1;
	volatile int32_t t33 = 63164136;

    t33 = ((x193*x194)!=(x195/x196));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x197 = UINT64_MAX;
	static uint64_t x198 = 29703298963LLU;
	volatile int16_t x199 = INT16_MAX;
	volatile int32_t t34 = -84;

    t34 = ((x197*x198)!=(x199/x200));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x201 = UINT8_MAX;
	int64_t x203 = -1LL;
	volatile int8_t x204 = INT8_MAX;

    t35 = ((x201*x202)!=(x203/x204));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x205 = INT16_MAX;
	uint8_t x207 = 24U;
	static int32_t t36 = 0;

    t36 = ((x205*x206)!=(x207/x208));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint16_t x214 = UINT16_MAX;
	int32_t x215 = INT32_MAX;
	volatile uint32_t x216 = UINT32_MAX;
	volatile int32_t t37 = -10026503;

    t37 = ((x213*x214)!=(x215/x216));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x217 = -733LL;
	int8_t x218 = 1;
	uint16_t x219 = 3618U;
	uint64_t x220 = UINT64_MAX;
	int32_t t38 = 0;

    t38 = ((x217*x218)!=(x219/x220));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x221 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t39 = -14;

    t39 = ((x221*x222)!=(x223/x224));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x225 = -3;
	volatile int16_t x227 = -12;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t40 = 22125179;

    t40 = ((x225*x226)!=(x227/x228));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x229 = -2177;
	int64_t x230 = 509LL;
	int8_t x232 = -1;
	volatile int32_t t41 = 664549272;

    t41 = ((x229*x230)!=(x231/x232));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x233 = 3;
	volatile int8_t x234 = -1;
	uint8_t x235 = UINT8_MAX;
	static int16_t x236 = INT16_MAX;
	volatile int32_t t42 = -5542022;

    t42 = ((x233*x234)!=(x235/x236));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x237 = -45;
	uint8_t x238 = 14U;
	static int8_t x239 = 3;
	uint16_t x240 = UINT16_MAX;

    t43 = ((x237*x238)!=(x239/x240));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x241 = 27U;
	volatile int32_t x242 = -16888475;
	int16_t x244 = -1;
	int32_t t44 = 34892;

    t44 = ((x241*x242)!=(x243/x244));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x249 = 502932358784LL;
	uint8_t x250 = 3U;
	uint64_t x251 = 217033LLU;
	volatile int8_t x252 = INT8_MIN;
	int32_t t45 = 18;

    t45 = ((x249*x250)!=(x251/x252));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x253 = INT16_MIN;
	volatile int32_t x254 = -1;
	volatile int64_t x255 = 4405080909163985LL;
	int32_t x256 = -1;

    t46 = ((x253*x254)!=(x255/x256));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x257 = 321LL;
	int32_t x258 = -1;
	uint16_t x259 = 5U;
	volatile int32_t t47 = -415;

    t47 = ((x257*x258)!=(x259/x260));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x261 = 3666454LLU;
	volatile int64_t x262 = INT64_MAX;
	volatile int8_t x263 = -1;
	int16_t x264 = INT16_MAX;

    t48 = ((x261*x262)!=(x263/x264));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x265 = -176093;
	int8_t x266 = -1;
	uint8_t x267 = 9U;
	int64_t x268 = 3982231829LL;
	static volatile int32_t t49 = 490;

    t49 = ((x265*x266)!=(x267/x268));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x277 = -3;
	volatile uint64_t x278 = UINT64_MAX;
	int32_t x279 = INT32_MIN;
	volatile uint64_t x280 = UINT64_MAX;
	static int32_t t50 = -3569420;

    t50 = ((x277*x278)!=(x279/x280));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x281 = -1;
	volatile int64_t x283 = INT64_MIN;
	uint64_t x284 = 585LLU;

    t51 = ((x281*x282)!=(x283/x284));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x289 = -1;
	static int32_t x291 = INT32_MAX;
	volatile int32_t t52 = 1;

    t52 = ((x289*x290)!=(x291/x292));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x293 = 12;
	uint64_t x294 = UINT64_MAX;
	volatile int32_t x295 = INT32_MAX;
	uint64_t x296 = 1534137879759192403LLU;

    t53 = ((x293*x294)!=(x295/x296));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x297 = -71;
	uint32_t x298 = 34507U;
	int64_t x299 = -14059993LL;
	volatile int64_t x300 = 40941LL;

    t54 = ((x297*x298)!=(x299/x300));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x301 = INT32_MAX;
	int64_t x302 = -1LL;
	volatile uint8_t x303 = 1U;
	volatile int8_t x304 = INT8_MIN;

    t55 = ((x301*x302)!=(x303/x304));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x306 = 22U;
	int32_t t56 = -1059227;

    t56 = ((x305*x306)!=(x307/x308));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x309 = 26461U;
	int8_t x310 = INT8_MIN;
	int16_t x312 = -622;
	static volatile int32_t t57 = 70770316;

    t57 = ((x309*x310)!=(x311/x312));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x313 = 338682U;
	int16_t x314 = -1;
	int64_t x315 = -1LL;
	volatile int32_t t58 = -2931;

    t58 = ((x313*x314)!=(x315/x316));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x321 = -1611;
	uint8_t x322 = 2U;
	volatile uint32_t x323 = 587239U;

    t59 = ((x321*x322)!=(x323/x324));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int32_t x325 = 237;
	uint64_t x328 = 9712876835165LLU;
	volatile int32_t t60 = 4102015;

    t60 = ((x325*x326)!=(x327/x328));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x329 = -1LL;
	uint64_t x331 = 1716339LLU;
	volatile int32_t t61 = 13;

    t61 = ((x329*x330)!=(x331/x332));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x341 = -1;
	int16_t x342 = INT16_MAX;
	int64_t x343 = INT64_MAX;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t62 = 1482736;

    t62 = ((x341*x342)!=(x343/x344));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x345 = -1;
	uint64_t x346 = UINT64_MAX;
	uint8_t x347 = 4U;
	int64_t x348 = INT64_MAX;
	int32_t t63 = 62854;

    t63 = ((x345*x346)!=(x347/x348));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x357 = 156343768011208812LLU;
	volatile uint8_t x359 = UINT8_MAX;
	volatile uint32_t x360 = UINT32_MAX;
	volatile int32_t t64 = -52;

    t64 = ((x357*x358)!=(x359/x360));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x362 = 22332U;
	int16_t x363 = INT16_MIN;
	int32_t x364 = 21858165;
	volatile int32_t t65 = -2;

    t65 = ((x361*x362)!=(x363/x364));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x366 = -36030;
	uint16_t x368 = 441U;
	static int32_t t66 = -35008;

    t66 = ((x365*x366)!=(x367/x368));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x369 = 5493797;
	uint8_t x370 = UINT8_MAX;
	int8_t x371 = INT8_MAX;
	static uint8_t x372 = UINT8_MAX;
	int32_t t67 = -1359473;

    t67 = ((x369*x370)!=(x371/x372));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x373 = UINT8_MAX;
	int8_t x374 = -1;
	uint16_t x375 = 14U;
	int32_t t68 = 328;

    t68 = ((x373*x374)!=(x375/x376));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x381 = INT8_MIN;
	static int32_t x382 = 3;
	static int8_t x383 = INT8_MIN;
	int16_t x384 = -9;

    t69 = ((x381*x382)!=(x383/x384));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x394 = -1;
	static uint32_t x395 = 7622706U;
	int32_t x396 = -939231;
	static volatile int32_t t70 = 4116438;

    t70 = ((x393*x394)!=(x395/x396));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x397 = INT16_MIN;
	static int16_t x398 = 17;
	int32_t x399 = INT32_MAX;
	static int32_t x400 = -282;
	int32_t t71 = -457613;

    t71 = ((x397*x398)!=(x399/x400));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x401 = 15U;
	uint16_t x402 = UINT16_MAX;
	int64_t x403 = INT64_MIN;
	uint8_t x404 = 1U;
	volatile int32_t t72 = -323807031;

    t72 = ((x401*x402)!=(x403/x404));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x405 = UINT32_MAX;
	int8_t x406 = INT8_MIN;
	int8_t x407 = -1;
	static int64_t x408 = INT64_MAX;
	volatile int32_t t73 = 258802;

    t73 = ((x405*x406)!=(x407/x408));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x409 = 55U;
	volatile uint8_t x410 = 8U;
	static int64_t x412 = INT64_MIN;
	int32_t t74 = 5;

    t74 = ((x409*x410)!=(x411/x412));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x413 = 689849U;
	int16_t x414 = -3;
	volatile int16_t x415 = INT16_MIN;
	static int64_t x416 = -1LL;
	int32_t t75 = 1;

    t75 = ((x413*x414)!=(x415/x416));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x417 = INT16_MIN;
	static uint32_t x418 = 2U;
	int64_t x419 = -1LL;
	int16_t x420 = INT16_MAX;
	volatile int32_t t76 = 17960;

    t76 = ((x417*x418)!=(x419/x420));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x421 = INT16_MIN;
	volatile uint8_t x423 = 54U;
	uint8_t x424 = UINT8_MAX;

    t77 = ((x421*x422)!=(x423/x424));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x426 = INT64_MAX;
	int64_t x428 = INT64_MAX;
	volatile int32_t t78 = 10936373;

    t78 = ((x425*x426)!=(x427/x428));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x429 = -1LL;
	int8_t x431 = INT8_MIN;
	int32_t x432 = 1707904;
	int32_t t79 = 0;

    t79 = ((x429*x430)!=(x431/x432));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x434 = 65U;
	static volatile int16_t x435 = INT16_MIN;
	int64_t x436 = 745834975618LL;
	volatile int32_t t80 = -28073683;

    t80 = ((x433*x434)!=(x435/x436));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x438 = UINT32_MAX;
	int16_t x439 = INT16_MIN;
	static int16_t x440 = INT16_MIN;
	volatile int32_t t81 = 643546;

    t81 = ((x437*x438)!=(x439/x440));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x441 = 357U;
	int64_t x442 = -1LL;
	uint32_t x443 = 389331580U;
	int16_t x444 = 7;
	int32_t t82 = 315326;

    t82 = ((x441*x442)!=(x443/x444));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x449 = 52U;
	uint64_t x450 = UINT64_MAX;
	static uint64_t x451 = 36LLU;
	int8_t x452 = -1;
	static int32_t t83 = -247378437;

    t83 = ((x449*x450)!=(x451/x452));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x453 = 1LLU;
	uint8_t x455 = 0U;
	uint16_t x456 = UINT16_MAX;
	int32_t t84 = 7;

    t84 = ((x453*x454)!=(x455/x456));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x457 = -40;
	uint8_t x458 = UINT8_MAX;
	volatile int16_t x459 = -104;
	static volatile uint32_t x460 = UINT32_MAX;
	volatile int32_t t85 = 98754;

    t85 = ((x457*x458)!=(x459/x460));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x461 = INT16_MIN;
	int16_t x462 = INT16_MAX;
	static uint32_t x463 = 1816877519U;
	int8_t x464 = -8;
	volatile int32_t t86 = -2032087;

    t86 = ((x461*x462)!=(x463/x464));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x466 = 0;
	uint16_t x467 = UINT16_MAX;
	volatile int32_t t87 = 431;

    t87 = ((x465*x466)!=(x467/x468));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x469 = INT16_MAX;
	volatile uint64_t x470 = 208673286LLU;
	int8_t x472 = INT8_MAX;
	volatile int32_t t88 = 7611987;

    t88 = ((x469*x470)!=(x471/x472));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	static int32_t x474 = INT32_MAX;
	uint16_t x475 = 60U;
	static int16_t x476 = INT16_MIN;

    t89 = ((x473*x474)!=(x475/x476));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x478 = 1772U;
	uint16_t x479 = UINT16_MAX;
	static volatile int32_t t90 = -92;

    t90 = ((x477*x478)!=(x479/x480));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x481 = INT8_MIN;
	uint8_t x482 = 22U;
	int16_t x483 = -1;
	uint64_t x484 = 30775617LLU;

    t91 = ((x481*x482)!=(x483/x484));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x485 = 12844;
	static volatile int16_t x486 = -6805;
	volatile uint8_t x487 = 8U;
	int32_t t92 = 3006403;

    t92 = ((x485*x486)!=(x487/x488));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x489 = -148;
	int8_t x490 = INT8_MIN;
	volatile int64_t x491 = 22LL;
	int8_t x492 = -5;
	static volatile int32_t t93 = -755;

    t93 = ((x489*x490)!=(x491/x492));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x493 = -1;
	int64_t x494 = -1970764963677969671LL;
	int8_t x495 = INT8_MAX;
	volatile int16_t x496 = INT16_MAX;

    t94 = ((x493*x494)!=(x495/x496));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x497 = INT8_MAX;
	uint8_t x498 = 10U;
	volatile int64_t x500 = -1LL;
	int32_t t95 = -71;

    t95 = ((x497*x498)!=(x499/x500));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x501 = 0U;
	int16_t x502 = INT16_MIN;
	static int64_t x503 = 7LL;
	int16_t x504 = -2;
	volatile int32_t t96 = 1;

    t96 = ((x501*x502)!=(x503/x504));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x505 = 6513699LLU;
	int32_t x507 = INT32_MAX;
	int8_t x508 = -2;
	int32_t t97 = 1864;

    t97 = ((x505*x506)!=(x507/x508));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x510 = INT8_MIN;
	int16_t x511 = INT16_MIN;
	int16_t x512 = 1;
	volatile int32_t t98 = 1;

    t98 = ((x509*x510)!=(x511/x512));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x513 = 8;
	static uint8_t x514 = 28U;
	int8_t x515 = INT8_MAX;
	int8_t x516 = 30;
	int32_t t99 = 1;

    t99 = ((x513*x514)!=(x515/x516));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x518 = 1;
	static volatile int32_t x519 = -223259;
	uint64_t x520 = UINT64_MAX;
	static volatile int32_t t100 = 130858505;

    t100 = ((x517*x518)!=(x519/x520));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x521 = 1U;
	int16_t x522 = 6;
	volatile int32_t x523 = 18992925;
	volatile uint8_t x524 = 103U;
	int32_t t101 = -92012;

    t101 = ((x521*x522)!=(x523/x524));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x530 = -1;
	int64_t x531 = INT64_MIN;
	volatile int32_t t102 = 234659;

    t102 = ((x529*x530)!=(x531/x532));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x537 = INT8_MAX;
	static uint16_t x538 = 3619U;
	static int32_t t103 = 1304;

    t103 = ((x537*x538)!=(x539/x540));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x541 = UINT8_MAX;
	volatile int32_t x542 = 164;
	uint64_t x543 = UINT64_MAX;
	int32_t x544 = INT32_MAX;
	volatile int32_t t104 = -992;

    t104 = ((x541*x542)!=(x543/x544));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x545 = UINT32_MAX;
	volatile int64_t x546 = -1LL;
	uint8_t x547 = 85U;
	volatile int8_t x548 = INT8_MIN;

    t105 = ((x545*x546)!=(x547/x548));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x549 = -1;
	uint32_t x550 = 6U;
	int64_t x551 = INT64_MIN;
	volatile int16_t x552 = INT16_MAX;
	int32_t t106 = -1048342;

    t106 = ((x549*x550)!=(x551/x552));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x557 = 1;
	int64_t x558 = INT64_MIN;
	static int16_t x559 = INT16_MIN;
	int32_t x560 = INT32_MIN;
	int32_t t107 = -97;

    t107 = ((x557*x558)!=(x559/x560));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x565 = -1;
	static int16_t x567 = -1;
	int32_t t108 = -2;

    t108 = ((x565*x566)!=(x567/x568));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x569 = INT16_MIN;
	uint8_t x570 = 67U;
	int32_t x571 = -1673;
	volatile int32_t t109 = 2;

    t109 = ((x569*x570)!=(x571/x572));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x581 = 0U;
	volatile int32_t x582 = 1406;
	uint8_t x583 = 4U;
	uint8_t x584 = 5U;
	volatile int32_t t110 = 141421;

    t110 = ((x581*x582)!=(x583/x584));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x589 = -1;
	volatile uint8_t x592 = 13U;

    t111 = ((x589*x590)!=(x591/x592));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x597 = INT8_MAX;
	int8_t x598 = 7;
	int64_t x599 = -1LL;
	uint32_t x600 = 39404U;
	volatile int32_t t112 = 21703610;

    t112 = ((x597*x598)!=(x599/x600));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x606 = INT16_MIN;
	static uint64_t x608 = 1145720971LLU;
	int32_t t113 = -1;

    t113 = ((x605*x606)!=(x607/x608));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x609 = 3U;
	uint32_t x610 = 0U;
	int32_t t114 = -58437326;

    t114 = ((x609*x610)!=(x611/x612));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x613 = INT32_MIN;
	uint32_t x614 = 11U;
	uint8_t x615 = 22U;
	int32_t t115 = 885431;

    t115 = ((x613*x614)!=(x615/x616));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x617 = UINT64_MAX;
	static volatile int32_t x618 = INT32_MIN;
	static int16_t x619 = -1;
	volatile int32_t t116 = 1161696;

    t116 = ((x617*x618)!=(x619/x620));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x621 = -1LL;
	uint32_t x622 = 1874563U;
	volatile uint64_t x623 = 336640728110129008LLU;
	int64_t x624 = INT64_MIN;
	volatile int32_t t117 = 139;

    t117 = ((x621*x622)!=(x623/x624));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x626 = 78578946419653281LLU;
	static uint16_t x628 = UINT16_MAX;
	int32_t t118 = 2300278;

    t118 = ((x625*x626)!=(x627/x628));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x630 = -1;
	int16_t x631 = INT16_MIN;
	uint8_t x632 = 60U;

    t119 = ((x629*x630)!=(x631/x632));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x633 = UINT32_MAX;
	static int8_t x634 = INT8_MIN;
	int32_t x635 = INT32_MIN;
	uint32_t x636 = 7031U;

    t120 = ((x633*x634)!=(x635/x636));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x641 = -1;
	int8_t x642 = -1;
	int32_t x643 = INT32_MIN;
	static volatile uint16_t x644 = 2U;
	volatile int32_t t121 = -61;

    t121 = ((x641*x642)!=(x643/x644));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x645 = -5;
	int8_t x647 = -5;
	int64_t x648 = -1LL;
	volatile int32_t t122 = -194728;

    t122 = ((x645*x646)!=(x647/x648));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x649 = -380182;
	volatile uint8_t x650 = 1U;
	static int8_t x651 = INT8_MIN;
	int16_t x652 = 1;
	int32_t t123 = 46;

    t123 = ((x649*x650)!=(x651/x652));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x653 = -11;
	uint16_t x654 = 3U;
	uint8_t x655 = 52U;

    t124 = ((x653*x654)!=(x655/x656));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x657 = INT8_MIN;
	volatile int16_t x658 = INT16_MIN;
	static int32_t x660 = -1;

    t125 = ((x657*x658)!=(x659/x660));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x661 = 625LLU;
	int64_t x664 = INT64_MAX;
	int32_t t126 = 16867;

    t126 = ((x661*x662)!=(x663/x664));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x665 = -1;
	int8_t x667 = INT8_MAX;
	int32_t x668 = INT32_MAX;
	int32_t t127 = -70541;

    t127 = ((x665*x666)!=(x667/x668));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x670 = 2125;
	int16_t x671 = INT16_MAX;
	int32_t t128 = 2;

    t128 = ((x669*x670)!=(x671/x672));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x673 = INT8_MIN;
	uint8_t x674 = UINT8_MAX;
	uint32_t x675 = 99819574U;
	int32_t t129 = -13;

    t129 = ((x673*x674)!=(x675/x676));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x677 = UINT64_MAX;
	int16_t x678 = -1;
	volatile int8_t x680 = INT8_MIN;
	static int32_t t130 = -972;

    t130 = ((x677*x678)!=(x679/x680));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x681 = -1LL;
	int8_t x682 = -1;
	static int64_t x683 = INT64_MIN;
	volatile int32_t t131 = 2;

    t131 = ((x681*x682)!=(x683/x684));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x685 = INT16_MAX;
	int8_t x686 = 0;
	uint16_t x688 = UINT16_MAX;
	int32_t t132 = -216562472;

    t132 = ((x685*x686)!=(x687/x688));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x689 = 38U;
	uint64_t x690 = 579098057LLU;
	uint16_t x692 = 913U;

    t133 = ((x689*x690)!=(x691/x692));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x697 = INT8_MIN;
	static uint64_t x698 = 139LLU;
	volatile int8_t x699 = INT8_MAX;
	volatile uint8_t x700 = 9U;
	int32_t t134 = 89456;

    t134 = ((x697*x698)!=(x699/x700));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x705 = -600416742148LL;
	static uint32_t x707 = UINT32_MAX;
	int8_t x708 = INT8_MIN;
	int32_t t135 = -6;

    t135 = ((x705*x706)!=(x707/x708));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x709 = INT8_MIN;
	static int16_t x710 = -4;
	int16_t x711 = -1;
	static int32_t t136 = -644;

    t136 = ((x709*x710)!=(x711/x712));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x722 = INT16_MAX;
	uint8_t x723 = 103U;
	uint64_t x724 = 151932LLU;
	static int32_t t137 = 30728645;

    t137 = ((x721*x722)!=(x723/x724));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x725 = -1;
	int8_t x726 = -56;
	int64_t x727 = 5541826LL;
	static volatile int32_t t138 = 17;

    t138 = ((x725*x726)!=(x727/x728));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x733 = 1;
	int64_t x734 = INT64_MAX;
	int16_t x735 = INT16_MIN;
	volatile int32_t t139 = 36;

    t139 = ((x733*x734)!=(x735/x736));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x737 = INT8_MIN;
	static int16_t x738 = INT16_MIN;
	volatile int32_t t140 = -281703;

    t140 = ((x737*x738)!=(x739/x740));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x741 = UINT64_MAX;
	uint32_t x742 = 384118884U;
	static int16_t x743 = 1282;
	int64_t x744 = INT64_MAX;
	volatile int32_t t141 = -1034454199;

    t141 = ((x741*x742)!=(x743/x744));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x745 = UINT64_MAX;
	int8_t x746 = 11;
	static int8_t x747 = 0;
	uint16_t x748 = 8U;
	int32_t t142 = -1943344;

    t142 = ((x745*x746)!=(x747/x748));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x749 = INT16_MIN;
	int64_t x751 = INT64_MAX;
	static volatile int16_t x752 = INT16_MIN;
	volatile int32_t t143 = 1049;

    t143 = ((x749*x750)!=(x751/x752));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x753 = INT16_MIN;
	int16_t x754 = INT16_MIN;
	volatile int32_t x755 = INT32_MIN;
	int8_t x756 = 7;
	volatile int32_t t144 = -1;

    t144 = ((x753*x754)!=(x755/x756));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x761 = INT8_MIN;
	static uint16_t x763 = UINT16_MAX;
	uint8_t x764 = 2U;
	volatile int32_t t145 = -881106850;

    t145 = ((x761*x762)!=(x763/x764));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x766 = 10658326221583LLU;
	volatile int64_t x767 = 121582189LL;
	static uint64_t x768 = 35LLU;
	volatile int32_t t146 = 360571;

    t146 = ((x765*x766)!=(x767/x768));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x769 = UINT64_MAX;
	int32_t x770 = INT32_MIN;
	int8_t x771 = -1;
	uint16_t x772 = 7393U;
	int32_t t147 = -9269786;

    t147 = ((x769*x770)!=(x771/x772));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint32_t x773 = 1958U;
	uint16_t x774 = UINT16_MAX;
	static int32_t x775 = INT32_MIN;
	volatile uint8_t x776 = 2U;

    t148 = ((x773*x774)!=(x775/x776));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x777 = UINT32_MAX;
	uint64_t x778 = UINT64_MAX;
	volatile int32_t x779 = 15;
	int16_t x780 = -1;
	volatile int32_t t149 = 1076;

    t149 = ((x777*x778)!=(x779/x780));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x785 = -1LL;
	uint16_t x786 = 0U;
	volatile uint16_t x787 = UINT16_MAX;
	int32_t t150 = -119176;

    t150 = ((x785*x786)!=(x787/x788));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x789 = INT16_MIN;
	uint16_t x790 = 953U;
	int16_t x791 = -1;
	volatile int32_t t151 = 14;

    t151 = ((x789*x790)!=(x791/x792));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x794 = -1;
	static int64_t x795 = -70LL;
	static int64_t x796 = -23347006039LL;
	static int32_t t152 = 1794;

    t152 = ((x793*x794)!=(x795/x796));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x797 = INT8_MAX;
	int8_t x798 = -7;
	int32_t x799 = -11678;
	int8_t x800 = -1;
	volatile int32_t t153 = -16015;

    t153 = ((x797*x798)!=(x799/x800));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x801 = -1;
	static int16_t x802 = -1;
	uint16_t x803 = 13U;
	uint64_t x804 = UINT64_MAX;

    t154 = ((x801*x802)!=(x803/x804));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x813 = UINT16_MAX;
	int8_t x814 = INT8_MAX;
	static int64_t x815 = INT64_MAX;
	static uint8_t x816 = 2U;
	volatile int32_t t155 = 0;

    t155 = ((x813*x814)!=(x815/x816));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x817 = INT16_MIN;
	int16_t x819 = 220;
	static int32_t x820 = INT32_MIN;
	static int32_t t156 = -399280;

    t156 = ((x817*x818)!=(x819/x820));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x821 = 1;
	static int64_t x822 = INT64_MIN;
	static int16_t x824 = 1856;

    t157 = ((x821*x822)!=(x823/x824));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x825 = 1U;
	int16_t x827 = -1;
	int64_t x828 = INT64_MAX;
	static volatile int32_t t158 = 1481;

    t158 = ((x825*x826)!=(x827/x828));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x829 = -1;
	volatile int64_t x830 = 54523LL;
	uint16_t x831 = 499U;
	int32_t x832 = INT32_MAX;
	int32_t t159 = 491828330;

    t159 = ((x829*x830)!=(x831/x832));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x833 = 3510428779676LLU;
	uint8_t x834 = 2U;
	uint8_t x835 = 66U;
	uint32_t x836 = UINT32_MAX;
	static volatile int32_t t160 = -119037400;

    t160 = ((x833*x834)!=(x835/x836));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x841 = UINT64_MAX;
	int32_t x842 = -1;
	volatile int64_t x843 = INT64_MIN;
	uint16_t x844 = 186U;
	static int32_t t161 = 22842197;

    t161 = ((x841*x842)!=(x843/x844));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x846 = 12U;
	int64_t x847 = INT64_MAX;
	int32_t t162 = 3526;

    t162 = ((x845*x846)!=(x847/x848));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x849 = 16U;
	int64_t x850 = -1LL;
	uint16_t x851 = UINT16_MAX;
	uint8_t x852 = 3U;
	volatile int32_t t163 = 4378534;

    t163 = ((x849*x850)!=(x851/x852));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x853 = 7;
	int8_t x855 = -1;
	static int32_t t164 = 4288;

    t164 = ((x853*x854)!=(x855/x856));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x858 = -1;
	volatile int32_t x859 = 2568;
	int32_t t165 = -87795195;

    t165 = ((x857*x858)!=(x859/x860));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x861 = 142311104749314LL;
	uint64_t x862 = 18756LLU;
	uint32_t x864 = 383312U;
	int32_t t166 = 3821208;

    t166 = ((x861*x862)!=(x863/x864));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x866 = 727947656326466531LLU;
	static uint8_t x867 = UINT8_MAX;
	static int16_t x868 = 2478;
	int32_t t167 = -6455143;

    t167 = ((x865*x866)!=(x867/x868));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x869 = INT8_MIN;
	uint8_t x870 = 65U;
	uint64_t x871 = 0LLU;
	uint64_t x872 = 541278151848LLU;
	volatile int32_t t168 = 23554893;

    t168 = ((x869*x870)!=(x871/x872));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x874 = 108150250006877877LLU;
	volatile int8_t x875 = INT8_MAX;
	static int8_t x876 = -1;
	volatile int32_t t169 = -46;

    t169 = ((x873*x874)!=(x875/x876));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x877 = -1;
	uint16_t x878 = 497U;
	uint64_t x879 = 28109740926967LLU;
	uint8_t x880 = 3U;
	static int32_t t170 = -1737851;

    t170 = ((x877*x878)!=(x879/x880));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x881 = UINT32_MAX;
	int16_t x882 = -1;
	volatile int64_t x883 = INT64_MIN;
	int8_t x884 = INT8_MIN;
	int32_t t171 = -227979;

    t171 = ((x881*x882)!=(x883/x884));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x886 = INT16_MIN;
	int16_t x888 = INT16_MAX;
	volatile int32_t t172 = 12757;

    t172 = ((x885*x886)!=(x887/x888));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x889 = 23625333LLU;
	static int8_t x891 = -1;
	uint64_t x892 = 597646450541LLU;
	int32_t t173 = 56;

    t173 = ((x889*x890)!=(x891/x892));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x894 = -7;
	volatile int32_t x895 = -2183;
	volatile int32_t t174 = -133505406;

    t174 = ((x893*x894)!=(x895/x896));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x897 = 0U;
	volatile int8_t x898 = 9;
	volatile int16_t x899 = 3208;
	int16_t x900 = INT16_MIN;
	static int32_t t175 = 132524371;

    t175 = ((x897*x898)!=(x899/x900));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x905 = UINT64_MAX;
	int32_t x906 = INT32_MIN;
	uint16_t x908 = 12U;

    t176 = ((x905*x906)!=(x907/x908));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x909 = 6;
	volatile uint64_t x912 = 1429344LLU;
	volatile int32_t t177 = 748;

    t177 = ((x909*x910)!=(x911/x912));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x917 = 2131879;
	int16_t x918 = 4;
	int8_t x919 = INT8_MIN;
	volatile int32_t t178 = 30291;

    t178 = ((x917*x918)!=(x919/x920));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x921 = INT8_MIN;
	uint32_t x922 = 2U;
	int16_t x923 = INT16_MIN;
	int16_t x924 = INT16_MIN;
	volatile int32_t t179 = 357071533;

    t179 = ((x921*x922)!=(x923/x924));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x925 = -1;
	uint32_t x926 = 91635126U;
	int32_t x928 = -1;
	int32_t t180 = -2997541;

    t180 = ((x925*x926)!=(x927/x928));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x929 = UINT16_MAX;
	uint8_t x931 = 28U;
	int32_t t181 = -204405;

    t181 = ((x929*x930)!=(x931/x932));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x933 = UINT8_MAX;
	static int64_t x934 = -1452763582LL;
	volatile int16_t x936 = INT16_MIN;
	int32_t t182 = -663335264;

    t182 = ((x933*x934)!=(x935/x936));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x937 = -9479;
	int16_t x938 = INT16_MIN;
	static uint32_t x940 = 1953U;
	volatile int32_t t183 = 2120;

    t183 = ((x937*x938)!=(x939/x940));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x941 = INT8_MIN;
	uint8_t x942 = 40U;
	static volatile uint8_t x943 = UINT8_MAX;
	int32_t x944 = -17450;
	volatile int32_t t184 = -396370191;

    t184 = ((x941*x942)!=(x943/x944));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x946 = 17U;
	int32_t x947 = INT32_MIN;
	static int64_t x948 = INT64_MAX;
	static int32_t t185 = -12;

    t185 = ((x945*x946)!=(x947/x948));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x949 = 251862612LLU;
	static uint32_t x950 = UINT32_MAX;
	int64_t x951 = -22329186560000670LL;
	static int32_t t186 = 4;

    t186 = ((x949*x950)!=(x951/x952));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x957 = INT16_MIN;
	int8_t x958 = INT8_MIN;
	volatile int64_t x959 = INT64_MIN;
	volatile int8_t x960 = INT8_MIN;
	int32_t t187 = 1;

    t187 = ((x957*x958)!=(x959/x960));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x961 = 18997U;
	int32_t x962 = -1;
	int64_t x964 = INT64_MIN;
	volatile int32_t t188 = -310703019;

    t188 = ((x961*x962)!=(x963/x964));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x965 = UINT64_MAX;
	uint64_t x966 = UINT64_MAX;
	volatile int64_t x967 = INT64_MIN;
	static int32_t t189 = -1;

    t189 = ((x965*x966)!=(x967/x968));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x969 = -1;
	volatile uint64_t x970 = 169715LLU;
	uint16_t x971 = 725U;
	volatile int16_t x972 = -1;
	int32_t t190 = -58361830;

    t190 = ((x969*x970)!=(x971/x972));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x977 = 1;
	uint32_t x978 = UINT32_MAX;
	uint64_t x979 = 46671251105LLU;
	volatile uint8_t x980 = 127U;
	int32_t t191 = -13430;

    t191 = ((x977*x978)!=(x979/x980));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x993 = UINT32_MAX;
	int8_t x994 = 11;
	int8_t x995 = -1;
	static uint16_t x996 = 16U;
	int32_t t192 = -3748551;

    t192 = ((x993*x994)!=(x995/x996));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x997 = -1;
	volatile uint16_t x998 = UINT16_MAX;
	int64_t x999 = 38759975992225LL;
	uint16_t x1000 = UINT16_MAX;
	volatile int32_t t193 = 2876;

    t193 = ((x997*x998)!=(x999/x1000));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1001 = 61320426U;
	static uint64_t x1002 = 12901860387LLU;
	int64_t x1003 = -663876016762LL;
	volatile int32_t t194 = 3876;

    t194 = ((x1001*x1002)!=(x1003/x1004));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1005 = INT16_MIN;
	int64_t x1006 = 22124972LL;
	int16_t x1007 = 3934;
	volatile int64_t x1008 = 80LL;
	int32_t t195 = 319687;

    t195 = ((x1005*x1006)!=(x1007/x1008));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1009 = 29U;
	uint16_t x1010 = UINT16_MAX;
	static int32_t x1011 = INT32_MIN;
	volatile int32_t t196 = 31725598;

    t196 = ((x1009*x1010)!=(x1011/x1012));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x1013 = 439724635LLU;
	int8_t x1014 = INT8_MIN;
	int64_t x1015 = -33518780292628253LL;
	int32_t x1016 = INT32_MIN;

    t197 = ((x1013*x1014)!=(x1015/x1016));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1021 = -13;
	int16_t x1022 = INT16_MIN;
	static int64_t x1023 = -5LL;
	uint8_t x1024 = 70U;
	int32_t t198 = -624393548;

    t198 = ((x1021*x1022)!=(x1023/x1024));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1025 = 312;
	static int16_t x1026 = 17;
	static uint16_t x1027 = UINT16_MAX;
	static uint8_t x1028 = UINT8_MAX;
	int32_t t199 = -85;

    t199 = ((x1025*x1026)!=(x1027/x1028));

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

