
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

int16_t x4 = INT16_MAX;
static volatile int8_t x7 = INT8_MIN;
static volatile uint8_t x11 = UINT8_MAX;
volatile int32_t t2 = 26;
int32_t x15 = INT32_MIN;
volatile int32_t x20 = -1;
static int8_t x22 = 1;
static volatile int32_t t5 = 362902007;
static int8_t x29 = -1;
int64_t x38 = INT64_MIN;
int32_t x40 = -399;
volatile int32_t t9 = -52;
int64_t x41 = INT64_MAX;
int16_t x42 = INT16_MAX;
volatile uint8_t x43 = 41U;
int32_t x46 = INT32_MAX;
volatile uint16_t x47 = UINT16_MAX;
int64_t x52 = -1LL;
uint8_t x58 = UINT8_MAX;
volatile int32_t t14 = -3314600;
uint32_t x63 = 7U;
int16_t x72 = INT16_MAX;
int32_t x73 = 5485003;
volatile int32_t t18 = 89301121;
int8_t x80 = INT8_MAX;
int32_t x87 = INT32_MIN;
int32_t t21 = -106;
int32_t t22 = 1;
int32_t t23 = -454090005;
uint64_t x99 = UINT64_MAX;
static int8_t x105 = 11;
int16_t x107 = 2;
static int64_t x111 = -1LL;
int32_t x113 = -12;
volatile uint64_t x117 = UINT64_MAX;
static int32_t t29 = -53498;
uint16_t x121 = UINT16_MAX;
int8_t x127 = 1;
int32_t x128 = INT32_MAX;
int8_t x129 = INT8_MAX;
volatile int32_t t34 = 476;
uint8_t x141 = 15U;
int32_t x157 = INT32_MIN;
uint8_t x160 = 73U;
int32_t t41 = -25;
static uint32_t x169 = 336042U;
int64_t x171 = -438969872554810010LL;
int64_t x174 = INT64_MIN;
int32_t t46 = -2811;
int32_t t48 = -684;
int32_t t49 = 1562;
int8_t x214 = INT8_MIN;
static volatile int8_t x217 = -45;
static int32_t x218 = 351850788;
int8_t x221 = -1;
uint8_t x225 = 99U;
int64_t x229 = INT64_MIN;
int64_t x236 = INT64_MIN;
volatile int16_t x239 = -1;
volatile int16_t x246 = 0;
uint32_t x248 = 2U;
volatile int32_t x250 = INT32_MIN;
int8_t x259 = INT8_MAX;
int64_t x263 = INT64_MAX;
volatile int16_t x264 = -13921;
uint64_t x270 = 1332277920597655081LLU;
uint16_t x271 = 14989U;
int16_t x273 = INT16_MIN;
int32_t x275 = INT32_MIN;
volatile uint8_t x278 = 2U;
int32_t t69 = -3075074;
int32_t x286 = INT32_MIN;
uint16_t x290 = 41U;
static volatile int32_t t74 = 1054214100;
uint8_t x306 = 68U;
volatile int8_t x307 = 62;
volatile int64_t x308 = INT64_MIN;
int16_t x310 = -1;
int16_t x314 = -15;
uint64_t x318 = UINT64_MAX;
volatile int32_t x322 = INT32_MAX;
int8_t x329 = -1;
uint32_t x334 = 3U;
volatile int64_t x336 = INT64_MAX;
volatile int32_t t84 = -41490695;
volatile int32_t t85 = 44;
int64_t x362 = INT64_MAX;
volatile uint8_t x367 = 122U;
uint8_t x369 = 20U;
int32_t t92 = 387967;
uint8_t x375 = 21U;
uint16_t x377 = 18001U;
volatile int32_t t94 = 0;
int32_t x381 = INT32_MIN;
int32_t x383 = 24209;
static uint32_t x384 = UINT32_MAX;
uint64_t x385 = UINT64_MAX;
int32_t x389 = INT32_MAX;
uint64_t x393 = 29LLU;
uint64_t x394 = 34668837182423LLU;
int8_t x396 = INT8_MAX;
int8_t x400 = -1;
int8_t x405 = INT8_MIN;
int16_t x409 = INT16_MIN;
uint64_t x411 = 6440402408528918LLU;
uint64_t x412 = 2006365980558418483LLU;
uint16_t x414 = 2936U;
int32_t x420 = INT32_MIN;
int16_t x421 = -1;
static int8_t x424 = -1;
static volatile uint16_t x429 = UINT16_MAX;
static volatile int16_t x434 = 3;
volatile int64_t x436 = 32279500LL;
int64_t x437 = INT64_MIN;
int8_t x438 = 2;
int32_t t110 = 46754;
uint32_t x446 = 2086756U;
int32_t t111 = -301959;
int32_t x461 = -1;
static int64_t x464 = -1904478854379932LL;
static int32_t x472 = INT32_MIN;
int16_t x475 = INT16_MIN;
uint16_t x484 = 2437U;
int32_t t120 = 0;
int8_t x487 = INT8_MAX;
int32_t t121 = 1;
volatile int64_t x493 = -48878LL;
volatile int32_t t123 = -252690;
int32_t x499 = INT32_MAX;
int64_t x504 = -258375414769400LL;
static volatile int32_t t125 = -177774423;
static int64_t x510 = 17872545195076855LL;
int32_t x519 = 780109;
int8_t x522 = 20;
volatile uint8_t x529 = 26U;
static uint16_t x532 = UINT16_MAX;
static int64_t x557 = -1LL;
uint8_t x558 = 2U;
static volatile int8_t x560 = -2;
int16_t x567 = INT16_MIN;
int16_t x570 = -8;
int8_t x574 = -1;
static int8_t x576 = 14;
int32_t x577 = INT32_MAX;
static uint64_t x579 = UINT64_MAX;
volatile int16_t x581 = -1;
int8_t x583 = INT8_MAX;
int64_t x587 = INT64_MIN;
int32_t x588 = INT32_MIN;
static int32_t x590 = INT32_MIN;
volatile uint64_t x600 = UINT64_MAX;
static uint32_t x605 = 3066806U;
int64_t x608 = 14114883443544800LL;
volatile int32_t x609 = -1;
int32_t x618 = INT32_MIN;
volatile int32_t x621 = -1;
int16_t x628 = -1;
int16_t x637 = INT16_MAX;
int8_t x640 = 2;
volatile int32_t t163 = 1656466;
volatile int16_t x667 = INT16_MIN;
int8_t x672 = -1;
volatile int64_t x675 = -32LL;
static volatile int32_t t168 = 3501;
int64_t x684 = 123858879LL;
volatile int32_t t170 = 994904167;
int32_t t171 = -499;
uint32_t x691 = 307U;
uint8_t x694 = 31U;
uint8_t x700 = UINT8_MAX;
static int16_t x703 = -1;
int32_t x705 = INT32_MIN;
int32_t x707 = INT32_MIN;
int32_t x711 = INT32_MAX;
uint32_t x712 = 11U;
uint16_t x713 = 197U;
volatile uint64_t x717 = 80218965404LLU;
volatile int32_t x738 = -50107390;
int32_t t184 = 1641;
volatile int32_t x744 = INT32_MAX;
int64_t x746 = -1LL;
int8_t x747 = INT8_MIN;
uint64_t x750 = 1604576574LLU;
static int64_t x753 = INT64_MIN;
uint16_t x764 = 6621U;
int32_t t190 = 145;
uint64_t x765 = UINT64_MAX;
static int64_t x766 = -1LL;
uint8_t x768 = UINT8_MAX;
uint32_t x770 = 135464U;
static int8_t x773 = INT8_MIN;
int32_t t194 = -563471498;
static uint32_t x781 = 6895U;
int64_t x791 = 2948109LL;
int16_t x794 = INT16_MIN;
int32_t t198 = 1;
uint64_t x798 = 433605096LLU;
int32_t t199 = 20791532;


void f0(void) {
    	int8_t x1 = -2;
	int8_t x2 = -1;
	int16_t x3 = -88;
	volatile int32_t t0 = 1;

    t0 = (((x1>x2)|x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 6U;
	static int8_t x6 = INT8_MIN;
	uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = 131;

    t1 = (((x5>x6)|x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 218225358LLU;
	int16_t x10 = -214;
	uint32_t x12 = 62637U;

    t2 = (((x9>x10)|x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = 1134611229441859LL;
	int64_t x14 = INT64_MIN;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 1063;

    t3 = (((x13>x14)|x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 1137360U;
	uint16_t x18 = 401U;
	static volatile int8_t x19 = -13;
	static int32_t t4 = 51577;

    t4 = (((x17>x18)|x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	volatile int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MAX;

    t5 = (((x21>x22)|x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x25 = 1LL;
	uint16_t x26 = 21U;
	static int64_t x27 = -177780561896022981LL;
	uint16_t x28 = 105U;
	volatile int32_t t6 = 115;

    t6 = (((x25>x26)|x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MIN;
	int64_t x31 = 196528LL;
	int64_t x32 = 1LL;
	static volatile int32_t t7 = 1590;

    t7 = (((x29>x30)|x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	volatile int64_t x34 = 411076471LL;
	static int32_t x35 = INT32_MIN;
	static int8_t x36 = INT8_MIN;
	int32_t t8 = -3887910;

    t8 = (((x33>x34)|x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = 0;
	int16_t x39 = 15470;

    t9 = (((x37>x38)|x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x44 = UINT64_MAX;
	volatile int32_t t10 = 2;

    t10 = (((x41>x42)|x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 37971U;
	static int8_t x48 = INT8_MIN;
	int32_t t11 = 25;

    t11 = (((x45>x46)|x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	int16_t x50 = INT16_MAX;
	int32_t x51 = -1;
	int32_t t12 = -49824;

    t12 = (((x49>x50)|x51)==x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -24;
	int16_t x54 = INT16_MIN;
	uint8_t x55 = UINT8_MAX;
	static int32_t x56 = 12;
	static volatile int32_t t13 = -1;

    t13 = (((x53>x54)|x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int64_t x59 = -1LL;
	uint32_t x60 = UINT32_MAX;

    t14 = (((x57>x58)|x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = -10LL;
	static volatile int32_t x62 = 34908;
	int16_t x64 = INT16_MIN;
	int32_t t15 = -462;

    t15 = (((x61>x62)|x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = -1LL;
	static uint32_t x66 = 13188U;
	int32_t x67 = INT32_MIN;
	uint64_t x68 = 39LLU;
	static int32_t t16 = 6;

    t16 = (((x65>x66)|x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	volatile uint32_t x70 = 6320U;
	uint8_t x71 = 53U;
	volatile int32_t t17 = 1;

    t17 = (((x69>x70)|x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x74 = UINT8_MAX;
	static volatile uint32_t x75 = 643U;
	int8_t x76 = 23;

    t18 = (((x73>x74)|x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = 1060;
	uint16_t x78 = 3167U;
	int16_t x79 = INT16_MIN;
	volatile int32_t t19 = -88;

    t19 = (((x77>x78)|x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	uint16_t x82 = UINT16_MAX;
	static int64_t x83 = -4LL;
	static uint64_t x84 = 6756273291939194654LLU;
	static int32_t t20 = 10649775;

    t20 = (((x81>x82)|x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	int32_t x86 = -7189;
	int16_t x88 = INT16_MIN;

    t21 = (((x85>x86)|x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	volatile int16_t x90 = -2;
	int64_t x91 = -8827635220755982LL;
	int32_t x92 = -1;

    t22 = (((x89>x90)|x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 25068329396594LLU;
	volatile uint16_t x94 = UINT16_MAX;
	int16_t x95 = 52;
	volatile int16_t x96 = -1;

    t23 = (((x93>x94)|x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 4;
	int16_t x98 = -1;
	int64_t x100 = -4991LL;
	int32_t t24 = -1167;

    t24 = (((x97>x98)|x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = -1;
	int8_t x102 = 29;
	uint8_t x103 = 0U;
	int64_t x104 = -1LL;
	volatile int32_t t25 = 113113755;

    t25 = (((x101>x102)|x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x106 = 8054U;
	uint16_t x108 = UINT16_MAX;
	int32_t t26 = 9491169;

    t26 = (((x105>x106)|x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x109 = 18884376411941382LLU;
	volatile int64_t x110 = 5305636375615LL;
	static int64_t x112 = -1LL;
	volatile int32_t t27 = 991;

    t27 = (((x109>x110)|x111)==x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = INT64_MIN;
	int16_t x115 = 74;
	volatile int8_t x116 = INT8_MAX;
	volatile int32_t t28 = -318859;

    t28 = (((x113>x114)|x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x118 = UINT16_MAX;
	int64_t x119 = 943664297LL;
	static uint8_t x120 = 5U;

    t29 = (((x117>x118)|x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = INT8_MIN;
	int16_t x123 = INT16_MIN;
	static uint16_t x124 = 1U;
	volatile int32_t t30 = -35;

    t30 = (((x121>x122)|x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = INT32_MIN;
	int64_t x126 = 2962628764724634806LL;
	volatile int32_t t31 = 4324108;

    t31 = (((x125>x126)|x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x130 = 453407949LLU;
	int32_t x131 = -1;
	int64_t x132 = INT64_MIN;
	int32_t t32 = -2094605;

    t32 = (((x129>x130)|x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x133 = 1025480478U;
	volatile uint32_t x134 = UINT32_MAX;
	int8_t x135 = -1;
	uint16_t x136 = 847U;
	int32_t t33 = -1189;

    t33 = (((x133>x134)|x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	int64_t x138 = -454484LL;
	int64_t x139 = INT64_MAX;
	static int16_t x140 = INT16_MIN;

    t34 = (((x137>x138)|x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x142 = 2654U;
	int32_t x143 = -1;
	int64_t x144 = 5648675618LL;
	int32_t t35 = -2;

    t35 = (((x141>x142)|x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 2197634667634LLU;
	int16_t x146 = -13;
	int32_t x147 = INT32_MIN;
	volatile int64_t x148 = -1LL;
	int32_t t36 = -43625821;

    t36 = (((x145>x146)|x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x149 = 5U;
	int64_t x150 = -1LL;
	static int32_t x151 = 85;
	volatile int16_t x152 = -1;
	static int32_t t37 = -692;

    t37 = (((x149>x150)|x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MIN;
	int64_t x154 = INT64_MIN;
	static int8_t x155 = INT8_MIN;
	volatile int64_t x156 = INT64_MAX;
	int32_t t38 = -61;

    t38 = (((x153>x154)|x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x158 = UINT8_MAX;
	static int32_t x159 = INT32_MAX;
	volatile int32_t t39 = 2718;

    t39 = (((x157>x158)|x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x161 = 280U;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	int32_t x164 = -49;
	volatile int32_t t40 = -284;

    t40 = (((x161>x162)|x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	static int16_t x166 = INT16_MAX;
	uint32_t x167 = 135686U;
	int8_t x168 = -9;

    t41 = (((x165>x166)|x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x170 = INT64_MIN;
	uint32_t x172 = UINT32_MAX;
	int32_t t42 = 503587;

    t42 = (((x169>x170)|x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 98134081U;
	int8_t x175 = -1;
	int16_t x176 = -1;
	int32_t t43 = -34532;

    t43 = (((x173>x174)|x175)==x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	uint32_t x178 = UINT32_MAX;
	volatile uint32_t x179 = UINT32_MAX;
	int16_t x180 = 423;
	int32_t t44 = 1021560399;

    t44 = (((x177>x178)|x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -4856;
	int16_t x182 = -1;
	static int64_t x183 = INT64_MAX;
	uint32_t x184 = 259U;
	volatile int32_t t45 = 535;

    t45 = (((x181>x182)|x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x185 = 1U;
	int64_t x186 = -1LL;
	volatile int8_t x187 = INT8_MIN;
	int16_t x188 = -1;

    t46 = (((x185>x186)|x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	uint8_t x190 = 4U;
	static volatile int64_t x191 = 15427207LL;
	volatile int32_t x192 = INT32_MAX;
	static volatile int32_t t47 = 1723089;

    t47 = (((x189>x190)|x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -15646284954175LL;
	static uint32_t x194 = UINT32_MAX;
	uint16_t x195 = 12983U;
	int32_t x196 = INT32_MIN;

    t48 = (((x193>x194)|x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = -1;
	int8_t x198 = -1;
	uint16_t x199 = 131U;
	int32_t x200 = INT32_MIN;

    t49 = (((x197>x198)|x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = UINT8_MAX;
	uint64_t x202 = 6LLU;
	static int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MAX;
	int32_t t50 = -277839;

    t50 = (((x201>x202)|x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	uint64_t x206 = 960759LLU;
	static uint32_t x207 = 471205006U;
	int64_t x208 = -1LL;
	int32_t t51 = -17941407;

    t51 = (((x205>x206)|x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = -1;
	int32_t x210 = 13960440;
	static uint32_t x211 = 1749682573U;
	uint32_t x212 = 15852605U;
	int32_t t52 = -462;

    t52 = (((x209>x210)|x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x213 = UINT16_MAX;
	int8_t x215 = -13;
	volatile int32_t x216 = 1045;
	volatile int32_t t53 = -30;

    t53 = (((x213>x214)|x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x219 = 31696095U;
	int32_t x220 = INT32_MIN;
	int32_t t54 = 304154;

    t54 = (((x217>x218)|x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x222 = UINT8_MAX;
	static int8_t x223 = INT8_MIN;
	static int64_t x224 = INT64_MIN;
	int32_t t55 = -208;

    t55 = (((x221>x222)|x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = -355340091LL;
	static volatile uint8_t x227 = UINT8_MAX;
	int64_t x228 = INT64_MIN;
	int32_t t56 = 16212;

    t56 = (((x225>x226)|x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x230 = -359LL;
	uint32_t x231 = 95477U;
	int32_t x232 = INT32_MAX;
	volatile int32_t t57 = 7715732;

    t57 = (((x229>x230)|x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	int32_t t58 = 72513;

    t58 = (((x233>x234)|x235)==x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -84;
	static int8_t x238 = 0;
	int16_t x240 = -1;
	static volatile int32_t t59 = -33372;

    t59 = (((x237>x238)|x239)==x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	int16_t x242 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MAX;
	int32_t t60 = 1905;

    t60 = (((x241>x242)|x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MIN;
	int64_t x247 = INT64_MAX;
	int32_t t61 = 27503;

    t61 = (((x245>x246)|x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = 52;
	uint8_t x251 = UINT8_MAX;
	static uint64_t x252 = 124286417633LLU;
	volatile int32_t t62 = 569940;

    t62 = (((x249>x250)|x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -59;
	int8_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MIN;
	int32_t t63 = 1;

    t63 = (((x253>x254)|x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = 117559;
	int16_t x258 = INT16_MIN;
	uint32_t x260 = 486133U;
	int32_t t64 = 0;

    t64 = (((x257>x258)|x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	static int8_t x262 = INT8_MIN;
	static int32_t t65 = 10113667;

    t65 = (((x261>x262)|x263)==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MIN;
	uint64_t x266 = 3201LLU;
	int64_t x267 = INT64_MIN;
	static int8_t x268 = INT8_MIN;
	int32_t t66 = -38;

    t66 = (((x265>x266)|x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MIN;
	uint64_t x272 = 38LLU;
	int32_t t67 = 27333;

    t67 = (((x269>x270)|x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x274 = -1;
	int16_t x276 = INT16_MIN;
	int32_t t68 = 117998;

    t68 = (((x273>x274)|x275)==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = 250319;
	volatile int32_t x279 = INT32_MIN;
	uint8_t x280 = 22U;

    t69 = (((x277>x278)|x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = INT64_MAX;
	static volatile int32_t x282 = INT32_MIN;
	uint64_t x283 = 189191284838259LLU;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = 2688076;

    t70 = (((x281>x282)|x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	static int32_t x287 = -1;
	int16_t x288 = INT16_MAX;
	int32_t t71 = 103621994;

    t71 = (((x285>x286)|x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint64_t x291 = UINT64_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t72 = 400369;

    t72 = (((x289>x290)|x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = UINT16_MAX;
	uint8_t x294 = 71U;
	static int8_t x295 = 1;
	uint8_t x296 = 5U;
	int32_t t73 = -25979007;

    t73 = (((x293>x294)|x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	static uint8_t x298 = 0U;
	uint8_t x299 = 29U;
	uint8_t x300 = 9U;

    t74 = (((x297>x298)|x299)==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x301 = 145209893592516916LLU;
	uint64_t x302 = 1619005LLU;
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t75 = 128021217;

    t75 = (((x301>x302)|x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = INT32_MIN;
	volatile int32_t t76 = 141451050;

    t76 = (((x305>x306)|x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -1160056;
	uint64_t x311 = 1567804826628LLU;
	int64_t x312 = INT64_MIN;
	static int32_t t77 = -140842;

    t77 = (((x309>x310)|x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -30;
	static int16_t x315 = -514;
	uint32_t x316 = 9631U;
	volatile int32_t t78 = 1;

    t78 = (((x313>x314)|x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = 2;
	int32_t x319 = INT32_MIN;
	volatile int64_t x320 = INT64_MIN;
	static int32_t t79 = -1528927;

    t79 = (((x317>x318)|x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = 1233;
	static int8_t x323 = -49;
	int32_t x324 = INT32_MIN;
	int32_t t80 = -10388057;

    t80 = (((x321>x322)|x323)==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint32_t x325 = 266539497U;
	volatile uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MIN;
	static int32_t x328 = INT32_MIN;
	int32_t t81 = -20124;

    t81 = (((x325>x326)|x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = -1;
	uint16_t x331 = UINT16_MAX;
	int64_t x332 = -23461261978495LL;
	static int32_t t82 = 3090078;

    t82 = (((x329>x330)|x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = INT16_MIN;
	int8_t x335 = INT8_MAX;
	int32_t t83 = 3;

    t83 = (((x333>x334)|x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	static uint8_t x338 = UINT8_MAX;
	uint64_t x339 = UINT64_MAX;
	uint16_t x340 = UINT16_MAX;

    t84 = (((x337>x338)|x339)==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x341 = 7477838922401982827LLU;
	uint32_t x342 = 2956U;
	int32_t x343 = -22550;
	int32_t x344 = -1;

    t85 = (((x341>x342)|x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MAX;
	int32_t x346 = 178315;
	static uint64_t x347 = UINT64_MAX;
	uint32_t x348 = 111936172U;
	static int32_t t86 = 59;

    t86 = (((x345>x346)|x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = UINT8_MAX;
	static int8_t x350 = INT8_MAX;
	volatile int32_t x351 = INT32_MAX;
	static int64_t x352 = INT64_MAX;
	int32_t t87 = 94138684;

    t87 = (((x349>x350)|x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = UINT64_MAX;
	uint32_t x354 = UINT32_MAX;
	uint8_t x355 = UINT8_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = -1453622;

    t88 = (((x353>x354)|x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MIN;
	int8_t x358 = -1;
	static volatile int16_t x359 = INT16_MAX;
	static int64_t x360 = INT64_MIN;
	volatile int32_t t89 = -137;

    t89 = (((x357>x358)|x359)==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 3367U;
	int8_t x363 = 2;
	uint16_t x364 = 1U;
	int32_t t90 = -52061;

    t90 = (((x361>x362)|x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	volatile uint32_t x366 = UINT32_MAX;
	volatile uint16_t x368 = 3087U;
	int32_t t91 = -27;

    t91 = (((x365>x366)|x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x370 = INT16_MIN;
	int16_t x371 = -1;
	int8_t x372 = INT8_MAX;

    t92 = (((x369>x370)|x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	uint8_t x374 = UINT8_MAX;
	static int8_t x376 = INT8_MAX;
	int32_t t93 = 52;

    t93 = (((x373>x374)|x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x378 = INT64_MIN;
	int8_t x379 = -1;
	int16_t x380 = 4828;

    t94 = (((x377>x378)|x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x382 = 7U;
	static volatile int32_t t95 = -134;

    t95 = (((x381>x382)|x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x386 = -13;
	int64_t x387 = 221148368477173LL;
	int8_t x388 = -1;
	int32_t t96 = 25;

    t96 = (((x385>x386)|x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x390 = INT8_MAX;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = 56915659794639806LLU;
	int32_t t97 = -4368;

    t97 = (((x389>x390)|x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x395 = -229399935268667LL;
	int32_t t98 = -3948484;

    t98 = (((x393>x394)|x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = -1;
	int8_t x398 = INT8_MIN;
	int8_t x399 = -1;
	static int32_t t99 = 1;

    t99 = (((x397>x398)|x399)==x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 29451U;
	int16_t x402 = INT16_MIN;
	volatile int64_t x403 = INT64_MAX;
	static int32_t x404 = 1030349165;
	volatile int32_t t100 = 612314426;

    t100 = (((x401>x402)|x403)==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x406 = UINT64_MAX;
	int32_t x407 = INT32_MIN;
	uint64_t x408 = UINT64_MAX;
	int32_t t101 = 14000872;

    t101 = (((x405>x406)|x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = INT32_MAX;
	volatile int32_t t102 = 4;

    t102 = (((x409>x410)|x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MAX;
	volatile uint8_t x415 = UINT8_MAX;
	int8_t x416 = INT8_MAX;
	int32_t t103 = 45395;

    t103 = (((x413>x414)|x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 1;
	static int16_t x418 = INT16_MIN;
	static int32_t x419 = 18;
	volatile int32_t t104 = 870087;

    t104 = (((x417>x418)|x419)==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x422 = UINT32_MAX;
	int32_t x423 = INT32_MIN;
	int32_t t105 = -15633404;

    t105 = (((x421>x422)|x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 961697981LL;
	uint64_t x426 = UINT64_MAX;
	volatile int16_t x427 = 9070;
	int32_t x428 = INT32_MAX;
	volatile int32_t t106 = -5065628;

    t106 = (((x425>x426)|x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = -1;
	volatile int8_t x431 = INT8_MIN;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t107 = -1;

    t107 = (((x429>x430)|x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = 1;
	uint32_t x435 = UINT32_MAX;
	volatile int32_t t108 = -63441610;

    t108 = (((x433>x434)|x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x439 = INT16_MIN;
	int64_t x440 = INT64_MIN;
	int32_t t109 = -2145297;

    t109 = (((x437>x438)|x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MAX;
	int16_t x442 = -1;
	volatile int32_t x443 = INT32_MIN;
	int64_t x444 = INT64_MIN;

    t110 = (((x441>x442)|x443)==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x445 = UINT64_MAX;
	volatile int32_t x447 = 12;
	volatile int8_t x448 = -1;

    t111 = (((x445>x446)|x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x449 = 163U;
	static volatile uint64_t x450 = 2660370LLU;
	static int64_t x451 = 10329LL;
	int16_t x452 = -1;
	int32_t t112 = -27;

    t112 = (((x449>x450)|x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = INT32_MIN;
	static uint16_t x454 = 893U;
	volatile uint64_t x455 = 13254752LLU;
	volatile int64_t x456 = -1LL;
	int32_t t113 = 1;

    t113 = (((x453>x454)|x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	int16_t x458 = INT16_MIN;
	int8_t x459 = -1;
	int32_t x460 = INT32_MIN;
	static int32_t t114 = 77;

    t114 = (((x457>x458)|x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x462 = 2712LL;
	volatile int16_t x463 = -6;
	volatile int32_t t115 = 24389196;

    t115 = (((x461>x462)|x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = UINT32_MAX;
	uint8_t x466 = 0U;
	volatile uint64_t x467 = 11344759LLU;
	uint32_t x468 = 105248U;
	volatile int32_t t116 = 647;

    t116 = (((x465>x466)|x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 1U;
	uint64_t x470 = 243705828745LLU;
	static uint64_t x471 = UINT64_MAX;
	static int32_t t117 = -25652;

    t117 = (((x469>x470)|x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x473 = INT8_MIN;
	static int64_t x474 = 3790924144237LL;
	int8_t x476 = INT8_MAX;
	volatile int32_t t118 = -1;

    t118 = (((x473>x474)|x475)==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 53413885U;
	int32_t x478 = 27;
	uint8_t x479 = 61U;
	static int16_t x480 = INT16_MIN;
	volatile int32_t t119 = 1444;

    t119 = (((x477>x478)|x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = -101;
	static int64_t x482 = INT64_MIN;
	volatile int64_t x483 = INT64_MIN;

    t120 = (((x481>x482)|x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x485 = 9U;
	int32_t x486 = -1;
	volatile int8_t x488 = INT8_MIN;

    t121 = (((x485>x486)|x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	int32_t x490 = INT32_MIN;
	static volatile int8_t x491 = -1;
	int16_t x492 = -17;
	static volatile int32_t t122 = 1834;

    t122 = (((x489>x490)|x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x494 = 1U;
	uint8_t x495 = 1U;
	volatile uint16_t x496 = UINT16_MAX;

    t123 = (((x493>x494)|x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -937288LL;
	uint32_t x498 = 19634222U;
	int64_t x500 = 407LL;
	volatile int32_t t124 = 900765268;

    t124 = (((x497>x498)|x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 318155974LLU;
	uint32_t x502 = UINT32_MAX;
	int8_t x503 = INT8_MIN;

    t125 = (((x501>x502)|x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1LL;
	uint64_t x506 = UINT64_MAX;
	static int16_t x507 = 2489;
	uint8_t x508 = 3U;
	int32_t t126 = -1313;

    t126 = (((x505>x506)|x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -1;
	uint8_t x511 = 4U;
	static uint64_t x512 = 507923715095967618LLU;
	volatile int32_t t127 = -11;

    t127 = (((x509>x510)|x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -6;
	static int32_t x514 = INT32_MIN;
	static int64_t x515 = INT64_MIN;
	static int8_t x516 = INT8_MIN;
	volatile int32_t t128 = -973;

    t128 = (((x513>x514)|x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = -303685367319LL;
	volatile int16_t x518 = -149;
	static int16_t x520 = INT16_MIN;
	int32_t t129 = -134;

    t129 = (((x517>x518)|x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x521 = 8U;
	int16_t x523 = INT16_MIN;
	uint32_t x524 = 0U;
	volatile int32_t t130 = 60;

    t130 = (((x521>x522)|x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 9972155522299888LLU;
	uint16_t x526 = 21U;
	volatile int32_t x527 = INT32_MIN;
	volatile int8_t x528 = -1;
	int32_t t131 = 576408773;

    t131 = (((x525>x526)|x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x530 = 53;
	int8_t x531 = INT8_MIN;
	int32_t t132 = -18842843;

    t132 = (((x529>x530)|x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x533 = 985356225U;
	uint8_t x534 = 24U;
	static int8_t x535 = -1;
	static int32_t x536 = 592347717;
	int32_t t133 = -24047;

    t133 = (((x533>x534)|x535)==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x537 = UINT8_MAX;
	int16_t x538 = -1;
	int16_t x539 = -74;
	int64_t x540 = -1LL;
	volatile int32_t t134 = -54263;

    t134 = (((x537>x538)|x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = INT8_MIN;
	int32_t x542 = INT32_MAX;
	static uint32_t x543 = 224U;
	int8_t x544 = -1;
	int32_t t135 = 367439553;

    t135 = (((x541>x542)|x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -1;
	int32_t x546 = INT32_MAX;
	volatile int8_t x547 = INT8_MIN;
	static int64_t x548 = INT64_MAX;
	int32_t t136 = 4516;

    t136 = (((x545>x546)|x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	int16_t x550 = 2;
	int8_t x551 = -1;
	int64_t x552 = INT64_MIN;
	volatile int32_t t137 = -94015;

    t137 = (((x549>x550)|x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 235;
	uint16_t x554 = 97U;
	uint16_t x555 = 57U;
	int64_t x556 = INT64_MIN;
	int32_t t138 = -23414;

    t138 = (((x553>x554)|x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x559 = -5;
	int32_t t139 = 0;

    t139 = (((x557>x558)|x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	uint64_t x562 = UINT64_MAX;
	static int64_t x563 = -294020LL;
	static uint64_t x564 = UINT64_MAX;
	volatile int32_t t140 = -188710549;

    t140 = (((x561>x562)|x563)==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = UINT32_MAX;
	uint8_t x566 = 84U;
	static int32_t x568 = -1;
	volatile int32_t t141 = 2625;

    t141 = (((x565>x566)|x567)==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	int64_t x571 = INT64_MIN;
	int16_t x572 = INT16_MAX;
	static int32_t t142 = 395;

    t142 = (((x569>x570)|x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x573 = 623388896254127014LLU;
	int64_t x575 = 21900258LL;
	volatile int32_t t143 = 847;

    t143 = (((x573>x574)|x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x578 = -1;
	volatile int8_t x580 = 0;
	static volatile int32_t t144 = -48;

    t144 = (((x577>x578)|x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = -1;
	int8_t x584 = -1;
	int32_t t145 = -1;

    t145 = (((x581>x582)|x583)==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -3379667LL;
	static int64_t x586 = INT64_MAX;
	int32_t t146 = -529;

    t146 = (((x585>x586)|x587)==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x589 = INT64_MIN;
	int16_t x591 = INT16_MAX;
	int32_t x592 = INT32_MIN;
	int32_t t147 = 7;

    t147 = (((x589>x590)|x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x593 = INT32_MAX;
	int16_t x594 = 1;
	int16_t x595 = INT16_MIN;
	int64_t x596 = -2154228199271444LL;
	int32_t t148 = 337525;

    t148 = (((x593>x594)|x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MIN;
	uint64_t x598 = UINT64_MAX;
	static int64_t x599 = INT64_MIN;
	int32_t t149 = -1;

    t149 = (((x597>x598)|x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x601 = 408925LLU;
	int32_t x602 = INT32_MIN;
	uint16_t x603 = UINT16_MAX;
	int64_t x604 = INT64_MIN;
	volatile int32_t t150 = 14;

    t150 = (((x601>x602)|x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = 1U;
	volatile int64_t x607 = INT64_MIN;
	volatile int32_t t151 = 58870923;

    t151 = (((x605>x606)|x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = INT64_MIN;
	int32_t x611 = 1;
	int64_t x612 = 3095540989899383656LL;
	static volatile int32_t t152 = -1018;

    t152 = (((x609>x610)|x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -1682;
	uint32_t x614 = 8U;
	int32_t x615 = INT32_MIN;
	int64_t x616 = -1LL;
	int32_t t153 = 232024;

    t153 = (((x613>x614)|x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = UINT16_MAX;
	static volatile uint32_t x619 = 573328U;
	static uint32_t x620 = 54U;
	volatile int32_t t154 = 24737;

    t154 = (((x617>x618)|x619)==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x622 = 68501364806LLU;
	volatile uint16_t x623 = UINT16_MAX;
	uint8_t x624 = 59U;
	volatile int32_t t155 = -7342;

    t155 = (((x621>x622)|x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 15049LL;
	static int32_t x626 = INT32_MIN;
	static int64_t x627 = INT64_MIN;
	int32_t t156 = 1415;

    t156 = (((x625>x626)|x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MAX;
	int16_t x630 = INT16_MIN;
	uint32_t x631 = 56631647U;
	int32_t x632 = INT32_MAX;
	int32_t t157 = -33635;

    t157 = (((x629>x630)|x631)==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	int16_t x634 = INT16_MIN;
	volatile int8_t x635 = 3;
	uint16_t x636 = 220U;
	volatile int32_t t158 = -37;

    t158 = (((x633>x634)|x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x638 = INT16_MIN;
	static int32_t x639 = 48033801;
	int32_t t159 = -18715;

    t159 = (((x637>x638)|x639)==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = INT8_MIN;
	int8_t x642 = INT8_MIN;
	int16_t x643 = INT16_MIN;
	volatile uint16_t x644 = UINT16_MAX;
	int32_t t160 = 982;

    t160 = (((x641>x642)|x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -1LL;
	int8_t x646 = INT8_MIN;
	int64_t x647 = -1LL;
	int16_t x648 = -6402;
	volatile int32_t t161 = -91;

    t161 = (((x645>x646)|x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = -8426;
	uint64_t x650 = 484850788219LLU;
	int8_t x651 = 0;
	uint16_t x652 = UINT16_MAX;
	volatile int32_t t162 = 280124;

    t162 = (((x649>x650)|x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	volatile int8_t x654 = INT8_MAX;
	static int64_t x655 = INT64_MIN;
	volatile uint16_t x656 = UINT16_MAX;

    t163 = (((x653>x654)|x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x657 = 709U;
	uint32_t x658 = 228U;
	int16_t x659 = INT16_MIN;
	volatile int32_t x660 = INT32_MAX;
	static int32_t t164 = 41798758;

    t164 = (((x657>x658)|x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = INT64_MIN;
	int8_t x662 = 6;
	static uint8_t x663 = 83U;
	static int64_t x664 = INT64_MAX;
	static int32_t t165 = -149;

    t165 = (((x661>x662)|x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -30550078821LL;
	uint64_t x666 = 8007799458359354LLU;
	int8_t x668 = INT8_MIN;
	static volatile int32_t t166 = -27;

    t166 = (((x665>x666)|x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	volatile int64_t x670 = -1LL;
	int16_t x671 = INT16_MIN;
	int32_t t167 = -4;

    t167 = (((x669>x670)|x671)==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	volatile int16_t x674 = INT16_MIN;
	int8_t x676 = -27;

    t168 = (((x673>x674)|x675)==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -66;
	int64_t x678 = INT64_MIN;
	uint32_t x679 = UINT32_MAX;
	int16_t x680 = INT16_MIN;
	volatile int32_t t169 = -225;

    t169 = (((x677>x678)|x679)==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = 20591588;
	static volatile int16_t x682 = 3;
	int32_t x683 = 309;

    t170 = (((x681>x682)|x683)==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 133U;
	static int64_t x686 = INT64_MAX;
	uint32_t x687 = 3U;
	int64_t x688 = 18LL;

    t171 = (((x685>x686)|x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = UINT64_MAX;
	int16_t x690 = INT16_MIN;
	static uint64_t x692 = 129930879474825539LLU;
	static int32_t t172 = 2;

    t172 = (((x689>x690)|x691)==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x693 = INT16_MIN;
	volatile int32_t x695 = INT32_MIN;
	volatile int8_t x696 = INT8_MIN;
	int32_t t173 = 570758884;

    t173 = (((x693>x694)|x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = UINT8_MAX;
	static int16_t x698 = INT16_MIN;
	int16_t x699 = INT16_MIN;
	static int32_t t174 = 490906132;

    t174 = (((x697>x698)|x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	int64_t x702 = INT64_MAX;
	volatile int16_t x704 = INT16_MIN;
	static int32_t t175 = -815;

    t175 = (((x701>x702)|x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x706 = 23527980LLU;
	int16_t x708 = INT16_MAX;
	int32_t t176 = -695613;

    t176 = (((x705>x706)|x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	uint8_t x710 = 40U;
	int32_t t177 = -85;

    t177 = (((x709>x710)|x711)==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x714 = 5910765511577LLU;
	int8_t x715 = -1;
	uint8_t x716 = 0U;
	int32_t t178 = -1250212;

    t178 = (((x713>x714)|x715)==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x718 = 912278LL;
	uint64_t x719 = UINT64_MAX;
	uint8_t x720 = 54U;
	static volatile int32_t t179 = -806711;

    t179 = (((x717>x718)|x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = INT32_MIN;
	int64_t x722 = 91122915LL;
	int64_t x723 = -771445944030266706LL;
	int16_t x724 = INT16_MIN;
	int32_t t180 = -41713;

    t180 = (((x721>x722)|x723)==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = 484LL;
	volatile int8_t x726 = 24;
	static int32_t x727 = INT32_MIN;
	int64_t x728 = INT64_MIN;
	int32_t t181 = -11738;

    t181 = (((x725>x726)|x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MIN;
	static int8_t x730 = INT8_MIN;
	uint8_t x731 = 81U;
	static uint8_t x732 = 41U;
	volatile int32_t t182 = -16816;

    t182 = (((x729>x730)|x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	volatile int32_t x734 = INT32_MIN;
	int16_t x735 = 0;
	volatile uint32_t x736 = 473819U;
	static int32_t t183 = -1;

    t183 = (((x733>x734)|x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MIN;
	volatile int16_t x739 = -1;
	static int64_t x740 = -10805683833266LL;

    t184 = (((x737>x738)|x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x741 = -1LL;
	static uint32_t x742 = 1959U;
	static uint16_t x743 = 9U;
	volatile int32_t t185 = -798025526;

    t185 = (((x741>x742)|x743)==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = UINT64_MAX;
	int32_t x748 = INT32_MIN;
	volatile int32_t t186 = 1841536;

    t186 = (((x745>x746)|x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x749 = INT16_MIN;
	uint16_t x751 = 0U;
	uint8_t x752 = 2U;
	int32_t t187 = 1061014876;

    t187 = (((x749>x750)|x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x754 = 1025013;
	uint16_t x755 = UINT16_MAX;
	volatile uint32_t x756 = UINT32_MAX;
	volatile int32_t t188 = -294274246;

    t188 = (((x753>x754)|x755)==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x757 = INT32_MIN;
	uint16_t x758 = 0U;
	int8_t x759 = -19;
	int64_t x760 = -1LL;
	int32_t t189 = 24193;

    t189 = (((x757>x758)|x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	int8_t x762 = INT8_MAX;
	int16_t x763 = -1;

    t190 = (((x761>x762)|x763)==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x767 = INT16_MIN;
	volatile int32_t t191 = 28;

    t191 = (((x765>x766)|x767)==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -2;
	int16_t x771 = 382;
	int32_t x772 = -127;
	int32_t t192 = 1402027;

    t192 = (((x769>x770)|x771)==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x774 = -1;
	uint32_t x775 = UINT32_MAX;
	uint8_t x776 = 0U;
	static volatile int32_t t193 = -7;

    t193 = (((x773>x774)|x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = INT16_MIN;
	int16_t x778 = 0;
	int64_t x779 = INT64_MIN;
	uint16_t x780 = 3U;

    t194 = (((x777>x778)|x779)==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x782 = -1;
	volatile int32_t x783 = -1;
	int32_t x784 = 90308215;
	int32_t t195 = -913887;

    t195 = (((x781>x782)|x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	volatile int16_t x786 = INT16_MIN;
	static int64_t x787 = 494095LL;
	int32_t x788 = INT32_MIN;
	volatile int32_t t196 = 1300614;

    t196 = (((x785>x786)|x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x789 = 2007U;
	int8_t x790 = -4;
	int8_t x792 = INT8_MIN;
	int32_t t197 = 6224;

    t197 = (((x789>x790)|x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x793 = INT16_MIN;
	uint32_t x795 = 2U;
	int16_t x796 = -1;

    t198 = (((x793>x794)|x795)==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x797 = 831147U;
	int8_t x799 = INT8_MIN;
	volatile int8_t x800 = INT8_MAX;

    t199 = (((x797>x798)|x799)==x800);

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

