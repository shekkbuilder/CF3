
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

uint8_t x8 = 26U;
volatile int32_t t2 = -146045;
int32_t x18 = 0;
int32_t x21 = INT32_MIN;
static int64_t x22 = INT64_MIN;
static volatile int32_t x31 = INT32_MAX;
static int64_t x36 = INT64_MIN;
volatile int64_t x39 = -145540LL;
int32_t t9 = -1;
int32_t t10 = -2222;
static int16_t x46 = 85;
volatile int32_t t11 = 116;
int8_t x50 = -8;
uint64_t x55 = 67676LLU;
uint16_t x60 = 21488U;
volatile int32_t t14 = -4589405;
int32_t t15 = -26068;
int32_t x72 = INT32_MIN;
int32_t t17 = -27;
uint32_t x77 = UINT32_MAX;
volatile int16_t x83 = 92;
volatile int32_t t21 = -114;
volatile uint16_t x89 = UINT16_MAX;
uint8_t x95 = UINT8_MAX;
int32_t x99 = -1;
int64_t x101 = INT64_MAX;
static int32_t t25 = 1743018;
static uint16_t x107 = UINT16_MAX;
int16_t x109 = INT16_MIN;
int16_t x110 = 6;
uint16_t x114 = UINT16_MAX;
static int64_t x119 = -30649LL;
volatile int8_t x121 = 4;
volatile uint32_t x126 = 17U;
volatile int32_t t31 = 48218;
uint32_t x143 = 6038693U;
int64_t x152 = 253533956476386LL;
int16_t x155 = INT16_MIN;
int8_t x156 = INT8_MAX;
volatile int16_t x159 = INT16_MIN;
int32_t t40 = -64;
static volatile int32_t t41 = -288373;
int64_t x172 = -1LL;
int8_t x179 = -1;
volatile uint8_t x181 = UINT8_MAX;
static uint8_t x184 = 4U;
int16_t x186 = INT16_MIN;
uint64_t x189 = 63353136523306987LLU;
uint32_t x197 = 808816580U;
volatile int16_t x202 = INT16_MAX;
int64_t x207 = -1LL;
int32_t x208 = -564;
static uint64_t x210 = 6095280LLU;
static volatile int8_t x211 = INT8_MIN;
int8_t x212 = INT8_MIN;
uint16_t x214 = 53U;
volatile int32_t t53 = 10;
int64_t x221 = INT64_MAX;
int8_t x222 = INT8_MAX;
volatile int8_t x224 = INT8_MIN;
int32_t x228 = 2939799;
uint64_t x238 = UINT64_MAX;
static uint32_t x239 = 0U;
static uint64_t x243 = 337179623089363LLU;
int32_t t61 = 93126;
int32_t t63 = 37099764;
int64_t x259 = -1LL;
volatile int32_t t64 = 300;
uint16_t x267 = UINT16_MAX;
int16_t x269 = -1;
volatile int32_t x277 = -133206;
uint32_t x278 = 7U;
volatile int32_t t69 = 113973;
static uint8_t x290 = UINT8_MAX;
int16_t x291 = INT16_MIN;
volatile int32_t t72 = -1;
uint8_t x294 = UINT8_MAX;
uint16_t x296 = 10U;
volatile int16_t x298 = INT16_MIN;
volatile int32_t t74 = 1;
volatile int32_t x303 = INT32_MIN;
uint16_t x311 = 6144U;
int8_t x313 = -1;
int16_t x314 = INT16_MIN;
volatile int32_t x315 = INT32_MAX;
static int64_t x320 = 11084453264LL;
int8_t x325 = INT8_MIN;
static volatile int32_t t81 = -50588140;
volatile int32_t t82 = -8;
int32_t x336 = 0;
uint16_t x348 = 389U;
static uint16_t x353 = 32351U;
static int32_t x354 = 175312426;
uint32_t x364 = UINT32_MAX;
volatile int64_t x369 = INT64_MAX;
uint8_t x377 = UINT8_MAX;
volatile uint16_t x379 = UINT16_MAX;
int16_t x384 = INT16_MIN;
int32_t x390 = -1;
volatile int16_t x393 = 1790;
static int8_t x398 = INT8_MIN;
uint32_t x400 = UINT32_MAX;
int16_t x401 = INT16_MIN;
volatile int32_t x404 = -256;
uint8_t x415 = UINT8_MAX;
uint16_t x418 = 834U;
volatile int32_t x419 = 85606;
volatile int32_t t104 = 35;
uint64_t x428 = 5503048536LLU;
static volatile uint32_t x435 = UINT32_MAX;
int32_t t108 = -190007625;
int16_t x437 = INT16_MAX;
volatile int32_t t109 = -4091458;
volatile int32_t t110 = -3;
uint64_t x448 = 126LLU;
int32_t t111 = 589811182;
uint8_t x451 = 5U;
uint16_t x452 = 11817U;
int64_t x454 = INT64_MIN;
int8_t x458 = INT8_MIN;
uint64_t x459 = UINT64_MAX;
volatile int32_t t114 = 4;
int32_t x461 = INT32_MIN;
int64_t x463 = -166148150150716LL;
int8_t x464 = -7;
uint16_t x468 = 5368U;
volatile uint32_t x475 = 3U;
static int16_t x477 = -102;
int32_t x483 = 19864;
static volatile int32_t x492 = 0;
volatile int16_t x496 = INT16_MAX;
int64_t x499 = 10614867065663394LL;
static int16_t x502 = -1;
uint16_t x508 = 5U;
int32_t t126 = 12;
int32_t x512 = -129;
volatile int8_t x514 = -6;
static int16_t x515 = -2243;
uint64_t x519 = UINT64_MAX;
volatile int32_t t133 = -48;
int32_t x542 = INT32_MIN;
uint32_t x549 = 175764U;
int64_t x561 = INT64_MIN;
static int8_t x564 = 1;
int64_t x576 = -4497335563490553628LL;
int32_t x577 = INT32_MIN;
uint8_t x583 = 95U;
uint8_t x586 = 40U;
static int32_t t146 = 79694142;
static uint8_t x592 = UINT8_MAX;
static int32_t t147 = -10192978;
static int16_t x603 = INT16_MIN;
int64_t x606 = INT64_MIN;
int8_t x613 = -1;
volatile int32_t t153 = 182;
int16_t x618 = -1;
int8_t x623 = -56;
int8_t x631 = 34;
int64_t x632 = INT64_MIN;
int32_t t158 = 0;
int16_t x638 = 3689;
static int8_t x643 = -1;
int32_t t160 = -18980304;
uint16_t x656 = 18171U;
int8_t x660 = 1;
volatile int32_t t164 = -967734922;
static int16_t x661 = -740;
int64_t x662 = -1LL;
uint16_t x667 = 30146U;
int8_t x685 = -1;
int32_t x686 = INT32_MIN;
static int16_t x692 = -1;
int32_t x695 = -1;
static volatile int32_t t173 = 0;
uint64_t x699 = 1776713251LLU;
int32_t t174 = 5;
uint32_t x704 = 47861U;
uint8_t x705 = UINT8_MAX;
uint64_t x709 = UINT64_MAX;
int8_t x710 = -1;
static int64_t x711 = INT64_MAX;
uint16_t x714 = 9696U;
static int64_t x717 = -598106930056LL;
static int16_t x718 = -18;
uint8_t x720 = UINT8_MAX;
int16_t x721 = INT16_MAX;
static int32_t x722 = -1;
int64_t x723 = -1LL;
uint32_t x726 = UINT32_MAX;
int16_t x727 = INT16_MAX;
int32_t t181 = -335044;
static int64_t x729 = 5682LL;
volatile int32_t t182 = 10;
int8_t x743 = INT8_MIN;
int32_t t185 = -399;
uint32_t x745 = 252295U;
volatile int32_t x747 = 1;
uint32_t x750 = 1U;
uint64_t x751 = UINT64_MAX;
int16_t x754 = INT16_MIN;
static int32_t x755 = INT32_MIN;
uint64_t x756 = 2607LLU;
volatile int64_t x758 = -1674838364311LL;
static int32_t t189 = -742522627;
int16_t x761 = INT16_MAX;
volatile uint16_t x764 = UINT16_MAX;
int32_t t191 = 1;
volatile int32_t t192 = 239435;
int16_t x779 = INT16_MIN;
int32_t t197 = 2;
static volatile int16_t x793 = -1;
int16_t x796 = INT16_MIN;
static volatile int16_t x800 = INT16_MIN;


void f0(void) {
    	uint8_t x1 = 108U;
	int64_t x2 = -15945511LL;
	volatile int64_t x3 = -859542398903592483LL;
	uint64_t x4 = 16807211569008LLU;
	volatile int32_t t0 = 32374;

    t0 = ((x1==x2)==(x3==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int64_t x6 = INT64_MAX;
	int64_t x7 = INT64_MAX;
	int32_t t1 = 24608486;

    t1 = ((x5==x6)==(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	int16_t x10 = INT16_MAX;
	volatile int32_t x11 = INT32_MAX;
	uint16_t x12 = 1707U;

    t2 = ((x9==x10)==(x11==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MAX;
	int16_t x14 = INT16_MAX;
	int16_t x15 = 2;
	uint64_t x16 = 9586LLU;
	volatile int32_t t3 = -11452;

    t3 = ((x13==x14)==(x15==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 6506U;
	static uint32_t x19 = UINT32_MAX;
	uint16_t x20 = 18U;
	static int32_t t4 = 2;

    t4 = ((x17==x18)==(x19==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x23 = 955076514LLU;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = 210;

    t5 = ((x21==x22)==(x23==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 175693LLU;
	int16_t x26 = 17;
	uint16_t x27 = 1217U;
	int8_t x28 = -10;
	int32_t t6 = -49742780;

    t6 = ((x25==x26)==(x27==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	int32_t x30 = -1;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = 31299724;

    t7 = ((x29==x30)==(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 56426145525LLU;
	uint8_t x34 = UINT8_MAX;
	static int32_t x35 = 7;
	volatile int32_t t8 = -690528344;

    t8 = ((x33==x34)==(x35==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 12402577171216LLU;
	uint8_t x38 = 4U;
	static int64_t x40 = INT64_MAX;

    t9 = ((x37==x38)==(x39==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int8_t x42 = -1;
	static int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MIN;

    t10 = ((x41==x42)==(x43==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 244961128794794561LLU;
	int32_t x47 = 388;
	int32_t x48 = INT32_MIN;

    t11 = ((x45==x46)==(x47==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint32_t x49 = UINT32_MAX;
	uint8_t x51 = UINT8_MAX;
	int16_t x52 = 1;
	volatile int32_t t12 = -3758;

    t12 = ((x49==x50)==(x51==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = 0;
	int16_t x54 = -2;
	int8_t x56 = 0;
	int32_t t13 = 761;

    t13 = ((x53==x54)==(x55==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	static int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MIN;

    t14 = ((x57==x58)==(x59==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 78LL;
	volatile int16_t x62 = INT16_MAX;
	uint64_t x63 = 3390LLU;
	static volatile int64_t x64 = INT64_MIN;

    t15 = ((x61==x62)==(x63==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 85U;
	int64_t x66 = INT64_MAX;
	int64_t x67 = INT64_MIN;
	uint16_t x68 = 56U;
	volatile int32_t t16 = 0;

    t16 = ((x65==x66)==(x67==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	int8_t x70 = -1;
	int16_t x71 = -9748;

    t17 = ((x69==x70)==(x71==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	static int64_t x74 = INT64_MIN;
	uint64_t x75 = UINT64_MAX;
	uint8_t x76 = 3U;
	volatile int32_t t18 = 11317;

    t18 = ((x73==x74)==(x75==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x78 = 0U;
	int8_t x79 = INT8_MAX;
	volatile uint32_t x80 = 406249U;
	volatile int32_t t19 = -1173;

    t19 = ((x77==x78)==(x79==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 4U;
	static int16_t x82 = -1;
	uint16_t x84 = 30U;
	static volatile int32_t t20 = 2619;

    t20 = ((x81==x82)==(x83==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	int64_t x86 = 3016LL;
	int32_t x87 = INT32_MIN;
	volatile int16_t x88 = INT16_MAX;

    t21 = ((x85==x86)==(x87==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x90 = -1;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	int32_t t22 = 37;

    t22 = ((x89==x90)==(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	static uint32_t x94 = 159U;
	uint32_t x96 = UINT32_MAX;
	volatile int32_t t23 = -9935;

    t23 = ((x93==x94)==(x95==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	static int16_t x100 = INT16_MIN;
	static volatile int32_t t24 = -1613;

    t24 = ((x97==x98)==(x99==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = INT8_MIN;
	volatile int8_t x103 = INT8_MIN;
	uint32_t x104 = 5818U;

    t25 = ((x101==x102)==(x103==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x105 = 11;
	uint32_t x106 = 2904285U;
	static int32_t x108 = INT32_MIN;
	int32_t t26 = 26;

    t26 = ((x105==x106)==(x107==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x111 = INT8_MAX;
	volatile int32_t x112 = -1;
	int32_t t27 = 66506054;

    t27 = ((x109==x110)==(x111==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 4026670LLU;
	static int8_t x115 = INT8_MAX;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 78515376;

    t28 = ((x113==x114)==(x115==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -64564;
	volatile uint32_t x118 = 35885829U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -10888375;

    t29 = ((x117==x118)==(x119==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = INT32_MIN;
	volatile int64_t x123 = INT64_MIN;
	uint16_t x124 = 20U;
	volatile int32_t t30 = -291853;

    t30 = ((x121==x122)==(x123==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = 242;
	int8_t x127 = INT8_MIN;
	static int64_t x128 = -1LL;

    t31 = ((x125==x126)==(x127==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 114194007;
	volatile uint32_t x130 = 624704U;
	int16_t x131 = INT16_MIN;
	static int8_t x132 = INT8_MAX;
	volatile int32_t t32 = 58;

    t32 = ((x129==x130)==(x131==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MIN;
	int8_t x135 = 9;
	int16_t x136 = -1;
	volatile int32_t t33 = 1114;

    t33 = ((x133==x134)==(x135==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = INT64_MAX;
	int64_t x138 = INT64_MIN;
	int16_t x139 = -1;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = 3854330;

    t34 = ((x137==x138)==(x139==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = 21359389;
	int64_t x142 = INT64_MIN;
	volatile int16_t x144 = -60;
	int32_t t35 = -836918285;

    t35 = ((x141==x142)==(x143==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	int32_t x146 = -169989218;
	int64_t x147 = INT64_MIN;
	volatile uint64_t x148 = UINT64_MAX;
	static volatile int32_t t36 = 31;

    t36 = ((x145==x146)==(x147==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MAX;
	int64_t x150 = -12878670727988949LL;
	volatile int8_t x151 = INT8_MIN;
	volatile int32_t t37 = 247;

    t37 = ((x149==x150)==(x151==x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -863;
	int8_t x154 = 7;
	int32_t t38 = -5;

    t38 = ((x153==x154)==(x155==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = 663;
	volatile uint32_t x158 = 2682U;
	static int32_t x160 = -1;
	int32_t t39 = 113;

    t39 = ((x157==x158)==(x159==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x161 = INT8_MIN;
	int64_t x162 = -6LL;
	int32_t x163 = INT32_MIN;
	int32_t x164 = INT32_MIN;

    t40 = ((x161==x162)==(x163==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = UINT32_MAX;
	int32_t x166 = -1;
	int8_t x167 = 1;
	int64_t x168 = -4219417811076LL;

    t41 = ((x165==x166)==(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = -2580697LL;
	int64_t x170 = INT64_MIN;
	uint64_t x171 = 149256448LLU;
	volatile int32_t t42 = -141530710;

    t42 = ((x169==x170)==(x171==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 28094359U;
	static uint64_t x174 = 4154142LLU;
	int16_t x175 = -1;
	int8_t x176 = -1;
	volatile int32_t t43 = -334125;

    t43 = ((x173==x174)==(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 21530576U;
	uint32_t x178 = 16296294U;
	uint32_t x180 = UINT32_MAX;
	int32_t t44 = -2106491;

    t44 = ((x177==x178)==(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x182 = 25;
	static int64_t x183 = INT64_MAX;
	int32_t t45 = 8418612;

    t45 = ((x181==x182)==(x183==x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MAX;
	uint32_t x187 = UINT32_MAX;
	int32_t x188 = -1;
	volatile int32_t t46 = 13;

    t46 = ((x185==x186)==(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x190 = 840435523LLU;
	volatile uint8_t x191 = 1U;
	int32_t x192 = INT32_MIN;
	int32_t t47 = -6;

    t47 = ((x189==x190)==(x191==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -1;
	volatile int64_t x194 = INT64_MIN;
	uint64_t x195 = UINT64_MAX;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t48 = 3;

    t48 = ((x193==x194)==(x195==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = INT16_MAX;
	static uint16_t x199 = UINT16_MAX;
	volatile int64_t x200 = INT64_MAX;
	static int32_t t49 = 3;

    t49 = ((x197==x198)==(x199==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = 1;

    t50 = ((x201==x202)==(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -34146942LL;
	int16_t x206 = INT16_MIN;
	static int32_t t51 = -5691;

    t51 = ((x205==x206)==(x207==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MIN;
	volatile int32_t t52 = -1238;

    t52 = ((x209==x210)==(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	static volatile uint16_t x215 = 9764U;
	static int16_t x216 = 3;

    t53 = ((x213==x214)==(x215==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x217 = 24427953639115LLU;
	uint32_t x218 = 6U;
	volatile uint64_t x219 = 32517915007LLU;
	int32_t x220 = -5;
	int32_t t54 = 1420739;

    t54 = ((x217==x218)==(x219==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x223 = INT16_MIN;
	volatile int32_t t55 = -113;

    t55 = ((x221==x222)==(x223==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	int32_t x226 = INT32_MIN;
	uint8_t x227 = 1U;
	int32_t t56 = 1;

    t56 = ((x225==x226)==(x227==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	uint32_t x230 = UINT32_MAX;
	uint16_t x231 = 5U;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = 219231;

    t57 = ((x229==x230)==(x231==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 74U;
	int16_t x234 = -1;
	int32_t x235 = -474099419;
	int64_t x236 = -438894333303LL;
	static volatile int32_t t58 = -5394441;

    t58 = ((x233==x234)==(x235==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	uint8_t x240 = 62U;
	int32_t t59 = 82;

    t59 = ((x237==x238)==(x239==x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = 49812;
	uint8_t x242 = UINT8_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t60 = 10883;

    t60 = ((x241==x242)==(x243==x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x245 = 13LLU;
	int16_t x246 = 13270;
	int32_t x247 = 42;
	int32_t x248 = INT32_MIN;

    t61 = ((x245==x246)==(x247==x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x249 = 31481828U;
	uint32_t x250 = 3958U;
	int16_t x251 = INT16_MIN;
	int8_t x252 = 0;
	int32_t t62 = 87773;

    t62 = ((x249==x250)==(x251==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = 8;
	int8_t x254 = INT8_MIN;
	uint16_t x255 = UINT16_MAX;
	uint64_t x256 = 2388596LLU;

    t63 = ((x253==x254)==(x255==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MIN;
	static int32_t x260 = -408390008;

    t64 = ((x257==x258)==(x259==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 17U;
	int32_t x262 = INT32_MAX;
	int16_t x263 = 9140;
	int8_t x264 = -1;
	volatile int32_t t65 = -15058182;

    t65 = ((x261==x262)==(x263==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x265 = 0U;
	int8_t x266 = -1;
	int64_t x268 = INT64_MAX;
	int32_t t66 = 5051495;

    t66 = ((x265==x266)==(x267==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x270 = UINT64_MAX;
	uint64_t x271 = UINT64_MAX;
	static volatile uint64_t x272 = 452807064111LLU;
	volatile int32_t t67 = -1;

    t67 = ((x269==x270)==(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 2896921U;
	uint64_t x274 = 7806941201LLU;
	int32_t x275 = INT32_MAX;
	static int32_t x276 = INT32_MAX;
	int32_t t68 = -12;

    t68 = ((x273==x274)==(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x279 = -206;
	int64_t x280 = 5LL;

    t69 = ((x277==x278)==(x279==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MAX;
	volatile uint8_t x282 = 5U;
	int8_t x283 = -1;
	uint8_t x284 = 37U;
	volatile int32_t t70 = -520;

    t70 = ((x281==x282)==(x283==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 228U;
	uint8_t x286 = 117U;
	volatile int64_t x287 = -1LL;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -102964712;

    t71 = ((x285==x286)==(x287==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -15;
	uint8_t x292 = 62U;

    t72 = ((x289==x290)==(x291==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 2U;
	int8_t x295 = -1;
	static int32_t t73 = 620237;

    t73 = ((x293==x294)==(x295==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = 0;
	int8_t x299 = -1;
	int8_t x300 = INT8_MAX;

    t74 = ((x297==x298)==(x299==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = -11;
	uint8_t x302 = 1U;
	int16_t x304 = -18;
	int32_t t75 = -1601034;

    t75 = ((x301==x302)==(x303==x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x305 = 21437U;
	static volatile uint32_t x306 = 303U;
	uint32_t x307 = 740095U;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -37755475;

    t76 = ((x305==x306)==(x307==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -113;
	uint32_t x310 = UINT32_MAX;
	uint8_t x312 = UINT8_MAX;
	static int32_t t77 = -25;

    t77 = ((x309==x310)==(x311==x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x316 = -1;
	volatile int32_t t78 = -3476637;

    t78 = ((x313==x314)==(x315==x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MIN;
	uint32_t x318 = UINT32_MAX;
	int16_t x319 = -1;
	volatile int32_t t79 = -445399513;

    t79 = ((x317==x318)==(x319==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x321 = 52;
	int16_t x322 = INT16_MIN;
	int16_t x323 = -1;
	static uint8_t x324 = 9U;
	volatile int32_t t80 = 39;

    t80 = ((x321==x322)==(x323==x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x326 = UINT8_MAX;
	int64_t x327 = INT64_MAX;
	static int32_t x328 = INT32_MIN;

    t81 = ((x325==x326)==(x327==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	int16_t x330 = -1;
	uint16_t x331 = 5U;
	volatile int8_t x332 = INT8_MAX;

    t82 = ((x329==x330)==(x331==x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 293874543LLU;
	int16_t x334 = 2;
	int32_t x335 = -4;
	int32_t t83 = -62784;

    t83 = ((x333==x334)==(x335==x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = -16666;
	int32_t x338 = INT32_MAX;
	int16_t x339 = -5094;
	int32_t x340 = 87940;
	volatile int32_t t84 = -14120460;

    t84 = ((x337==x338)==(x339==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 9083U;
	volatile int64_t x342 = INT64_MAX;
	int64_t x343 = INT64_MIN;
	uint16_t x344 = 7887U;
	int32_t t85 = -143689;

    t85 = ((x341==x342)==(x343==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = 7830;
	int8_t x346 = INT8_MIN;
	uint16_t x347 = 935U;
	int32_t t86 = -243;

    t86 = ((x345==x346)==(x347==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -122876870704810LL;
	static int8_t x350 = -1;
	volatile int16_t x351 = -1;
	static int8_t x352 = INT8_MIN;
	static int32_t t87 = 126;

    t87 = ((x349==x350)==(x351==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x355 = 0;
	volatile int8_t x356 = INT8_MAX;
	volatile int32_t t88 = 9;

    t88 = ((x353==x354)==(x355==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 2LLU;
	static uint64_t x358 = 13LLU;
	int64_t x359 = -1LL;
	int16_t x360 = INT16_MIN;
	int32_t t89 = -1;

    t89 = ((x357==x358)==(x359==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	int32_t x362 = -1;
	uint8_t x363 = 4U;
	int32_t t90 = 20301356;

    t90 = ((x361==x362)==(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = INT64_MIN;
	int8_t x366 = -1;
	int32_t x367 = -1;
	volatile int32_t x368 = -370464;
	static volatile int32_t t91 = -15679;

    t91 = ((x365==x366)==(x367==x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x370 = UINT32_MAX;
	int64_t x371 = INT64_MIN;
	int8_t x372 = 0;
	volatile int32_t t92 = -10239;

    t92 = ((x369==x370)==(x371==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = INT16_MIN;
	int16_t x374 = 6563;
	volatile uint64_t x375 = 23127677835560LLU;
	int16_t x376 = -4593;
	int32_t t93 = 450469;

    t93 = ((x373==x374)==(x375==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = INT16_MAX;
	volatile int16_t x380 = 24;
	static volatile int32_t t94 = 1;

    t94 = ((x377==x378)==(x379==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = 26;
	static int32_t x382 = INT32_MAX;
	int32_t x383 = 2541646;
	int32_t t95 = -35;

    t95 = ((x381==x382)==(x383==x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	static uint64_t x386 = UINT64_MAX;
	volatile uint8_t x387 = 27U;
	int32_t x388 = -1;
	volatile int32_t t96 = 23331121;

    t96 = ((x385==x386)==(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = INT8_MIN;
	int64_t x391 = INT64_MAX;
	int64_t x392 = -16267460LL;
	int32_t t97 = -1;

    t97 = ((x389==x390)==(x391==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x394 = 3516440220394121979LL;
	int16_t x395 = INT16_MIN;
	int16_t x396 = 5077;
	volatile int32_t t98 = 4994;

    t98 = ((x393==x394)==(x395==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x397 = -1;
	int64_t x399 = -827LL;
	static volatile int32_t t99 = 4651784;

    t99 = ((x397==x398)==(x399==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x402 = -1;
	static int64_t x403 = 2538LL;
	int32_t t100 = -288342;

    t100 = ((x401==x402)==(x403==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MAX;
	int16_t x406 = 7311;
	int64_t x407 = INT64_MIN;
	static volatile int8_t x408 = INT8_MIN;
	int32_t t101 = -6;

    t101 = ((x405==x406)==(x407==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -1;
	volatile int8_t x410 = -1;
	static int8_t x411 = INT8_MAX;
	int16_t x412 = INT16_MIN;
	int32_t t102 = -2;

    t102 = ((x409==x410)==(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 119941U;
	int8_t x414 = -1;
	int8_t x416 = -1;
	volatile int32_t t103 = 354605717;

    t103 = ((x413==x414)==(x415==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 2;
	uint16_t x420 = 231U;

    t104 = ((x417==x418)==(x419==x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = 1394207;
	int32_t x422 = 913094001;
	volatile int64_t x423 = 1735017191025542228LL;
	int32_t x424 = 129;
	volatile int32_t t105 = -320;

    t105 = ((x421==x422)==(x423==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 23544845LL;
	static int16_t x426 = -1;
	volatile int8_t x427 = 4;
	int32_t t106 = 132;

    t106 = ((x425==x426)==(x427==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MAX;
	volatile uint8_t x430 = 6U;
	uint64_t x431 = 40874248863LLU;
	volatile uint64_t x432 = UINT64_MAX;
	int32_t t107 = 31;

    t107 = ((x429==x430)==(x431==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -1;
	uint8_t x434 = UINT8_MAX;
	int8_t x436 = 0;

    t108 = ((x433==x434)==(x435==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x438 = 1;
	uint64_t x439 = 18323043091702LLU;
	int32_t x440 = INT32_MIN;

    t109 = ((x437==x438)==(x439==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = 0;
	uint64_t x442 = 238LLU;
	volatile int8_t x443 = 1;
	int32_t x444 = INT32_MIN;

    t110 = ((x441==x442)==(x443==x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 13U;
	static uint64_t x446 = 32104802844004789LLU;
	uint16_t x447 = 11360U;

    t111 = ((x445==x446)==(x447==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x449 = -1;
	int32_t x450 = INT32_MIN;
	volatile int32_t t112 = -21;

    t112 = ((x449==x450)==(x451==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	volatile int16_t x455 = INT16_MAX;
	int32_t x456 = 1;
	int32_t t113 = 94;

    t113 = ((x453==x454)==(x455==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	int64_t x460 = -1LL;

    t114 = ((x457==x458)==(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x462 = UINT8_MAX;
	int32_t t115 = 720;

    t115 = ((x461==x462)==(x463==x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = 7U;
	uint8_t x466 = 27U;
	volatile int16_t x467 = INT16_MAX;
	static int32_t t116 = -67;

    t116 = ((x465==x466)==(x467==x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MAX;
	uint16_t x470 = UINT16_MAX;
	int8_t x471 = -1;
	int64_t x472 = INT64_MIN;
	volatile int32_t t117 = 0;

    t117 = ((x469==x470)==(x471==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = UINT16_MAX;
	int16_t x474 = -1;
	int64_t x476 = INT64_MAX;
	volatile int32_t t118 = 558963;

    t118 = ((x473==x474)==(x475==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x478 = UINT32_MAX;
	int16_t x479 = INT16_MIN;
	static volatile int64_t x480 = INT64_MAX;
	volatile int32_t t119 = 0;

    t119 = ((x477==x478)==(x479==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x481 = INT32_MIN;
	volatile int32_t x482 = INT32_MIN;
	int16_t x484 = -1;
	int32_t t120 = 347626877;

    t120 = ((x481==x482)==(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -1LL;
	int8_t x486 = INT8_MIN;
	static int32_t x487 = -1767;
	int64_t x488 = -331753LL;
	volatile int32_t t121 = -103;

    t121 = ((x485==x486)==(x487==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x489 = UINT8_MAX;
	uint8_t x490 = 63U;
	int32_t x491 = -1;
	volatile int32_t t122 = -836185737;

    t122 = ((x489==x490)==(x491==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	int64_t x494 = INT64_MIN;
	uint64_t x495 = 36359117LLU;
	int32_t t123 = 1355;

    t123 = ((x493==x494)==(x495==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = -1;
	static volatile int8_t x498 = 1;
	static volatile int16_t x500 = 1;
	volatile int32_t t124 = -7414687;

    t124 = ((x497==x498)==(x499==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = UINT8_MAX;
	int32_t x503 = INT32_MIN;
	uint64_t x504 = 2829LLU;
	volatile int32_t t125 = -255;

    t125 = ((x501==x502)==(x503==x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = INT16_MIN;
	int32_t x506 = INT32_MIN;
	volatile uint64_t x507 = 7907631550750780894LLU;

    t126 = ((x505==x506)==(x507==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 437U;
	int8_t x510 = -31;
	static int64_t x511 = 684453106LL;
	volatile int32_t t127 = -778535;

    t127 = ((x509==x510)==(x511==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int8_t x516 = INT8_MAX;
	volatile int32_t t128 = 0;

    t128 = ((x513==x514)==(x515==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x517 = UINT32_MAX;
	volatile uint32_t x518 = 2861416U;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t129 = -5;

    t129 = ((x517==x518)==(x519==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = 15;
	uint64_t x522 = 61LLU;
	int16_t x523 = INT16_MAX;
	static uint16_t x524 = 0U;
	int32_t t130 = 85;

    t130 = ((x521==x522)==(x523==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 26029U;
	uint8_t x526 = 15U;
	uint32_t x527 = UINT32_MAX;
	static int64_t x528 = 936LL;
	volatile int32_t t131 = 1;

    t131 = ((x525==x526)==(x527==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 369U;
	int8_t x530 = INT8_MAX;
	volatile int32_t x531 = 3;
	int8_t x532 = -31;
	volatile int32_t t132 = 7280032;

    t132 = ((x529==x530)==(x531==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x533 = 349LLU;
	int32_t x534 = INT32_MAX;
	static int8_t x535 = INT8_MIN;
	static volatile int16_t x536 = -10470;

    t133 = ((x533==x534)==(x535==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int16_t x538 = INT16_MAX;
	volatile int16_t x539 = -1;
	uint64_t x540 = 953475942429742512LLU;
	volatile int32_t t134 = -128239995;

    t134 = ((x537==x538)==(x539==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x541 = 103U;
	static int32_t x543 = INT32_MAX;
	int16_t x544 = INT16_MIN;
	static volatile int32_t t135 = 895674;

    t135 = ((x541==x542)==(x543==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = -2078346337LL;
	uint32_t x546 = 285738U;
	volatile int64_t x547 = -1LL;
	static int16_t x548 = 506;
	int32_t t136 = -1;

    t136 = ((x545==x546)==(x547==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x550 = 3U;
	static int16_t x551 = 15744;
	uint8_t x552 = 12U;
	int32_t t137 = -214606694;

    t137 = ((x549==x550)==(x551==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int16_t x554 = 10119;
	volatile uint64_t x555 = UINT64_MAX;
	int32_t x556 = 7;
	volatile int32_t t138 = 15;

    t138 = ((x553==x554)==(x555==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 26549LLU;
	int64_t x558 = INT64_MIN;
	int64_t x559 = 4734LL;
	uint8_t x560 = UINT8_MAX;
	volatile int32_t t139 = 1995;

    t139 = ((x557==x558)==(x559==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x562 = 7210364LLU;
	uint64_t x563 = 7850079LLU;
	int32_t t140 = -1384620;

    t140 = ((x561==x562)==(x563==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int32_t x566 = 29002;
	uint16_t x567 = 1U;
	int8_t x568 = -1;
	int32_t t141 = 115563;

    t141 = ((x565==x566)==(x567==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -39;
	uint64_t x570 = 46369896687158LLU;
	volatile uint32_t x571 = 326274433U;
	static int16_t x572 = INT16_MAX;
	volatile int32_t t142 = -47555435;

    t142 = ((x569==x570)==(x571==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x573 = 90;
	int8_t x574 = -57;
	int16_t x575 = INT16_MAX;
	volatile int32_t t143 = 153841;

    t143 = ((x573==x574)==(x575==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x578 = INT64_MAX;
	int64_t x579 = INT64_MAX;
	int32_t x580 = -499;
	int32_t t144 = -2419762;

    t144 = ((x577==x578)==(x579==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 216LLU;
	volatile int32_t x582 = 5;
	uint64_t x584 = UINT64_MAX;
	static volatile int32_t t145 = -32111;

    t145 = ((x581==x582)==(x583==x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = INT8_MIN;
	volatile int8_t x587 = INT8_MIN;
	volatile int8_t x588 = 0;

    t146 = ((x585==x586)==(x587==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = 21LL;
	int64_t x590 = -1LL;
	volatile int64_t x591 = -1LL;

    t147 = ((x589==x590)==(x591==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 966010707U;
	uint16_t x594 = 1280U;
	int32_t x595 = -1;
	int64_t x596 = INT64_MAX;
	int32_t t148 = 7649224;

    t148 = ((x593==x594)==(x595==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = -1;
	static uint64_t x598 = UINT64_MAX;
	volatile int64_t x599 = -237LL;
	static volatile int8_t x600 = -6;
	static int32_t t149 = 1637423;

    t149 = ((x597==x598)==(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	int64_t x602 = INT64_MIN;
	volatile int8_t x604 = INT8_MIN;
	static int32_t t150 = -225;

    t150 = ((x601==x602)==(x603==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -1LL;
	uint64_t x607 = 3483377091LLU;
	volatile uint64_t x608 = 503377482655275LLU;
	volatile int32_t t151 = 156349;

    t151 = ((x605==x606)==(x607==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = -1;
	uint16_t x610 = 14U;
	static int16_t x611 = INT16_MIN;
	int64_t x612 = 0LL;
	int32_t t152 = 1908;

    t152 = ((x609==x610)==(x611==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x614 = INT8_MIN;
	static uint32_t x615 = UINT32_MAX;
	static int64_t x616 = -1LL;

    t153 = ((x613==x614)==(x615==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	int8_t x619 = INT8_MIN;
	volatile int64_t x620 = INT64_MAX;
	volatile int32_t t154 = 0;

    t154 = ((x617==x618)==(x619==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = 45;
	volatile uint64_t x622 = 4LLU;
	static uint8_t x624 = 3U;
	int32_t t155 = -361156;

    t155 = ((x621==x622)==(x623==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = UINT32_MAX;
	static int16_t x626 = 0;
	int8_t x627 = INT8_MIN;
	uint8_t x628 = UINT8_MAX;
	int32_t t156 = -1570;

    t156 = ((x625==x626)==(x627==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x629 = 17U;
	volatile int32_t x630 = INT32_MIN;
	volatile int32_t t157 = -352;

    t157 = ((x629==x630)==(x631==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	int16_t x634 = -798;
	uint16_t x635 = 10U;
	static int64_t x636 = 35271219351683LL;

    t158 = ((x633==x634)==(x635==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = 0;
	volatile uint64_t x639 = 9711587LLU;
	volatile uint32_t x640 = 6559990U;
	int32_t t159 = -3390;

    t159 = ((x637==x638)==(x639==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 7506;
	static int64_t x642 = 12626690LL;
	volatile int64_t x644 = -1LL;

    t160 = ((x641==x642)==(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MAX;
	int16_t x646 = 15;
	int16_t x647 = -1;
	int16_t x648 = -1;
	static int32_t t161 = 15;

    t161 = ((x645==x646)==(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	uint64_t x650 = UINT64_MAX;
	volatile uint8_t x651 = 2U;
	int8_t x652 = INT8_MIN;
	int32_t t162 = 216956950;

    t162 = ((x649==x650)==(x651==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MAX;
	int16_t x654 = -1;
	static volatile uint16_t x655 = 24450U;
	int32_t t163 = 402253507;

    t163 = ((x653==x654)==(x655==x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = -689723;
	volatile uint8_t x658 = UINT8_MAX;
	uint32_t x659 = UINT32_MAX;

    t164 = ((x657==x658)==(x659==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x663 = 135LLU;
	uint32_t x664 = UINT32_MAX;
	int32_t t165 = 807;

    t165 = ((x661==x662)==(x663==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 47U;
	int64_t x666 = 74518LL;
	int8_t x668 = -1;
	int32_t t166 = 6449;

    t166 = ((x665==x666)==(x667==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 111708LLU;
	uint64_t x670 = 868LLU;
	int16_t x671 = INT16_MIN;
	uint8_t x672 = UINT8_MAX;
	static volatile int32_t t167 = 17453;

    t167 = ((x669==x670)==(x671==x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x673 = -1;
	static int16_t x674 = INT16_MIN;
	int8_t x675 = INT8_MIN;
	uint64_t x676 = UINT64_MAX;
	int32_t t168 = -392;

    t168 = ((x673==x674)==(x675==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	uint8_t x678 = 4U;
	int64_t x679 = -1LL;
	static uint64_t x680 = 7LLU;
	int32_t t169 = -222;

    t169 = ((x677==x678)==(x679==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 6422U;
	int8_t x682 = 12;
	int16_t x683 = INT16_MAX;
	static int16_t x684 = 107;
	volatile int32_t t170 = -1414258;

    t170 = ((x681==x682)==(x683==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x687 = 2;
	volatile uint64_t x688 = 2LLU;
	static int32_t t171 = -2061947;

    t171 = ((x685==x686)==(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = INT8_MIN;
	uint32_t x690 = 1424U;
	int8_t x691 = 2;
	static volatile int32_t t172 = 7329;

    t172 = ((x689==x690)==(x691==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = 3;
	volatile int16_t x694 = -215;
	uint16_t x696 = 0U;

    t173 = ((x693==x694)==(x695==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 83414932264877473LLU;
	static int8_t x698 = -1;
	static volatile uint32_t x700 = 3171822U;

    t174 = ((x697==x698)==(x699==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = -1;
	int64_t x702 = INT64_MAX;
	int32_t x703 = -770881;
	volatile int32_t t175 = 553;

    t175 = ((x701==x702)==(x703==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x706 = 30115U;
	uint32_t x707 = UINT32_MAX;
	int8_t x708 = INT8_MIN;
	int32_t t176 = 34;

    t176 = ((x705==x706)==(x707==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x712 = INT32_MIN;
	volatile int32_t t177 = -183;

    t177 = ((x709==x710)==(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = 164727;
	uint64_t x715 = UINT64_MAX;
	uint32_t x716 = 186339U;
	int32_t t178 = -36940;

    t178 = ((x713==x714)==(x715==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x719 = UINT32_MAX;
	volatile int32_t t179 = -30336343;

    t179 = ((x717==x718)==(x719==x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x724 = INT16_MAX;
	volatile int32_t t180 = 836128735;

    t180 = ((x721==x722)==(x723==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -1;
	int16_t x728 = INT16_MIN;

    t181 = ((x725==x726)==(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x730 = UINT32_MAX;
	uint64_t x731 = 1011LLU;
	int16_t x732 = INT16_MIN;

    t182 = ((x729==x730)==(x731==x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = -1;
	uint8_t x734 = 1U;
	int64_t x735 = INT64_MIN;
	int64_t x736 = 118626181LL;
	volatile int32_t t183 = 199532;

    t183 = ((x733==x734)==(x735==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -1;
	uint8_t x738 = 2U;
	uint64_t x739 = UINT64_MAX;
	uint64_t x740 = 6109461535LLU;
	static volatile int32_t t184 = 1059;

    t184 = ((x737==x738)==(x739==x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	volatile uint16_t x742 = 53U;
	static uint16_t x744 = 9158U;

    t185 = ((x741==x742)==(x743==x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x746 = -4159;
	static volatile int16_t x748 = 4;
	int32_t t186 = -2213192;

    t186 = ((x745==x746)==(x747==x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 2828358136749187LLU;
	volatile int16_t x752 = 1;
	volatile int32_t t187 = 837018;

    t187 = ((x749==x750)==(x751==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = INT32_MIN;
	int32_t t188 = -4454;

    t188 = ((x753==x754)==(x755==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = 869;
	uint32_t x759 = 424302U;
	int8_t x760 = 1;

    t189 = ((x757==x758)==(x759==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = INT32_MIN;
	uint16_t x763 = UINT16_MAX;
	int32_t t190 = -72;

    t190 = ((x761==x762)==(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x765 = 0U;
	int64_t x766 = INT64_MAX;
	uint16_t x767 = 8514U;
	static int8_t x768 = 25;

    t191 = ((x765==x766)==(x767==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	volatile uint16_t x770 = 19174U;
	int64_t x771 = INT64_MAX;
	int64_t x772 = -3LL;

    t192 = ((x769==x770)==(x771==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 2LLU;
	int32_t x774 = 688;
	int32_t x775 = INT32_MIN;
	int64_t x776 = INT64_MIN;
	int32_t t193 = 1;

    t193 = ((x773==x774)==(x775==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MAX;
	int16_t x778 = INT16_MIN;
	volatile int64_t x780 = -1LL;
	volatile int32_t t194 = 568;

    t194 = ((x777==x778)==(x779==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	uint64_t x782 = 283549038061410LLU;
	int32_t x783 = -1;
	int16_t x784 = -12;
	int32_t t195 = -890;

    t195 = ((x781==x782)==(x783==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 173211297U;
	int16_t x786 = INT16_MIN;
	int8_t x787 = INT8_MAX;
	volatile int64_t x788 = 17202651939LL;
	static int32_t t196 = 23;

    t196 = ((x785==x786)==(x787==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MAX;
	volatile int32_t x790 = 7;
	int16_t x791 = INT16_MIN;
	int64_t x792 = INT64_MAX;

    t197 = ((x789==x790)==(x791==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x794 = UINT16_MAX;
	static int16_t x795 = 1622;
	volatile int32_t t198 = 118;

    t198 = ((x793==x794)==(x795==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	uint64_t x798 = 25977469LLU;
	static int16_t x799 = INT16_MAX;
	static volatile int32_t t199 = 33;

    t199 = ((x797==x798)==(x799==x800));

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

