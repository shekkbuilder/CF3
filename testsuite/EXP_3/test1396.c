
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

uint16_t x2 = 739U;
volatile uint32_t x4 = 3U;
int32_t x9 = INT32_MAX;
int8_t x10 = INT8_MAX;
volatile int64_t x26 = INT64_MAX;
int16_t x28 = INT16_MIN;
static int32_t t4 = 19112838;
uint64_t x38 = 2932902LLU;
int8_t x45 = INT8_MAX;
int32_t x57 = 290864;
static volatile int32_t t10 = 108;
int8_t x66 = INT8_MIN;
int32_t t12 = -304168610;
int64_t x76 = INT64_MIN;
static volatile int16_t x91 = INT16_MAX;
volatile int8_t x106 = INT8_MIN;
uint32_t x107 = 612U;
static uint16_t x110 = UINT16_MAX;
uint32_t x111 = UINT32_MAX;
int32_t t20 = -1;
uint32_t x121 = 13925432U;
int64_t x122 = -972213144260880335LL;
int8_t x131 = 1;
volatile int32_t x132 = INT32_MAX;
static volatile int32_t t25 = -229278;
int32_t t27 = -13386;
int16_t x149 = 9;
volatile int8_t x157 = -2;
static int32_t t30 = -19026646;
int16_t x168 = 0;
static volatile int32_t t33 = -5343;
uint32_t x183 = 42U;
int16_t x184 = INT16_MIN;
static uint16_t x195 = 942U;
volatile int32_t t37 = 275908804;
int8_t x217 = -1;
int8_t x219 = INT8_MAX;
uint8_t x229 = 10U;
volatile int32_t t46 = 242808;
int8_t x237 = -33;
static volatile int32_t t47 = -569;
volatile int32_t t48 = -939776;
static volatile uint16_t x256 = 585U;
static volatile uint16_t x260 = 6U;
uint64_t x266 = 225557369610797LLU;
int8_t x268 = -2;
int32_t t56 = 1473;
static uint32_t x288 = 389U;
static int32_t x291 = INT32_MIN;
static int32_t x293 = INT32_MIN;
static uint64_t x296 = 100782233LLU;
volatile uint64_t x297 = UINT64_MAX;
int8_t x298 = -1;
static int16_t x300 = INT16_MAX;
uint16_t x301 = 63U;
volatile int32_t t64 = 30366;
volatile int32_t x316 = INT32_MAX;
uint8_t x322 = 3U;
static int8_t x330 = INT8_MAX;
static int64_t x331 = INT64_MIN;
uint16_t x334 = 2U;
int8_t x336 = INT8_MAX;
uint32_t x344 = 138U;
static int32_t t74 = -672;
volatile uint16_t x349 = 17111U;
volatile int32_t t75 = 649570396;
volatile int64_t x354 = 56432017570845LL;
static int32_t x355 = -1;
int16_t x357 = INT16_MAX;
volatile int32_t x358 = 1486053;
volatile int32_t t77 = 1478551;
int32_t t78 = 341479;
static volatile int8_t x373 = INT8_MIN;
uint16_t x395 = 591U;
int8_t x396 = -1;
volatile int16_t x415 = 3;
uint16_t x419 = 6U;
volatile int32_t t91 = -36891613;
uint16_t x430 = 0U;
int8_t x433 = -8;
volatile int16_t x437 = 1;
volatile int64_t x438 = INT64_MAX;
volatile int32_t x441 = INT32_MIN;
volatile int16_t x443 = INT16_MIN;
int32_t t95 = -847;
uint64_t x465 = UINT64_MAX;
static int32_t t99 = -307619616;
static int64_t x469 = INT64_MIN;
int32_t x476 = -1;
static volatile int8_t x477 = INT8_MAX;
int8_t x483 = INT8_MIN;
static int8_t x487 = INT8_MIN;
int64_t x488 = 16233LL;
int8_t x491 = INT8_MIN;
static int64_t x496 = -2380572396691942LL;
int32_t x502 = INT32_MAX;
static volatile int64_t x503 = INT64_MAX;
uint16_t x510 = 24U;
int8_t x511 = 0;
int64_t x514 = -3LL;
uint64_t x515 = UINT64_MAX;
volatile int32_t t110 = -15095;
uint16_t x519 = 325U;
static int32_t x527 = -1;
volatile int32_t t114 = -39483;
uint32_t x539 = UINT32_MAX;
static uint16_t x544 = 0U;
volatile int32_t t117 = -23;
uint64_t x545 = 187710LLU;
volatile int32_t x548 = INT32_MIN;
volatile int32_t t118 = -299047;
static int64_t x550 = -1LL;
volatile int8_t x551 = INT8_MIN;
static int16_t x558 = 1;
uint32_t x560 = UINT32_MAX;
uint8_t x561 = 1U;
int8_t x568 = INT8_MAX;
uint32_t x570 = 23755U;
int16_t x572 = INT16_MAX;
volatile int32_t t125 = 14;
volatile int16_t x578 = -1;
volatile int32_t t126 = -226;
int16_t x586 = INT16_MIN;
uint16_t x589 = UINT16_MAX;
int8_t x591 = -1;
int32_t t129 = 121716;
volatile int16_t x599 = 950;
volatile int32_t t132 = 8357190;
static int8_t x610 = INT8_MIN;
static int32_t x612 = INT32_MIN;
volatile int16_t x613 = INT16_MIN;
int32_t x614 = 3163247;
uint8_t x615 = 2U;
int16_t x621 = INT16_MIN;
static volatile int64_t x622 = INT64_MIN;
volatile int32_t x628 = -5497;
uint64_t x632 = 49495158358LLU;
int32_t x633 = INT32_MIN;
uint64_t x639 = 2002604036LLU;
int32_t t141 = 962646138;
int8_t x642 = INT8_MIN;
int8_t x653 = -1;
static int8_t x657 = INT8_MAX;
int64_t x660 = INT64_MAX;
int32_t t146 = 0;
uint16_t x663 = 2U;
volatile int32_t t147 = -27461508;
int8_t x665 = INT8_MIN;
uint16_t x667 = UINT16_MAX;
static int32_t x686 = -1;
static volatile int64_t x689 = -795LL;
int8_t x692 = -1;
volatile uint16_t x693 = 2U;
static uint16_t x695 = UINT16_MAX;
static int16_t x699 = 2295;
int32_t t156 = 0;
int32_t x705 = 19464;
static int64_t x708 = 105146924905LL;
static uint64_t x709 = 7335LLU;
uint16_t x711 = 5U;
int8_t x719 = INT8_MIN;
uint8_t x726 = 73U;
volatile int32_t t162 = 9;
uint64_t x734 = 54020823LLU;
int32_t t164 = 149;
int8_t x739 = 29;
int32_t x740 = INT32_MIN;
volatile int8_t x742 = INT8_MIN;
int64_t x744 = INT64_MAX;
int32_t t166 = 122737;
int8_t x748 = INT8_MAX;
volatile int16_t x754 = -12006;
static uint64_t x759 = 32098766424LLU;
int32_t t170 = 400283889;
int8_t x770 = -1;
int32_t t172 = -168753379;
int64_t x775 = 12108LL;
int8_t x776 = INT8_MIN;
volatile int16_t x778 = INT16_MIN;
static uint32_t x782 = 48342U;
volatile int32_t t175 = 477368;
int32_t x802 = -1;
int16_t x803 = INT16_MAX;
int32_t t179 = -32;
uint16_t x807 = UINT16_MAX;
uint8_t x811 = 0U;
int32_t x812 = 635;
static uint8_t x820 = 1U;
uint32_t x821 = UINT32_MAX;
volatile int32_t x822 = INT32_MIN;
volatile int32_t t184 = 231459039;
static volatile int8_t x838 = -14;
static int32_t x843 = INT32_MIN;
volatile int32_t t189 = 648807;
static int32_t t190 = 107425259;
int64_t x856 = 184494LL;
uint64_t x862 = 2124413416041210436LLU;
int8_t x864 = INT8_MIN;
volatile int32_t t193 = 115766;
static int64_t x869 = INT64_MIN;
volatile int8_t x873 = INT8_MIN;
static int16_t x876 = -7017;
static int32_t t196 = -4379;
uint16_t x883 = UINT16_MAX;
static int8_t x890 = -1;


void f0(void) {
    	static volatile uint64_t x1 = 417383LLU;
	int32_t x3 = 4955;
	volatile int32_t t0 = 227;

    t0 = ((x1-x2)<=(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	int32_t x6 = -1;
	static uint8_t x7 = UINT8_MAX;
	static int64_t x8 = -1LL;
	volatile int32_t t1 = -1500114;

    t1 = ((x5-x6)<=(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x11 = -9764;
	int32_t x12 = -1;
	static volatile int32_t t2 = -196172220;

    t2 = ((x9-x10)<=(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 71U;
	static uint8_t x18 = UINT8_MAX;
	int8_t x19 = INT8_MAX;
	static int32_t x20 = 21250441;
	volatile int32_t t3 = -31;

    t3 = ((x17-x18)<=(x19==x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x25 = -1LL;
	uint64_t x27 = 208LLU;

    t4 = ((x25-x26)<=(x27==x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x33 = 3U;
	int16_t x34 = INT16_MIN;
	static volatile int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MAX;
	int32_t t5 = -1;

    t5 = ((x33-x34)<=(x35==x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x37 = UINT16_MAX;
	int32_t x39 = -331894;
	volatile int8_t x40 = -1;
	volatile int32_t t6 = -230282;

    t6 = ((x37-x38)<=(x39==x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x41 = 7019U;
	uint64_t x42 = 10271LLU;
	static volatile int8_t x43 = INT8_MIN;
	volatile int8_t x44 = -1;
	static volatile int32_t t7 = 5033557;

    t7 = ((x41-x42)<=(x43==x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x46 = -1LL;
	static volatile uint8_t x47 = 49U;
	static uint64_t x48 = 451832808777LLU;
	volatile int32_t t8 = 802280721;

    t8 = ((x45-x46)<=(x47==x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x53 = INT16_MAX;
	uint64_t x54 = 321884270LLU;
	int8_t x55 = INT8_MAX;
	static int32_t x56 = INT32_MAX;
	int32_t t9 = 1969;

    t9 = ((x53-x54)<=(x55==x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x58 = -1LL;
	uint32_t x59 = 7003706U;
	int8_t x60 = 1;

    t10 = ((x57-x58)<=(x59==x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x61 = UINT64_MAX;
	static int32_t x62 = INT32_MIN;
	int16_t x63 = -2;
	int8_t x64 = -1;
	static volatile int32_t t11 = 1;

    t11 = ((x61-x62)<=(x63==x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = INT16_MAX;
	static uint64_t x67 = 398021755531265530LLU;
	int8_t x68 = INT8_MIN;

    t12 = ((x65-x66)<=(x67==x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x73 = UINT32_MAX;
	uint8_t x74 = 20U;
	int8_t x75 = -7;
	int32_t t13 = 6;

    t13 = ((x73-x74)<=(x75==x76));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x77 = 0U;
	volatile uint64_t x78 = 7180760755261LLU;
	static int16_t x79 = 229;
	int8_t x80 = 1;
	int32_t t14 = 436;

    t14 = ((x77-x78)<=(x79==x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x81 = INT16_MIN;
	static volatile int32_t x82 = 7953402;
	static int8_t x83 = INT8_MIN;
	static int32_t x84 = 9919;
	static volatile int32_t t15 = 1636;

    t15 = ((x81-x82)<=(x83==x84));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x89 = INT16_MAX;
	int32_t x90 = -1;
	int8_t x92 = 6;
	int32_t t16 = 188;

    t16 = ((x89-x90)<=(x91==x92));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x93 = -1;
	uint32_t x94 = 183606U;
	int16_t x95 = INT16_MIN;
	static int64_t x96 = INT64_MAX;
	static int32_t t17 = -250;

    t17 = ((x93-x94)<=(x95==x96));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x97 = -1LL;
	static int64_t x98 = INT64_MIN;
	volatile uint32_t x99 = 4U;
	int64_t x100 = INT64_MIN;
	volatile int32_t t18 = 2837054;

    t18 = ((x97-x98)<=(x99==x100));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x105 = 1591521300440LLU;
	volatile uint64_t x108 = 2093702265LLU;
	int32_t t19 = -22112790;

    t19 = ((x105-x106)<=(x107==x108));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x109 = -1;
	int8_t x112 = INT8_MAX;

    t20 = ((x109-x110)<=(x111==x112));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x113 = -6;
	int32_t x114 = -3;
	int16_t x115 = -1;
	int16_t x116 = 3;
	int32_t t21 = -652831150;

    t21 = ((x113-x114)<=(x115==x116));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x117 = UINT16_MAX;
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MIN;
	volatile int32_t t22 = 194606;

    t22 = ((x117-x118)<=(x119==x120));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x123 = INT8_MIN;
	int32_t x124 = -3542;
	volatile int32_t t23 = -32003659;

    t23 = ((x121-x122)<=(x123==x124));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = UINT8_MAX;
	int32_t t24 = -156;

    t24 = ((x129-x130)<=(x131==x132));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x133 = 40085LLU;
	int32_t x134 = INT32_MIN;
	int32_t x135 = -435872;
	uint32_t x136 = 12U;

    t25 = ((x133-x134)<=(x135==x136));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x137 = 14868U;
	static volatile uint16_t x138 = 23U;
	int32_t x139 = -1004656;
	int16_t x140 = -1;
	volatile int32_t t26 = -965293256;

    t26 = ((x137-x138)<=(x139==x140));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x141 = UINT16_MAX;
	static int64_t x142 = -1589961049852879LL;
	volatile int16_t x143 = INT16_MAX;
	volatile int16_t x144 = -13787;

    t27 = ((x141-x142)<=(x143==x144));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x145 = -429348695326094LL;
	int16_t x146 = -1;
	int16_t x147 = INT16_MIN;
	int8_t x148 = -1;
	static int32_t t28 = 13;

    t28 = ((x145-x146)<=(x147==x148));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x150 = INT8_MIN;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MIN;
	volatile int32_t t29 = 1599166;

    t29 = ((x149-x150)<=(x151==x152));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x158 = 143U;
	volatile uint16_t x159 = 11U;
	int16_t x160 = INT16_MIN;

    t30 = ((x157-x158)<=(x159==x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x161 = 10569378154LL;
	uint32_t x162 = 1723U;
	uint8_t x163 = 24U;
	int32_t x164 = -1;
	int32_t t31 = -6162629;

    t31 = ((x161-x162)<=(x163==x164));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x165 = INT8_MIN;
	volatile int64_t x166 = -1LL;
	static volatile int16_t x167 = INT16_MAX;
	int32_t t32 = 263195234;

    t32 = ((x165-x166)<=(x167==x168));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x169 = 13557540U;
	static int32_t x170 = 6785;
	uint64_t x171 = 694725LLU;
	int8_t x172 = -34;

    t33 = ((x169-x170)<=(x171==x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x173 = -22910LL;
	uint16_t x174 = UINT16_MAX;
	uint64_t x175 = 668LLU;
	uint64_t x176 = 6001LLU;
	int32_t t34 = -44055755;

    t34 = ((x173-x174)<=(x175==x176));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x177 = INT16_MAX;
	int64_t x178 = -1LL;
	uint64_t x179 = 2054118422639373LLU;
	int16_t x180 = -1;
	int32_t t35 = 1371808;

    t35 = ((x177-x178)<=(x179==x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x181 = 87987224LLU;
	uint32_t x182 = 109U;
	static volatile int32_t t36 = -21951;

    t36 = ((x181-x182)<=(x183==x184));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x193 = -1;
	volatile int16_t x194 = 2812;
	static int64_t x196 = 669LL;

    t37 = ((x193-x194)<=(x195==x196));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MAX;
	static volatile uint8_t x199 = UINT8_MAX;
	int8_t x200 = INT8_MAX;
	static int32_t t38 = -510769;

    t38 = ((x197-x198)<=(x199==x200));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x201 = -707LL;
	static volatile uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 17552U;
	static uint8_t x204 = 3U;
	static volatile int32_t t39 = 297806;

    t39 = ((x201-x202)<=(x203==x204));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x209 = 81405415LL;
	uint64_t x210 = 867020870LLU;
	volatile uint8_t x211 = UINT8_MAX;
	int8_t x212 = -1;
	int32_t t40 = -105;

    t40 = ((x209-x210)<=(x211==x212));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x213 = 6U;
	int32_t x214 = 9250;
	static uint16_t x215 = UINT16_MAX;
	static uint32_t x216 = 1821071223U;
	volatile int32_t t41 = 63532;

    t41 = ((x213-x214)<=(x215==x216));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x218 = 11U;
	int8_t x220 = -1;
	int32_t t42 = 1031457;

    t42 = ((x217-x218)<=(x219==x220));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x221 = 1U;
	int32_t x222 = -1;
	volatile int32_t x223 = INT32_MIN;
	uint64_t x224 = 131770LLU;
	static int32_t t43 = 3;

    t43 = ((x221-x222)<=(x223==x224));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x225 = -53;
	int16_t x226 = 112;
	volatile uint8_t x227 = 0U;
	int32_t x228 = INT32_MIN;
	static int32_t t44 = -2997;

    t44 = ((x225-x226)<=(x227==x228));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x230 = -1;
	static volatile int32_t x231 = INT32_MIN;
	uint64_t x232 = UINT64_MAX;
	int32_t t45 = 27;

    t45 = ((x229-x230)<=(x231==x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x233 = INT16_MIN;
	static int16_t x234 = -1;
	uint8_t x235 = UINT8_MAX;
	uint32_t x236 = 83262U;

    t46 = ((x233-x234)<=(x235==x236));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x238 = 49;
	int32_t x239 = -1;
	static int32_t x240 = -8738032;

    t47 = ((x237-x238)<=(x239==x240));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x241 = -1;
	volatile int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	int16_t x244 = -334;

    t48 = ((x241-x242)<=(x243==x244));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x245 = 76387352997LLU;
	static int8_t x246 = INT8_MAX;
	uint32_t x247 = UINT32_MAX;
	static volatile int32_t x248 = -1;
	static volatile int32_t t49 = -10;

    t49 = ((x245-x246)<=(x247==x248));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x249 = 2997LLU;
	volatile int64_t x250 = INT64_MIN;
	static int32_t x251 = INT32_MAX;
	int32_t x252 = 14;
	int32_t t50 = 2;

    t50 = ((x249-x250)<=(x251==x252));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x253 = INT8_MIN;
	volatile uint32_t x254 = UINT32_MAX;
	int8_t x255 = -15;
	volatile int32_t t51 = 73368697;

    t51 = ((x253-x254)<=(x255==x256));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x257 = 4139297U;
	volatile int16_t x258 = INT16_MIN;
	uint8_t x259 = UINT8_MAX;
	volatile int32_t t52 = 44;

    t52 = ((x257-x258)<=(x259==x260));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	static uint16_t x264 = 0U;
	int32_t t53 = 231043605;

    t53 = ((x261-x262)<=(x263==x264));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x265 = INT16_MAX;
	uint16_t x267 = 9U;
	static int32_t t54 = -1383372;

    t54 = ((x265-x266)<=(x267==x268));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x269 = INT16_MIN;
	int8_t x270 = -1;
	uint32_t x271 = 3344880U;
	int64_t x272 = -1LL;
	static volatile int32_t t55 = -14057782;

    t55 = ((x269-x270)<=(x271==x272));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x273 = UINT32_MAX;
	static volatile uint8_t x274 = 7U;
	int32_t x275 = -2;
	int16_t x276 = -1;

    t56 = ((x273-x274)<=(x275==x276));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x277 = 0;
	int16_t x278 = INT16_MAX;
	static int64_t x279 = -3872456899959LL;
	volatile int32_t x280 = INT32_MIN;
	int32_t t57 = 28;

    t57 = ((x277-x278)<=(x279==x280));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x281 = UINT32_MAX;
	int32_t x282 = INT32_MIN;
	volatile uint8_t x283 = 19U;
	int64_t x284 = INT64_MAX;
	int32_t t58 = -48190173;

    t58 = ((x281-x282)<=(x283==x284));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x285 = UINT64_MAX;
	int64_t x286 = -4084067151LL;
	static int8_t x287 = -1;
	int32_t t59 = -7908389;

    t59 = ((x285-x286)<=(x287==x288));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x289 = -1;
	int64_t x290 = INT64_MAX;
	static volatile uint32_t x292 = UINT32_MAX;
	int32_t t60 = 522333;

    t60 = ((x289-x290)<=(x291==x292));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x294 = INT8_MIN;
	uint8_t x295 = 96U;
	int32_t t61 = -8;

    t61 = ((x293-x294)<=(x295==x296));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x299 = INT64_MIN;
	volatile int32_t t62 = -160440657;

    t62 = ((x297-x298)<=(x299==x300));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x302 = -1;
	static volatile int64_t x303 = -249703LL;
	int16_t x304 = INT16_MIN;
	int32_t t63 = -70;

    t63 = ((x301-x302)<=(x303==x304));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x305 = UINT16_MAX;
	int16_t x306 = INT16_MAX;
	int64_t x307 = INT64_MIN;
	static uint64_t x308 = UINT64_MAX;

    t64 = ((x305-x306)<=(x307==x308));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x309 = 50757LL;
	volatile int32_t x310 = -1;
	static int64_t x311 = 426836LL;
	uint8_t x312 = 60U;
	static int32_t t65 = -2;

    t65 = ((x309-x310)<=(x311==x312));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x313 = -1;
	static int32_t x314 = -1;
	volatile int64_t x315 = INT64_MIN;
	static volatile int32_t t66 = 115462727;

    t66 = ((x313-x314)<=(x315==x316));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x317 = 3U;
	static int64_t x318 = 4236990979508459405LL;
	uint32_t x319 = 0U;
	uint64_t x320 = 707029558LLU;
	int32_t t67 = -11194844;

    t67 = ((x317-x318)<=(x319==x320));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x321 = UINT32_MAX;
	uint64_t x323 = 56LLU;
	int8_t x324 = 0;
	volatile int32_t t68 = -1;

    t68 = ((x321-x322)<=(x323==x324));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x325 = UINT8_MAX;
	static int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	static int8_t x328 = 0;
	volatile int32_t t69 = -415429;

    t69 = ((x325-x326)<=(x327==x328));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x329 = INT8_MAX;
	int64_t x332 = 428024707485811240LL;
	volatile int32_t t70 = 732;

    t70 = ((x329-x330)<=(x331==x332));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x333 = -944946939;
	int64_t x335 = -4193866125402LL;
	int32_t t71 = -49;

    t71 = ((x333-x334)<=(x335==x336));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x337 = 6865;
	int8_t x338 = -1;
	volatile int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MIN;
	volatile int32_t t72 = 1;

    t72 = ((x337-x338)<=(x339==x340));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x341 = UINT8_MAX;
	static volatile uint32_t x342 = 1U;
	int32_t x343 = -1;
	int32_t t73 = -497;

    t73 = ((x341-x342)<=(x343==x344));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x345 = 29627;
	int16_t x346 = 2;
	int32_t x347 = 41;
	static int64_t x348 = INT64_MIN;

    t74 = ((x345-x346)<=(x347==x348));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x350 = INT64_MAX;
	static int32_t x351 = -3659;
	int64_t x352 = -10374LL;

    t75 = ((x349-x350)<=(x351==x352));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x353 = INT8_MAX;
	int64_t x356 = INT64_MAX;
	int32_t t76 = -21328599;

    t76 = ((x353-x354)<=(x355==x356));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x359 = 104U;
	int8_t x360 = -1;

    t77 = ((x357-x358)<=(x359==x360));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x361 = INT32_MIN;
	uint8_t x362 = 0U;
	volatile int32_t x363 = INT32_MIN;
	static volatile uint16_t x364 = 1U;

    t78 = ((x361-x362)<=(x363==x364));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x365 = 2U;
	static int64_t x366 = -1LL;
	int32_t x367 = 0;
	volatile int64_t x368 = 22LL;
	volatile int32_t t79 = 7138;

    t79 = ((x365-x366)<=(x367==x368));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x369 = -9;
	int16_t x370 = INT16_MIN;
	uint8_t x371 = 6U;
	uint8_t x372 = 1U;
	volatile int32_t t80 = 2;

    t80 = ((x369-x370)<=(x371==x372));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x374 = 48U;
	int8_t x375 = INT8_MIN;
	int16_t x376 = -1;
	static volatile int32_t t81 = 1;

    t81 = ((x373-x374)<=(x375==x376));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x377 = 19572761U;
	static int32_t x378 = -253;
	static uint8_t x379 = 2U;
	static int32_t x380 = INT32_MAX;
	int32_t t82 = 7986325;

    t82 = ((x377-x378)<=(x379==x380));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x381 = INT16_MAX;
	int16_t x382 = 31;
	int8_t x383 = 10;
	static int16_t x384 = INT16_MAX;
	volatile int32_t t83 = -520144759;

    t83 = ((x381-x382)<=(x383==x384));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x385 = -26931LL;
	static uint16_t x386 = 100U;
	int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MAX;
	int32_t t84 = 1814;

    t84 = ((x385-x386)<=(x387==x388));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x389 = INT32_MAX;
	uint16_t x390 = 55U;
	uint16_t x391 = UINT16_MAX;
	static volatile int8_t x392 = 44;
	static int32_t t85 = 5340990;

    t85 = ((x389-x390)<=(x391==x392));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x393 = -1;
	int16_t x394 = INT16_MIN;
	volatile int32_t t86 = 1051;

    t86 = ((x393-x394)<=(x395==x396));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x397 = -1038788459397085037LL;
	int16_t x398 = INT16_MIN;
	int64_t x399 = -1LL;
	uint8_t x400 = 105U;
	int32_t t87 = -893871;

    t87 = ((x397-x398)<=(x399==x400));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x401 = INT64_MAX;
	uint64_t x402 = 62586LLU;
	static volatile int16_t x403 = INT16_MAX;
	volatile int16_t x404 = -3864;
	volatile int32_t t88 = 799677233;

    t88 = ((x401-x402)<=(x403==x404));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	int8_t x407 = INT8_MAX;
	int16_t x408 = 7564;
	volatile int32_t t89 = -15;

    t89 = ((x405-x406)<=(x407==x408));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x413 = INT16_MAX;
	static int16_t x414 = 75;
	uint16_t x416 = 1U;
	static int32_t t90 = -3;

    t90 = ((x413-x414)<=(x415==x416));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x417 = -1LL;
	volatile uint16_t x418 = 27903U;
	uint32_t x420 = 2922U;

    t91 = ((x417-x418)<=(x419==x420));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x429 = INT8_MIN;
	int64_t x431 = -1LL;
	int8_t x432 = 1;
	int32_t t92 = -2;

    t92 = ((x429-x430)<=(x431==x432));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x434 = 14U;
	int64_t x435 = -573829885127247LL;
	int64_t x436 = INT64_MAX;
	volatile int32_t t93 = 4;

    t93 = ((x433-x434)<=(x435==x436));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x439 = UINT8_MAX;
	static int16_t x440 = -1;
	volatile int32_t t94 = -14835;

    t94 = ((x437-x438)<=(x439==x440));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x442 = INT64_MIN;
	uint16_t x444 = 1275U;

    t95 = ((x441-x442)<=(x443==x444));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x449 = INT16_MAX;
	uint8_t x450 = 1U;
	uint64_t x451 = UINT64_MAX;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t96 = -5;

    t96 = ((x449-x450)<=(x451==x452));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x457 = 331;
	int64_t x458 = -1LL;
	int32_t x459 = -1;
	static uint16_t x460 = 0U;
	static volatile int32_t t97 = 36373;

    t97 = ((x457-x458)<=(x459==x460));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x461 = UINT8_MAX;
	uint16_t x462 = UINT16_MAX;
	static int16_t x463 = INT16_MAX;
	int64_t x464 = 16986408084LL;
	int32_t t98 = 1004675904;

    t98 = ((x461-x462)<=(x463==x464));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x466 = -1;
	static int64_t x467 = INT64_MIN;
	volatile int8_t x468 = INT8_MIN;

    t99 = ((x465-x466)<=(x467==x468));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x470 = -3411545932LL;
	volatile int16_t x471 = INT16_MAX;
	volatile uint16_t x472 = 0U;
	volatile int32_t t100 = 285893;

    t100 = ((x469-x470)<=(x471==x472));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x473 = UINT32_MAX;
	volatile int64_t x474 = INT64_MAX;
	int32_t x475 = INT32_MIN;
	volatile int32_t t101 = -608;

    t101 = ((x473-x474)<=(x475==x476));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x478 = 8U;
	volatile uint16_t x479 = UINT16_MAX;
	int32_t x480 = INT32_MAX;
	volatile int32_t t102 = -801085;

    t102 = ((x477-x478)<=(x479==x480));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x481 = -1LL;
	int32_t x482 = INT32_MAX;
	int8_t x484 = -12;
	int32_t t103 = -315609;

    t103 = ((x481-x482)<=(x483==x484));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x485 = INT8_MAX;
	int16_t x486 = 425;
	static volatile int32_t t104 = 0;

    t104 = ((x485-x486)<=(x487==x488));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x489 = UINT64_MAX;
	int16_t x490 = 54;
	int16_t x492 = INT16_MAX;
	volatile int32_t t105 = -20;

    t105 = ((x489-x490)<=(x491==x492));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x493 = INT64_MIN;
	int8_t x494 = INT8_MIN;
	int64_t x495 = -1LL;
	static volatile int32_t t106 = 111;

    t106 = ((x493-x494)<=(x495==x496));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x501 = UINT32_MAX;
	volatile uint32_t x504 = UINT32_MAX;
	static volatile int32_t t107 = -11;

    t107 = ((x501-x502)<=(x503==x504));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x505 = 8053U;
	static int64_t x506 = 3485656287LL;
	static volatile uint64_t x507 = 4280769LLU;
	int8_t x508 = -1;
	int32_t t108 = 0;

    t108 = ((x505-x506)<=(x507==x508));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x509 = 8U;
	volatile uint8_t x512 = 103U;
	volatile int32_t t109 = -26742855;

    t109 = ((x509-x510)<=(x511==x512));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x513 = 1U;
	uint16_t x516 = UINT16_MAX;

    t110 = ((x513-x514)<=(x515==x516));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x517 = UINT32_MAX;
	int16_t x518 = 545;
	int8_t x520 = -1;
	volatile int32_t t111 = -119916;

    t111 = ((x517-x518)<=(x519==x520));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x521 = INT64_MIN;
	static int32_t x522 = -1;
	int32_t x523 = -64194;
	volatile int16_t x524 = -1;
	volatile int32_t t112 = -59344;

    t112 = ((x521-x522)<=(x523==x524));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x525 = INT8_MIN;
	int8_t x526 = -1;
	static volatile int16_t x528 = -1;
	static volatile int32_t t113 = 6;

    t113 = ((x525-x526)<=(x527==x528));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x529 = INT32_MIN;
	uint64_t x530 = 62637740LLU;
	static int16_t x531 = -1;
	uint16_t x532 = UINT16_MAX;

    t114 = ((x529-x530)<=(x531==x532));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x533 = INT8_MIN;
	int64_t x534 = INT64_MIN;
	int8_t x535 = -1;
	volatile uint32_t x536 = UINT32_MAX;
	static volatile int32_t t115 = -1;

    t115 = ((x533-x534)<=(x535==x536));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x537 = UINT32_MAX;
	int16_t x538 = INT16_MAX;
	static volatile uint64_t x540 = 2082LLU;
	volatile int32_t t116 = 941;

    t116 = ((x537-x538)<=(x539==x540));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = INT64_MIN;
	uint64_t x543 = 463021079507LLU;

    t117 = ((x541-x542)<=(x543==x544));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x546 = 5376U;
	volatile int32_t x547 = INT32_MAX;

    t118 = ((x545-x546)<=(x547==x548));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x549 = INT8_MIN;
	uint16_t x552 = 1482U;
	volatile int32_t t119 = -876;

    t119 = ((x549-x550)<=(x551==x552));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x553 = 23U;
	volatile int16_t x554 = -12;
	int8_t x555 = -1;
	static uint16_t x556 = 0U;
	static int32_t t120 = 216016;

    t120 = ((x553-x554)<=(x555==x556));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x557 = 11LLU;
	static int8_t x559 = INT8_MIN;
	int32_t t121 = 615258529;

    t121 = ((x557-x558)<=(x559==x560));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x562 = 1;
	uint16_t x563 = 18U;
	int8_t x564 = -1;
	volatile int32_t t122 = -7576797;

    t122 = ((x561-x562)<=(x563==x564));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x565 = -1;
	uint32_t x566 = 4730582U;
	int16_t x567 = INT16_MAX;
	volatile int32_t t123 = -368293;

    t123 = ((x565-x566)<=(x567==x568));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x569 = -1;
	int64_t x571 = INT64_MIN;
	int32_t t124 = 2847220;

    t124 = ((x569-x570)<=(x571==x572));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x573 = -1;
	static uint16_t x574 = 18U;
	uint16_t x575 = 47U;
	int32_t x576 = -12355;

    t125 = ((x573-x574)<=(x575==x576));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x577 = UINT8_MAX;
	volatile int16_t x579 = INT16_MIN;
	int64_t x580 = 47251745480371LL;

    t126 = ((x577-x578)<=(x579==x580));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x581 = INT32_MAX;
	volatile int32_t x582 = INT32_MAX;
	int16_t x583 = INT16_MAX;
	volatile int64_t x584 = INT64_MAX;
	static volatile int32_t t127 = -1;

    t127 = ((x581-x582)<=(x583==x584));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x585 = -2;
	static int64_t x587 = INT64_MIN;
	int16_t x588 = INT16_MAX;
	volatile int32_t t128 = 1;

    t128 = ((x585-x586)<=(x587==x588));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x590 = 724606799047LL;
	static uint16_t x592 = 0U;

    t129 = ((x589-x590)<=(x591==x592));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x593 = 187859044211636516LL;
	uint32_t x594 = UINT32_MAX;
	int32_t x595 = INT32_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t130 = 1372649;

    t130 = ((x593-x594)<=(x595==x596));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x597 = INT16_MIN;
	static uint64_t x598 = UINT64_MAX;
	static int16_t x600 = INT16_MIN;
	int32_t t131 = -45026539;

    t131 = ((x597-x598)<=(x599==x600));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x601 = -1;
	volatile int64_t x602 = 469645367474942014LL;
	int8_t x603 = -1;
	uint16_t x604 = UINT16_MAX;

    t132 = ((x601-x602)<=(x603==x604));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x605 = -15;
	volatile int16_t x606 = -621;
	int64_t x607 = INT64_MIN;
	uint16_t x608 = UINT16_MAX;
	int32_t t133 = 988366080;

    t133 = ((x605-x606)<=(x607==x608));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x609 = UINT64_MAX;
	uint32_t x611 = 2912U;
	static int32_t t134 = 0;

    t134 = ((x609-x610)<=(x611==x612));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x616 = -1;
	int32_t t135 = -29786;

    t135 = ((x613-x614)<=(x615==x616));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x617 = 6022U;
	static uint32_t x618 = 105U;
	int16_t x619 = -1;
	int64_t x620 = -1LL;
	volatile int32_t t136 = -2;

    t136 = ((x617-x618)<=(x619==x620));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x623 = INT8_MIN;
	int8_t x624 = -44;
	static volatile int32_t t137 = 160092;

    t137 = ((x621-x622)<=(x623==x624));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x625 = INT32_MIN;
	int16_t x626 = INT16_MIN;
	int32_t x627 = INT32_MAX;
	static int32_t t138 = -239464;

    t138 = ((x625-x626)<=(x627==x628));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint32_t x629 = UINT32_MAX;
	int64_t x630 = -1LL;
	int32_t x631 = -1;
	static int32_t t139 = -5232840;

    t139 = ((x629-x630)<=(x631==x632));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x634 = UINT64_MAX;
	int32_t x635 = INT32_MIN;
	static uint32_t x636 = UINT32_MAX;
	int32_t t140 = 266785827;

    t140 = ((x633-x634)<=(x635==x636));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x637 = 0;
	int8_t x638 = INT8_MAX;
	uint16_t x640 = 4617U;

    t141 = ((x637-x638)<=(x639==x640));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x641 = -1;
	int32_t x643 = -643296;
	int32_t x644 = 14;
	int32_t t142 = 471832;

    t142 = ((x641-x642)<=(x643==x644));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x645 = UINT64_MAX;
	uint32_t x646 = UINT32_MAX;
	static int32_t x647 = INT32_MAX;
	int64_t x648 = INT64_MAX;
	static volatile int32_t t143 = 96;

    t143 = ((x645-x646)<=(x647==x648));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x649 = -1;
	int16_t x650 = INT16_MAX;
	static int8_t x651 = -40;
	static uint16_t x652 = UINT16_MAX;
	int32_t t144 = 212031;

    t144 = ((x649-x650)<=(x651==x652));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x654 = 1673464;
	static int8_t x655 = -53;
	int32_t x656 = -1;
	volatile int32_t t145 = 0;

    t145 = ((x653-x654)<=(x655==x656));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x658 = 3210U;
	uint64_t x659 = UINT64_MAX;

    t146 = ((x657-x658)<=(x659==x660));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x661 = -26854375825018611LL;
	uint8_t x662 = 2U;
	int8_t x664 = -1;

    t147 = ((x661-x662)<=(x663==x664));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x666 = 2U;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t148 = -95858387;

    t148 = ((x665-x666)<=(x667==x668));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x669 = INT16_MAX;
	volatile uint64_t x670 = UINT64_MAX;
	int16_t x671 = 50;
	static int16_t x672 = INT16_MAX;
	int32_t t149 = -598;

    t149 = ((x669-x670)<=(x671==x672));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x673 = 132428776LLU;
	static int64_t x674 = -59LL;
	static int64_t x675 = -1LL;
	uint32_t x676 = UINT32_MAX;
	static int32_t t150 = -115;

    t150 = ((x673-x674)<=(x675==x676));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x677 = 871197857149LLU;
	int16_t x678 = INT16_MIN;
	static int16_t x679 = -2;
	int32_t x680 = 3987;
	volatile int32_t t151 = -419561606;

    t151 = ((x677-x678)<=(x679==x680));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x685 = 154921703LLU;
	int16_t x687 = INT16_MIN;
	uint16_t x688 = UINT16_MAX;
	int32_t t152 = 27128588;

    t152 = ((x685-x686)<=(x687==x688));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x690 = 631U;
	static uint32_t x691 = 48100U;
	int32_t t153 = -6205;

    t153 = ((x689-x690)<=(x691==x692));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x694 = -13;
	static int16_t x696 = 7;
	int32_t t154 = 91;

    t154 = ((x693-x694)<=(x695==x696));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x697 = UINT16_MAX;
	volatile uint64_t x698 = UINT64_MAX;
	int64_t x700 = INT64_MIN;
	volatile int32_t t155 = -7824496;

    t155 = ((x697-x698)<=(x699==x700));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x701 = -36;
	uint16_t x702 = UINT16_MAX;
	int8_t x703 = INT8_MIN;
	int64_t x704 = INT64_MIN;

    t156 = ((x701-x702)<=(x703==x704));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x706 = INT64_MAX;
	int32_t x707 = INT32_MIN;
	int32_t t157 = 48;

    t157 = ((x705-x706)<=(x707==x708));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x710 = -3;
	int64_t x712 = -2206338000510049LL;
	int32_t t158 = -145398;

    t158 = ((x709-x710)<=(x711==x712));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x713 = 52;
	static volatile uint16_t x714 = UINT16_MAX;
	int64_t x715 = INT64_MIN;
	uint64_t x716 = UINT64_MAX;
	static int32_t t159 = 85;

    t159 = ((x713-x714)<=(x715==x716));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x717 = INT16_MIN;
	static int16_t x718 = INT16_MIN;
	int32_t x720 = -14562;
	static int32_t t160 = -29235;

    t160 = ((x717-x718)<=(x719==x720));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x721 = INT16_MIN;
	int16_t x722 = INT16_MIN;
	uint64_t x723 = 2137522955399995484LLU;
	uint32_t x724 = UINT32_MAX;
	static volatile int32_t t161 = -30998732;

    t161 = ((x721-x722)<=(x723==x724));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x725 = 2U;
	uint32_t x727 = 1933U;
	volatile uint16_t x728 = 1518U;

    t162 = ((x725-x726)<=(x727==x728));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x729 = -1;
	uint16_t x730 = 17U;
	int8_t x731 = -6;
	int8_t x732 = INT8_MIN;
	int32_t t163 = 0;

    t163 = ((x729-x730)<=(x731==x732));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x733 = INT32_MIN;
	int32_t x735 = -1;
	int32_t x736 = INT32_MIN;

    t164 = ((x733-x734)<=(x735==x736));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x737 = 15747689650LLU;
	static volatile uint8_t x738 = 25U;
	static int32_t t165 = -15732772;

    t165 = ((x737-x738)<=(x739==x740));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint8_t x741 = 5U;
	int32_t x743 = 6;

    t166 = ((x741-x742)<=(x743==x744));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x745 = INT64_MAX;
	uint16_t x746 = UINT16_MAX;
	int64_t x747 = -973948697202LL;
	int32_t t167 = -874056112;

    t167 = ((x745-x746)<=(x747==x748));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x749 = INT8_MIN;
	volatile uint32_t x750 = 12U;
	int16_t x751 = INT16_MIN;
	static uint8_t x752 = 0U;
	volatile int32_t t168 = -4;

    t168 = ((x749-x750)<=(x751==x752));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x753 = INT16_MIN;
	int8_t x755 = INT8_MIN;
	int32_t x756 = INT32_MIN;
	volatile int32_t t169 = -609055005;

    t169 = ((x753-x754)<=(x755==x756));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x757 = INT8_MIN;
	int8_t x758 = INT8_MIN;
	int8_t x760 = -1;

    t170 = ((x757-x758)<=(x759==x760));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x761 = INT8_MIN;
	int8_t x762 = -1;
	int8_t x763 = INT8_MIN;
	uint8_t x764 = 2U;
	volatile int32_t t171 = 12850;

    t171 = ((x761-x762)<=(x763==x764));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x769 = INT64_MIN;
	volatile int16_t x771 = 18;
	int64_t x772 = -15034050LL;

    t172 = ((x769-x770)<=(x771==x772));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x773 = 701;
	int8_t x774 = INT8_MIN;
	volatile int32_t t173 = -104103;

    t173 = ((x773-x774)<=(x775==x776));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint32_t x777 = 999420U;
	int8_t x779 = INT8_MAX;
	uint16_t x780 = UINT16_MAX;
	volatile int32_t t174 = 2;

    t174 = ((x777-x778)<=(x779==x780));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x781 = INT8_MIN;
	uint64_t x783 = 66444812931LLU;
	int8_t x784 = INT8_MAX;

    t175 = ((x781-x782)<=(x783==x784));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x785 = INT32_MIN;
	int64_t x786 = INT64_MIN;
	int16_t x787 = -1;
	static int16_t x788 = -1;
	volatile int32_t t176 = 25767;

    t176 = ((x785-x786)<=(x787==x788));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x789 = INT32_MIN;
	int16_t x790 = -1;
	uint64_t x791 = 5LLU;
	volatile int64_t x792 = 1009031736711362LL;
	int32_t t177 = 503883;

    t177 = ((x789-x790)<=(x791==x792));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x797 = INT32_MAX;
	static uint8_t x798 = 3U;
	int16_t x799 = -2;
	uint32_t x800 = 245347380U;
	int32_t t178 = 2962539;

    t178 = ((x797-x798)<=(x799==x800));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x801 = UINT32_MAX;
	static volatile int16_t x804 = INT16_MIN;

    t179 = ((x801-x802)<=(x803==x804));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x805 = -1;
	int64_t x806 = INT64_MIN;
	int32_t x808 = -1;
	int32_t t180 = -119125867;

    t180 = ((x805-x806)<=(x807==x808));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x809 = 235799421043982LLU;
	int16_t x810 = -2020;
	volatile int32_t t181 = -170;

    t181 = ((x809-x810)<=(x811==x812));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x813 = INT64_MAX;
	volatile uint16_t x814 = 173U;
	int32_t x815 = INT32_MIN;
	static volatile int64_t x816 = 14466479108483LL;
	static volatile int32_t t182 = -36889;

    t182 = ((x813-x814)<=(x815==x816));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x817 = 942166966041833370LLU;
	uint64_t x818 = 9365503911896LLU;
	uint32_t x819 = 402070298U;
	int32_t t183 = 6;

    t183 = ((x817-x818)<=(x819==x820));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x823 = INT32_MIN;
	int64_t x824 = INT64_MIN;

    t184 = ((x821-x822)<=(x823==x824));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x825 = UINT64_MAX;
	uint8_t x826 = 2U;
	int64_t x827 = INT64_MAX;
	static int64_t x828 = -1LL;
	volatile int32_t t185 = -24191;

    t185 = ((x825-x826)<=(x827==x828));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x829 = 12948379U;
	int16_t x830 = INT16_MAX;
	int32_t x831 = 331498168;
	int16_t x832 = -1;
	int32_t t186 = 711;

    t186 = ((x829-x830)<=(x831==x832));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x833 = 20U;
	uint8_t x834 = 12U;
	int32_t x835 = INT32_MAX;
	int32_t x836 = -16;
	static int32_t t187 = 5;

    t187 = ((x833-x834)<=(x835==x836));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x837 = 13416568LLU;
	static int8_t x839 = -6;
	volatile int8_t x840 = 23;
	volatile int32_t t188 = -114969;

    t188 = ((x837-x838)<=(x839==x840));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x841 = INT64_MIN;
	uint64_t x842 = 174472469LLU;
	int8_t x844 = 1;

    t189 = ((x841-x842)<=(x843==x844));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x849 = 49U;
	static uint16_t x850 = 4713U;
	uint8_t x851 = 52U;
	int8_t x852 = -11;

    t190 = ((x849-x850)<=(x851==x852));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x853 = 0U;
	uint32_t x854 = 51967U;
	int8_t x855 = INT8_MIN;
	int32_t t191 = -27911173;

    t191 = ((x853-x854)<=(x855==x856));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x861 = INT16_MAX;
	int32_t x863 = INT32_MIN;
	volatile int32_t t192 = -1;

    t192 = ((x861-x862)<=(x863==x864));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x865 = INT16_MAX;
	int64_t x866 = 11910900154LL;
	int64_t x867 = 39764549451575LL;
	uint8_t x868 = 66U;

    t193 = ((x865-x866)<=(x867==x868));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x870 = INT16_MIN;
	uint64_t x871 = 5123887518418444LLU;
	int16_t x872 = INT16_MIN;
	int32_t t194 = 355908997;

    t194 = ((x869-x870)<=(x871==x872));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x874 = UINT32_MAX;
	uint8_t x875 = 3U;
	volatile int32_t t195 = -16;

    t195 = ((x873-x874)<=(x875==x876));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x877 = -1;
	volatile uint32_t x878 = UINT32_MAX;
	int64_t x879 = -1208617617LL;
	int64_t x880 = INT64_MIN;

    t196 = ((x877-x878)<=(x879==x880));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x881 = INT8_MAX;
	uint64_t x882 = 2288650568973413036LLU;
	static int64_t x884 = 137LL;
	volatile int32_t t197 = -2;

    t197 = ((x881-x882)<=(x883==x884));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x885 = INT64_MAX;
	static uint16_t x886 = UINT16_MAX;
	int8_t x887 = INT8_MAX;
	volatile uint16_t x888 = 1346U;
	static int32_t t198 = 3751089;

    t198 = ((x885-x886)<=(x887==x888));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x889 = INT16_MIN;
	uint16_t x891 = 574U;
	uint64_t x892 = 1341306327979250LLU;
	static volatile int32_t t199 = -483564;

    t199 = ((x889-x890)<=(x891==x892));

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

