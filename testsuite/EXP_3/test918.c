
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

static volatile uint8_t x5 = 75U;
int64_t x12 = INT64_MIN;
static volatile int32_t t4 = -55263616;
int16_t x23 = INT16_MIN;
volatile int16_t x27 = INT16_MAX;
int64_t x29 = INT64_MIN;
uint64_t x31 = 1403738847913846126LLU;
int32_t t7 = -189;
static volatile int8_t x37 = INT8_MIN;
static volatile int64_t x42 = INT64_MIN;
static volatile int32_t t11 = -2;
uint16_t x50 = 13U;
volatile int32_t x62 = -1;
static int8_t x63 = -1;
uint32_t x64 = 440U;
uint16_t x65 = UINT16_MAX;
static int8_t x67 = INT8_MAX;
static volatile int32_t t15 = -13786803;
int32_t x69 = -3072498;
static int16_t x72 = INT16_MAX;
int32_t x75 = 0;
int8_t x81 = -1;
int16_t x84 = 140;
static int64_t x86 = INT64_MIN;
int64_t x92 = -18756791994030659LL;
uint8_t x94 = UINT8_MAX;
int32_t x97 = -1;
int64_t x98 = INT64_MIN;
uint64_t x104 = 158122459268LLU;
static uint8_t x107 = 6U;
int32_t t26 = 7736190;
int32_t x114 = INT32_MAX;
int32_t x120 = 3561681;
static int32_t x129 = INT32_MIN;
int8_t x134 = INT8_MIN;
uint16_t x135 = 10043U;
volatile int32_t t32 = 0;
int64_t x144 = -1LL;
int32_t t33 = -114007140;
int32_t x147 = INT32_MIN;
int64_t x150 = INT64_MAX;
int32_t x153 = -7;
static volatile int32_t x160 = 6649435;
int32_t x161 = INT32_MAX;
int32_t x163 = INT32_MAX;
int32_t t38 = -325802;
int32_t x166 = INT32_MAX;
int8_t x167 = INT8_MAX;
int32_t x168 = INT32_MIN;
static volatile int32_t t39 = -32022;
static int16_t x169 = -9;
static int16_t x171 = INT16_MIN;
uint8_t x172 = UINT8_MAX;
int32_t t40 = -7012;
uint16_t x176 = 3410U;
int16_t x181 = -1;
static volatile int32_t x184 = INT32_MIN;
volatile int8_t x190 = INT8_MAX;
int64_t x192 = INT64_MIN;
volatile int32_t t45 = -35826;
int16_t x196 = -194;
int8_t x197 = -1;
static volatile int8_t x198 = INT8_MIN;
int16_t x200 = INT16_MAX;
uint32_t x201 = 1036203353U;
int8_t x204 = -4;
uint16_t x207 = 43U;
static int8_t x212 = INT8_MAX;
volatile int32_t x221 = 14428;
static int16_t x222 = -24;
volatile int16_t x232 = INT16_MIN;
int32_t t56 = 2994;
volatile int8_t x242 = INT8_MIN;
int32_t t57 = -1173481;
static uint32_t x246 = UINT32_MAX;
uint8_t x248 = 7U;
volatile int32_t t58 = 3042;
int32_t x260 = -1;
int32_t t61 = 45085288;
int32_t t63 = 368628;
static volatile uint8_t x269 = 8U;
int8_t x281 = 0;
int16_t x288 = 6840;
int64_t x294 = INT64_MIN;
uint16_t x295 = 371U;
uint8_t x296 = 38U;
uint8_t x299 = UINT8_MAX;
int32_t t74 = 7823449;
static volatile int64_t x330 = -43130274061LL;
int32_t x338 = INT32_MIN;
int16_t x339 = INT16_MIN;
static int64_t x340 = INT64_MAX;
static volatile int16_t x341 = -1;
static int64_t x343 = -1LL;
int8_t x351 = -1;
volatile int8_t x352 = -1;
int32_t x354 = INT32_MIN;
uint16_t x355 = UINT16_MAX;
int32_t t85 = 285857;
static int32_t x358 = 8206542;
uint8_t x364 = 23U;
int8_t x370 = INT8_MAX;
volatile int16_t x378 = INT16_MIN;
static uint8_t x384 = 119U;
static int32_t t93 = -6504;
uint8_t x389 = UINT8_MAX;
int64_t x391 = -58753938349206LL;
int8_t x401 = -4;
volatile int32_t t99 = 829;
uint64_t x413 = UINT64_MAX;
volatile uint16_t x415 = 6366U;
volatile int16_t x416 = INT16_MAX;
int32_t x417 = 9530;
static int32_t t103 = -361529295;
int32_t t105 = -49;
int64_t x448 = INT64_MIN;
volatile int32_t t107 = -53635622;
int32_t t108 = 45304;
static uint64_t x462 = 91753044146652LLU;
int64_t x470 = INT64_MIN;
int64_t x472 = INT64_MIN;
int64_t x475 = 14527274625727LL;
int32_t t113 = -1;
volatile uint16_t x477 = UINT16_MAX;
int32_t x478 = -1;
static int32_t x483 = INT32_MIN;
volatile int32_t t115 = 7639905;
int32_t t117 = -510696782;
uint8_t x496 = 3U;
volatile int32_t x497 = INT32_MAX;
uint32_t x499 = 23U;
volatile int32_t t119 = 972417778;
uint64_t x508 = 61018655LLU;
int8_t x509 = 5;
volatile int32_t t123 = 469;
int32_t x517 = -34759910;
int32_t t124 = -439742;
volatile int32_t t125 = -1;
static volatile int32_t x526 = 14760691;
static uint64_t x530 = 67617946571332033LLU;
static int8_t x531 = INT8_MIN;
volatile int16_t x532 = INT16_MIN;
static volatile uint64_t x534 = 755208014945301761LLU;
uint32_t x535 = 196U;
int8_t x537 = INT8_MIN;
int32_t t130 = 114;
int16_t x546 = INT16_MIN;
static int64_t x547 = INT64_MIN;
uint8_t x549 = 117U;
int16_t x552 = 3;
volatile int32_t t133 = 1092965;
int16_t x557 = -2645;
volatile int64_t x559 = 3345079LL;
int32_t x560 = INT32_MIN;
static int64_t x566 = INT64_MAX;
int32_t t136 = 1;
volatile int16_t x575 = -5;
uint16_t x583 = UINT16_MAX;
volatile uint64_t x586 = 32125933725838LLU;
static int32_t t141 = -24804;
volatile int16_t x590 = -1;
int32_t t145 = -423;
volatile int8_t x605 = INT8_MAX;
int32_t t146 = -1;
int16_t x614 = INT16_MAX;
int16_t x619 = INT16_MIN;
static volatile int32_t t151 = -12827447;
volatile int16_t x629 = INT16_MIN;
int16_t x630 = -1;
int32_t t153 = 133701764;
uint32_t x643 = 203944U;
volatile int32_t t155 = 146359;
volatile int32_t x650 = -1;
static volatile int8_t x667 = INT8_MAX;
int64_t x668 = INT64_MAX;
volatile int32_t t160 = 34974852;
uint32_t x674 = UINT32_MAX;
uint32_t x675 = 65830U;
static volatile int32_t x681 = -37;
int16_t x693 = INT16_MIN;
int16_t x697 = INT16_MIN;
static volatile int16_t x698 = INT16_MIN;
int64_t x702 = INT64_MAX;
uint32_t x704 = 219564547U;
static int32_t t170 = -44161;
int8_t x713 = INT8_MIN;
int64_t x714 = INT64_MAX;
volatile int32_t t172 = -711;
volatile uint64_t x723 = UINT64_MAX;
static volatile int64_t x726 = -1LL;
int16_t x730 = INT16_MAX;
volatile int32_t t175 = 96;
static int32_t x734 = -507732518;
uint8_t x740 = 8U;
static int8_t x741 = 29;
volatile int32_t t178 = 1884;
int16_t x754 = INT16_MIN;
volatile int32_t t181 = -973540148;
static int32_t t182 = 2529;
int32_t x762 = INT32_MAX;
int8_t x768 = INT8_MIN;
int32_t t186 = 96;
int32_t x794 = INT32_MIN;
int8_t x797 = 27;
uint16_t x806 = UINT16_MAX;
int32_t t194 = 864387343;
int32_t x815 = -1;
volatile int32_t x817 = -1;
int8_t x821 = INT8_MIN;
int64_t x822 = 1251931507540652026LL;
int8_t x823 = -8;
volatile int32_t t198 = 207358;
static int16_t x825 = INT16_MIN;
uint32_t x826 = UINT32_MAX;


void f0(void) {
    	int32_t x1 = 0;
	int8_t x2 = INT8_MIN;
	int16_t x3 = -164;
	int16_t x4 = -3124;
	volatile int32_t t0 = 969829847;

    t0 = ((x1<=x2)==(x3%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x6 = -1;
	uint64_t x7 = UINT64_MAX;
	static int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 11640229;

    t1 = ((x5<=x6)==(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int8_t x10 = -1;
	volatile int32_t x11 = -1;
	volatile int32_t t2 = -323075;

    t2 = ((x9<=x10)==(x11%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = UINT8_MAX;
	static volatile int8_t x14 = INT8_MIN;
	int8_t x15 = 1;
	uint16_t x16 = 6U;
	volatile int32_t t3 = -639;

    t3 = ((x13<=x14)==(x15%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 331U;
	int8_t x18 = -1;
	int64_t x19 = INT64_MIN;
	int64_t x20 = INT64_MIN;

    t4 = ((x17<=x18)==(x19%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = -1LL;
	int16_t x22 = -1;
	int16_t x24 = -7162;
	volatile int32_t t5 = 899748;

    t5 = ((x21<=x22)==(x23%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	uint32_t x26 = 357745U;
	int16_t x28 = INT16_MAX;
	static int32_t t6 = -14277;

    t6 = ((x25<=x26)==(x27%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x30 = UINT64_MAX;
	int64_t x32 = 10963LL;

    t7 = ((x29<=x30)==(x31%x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int16_t x34 = -1;
	volatile uint32_t x35 = 1918U;
	int32_t x36 = INT32_MAX;
	int32_t t8 = 12474106;

    t8 = ((x33<=x34)==(x35%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MAX;
	int16_t x39 = 2;
	int64_t x40 = INT64_MIN;
	int32_t t9 = 3088;

    t9 = ((x37<=x38)==(x39%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = 1;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = 3219U;
	int32_t t10 = 0;

    t10 = ((x41<=x42)==(x43%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 197309LL;
	uint64_t x46 = 397LLU;
	int16_t x47 = -25;
	volatile int8_t x48 = -9;

    t11 = ((x45<=x46)==(x47%x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 640083LL;
	uint32_t x51 = UINT32_MAX;
	volatile int64_t x52 = 43763696543LL;
	static int32_t t12 = 1037;

    t12 = ((x49<=x50)==(x51%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 30U;
	uint32_t x54 = 388U;
	int64_t x55 = INT64_MAX;
	uint16_t x56 = 28055U;
	int32_t t13 = -2;

    t13 = ((x53<=x54)==(x55%x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x61 = INT64_MAX;
	volatile int32_t t14 = -169;

    t14 = ((x61<=x62)==(x63%x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x66 = 0;
	static int64_t x68 = -1LL;

    t15 = ((x65<=x66)==(x67%x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x70 = 345956789LLU;
	int64_t x71 = INT64_MAX;
	int32_t t16 = 12839271;

    t16 = ((x69<=x70)==(x71%x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = 14137682851209730LL;
	volatile int32_t x74 = -1;
	static int16_t x76 = INT16_MIN;
	int32_t t17 = 894;

    t17 = ((x73<=x74)==(x75%x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MIN;
	int8_t x78 = -1;
	volatile uint64_t x79 = UINT64_MAX;
	static uint16_t x80 = 3U;
	volatile int32_t t18 = -28018288;

    t18 = ((x77<=x78)==(x79%x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x82 = 733094093224793LL;
	uint16_t x83 = UINT16_MAX;
	int32_t t19 = -1;

    t19 = ((x81<=x82)==(x83%x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -1;
	static int64_t x87 = INT64_MIN;
	static int16_t x88 = 1359;
	int32_t t20 = -62339;

    t20 = ((x85<=x86)==(x87%x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = 3U;
	volatile int32_t x90 = INT32_MIN;
	int64_t x91 = 1799728109858LL;
	int32_t t21 = -3;

    t21 = ((x89<=x90)==(x91%x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x93 = -5769196LL;
	static volatile uint8_t x95 = UINT8_MAX;
	int64_t x96 = INT64_MAX;
	volatile int32_t t22 = -42604;

    t22 = ((x93<=x94)==(x95%x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MIN;
	volatile int32_t t23 = 48329;

    t23 = ((x97<=x98)==(x99%x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = INT64_MAX;
	static uint32_t x102 = 16251U;
	int32_t x103 = INT32_MAX;
	volatile int32_t t24 = 231829;

    t24 = ((x101<=x102)==(x103%x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = 8355585;
	int32_t x106 = INT32_MIN;
	uint16_t x108 = 414U;
	static volatile int32_t t25 = -26608403;

    t25 = ((x105<=x106)==(x107%x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x109 = INT16_MAX;
	int8_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = -1;

    t26 = ((x109<=x110)==(x111%x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	int8_t x115 = INT8_MIN;
	int32_t x116 = 38;
	volatile int32_t t27 = 3852380;

    t27 = ((x113<=x114)==(x115%x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x117 = UINT16_MAX;
	int16_t x118 = -21;
	volatile int32_t x119 = INT32_MIN;
	int32_t t28 = 2008;

    t28 = ((x117<=x118)==(x119%x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = -1LL;
	int16_t x122 = INT16_MIN;
	uint64_t x123 = 116579606282272LLU;
	int8_t x124 = INT8_MAX;
	static volatile int32_t t29 = -603360940;

    t29 = ((x121<=x122)==(x123%x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MIN;
	volatile uint64_t x126 = 206LLU;
	int16_t x127 = INT16_MAX;
	volatile int16_t x128 = INT16_MIN;
	int32_t t30 = -100543;

    t30 = ((x125<=x126)==(x127%x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x130 = 1U;
	int16_t x131 = -1;
	int8_t x132 = 62;
	volatile int32_t t31 = 12340;

    t31 = ((x129<=x130)==(x131%x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MIN;
	int32_t x136 = -1;

    t32 = ((x133<=x134)==(x135%x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x141 = 0U;
	uint16_t x142 = UINT16_MAX;
	static int8_t x143 = INT8_MIN;

    t33 = ((x141<=x142)==(x143%x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x145 = 31326184U;
	int8_t x146 = INT8_MIN;
	volatile uint64_t x148 = UINT64_MAX;
	volatile int32_t t34 = 109;

    t34 = ((x145<=x146)==(x147%x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x149 = -65508201;
	uint32_t x151 = UINT32_MAX;
	int16_t x152 = -1;
	int32_t t35 = -942;

    t35 = ((x149<=x150)==(x151%x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x154 = -1;
	uint32_t x155 = 54430763U;
	int32_t x156 = 938128;
	volatile int32_t t36 = 1490;

    t36 = ((x153<=x154)==(x155%x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MIN;
	uint64_t x158 = 86269865305625518LLU;
	uint64_t x159 = 398739028262447LLU;
	volatile int32_t t37 = 0;

    t37 = ((x157<=x158)==(x159%x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x162 = -1;
	int64_t x164 = 1121LL;

    t38 = ((x161<=x162)==(x163%x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = 97;

    t39 = ((x165<=x166)==(x167%x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x170 = UINT16_MAX;

    t40 = ((x169<=x170)==(x171%x172));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = INT32_MAX;
	int16_t x174 = 0;
	uint32_t x175 = 20913U;
	static volatile int32_t t41 = 5539283;

    t41 = ((x173<=x174)==(x175%x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 14642LLU;
	int64_t x178 = INT64_MIN;
	volatile int16_t x179 = INT16_MAX;
	volatile int16_t x180 = -1;
	volatile int32_t t42 = 27359;

    t42 = ((x177<=x178)==(x179%x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x182 = -1702;
	int16_t x183 = -1;
	volatile int32_t t43 = 8132579;

    t43 = ((x181<=x182)==(x183%x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	uint16_t x187 = UINT16_MAX;
	static volatile uint8_t x188 = 3U;
	volatile int32_t t44 = -85104002;

    t44 = ((x185<=x186)==(x187%x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = 119031661760083017LL;
	static volatile int8_t x191 = INT8_MAX;

    t45 = ((x189<=x190)==(x191%x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = INT8_MAX;
	int16_t x194 = INT16_MAX;
	static int64_t x195 = -1LL;
	volatile int32_t t46 = 302217404;

    t46 = ((x193<=x194)==(x195%x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x199 = UINT8_MAX;
	int32_t t47 = 134136603;

    t47 = ((x197<=x198)==(x199%x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x202 = INT16_MAX;
	uint32_t x203 = 6017U;
	volatile int32_t t48 = -1;

    t48 = ((x201<=x202)==(x203%x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x205 = 99233;
	volatile int8_t x206 = -1;
	int16_t x208 = -1;
	volatile int32_t t49 = -84324747;

    t49 = ((x205<=x206)==(x207%x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x209 = -133043687;
	volatile int64_t x210 = -1LL;
	volatile uint32_t x211 = 566U;
	int32_t t50 = 63302;

    t50 = ((x209<=x210)==(x211%x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x217 = 526465945199976870LLU;
	uint64_t x218 = UINT64_MAX;
	volatile int32_t x219 = INT32_MIN;
	int16_t x220 = -1;
	int32_t t51 = 3;

    t51 = ((x217<=x218)==(x219%x220));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x223 = 22;
	volatile int64_t x224 = -1LL;
	int32_t t52 = 198832578;

    t52 = ((x221<=x222)==(x223%x224));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x225 = 0;
	uint32_t x226 = UINT32_MAX;
	uint8_t x227 = UINT8_MAX;
	static uint64_t x228 = UINT64_MAX;
	static int32_t t53 = -300553;

    t53 = ((x225<=x226)==(x227%x228));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = -1;
	int8_t x230 = 37;
	int16_t x231 = -1;
	volatile int32_t t54 = -905229174;

    t54 = ((x229<=x230)==(x231%x232));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x233 = 60203LLU;
	static int8_t x234 = INT8_MIN;
	volatile int8_t x235 = -1;
	volatile uint16_t x236 = 1559U;
	int32_t t55 = 1;

    t55 = ((x233<=x234)==(x235%x236));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x237 = 3277336565LLU;
	uint64_t x238 = UINT64_MAX;
	volatile int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MIN;

    t56 = ((x237<=x238)==(x239%x240));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x241 = INT8_MAX;
	static int64_t x243 = INT64_MIN;
	volatile int32_t x244 = INT32_MAX;

    t57 = ((x241<=x242)==(x243%x244));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = -10;
	uint8_t x247 = 22U;

    t58 = ((x245<=x246)==(x247%x248));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x249 = 3959600U;
	int32_t x250 = INT32_MIN;
	int64_t x251 = 1484LL;
	static int8_t x252 = INT8_MIN;
	int32_t t59 = 29;

    t59 = ((x249<=x250)==(x251%x252));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x253 = -1LL;
	int64_t x254 = 3909951349786589130LL;
	uint32_t x255 = UINT32_MAX;
	volatile uint8_t x256 = UINT8_MAX;
	int32_t t60 = 34;

    t60 = ((x253<=x254)==(x255%x256));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x257 = -1LL;
	uint64_t x258 = 1991LLU;
	volatile int8_t x259 = 1;

    t61 = ((x257<=x258)==(x259%x260));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x261 = -1;
	int16_t x262 = 6253;
	int32_t x263 = INT32_MIN;
	volatile int32_t x264 = -1;
	volatile int32_t t62 = 13275;

    t62 = ((x261<=x262)==(x263%x264));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x265 = -1;
	int8_t x266 = INT8_MAX;
	static volatile uint32_t x267 = 33U;
	uint16_t x268 = UINT16_MAX;

    t63 = ((x265<=x266)==(x267%x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x270 = INT16_MAX;
	int64_t x271 = -5814849475542424LL;
	static int32_t x272 = -1;
	volatile int32_t t64 = -6318;

    t64 = ((x269<=x270)==(x271%x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x273 = -470166041747LL;
	static int32_t x274 = INT32_MIN;
	int64_t x275 = INT64_MIN;
	volatile uint16_t x276 = 102U;
	int32_t t65 = -353954102;

    t65 = ((x273<=x274)==(x275%x276));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x277 = INT16_MIN;
	uint8_t x278 = UINT8_MAX;
	int64_t x279 = -151978595835LL;
	static int32_t x280 = -1;
	int32_t t66 = -2694;

    t66 = ((x277<=x278)==(x279%x280));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x282 = UINT8_MAX;
	uint16_t x283 = 31U;
	static int8_t x284 = INT8_MIN;
	static int32_t t67 = -569;

    t67 = ((x281<=x282)==(x283%x284));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x285 = INT32_MIN;
	uint8_t x286 = 19U;
	static volatile int64_t x287 = 163LL;
	volatile int32_t t68 = -62677;

    t68 = ((x285<=x286)==(x287%x288));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x289 = UINT64_MAX;
	static uint8_t x290 = UINT8_MAX;
	volatile uint16_t x291 = 125U;
	uint16_t x292 = 48U;
	static int32_t t69 = 45884976;

    t69 = ((x289<=x290)==(x291%x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x293 = UINT16_MAX;
	volatile int32_t t70 = -1;

    t70 = ((x293<=x294)==(x295%x296));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x297 = 1937U;
	static int16_t x298 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t71 = 60;

    t71 = ((x297<=x298)==(x299%x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x301 = -1LL;
	static int64_t x302 = INT64_MIN;
	uint64_t x303 = 85671174077966LLU;
	int32_t x304 = INT32_MAX;
	volatile int32_t t72 = 822;

    t72 = ((x301<=x302)==(x303%x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = 9LL;
	int32_t x306 = 6878;
	static int32_t x307 = INT32_MAX;
	static uint64_t x308 = 3069787532086LLU;
	volatile int32_t t73 = 481107;

    t73 = ((x305<=x306)==(x307%x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x309 = -2060362;
	int64_t x310 = INT64_MIN;
	uint64_t x311 = 19657479LLU;
	volatile int64_t x312 = INT64_MIN;

    t74 = ((x309<=x310)==(x311%x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = INT16_MIN;
	volatile int64_t x314 = INT64_MAX;
	uint16_t x315 = 0U;
	volatile int16_t x316 = -1;
	volatile int32_t t75 = -2;

    t75 = ((x313<=x314)==(x315%x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x317 = 2U;
	static volatile int8_t x318 = INT8_MAX;
	volatile uint32_t x319 = UINT32_MAX;
	int16_t x320 = -1;
	int32_t t76 = 438;

    t76 = ((x317<=x318)==(x319%x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x321 = 21U;
	static volatile int16_t x322 = 3;
	int32_t x323 = INT32_MIN;
	static volatile uint16_t x324 = UINT16_MAX;
	volatile int32_t t77 = 10612776;

    t77 = ((x321<=x322)==(x323%x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x325 = 1127U;
	volatile int16_t x326 = INT16_MAX;
	volatile int64_t x327 = INT64_MIN;
	static volatile uint64_t x328 = 94361254992204192LLU;
	int32_t t78 = 11890;

    t78 = ((x325<=x326)==(x327%x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x329 = INT8_MAX;
	uint16_t x331 = UINT16_MAX;
	int32_t x332 = 193037;
	int32_t t79 = -7;

    t79 = ((x329<=x330)==(x331%x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x333 = 691U;
	volatile int16_t x334 = 220;
	static volatile uint32_t x335 = 288U;
	int16_t x336 = INT16_MIN;
	static volatile int32_t t80 = -91912;

    t80 = ((x333<=x334)==(x335%x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = INT32_MAX;
	int32_t t81 = 36460556;

    t81 = ((x337<=x338)==(x339%x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x342 = INT64_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t82 = -441;

    t82 = ((x341<=x342)==(x343%x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = 1041849124LLU;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t83 = -6;

    t83 = ((x345<=x346)==(x347%x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = -1799130814LL;
	volatile int16_t x350 = -1;
	int32_t t84 = 47802192;

    t84 = ((x349<=x350)==(x351%x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = INT16_MAX;
	uint32_t x356 = UINT32_MAX;

    t85 = ((x353<=x354)==(x355%x356));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x357 = -6980;
	static uint64_t x359 = 49672084030071LLU;
	int32_t x360 = -1;
	int32_t t86 = -11;

    t86 = ((x357<=x358)==(x359%x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x361 = INT32_MIN;
	int8_t x362 = -1;
	int32_t x363 = -6;
	int32_t t87 = -112781494;

    t87 = ((x361<=x362)==(x363%x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x365 = 2090798648040816580LL;
	static uint16_t x366 = 93U;
	static uint8_t x367 = UINT8_MAX;
	uint32_t x368 = UINT32_MAX;
	int32_t t88 = 1;

    t88 = ((x365<=x366)==(x367%x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x369 = UINT16_MAX;
	int32_t x371 = -709836;
	uint16_t x372 = 13U;
	static int32_t t89 = 1733990;

    t89 = ((x369<=x370)==(x371%x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x373 = -1;
	uint64_t x374 = 343560116760960151LLU;
	int64_t x375 = 1401616597955969165LL;
	static int64_t x376 = -1LL;
	volatile int32_t t90 = -10696;

    t90 = ((x373<=x374)==(x375%x376));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x377 = INT8_MAX;
	uint64_t x379 = 824365LLU;
	static int32_t x380 = -1;
	int32_t t91 = -474;

    t91 = ((x377<=x378)==(x379%x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x381 = -1LL;
	int8_t x382 = INT8_MAX;
	int16_t x383 = 220;
	int32_t t92 = -1;

    t92 = ((x381<=x382)==(x383%x384));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x385 = UINT64_MAX;
	volatile uint32_t x386 = 1705U;
	uint64_t x387 = 37LLU;
	int64_t x388 = -1LL;

    t93 = ((x385<=x386)==(x387%x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x390 = INT8_MIN;
	int32_t x392 = INT32_MAX;
	static int32_t t94 = -39822;

    t94 = ((x389<=x390)==(x391%x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = INT8_MIN;
	int16_t x394 = -1;
	static int8_t x395 = -1;
	uint64_t x396 = UINT64_MAX;
	int32_t t95 = 162967496;

    t95 = ((x393<=x394)==(x395%x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x397 = 0;
	volatile int64_t x398 = -1LL;
	uint32_t x399 = UINT32_MAX;
	uint64_t x400 = 54273380869LLU;
	static int32_t t96 = 8469;

    t96 = ((x397<=x398)==(x399%x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x402 = UINT32_MAX;
	int8_t x403 = INT8_MIN;
	int32_t x404 = INT32_MAX;
	static volatile int32_t t97 = 217336;

    t97 = ((x401<=x402)==(x403%x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x405 = 21174368346LL;
	int32_t x406 = -1;
	uint32_t x407 = 4624U;
	uint64_t x408 = 596724666754LLU;
	int32_t t98 = -991297163;

    t98 = ((x405<=x406)==(x407%x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x409 = 10LL;
	int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	int8_t x412 = -1;

    t99 = ((x409<=x410)==(x411%x412));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x414 = -1;
	volatile int32_t t100 = 85556;

    t100 = ((x413<=x414)==(x415%x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x418 = -3LL;
	static volatile uint64_t x419 = 204528589057718877LLU;
	uint32_t x420 = 7U;
	int32_t t101 = 23;

    t101 = ((x417<=x418)==(x419%x420));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x425 = INT8_MIN;
	static int64_t x426 = INT64_MAX;
	uint32_t x427 = 867306U;
	volatile int64_t x428 = 4018175LL;
	volatile int32_t t102 = -2908197;

    t102 = ((x425<=x426)==(x427%x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x429 = 630273LLU;
	static int64_t x430 = 69580041774LL;
	int8_t x431 = INT8_MIN;
	int32_t x432 = -258995;

    t103 = ((x429<=x430)==(x431%x432));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x433 = -22;
	static int32_t x434 = 347;
	uint32_t x435 = 61057U;
	int16_t x436 = INT16_MIN;
	static volatile int32_t t104 = -1682;

    t104 = ((x433<=x434)==(x435%x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x441 = 11626U;
	int64_t x442 = -10740138LL;
	int64_t x443 = INT64_MAX;
	int32_t x444 = INT32_MIN;

    t105 = ((x441<=x442)==(x443%x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x445 = INT32_MIN;
	int32_t x446 = -1;
	uint8_t x447 = 55U;
	volatile int32_t t106 = 170;

    t106 = ((x445<=x446)==(x447%x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x449 = 15061U;
	volatile int32_t x450 = INT32_MIN;
	static volatile int32_t x451 = -1;
	static int64_t x452 = INT64_MIN;

    t107 = ((x449<=x450)==(x451%x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x453 = 173594660670610LLU;
	int64_t x454 = -910210276LL;
	int64_t x455 = INT64_MIN;
	int16_t x456 = INT16_MIN;

    t108 = ((x453<=x454)==(x455%x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x457 = UINT32_MAX;
	int8_t x458 = -46;
	uint32_t x459 = 4U;
	volatile uint64_t x460 = 174047615LLU;
	int32_t t109 = 1594;

    t109 = ((x457<=x458)==(x459%x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x461 = INT64_MIN;
	int32_t x463 = INT32_MIN;
	int32_t x464 = INT32_MIN;
	volatile int32_t t110 = -118;

    t110 = ((x461<=x462)==(x463%x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x465 = 0LLU;
	int32_t x466 = -11518211;
	static int32_t x467 = 635844;
	static int16_t x468 = -1;
	int32_t t111 = -74542261;

    t111 = ((x465<=x466)==(x467%x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = -1LL;
	int32_t x471 = -59;
	int32_t t112 = -151569;

    t112 = ((x469<=x470)==(x471%x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x473 = 77414933LLU;
	uint16_t x474 = 22798U;
	static int64_t x476 = INT64_MAX;

    t113 = ((x473<=x474)==(x475%x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x479 = UINT64_MAX;
	int8_t x480 = INT8_MIN;
	volatile int32_t t114 = -1689;

    t114 = ((x477<=x478)==(x479%x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x481 = 166777962U;
	uint64_t x482 = UINT64_MAX;
	uint16_t x484 = 106U;

    t115 = ((x481<=x482)==(x483%x484));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x485 = INT32_MIN;
	volatile int64_t x486 = INT64_MAX;
	int8_t x487 = INT8_MAX;
	uint16_t x488 = 25911U;
	int32_t t116 = 168153796;

    t116 = ((x485<=x486)==(x487%x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x489 = -1;
	static int16_t x490 = -37;
	int64_t x491 = -996LL;
	volatile int64_t x492 = -1LL;

    t117 = ((x489<=x490)==(x491%x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x493 = 174LLU;
	static int8_t x494 = -1;
	uint8_t x495 = 1U;
	static int32_t t118 = 994355694;

    t118 = ((x493<=x494)==(x495%x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x498 = -1;
	volatile int64_t x500 = INT64_MAX;

    t119 = ((x497<=x498)==(x499%x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x501 = -2;
	int32_t x502 = -1374;
	int64_t x503 = 885119271962LL;
	int32_t x504 = -1;
	int32_t t120 = -123226;

    t120 = ((x501<=x502)==(x503%x504));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x505 = 51U;
	volatile int16_t x506 = INT16_MIN;
	uint16_t x507 = UINT16_MAX;
	volatile int32_t t121 = -254793;

    t121 = ((x505<=x506)==(x507%x508));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x510 = -8;
	int64_t x511 = -2503491LL;
	static int32_t x512 = INT32_MAX;
	volatile int32_t t122 = -22727753;

    t122 = ((x509<=x510)==(x511%x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x513 = UINT16_MAX;
	volatile int64_t x514 = INT64_MIN;
	static int16_t x515 = INT16_MAX;
	volatile uint16_t x516 = 10U;

    t123 = ((x513<=x514)==(x515%x516));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x518 = 11815522LLU;
	uint32_t x519 = UINT32_MAX;
	int32_t x520 = 11058;

    t124 = ((x517<=x518)==(x519%x520));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x521 = -1;
	static uint64_t x522 = 1470040879LLU;
	uint32_t x523 = 124026354U;
	int8_t x524 = -45;

    t125 = ((x521<=x522)==(x523%x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x525 = INT8_MAX;
	uint8_t x527 = 27U;
	static int16_t x528 = -6661;
	volatile int32_t t126 = 1299826;

    t126 = ((x525<=x526)==(x527%x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x529 = UINT8_MAX;
	volatile int32_t t127 = 904686;

    t127 = ((x529<=x530)==(x531%x532));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x533 = -1;
	static uint16_t x536 = 1U;
	volatile int32_t t128 = -318487;

    t128 = ((x533<=x534)==(x535%x536));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x538 = INT8_MIN;
	int32_t x539 = 214783202;
	int8_t x540 = INT8_MAX;
	int32_t t129 = -1183;

    t129 = ((x537<=x538)==(x539%x540));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x541 = 1;
	int64_t x542 = -1LL;
	static uint32_t x543 = 70385U;
	int32_t x544 = INT32_MAX;

    t130 = ((x541<=x542)==(x543%x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x545 = 0U;
	int8_t x548 = INT8_MAX;
	static volatile int32_t t131 = 506;

    t131 = ((x545<=x546)==(x547%x548));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x550 = UINT8_MAX;
	uint8_t x551 = UINT8_MAX;
	static int32_t t132 = 1;

    t132 = ((x549<=x550)==(x551%x552));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x553 = UINT32_MAX;
	int8_t x554 = 38;
	volatile uint32_t x555 = 2U;
	volatile uint64_t x556 = 169104886987432191LLU;

    t133 = ((x553<=x554)==(x555%x556));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x558 = UINT32_MAX;
	int32_t t134 = -292715579;

    t134 = ((x557<=x558)==(x559%x560));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x561 = INT32_MIN;
	uint16_t x562 = UINT16_MAX;
	static volatile int16_t x563 = INT16_MIN;
	static int8_t x564 = 1;
	int32_t t135 = -145170;

    t135 = ((x561<=x562)==(x563%x564));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x565 = INT64_MAX;
	int8_t x567 = INT8_MAX;
	int8_t x568 = -59;

    t136 = ((x565<=x566)==(x567%x568));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x569 = INT32_MIN;
	int16_t x570 = 1361;
	static uint64_t x571 = 2938149LLU;
	int16_t x572 = INT16_MAX;
	volatile int32_t t137 = 4;

    t137 = ((x569<=x570)==(x571%x572));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x573 = 33U;
	static uint8_t x574 = UINT8_MAX;
	volatile uint16_t x576 = UINT16_MAX;
	int32_t t138 = -1043097859;

    t138 = ((x573<=x574)==(x575%x576));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x577 = INT64_MIN;
	int16_t x578 = INT16_MIN;
	volatile int16_t x579 = INT16_MIN;
	int64_t x580 = -520579LL;
	int32_t t139 = -1812;

    t139 = ((x577<=x578)==(x579%x580));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x581 = UINT16_MAX;
	static int32_t x582 = INT32_MIN;
	static volatile int8_t x584 = INT8_MAX;
	int32_t t140 = -1170;

    t140 = ((x581<=x582)==(x583%x584));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x585 = INT8_MAX;
	static int16_t x587 = INT16_MAX;
	int16_t x588 = -1;

    t141 = ((x585<=x586)==(x587%x588));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x589 = -6;
	volatile int16_t x591 = INT16_MIN;
	int32_t x592 = INT32_MIN;
	int32_t t142 = -2629866;

    t142 = ((x589<=x590)==(x591%x592));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x593 = 25U;
	volatile int64_t x594 = INT64_MAX;
	static int32_t x595 = INT32_MAX;
	int64_t x596 = INT64_MIN;
	volatile int32_t t143 = -125;

    t143 = ((x593<=x594)==(x595%x596));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x597 = -1;
	int64_t x598 = -1LL;
	int16_t x599 = -263;
	int16_t x600 = INT16_MIN;
	int32_t t144 = 1;

    t144 = ((x597<=x598)==(x599%x600));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x601 = INT64_MIN;
	uint16_t x602 = UINT16_MAX;
	int8_t x603 = INT8_MIN;
	volatile uint8_t x604 = 5U;

    t145 = ((x601<=x602)==(x603%x604));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x606 = INT32_MAX;
	static int16_t x607 = 5597;
	int64_t x608 = INT64_MAX;

    t146 = ((x605<=x606)==(x607%x608));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x609 = INT16_MIN;
	volatile uint64_t x610 = UINT64_MAX;
	uint16_t x611 = 132U;
	int64_t x612 = INT64_MIN;
	static volatile int32_t t147 = 0;

    t147 = ((x609<=x610)==(x611%x612));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x613 = INT8_MAX;
	int64_t x615 = INT64_MAX;
	int8_t x616 = INT8_MIN;
	int32_t t148 = 303274308;

    t148 = ((x613<=x614)==(x615%x616));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x617 = INT16_MIN;
	int64_t x618 = INT64_MIN;
	int32_t x620 = INT32_MAX;
	static int32_t t149 = -1120;

    t149 = ((x617<=x618)==(x619%x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x621 = 99U;
	uint8_t x622 = 104U;
	int64_t x623 = -3565LL;
	int16_t x624 = INT16_MAX;
	volatile int32_t t150 = 239082;

    t150 = ((x621<=x622)==(x623%x624));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x625 = UINT8_MAX;
	int32_t x626 = INT32_MIN;
	static volatile int32_t x627 = 13;
	static uint16_t x628 = 10U;

    t151 = ((x625<=x626)==(x627%x628));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x631 = 7U;
	uint32_t x632 = 32208U;
	int32_t t152 = 150;

    t152 = ((x629<=x630)==(x631%x632));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x633 = -1LL;
	uint32_t x634 = 22U;
	int16_t x635 = -17;
	uint64_t x636 = 137406454LLU;

    t153 = ((x633<=x634)==(x635%x636));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x641 = -1;
	static int8_t x642 = 0;
	int64_t x644 = -15187LL;
	static volatile int32_t t154 = -2729;

    t154 = ((x641<=x642)==(x643%x644));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x645 = -4;
	volatile int64_t x646 = INT64_MIN;
	int8_t x647 = -5;
	int64_t x648 = INT64_MIN;

    t155 = ((x645<=x646)==(x647%x648));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x649 = 34U;
	uint32_t x651 = UINT32_MAX;
	int8_t x652 = 16;
	static int32_t t156 = 0;

    t156 = ((x649<=x650)==(x651%x652));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x653 = INT64_MAX;
	int64_t x654 = 25453011343975LL;
	uint32_t x655 = 4032U;
	volatile int16_t x656 = INT16_MIN;
	volatile int32_t t157 = -20052;

    t157 = ((x653<=x654)==(x655%x656));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x657 = INT8_MIN;
	static volatile uint32_t x658 = 0U;
	int16_t x659 = -27;
	uint64_t x660 = UINT64_MAX;
	int32_t t158 = 1438;

    t158 = ((x657<=x658)==(x659%x660));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x661 = 71078512516LLU;
	uint64_t x662 = 33073732774643383LLU;
	int8_t x663 = 19;
	uint16_t x664 = UINT16_MAX;
	static int32_t t159 = 42572441;

    t159 = ((x661<=x662)==(x663%x664));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x665 = 27;
	uint32_t x666 = UINT32_MAX;

    t160 = ((x665<=x666)==(x667%x668));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x673 = UINT64_MAX;
	int32_t x676 = -1;
	volatile int32_t t161 = -1318186;

    t161 = ((x673<=x674)==(x675%x676));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x677 = INT64_MIN;
	volatile uint32_t x678 = 1837838149U;
	static uint16_t x679 = 350U;
	uint16_t x680 = UINT16_MAX;
	volatile int32_t t162 = -41457;

    t162 = ((x677<=x678)==(x679%x680));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x682 = 114U;
	volatile int32_t x683 = INT32_MAX;
	int32_t x684 = -1;
	int32_t t163 = -996390411;

    t163 = ((x681<=x682)==(x683%x684));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x685 = 564469LLU;
	int16_t x686 = -1;
	uint8_t x687 = UINT8_MAX;
	uint64_t x688 = 7085180545396255LLU;
	volatile int32_t t164 = 270;

    t164 = ((x685<=x686)==(x687%x688));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x689 = INT64_MIN;
	static int64_t x690 = -399LL;
	int8_t x691 = INT8_MIN;
	volatile int64_t x692 = INT64_MIN;
	int32_t t165 = 99401;

    t165 = ((x689<=x690)==(x691%x692));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x694 = 46777126U;
	uint16_t x695 = 94U;
	volatile uint32_t x696 = 47745U;
	int32_t t166 = -11261;

    t166 = ((x693<=x694)==(x695%x696));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x699 = INT32_MIN;
	uint64_t x700 = 87748833324793LLU;
	int32_t t167 = -2;

    t167 = ((x697<=x698)==(x699%x700));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x701 = 1LL;
	static int32_t x703 = INT32_MIN;
	volatile int32_t t168 = 40175;

    t168 = ((x701<=x702)==(x703%x704));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x705 = -81LL;
	uint8_t x706 = UINT8_MAX;
	int32_t x707 = INT32_MAX;
	int64_t x708 = INT64_MIN;
	volatile int32_t t169 = 15;

    t169 = ((x705<=x706)==(x707%x708));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = -1LL;
	int16_t x710 = -536;
	int16_t x711 = 3;
	int16_t x712 = INT16_MIN;

    t170 = ((x709<=x710)==(x711%x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x715 = 8073418420678959LL;
	int64_t x716 = -1LL;
	int32_t t171 = 201260963;

    t171 = ((x713<=x714)==(x715%x716));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x717 = 0;
	int8_t x718 = -4;
	volatile int8_t x719 = INT8_MIN;
	static int8_t x720 = INT8_MAX;

    t172 = ((x717<=x718)==(x719%x720));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	int32_t x722 = -1;
	volatile uint64_t x724 = 4402042089LLU;
	static volatile int32_t t173 = 132143788;

    t173 = ((x721<=x722)==(x723%x724));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x725 = -1;
	volatile int32_t x727 = 14316;
	volatile uint64_t x728 = 530780378181809005LLU;
	int32_t t174 = 0;

    t174 = ((x725<=x726)==(x727%x728));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x729 = -2691;
	uint16_t x731 = UINT16_MAX;
	int8_t x732 = INT8_MIN;

    t175 = ((x729<=x730)==(x731%x732));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x733 = 414887862;
	int16_t x735 = -1585;
	int16_t x736 = -195;
	volatile int32_t t176 = -404755511;

    t176 = ((x733<=x734)==(x735%x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x737 = 3418U;
	uint64_t x738 = 70260996851296LLU;
	static int8_t x739 = 1;
	volatile int32_t t177 = 1294670;

    t177 = ((x737<=x738)==(x739%x740));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x742 = INT32_MAX;
	int16_t x743 = INT16_MIN;
	int16_t x744 = INT16_MIN;

    t178 = ((x741<=x742)==(x743%x744));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x745 = 28U;
	volatile int8_t x746 = INT8_MIN;
	int16_t x747 = -8;
	uint8_t x748 = UINT8_MAX;
	volatile int32_t t179 = 7;

    t179 = ((x745<=x746)==(x747%x748));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x749 = INT32_MIN;
	int64_t x750 = -1LL;
	static int16_t x751 = -1;
	int64_t x752 = INT64_MAX;
	static volatile int32_t t180 = -584291464;

    t180 = ((x749<=x750)==(x751%x752));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x753 = -1;
	uint8_t x755 = 14U;
	volatile int16_t x756 = INT16_MAX;

    t181 = ((x753<=x754)==(x755%x756));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x757 = INT32_MAX;
	volatile uint16_t x758 = 0U;
	static int32_t x759 = INT32_MIN;
	uint8_t x760 = 18U;

    t182 = ((x757<=x758)==(x759%x760));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x761 = 1605;
	int16_t x763 = -1376;
	int32_t x764 = 239828074;
	volatile int32_t t183 = -626104410;

    t183 = ((x761<=x762)==(x763%x764));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x765 = INT8_MIN;
	volatile int64_t x766 = INT64_MIN;
	int32_t x767 = -1;
	volatile int32_t t184 = -1;

    t184 = ((x765<=x766)==(x767%x768));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x769 = UINT32_MAX;
	uint64_t x770 = 1356287061984531337LLU;
	int8_t x771 = INT8_MIN;
	volatile int16_t x772 = INT16_MIN;
	volatile int32_t t185 = -26607429;

    t185 = ((x769<=x770)==(x771%x772));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x773 = INT64_MAX;
	volatile int16_t x774 = INT16_MIN;
	int8_t x775 = INT8_MIN;
	int8_t x776 = 12;

    t186 = ((x773<=x774)==(x775%x776));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x777 = UINT32_MAX;
	int64_t x778 = INT64_MAX;
	int32_t x779 = -10;
	static uint32_t x780 = 3704U;
	volatile int32_t t187 = 77748541;

    t187 = ((x777<=x778)==(x779%x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x781 = INT8_MIN;
	int32_t x782 = INT32_MAX;
	int64_t x783 = INT64_MIN;
	int32_t x784 = -1;
	volatile int32_t t188 = -4512;

    t188 = ((x781<=x782)==(x783%x784));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x785 = 7U;
	uint32_t x786 = UINT32_MAX;
	int32_t x787 = 364417;
	int16_t x788 = INT16_MIN;
	static int32_t t189 = 1845675;

    t189 = ((x785<=x786)==(x787%x788));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x789 = UINT32_MAX;
	volatile uint16_t x790 = 2U;
	int64_t x791 = INT64_MAX;
	int64_t x792 = -1LL;
	static volatile int32_t t190 = -68;

    t190 = ((x789<=x790)==(x791%x792));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = INT8_MIN;
	int64_t x795 = INT64_MIN;
	volatile int16_t x796 = INT16_MIN;
	volatile int32_t t191 = -202456;

    t191 = ((x793<=x794)==(x795%x796));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x798 = INT16_MIN;
	int8_t x799 = -2;
	int8_t x800 = INT8_MIN;
	int32_t t192 = 0;

    t192 = ((x797<=x798)==(x799%x800));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x801 = -2066347850LL;
	static volatile uint64_t x802 = UINT64_MAX;
	static int8_t x803 = 23;
	int8_t x804 = 49;
	volatile int32_t t193 = -285358;

    t193 = ((x801<=x802)==(x803%x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x805 = -88513;
	static int16_t x807 = INT16_MAX;
	static volatile int16_t x808 = INT16_MIN;

    t194 = ((x805<=x806)==(x807%x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x809 = UINT16_MAX;
	volatile int64_t x810 = INT64_MIN;
	uint16_t x811 = 1U;
	uint64_t x812 = UINT64_MAX;
	volatile int32_t t195 = -64959777;

    t195 = ((x809<=x810)==(x811%x812));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x813 = INT64_MAX;
	volatile uint64_t x814 = 46LLU;
	int32_t x816 = INT32_MIN;
	int32_t t196 = 119872268;

    t196 = ((x813<=x814)==(x815%x816));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x818 = 21U;
	int16_t x819 = INT16_MAX;
	volatile uint64_t x820 = UINT64_MAX;
	static volatile int32_t t197 = -1;

    t197 = ((x817<=x818)==(x819%x820));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x824 = -1;

    t198 = ((x821<=x822)==(x823%x824));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x827 = UINT64_MAX;
	uint8_t x828 = 114U;
	int32_t t199 = -33841;

    t199 = ((x825<=x826)==(x827%x828));

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

