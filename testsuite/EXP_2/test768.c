
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

static int8_t x1 = -1;
static int16_t x7 = INT16_MIN;
int64_t t1 = -31728LL;
uint32_t x12 = 1907355U;
int64_t t2 = -7314101492LL;
int64_t x16 = INT64_MIN;
static uint32_t x17 = UINT32_MAX;
int8_t x21 = INT8_MAX;
uint64_t t6 = 2113373031LLU;
uint32_t x38 = UINT32_MAX;
static int16_t x41 = INT16_MIN;
int32_t x47 = INT32_MIN;
uint16_t x49 = UINT16_MAX;
static int16_t x55 = INT16_MIN;
volatile int32_t t12 = -1110318;
int8_t x59 = INT8_MIN;
static volatile int32_t t13 = 2;
static uint8_t x61 = 2U;
static int32_t x69 = -416796;
uint8_t x71 = UINT8_MAX;
int8_t x79 = INT8_MIN;
int32_t x80 = INT32_MIN;
int8_t x82 = 0;
uint32_t x84 = 16011U;
static volatile int64_t t19 = 13737LL;
static int64_t x93 = INT64_MAX;
volatile int16_t x97 = INT16_MAX;
static int32_t x99 = INT32_MAX;
volatile uint8_t x108 = 13U;
volatile int8_t x110 = -1;
uint64_t x121 = UINT64_MAX;
static int32_t x123 = INT32_MIN;
static volatile uint16_t x126 = UINT16_MAX;
volatile uint32_t x134 = 2U;
static volatile uint64_t t33 = 1382226401799549LLU;
volatile int32_t x149 = INT32_MAX;
uint16_t x152 = 1U;
volatile int64_t t37 = -15039LL;
static int64_t x164 = INT64_MIN;
static volatile int8_t x165 = INT8_MAX;
static int16_t x166 = INT16_MIN;
uint8_t x174 = 10U;
volatile int8_t x178 = -1;
int8_t x187 = INT8_MAX;
static int8_t x190 = -4;
static int64_t x197 = INT64_MAX;
int16_t x199 = INT16_MIN;
uint16_t x210 = 62U;
static int64_t x216 = INT64_MIN;
int8_t x217 = INT8_MIN;
volatile int64_t x219 = INT64_MIN;
int8_t x221 = 1;
uint32_t x224 = 497680U;
uint8_t x234 = 13U;
volatile uint32_t t55 = 35562U;
uint64_t x238 = 1934148107LLU;
static int32_t x240 = -1;
volatile int64_t t58 = -359LL;
static int64_t x250 = -1562162761753003LL;
static int16_t x255 = INT16_MIN;
int8_t x258 = INT8_MAX;
int8_t x264 = INT8_MIN;
uint64_t t62 = 34792082LLU;
static uint16_t x270 = 20630U;
int32_t x272 = 465762;
int32_t t64 = 92;
volatile int64_t t65 = -889618856031594LL;
int8_t x280 = INT8_MAX;
int8_t x290 = -3;
static int16_t x295 = INT16_MIN;
uint16_t x296 = UINT16_MAX;
uint64_t t70 = 8739598197688400112LLU;
volatile int32_t x307 = INT32_MAX;
static int32_t x315 = INT32_MIN;
int32_t t75 = -45804265;
int32_t x322 = INT32_MIN;
int64_t t78 = -2650606921LL;
int8_t x333 = INT8_MIN;
volatile uint8_t x336 = 5U;
volatile uint64_t t81 = 110LLU;
static volatile int64_t x346 = -64986070849941576LL;
volatile int32_t x349 = -1;
uint8_t x353 = 27U;
uint8_t x362 = 114U;
uint16_t x363 = 13860U;
int32_t t86 = -32495811;
volatile int64_t t87 = 64471LL;
int64_t t88 = -3830848480904493LL;
static volatile uint64_t t90 = 23LLU;
int32_t x388 = INT32_MIN;
volatile uint16_t x390 = 6714U;
volatile int32_t x391 = 69757;
int32_t x392 = 1;
volatile int32_t t92 = 26;
int8_t x398 = -31;
uint64_t x399 = UINT64_MAX;
static int32_t x411 = INT32_MIN;
volatile int32_t x412 = INT32_MIN;
int32_t x414 = INT32_MIN;
int8_t x417 = -21;
int32_t x418 = INT32_MIN;
int32_t x420 = 41506694;
uint64_t t100 = 118789211LLU;
uint8_t x430 = 9U;
volatile uint8_t x440 = UINT8_MAX;
static int32_t t104 = -50;
static volatile uint64_t x443 = 1993715426818285924LLU;
volatile uint64_t t105 = 1610976369LLU;
int8_t x447 = 1;
uint16_t x461 = 1U;
static int64_t x468 = -368233967858695LL;
volatile uint32_t t110 = 136295U;
int32_t x476 = 1;
int8_t x480 = INT8_MAX;
int8_t x481 = -1;
volatile uint8_t x486 = 4U;
uint16_t x487 = 313U;
volatile int16_t x488 = INT16_MAX;
int32_t x489 = 16478;
uint64_t x494 = UINT64_MAX;
volatile uint64_t t116 = 2LLU;
int64_t x503 = -2517LL;
uint32_t x505 = UINT32_MAX;
int16_t x506 = -1;
uint32_t x509 = 1U;
int8_t x512 = -1;
static uint8_t x517 = UINT8_MAX;
int32_t t122 = -24228733;
int64_t x528 = -1LL;
int16_t x543 = 5;
static volatile uint16_t x546 = 12363U;
volatile int16_t x552 = INT16_MIN;
uint64_t t130 = 46236462229304314LLU;
int16_t x561 = INT16_MIN;
uint16_t x564 = 2690U;
uint64_t t133 = 3LLU;
uint32_t x565 = 262U;
int32_t x567 = 466;
static int8_t x571 = INT8_MIN;
int8_t x578 = INT8_MIN;
uint32_t x579 = 2042709129U;
uint64_t t137 = 1073197342LLU;
static volatile int16_t x585 = -1;
int32_t x588 = INT32_MIN;
int8_t x592 = -1;
int64_t x598 = INT64_MIN;
int32_t x599 = INT32_MIN;
int8_t x605 = INT8_MIN;
static int64_t x607 = INT64_MIN;
uint8_t x608 = 0U;
int32_t x609 = 1;
int8_t x611 = INT8_MAX;
static volatile uint64_t x614 = 21529507730115233LLU;
int32_t x616 = -1;
int8_t x622 = -1;
int64_t x624 = INT64_MIN;
int32_t x625 = INT32_MAX;
int64_t x630 = -448472640LL;
uint64_t x632 = UINT64_MAX;
int16_t x637 = INT16_MIN;
static volatile int8_t x639 = INT8_MIN;
int16_t x640 = INT16_MIN;
int16_t x646 = -19;
static int64_t x657 = INT64_MIN;
int64_t x659 = INT64_MAX;
uint64_t x662 = 25LLU;
volatile uint32_t x663 = 5087365U;
static int64_t x667 = INT64_MIN;
volatile uint64_t x669 = 1LLU;
int8_t x672 = INT8_MIN;
uint32_t x673 = 7U;
int64_t t160 = 3957441127413674LL;
int16_t x678 = INT16_MIN;
volatile int64_t x679 = 106503930251794388LL;
uint16_t x682 = 1U;
static volatile int16_t x684 = -51;
int32_t x685 = INT32_MIN;
int64_t x686 = INT64_MAX;
int8_t x687 = -1;
volatile int64_t t164 = 99142494921575LL;
volatile int64_t t165 = 24858651903LL;
int32_t t166 = 200252145;
uint32_t t167 = 492590U;
static volatile int32_t x705 = -38477;
uint8_t x707 = 33U;
int32_t x709 = INT32_MIN;
static volatile int64_t x712 = INT64_MIN;
static int64_t x714 = INT64_MAX;
volatile int64_t x716 = -1LL;
int8_t x717 = INT8_MAX;
int16_t x721 = -3;
volatile uint8_t x743 = 96U;
uint8_t x745 = UINT8_MAX;
int8_t x754 = 0;
int8_t x762 = -1;
volatile int8_t x764 = 0;
int32_t x765 = INT32_MIN;
static uint8_t x768 = 4U;
uint64_t x780 = UINT64_MAX;
uint8_t x783 = 41U;
uint8_t x795 = 15U;
int8_t x796 = INT8_MIN;
int32_t t190 = -669887;
uint8_t x812 = 11U;
uint64_t x817 = 5937144101911151414LLU;
int32_t x821 = 9;
int64_t x822 = 34688737843741407LL;
int64_t x828 = INT64_MAX;
uint16_t x831 = UINT16_MAX;
int64_t x835 = -3733214892246LL;
uint32_t x839 = 53522U;


void f0(void) {
    	uint16_t x2 = 17872U;
	volatile int32_t x3 = INT32_MIN;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 3254;

    t0 = ((x1|(x2/x3))&x4);

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	int64_t x6 = -1LL;
	static int8_t x8 = 57;

    t1 = ((x5|(x6/x7))&x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1002736;
	int16_t x10 = -1;
	static int64_t x11 = INT64_MIN;

    t2 = ((x9|(x10/x11))&x12);

    if (t2 != 1053200LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = 29U;
	int32_t x14 = -39;
	static uint16_t x15 = 7U;
	volatile int64_t t3 = INT64_MIN;

    t3 = ((x13|(x14/x15))&x16);

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x18 = UINT8_MAX;
	int64_t x19 = 49506LL;
	int8_t x20 = INT8_MAX;
	volatile int64_t t4 = -134169225864780974LL;

    t4 = ((x17|(x18/x19))&x20);

    if (t4 != 127LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x22 = UINT8_MAX;
	uint32_t x23 = 2U;
	volatile int64_t x24 = INT64_MAX;
	volatile int64_t t5 = -576270123713426LL;

    t5 = ((x21|(x22/x23))&x24);

    if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 7065731108052LLU;
	int64_t x28 = -51513181127LL;

    t6 = ((x25|(x26/x27))&x28);

    if (t6 != 212025LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x33 = 40036;
	int16_t x34 = -2;
	volatile int8_t x35 = INT8_MAX;
	int64_t x36 = -1LL;
	volatile int64_t t7 = -1676917530LL;

    t7 = ((x33|(x34/x35))&x36);

    if (t7 != 40036LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x37 = 38444013U;
	static int16_t x39 = INT16_MIN;
	static int64_t x40 = -1LL;
	int64_t t8 = -4669431699939006LL;

    t8 = ((x37|(x38/x39))&x40);

    if (t8 != 38444013LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x42 = 161U;
	int64_t x43 = -77LL;
	int32_t x44 = -1;
	int64_t t9 = -1505317LL;

    t9 = ((x41|(x42/x43))&x44);

    if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MAX;
	volatile uint16_t x46 = UINT16_MAX;
	uint8_t x48 = 1U;
	int64_t t10 = 339389175519LL;

    t10 = ((x45|(x46/x47))&x48);

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x50 = 1653477LLU;
	int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MIN;
	volatile uint64_t t11 = 3755LLU;

    t11 = ((x49|(x50/x51))&x52);

    if (t11 != 32768LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x53 = 13U;
	int32_t x54 = INT32_MAX;
	static int16_t x56 = INT16_MIN;

    t12 = ((x53|(x54/x55))&x56);

    if (t12 != -65536) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = -1;
	int8_t x58 = INT8_MIN;
	uint16_t x60 = 881U;

    t13 = ((x57|(x58/x59))&x60);

    if (t13 != 881) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x62 = 4331U;
	int8_t x63 = INT8_MIN;
	int32_t x64 = INT32_MIN;
	int32_t t14 = INT32_MIN;

    t14 = ((x61|(x62/x63))&x64);

    if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 1418U;
	int64_t x66 = -11814672599155169LL;
	static volatile int16_t x67 = INT16_MAX;
	static uint32_t x68 = 44726U;
	static int64_t t15 = 33369395615864LL;

    t15 = ((x65|(x66/x67))&x68);

    if (t15 != 9878LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x70 = 1555U;
	static int8_t x72 = -1;
	static uint32_t t16 = 249742U;

    t16 = ((x69|(x70/x71))&x72);

    if (t16 != 4294550502U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x73 = 13584U;
	static int64_t x74 = -1LL;
	int8_t x75 = INT8_MAX;
	int64_t x76 = INT64_MAX;
	volatile int64_t t17 = -242084907754553412LL;

    t17 = ((x73|(x74/x75))&x76);

    if (t17 != 13584LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	int32_t x78 = -9884;
	volatile int32_t t18 = INT32_MIN;

    t18 = ((x77|(x78/x79))&x80);

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x81 = -420979LL;
	static int32_t x83 = INT32_MAX;

    t19 = ((x81|(x82/x83))&x84);

    if (t19 != 4745LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -1;
	volatile uint8_t x86 = UINT8_MAX;
	static uint32_t x87 = 4U;
	int64_t x88 = 154261327LL;
	volatile int64_t t20 = 113LL;

    t20 = ((x85|(x86/x87))&x88);

    if (t20 != 154261327LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = 8734586U;
	uint32_t x90 = 6883U;
	int32_t x91 = -1;
	static int16_t x92 = INT16_MIN;
	uint32_t t21 = 7U;

    t21 = ((x89|(x90/x91))&x92);

    if (t21 != 8716288U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x94 = 86321U;
	volatile int64_t x95 = INT64_MAX;
	int32_t x96 = INT32_MIN;
	static volatile int64_t t22 = -366137733726575LL;

    t22 = ((x93|(x94/x95))&x96);

    if (t22 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x98 = 29;
	static int8_t x100 = INT8_MAX;
	int32_t t23 = 608;

    t23 = ((x97|(x98/x99))&x100);

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 49U;
	uint8_t x102 = 1U;
	int64_t x103 = INT64_MAX;
	volatile int16_t x104 = 5;
	static volatile int64_t t24 = -235447101LL;

    t24 = ((x101|(x102/x103))&x104);

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MAX;
	int8_t x106 = 0;
	int32_t x107 = -267203;
	int64_t t25 = -8380056674LL;

    t25 = ((x105|(x106/x107))&x108);

    if (t25 != 13LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = -53;
	static int64_t x111 = INT64_MAX;
	int16_t x112 = -1;
	int64_t t26 = -32679319331LL;

    t26 = ((x109|(x110/x111))&x112);

    if (t26 != -53LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = 265182577153742238LL;
	volatile int16_t x114 = INT16_MIN;
	static int32_t x115 = INT32_MIN;
	static uint32_t x116 = 53782933U;
	int64_t t27 = 2463LL;

    t27 = ((x113|(x114/x115))&x116);

    if (t27 != 51642772LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = 3U;
	int64_t x118 = -1LL;
	static int16_t x119 = INT16_MIN;
	int32_t x120 = 29423750;
	int64_t t28 = 6906584LL;

    t28 = ((x117|(x118/x119))&x120);

    if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x122 = INT32_MIN;
	static int16_t x124 = -28;
	volatile uint64_t t29 = 2134712579374546150LLU;

    t29 = ((x121|(x122/x123))&x124);

    if (t29 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x125 = 3266U;
	volatile int32_t x127 = -1;
	int32_t x128 = -552;
	volatile int32_t t30 = -5384367;

    t30 = ((x125|(x126/x127))&x128);

    if (t30 != -62272) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = INT64_MIN;
	int32_t x130 = -1;
	volatile int32_t x131 = 3968526;
	uint64_t x132 = 21991540715539LLU;
	volatile uint64_t t31 = 385457667LLU;

    t31 = ((x129|(x130/x131))&x132);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x133 = UINT32_MAX;
	int8_t x135 = 22;
	int16_t x136 = -1;
	volatile uint32_t t32 = UINT32_MAX;

    t32 = ((x133|(x134/x135))&x136);

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x137 = UINT64_MAX;
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = -1;
	int32_t x140 = -6411086;

    t33 = ((x137|(x138/x139))&x140);

    if (t33 != 18446744073703140530LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x141 = 1U;
	int32_t x142 = INT32_MAX;
	uint32_t x143 = 1809U;
	static int32_t x144 = INT32_MIN;
	volatile uint32_t t34 = 544U;

    t34 = ((x141|(x142/x143))&x144);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = -1;
	volatile int8_t x146 = INT8_MIN;
	volatile int16_t x147 = INT16_MIN;
	static int64_t x148 = -23653LL;
	static int64_t t35 = -523945562372LL;

    t35 = ((x145|(x146/x147))&x148);

    if (t35 != -23653LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x150 = INT8_MIN;
	volatile int64_t x151 = INT64_MAX;
	static int64_t t36 = -13711662550LL;

    t36 = ((x149|(x150/x151))&x152);

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x157 = -1;
	int32_t x158 = -1;
	int64_t x159 = -1LL;
	int8_t x160 = INT8_MAX;

    t37 = ((x157|(x158/x159))&x160);

    if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x161 = -1LL;
	int64_t x162 = INT64_MIN;
	uint32_t x163 = 996416053U;
	volatile int64_t t38 = INT64_MIN;

    t38 = ((x161|(x162/x163))&x164);

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x167 = 1372322894151LLU;
	int32_t x168 = INT32_MIN;
	volatile uint64_t t39 = 241LLU;

    t39 = ((x165|(x166/x167))&x168);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint16_t x169 = 1019U;
	volatile uint16_t x170 = 6857U;
	int8_t x171 = 7;
	volatile int16_t x172 = INT16_MAX;
	int32_t t40 = -751;

    t40 = ((x169|(x170/x171))&x172);

    if (t40 != 1019) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = INT32_MAX;
	int64_t x175 = INT64_MIN;
	uint64_t x176 = 415158170LLU;
	volatile uint64_t t41 = 253LLU;

    t41 = ((x173|(x174/x175))&x176);

    if (t41 != 415158170LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = INT64_MIN;
	uint64_t x179 = 7827170134505865835LLU;
	static int8_t x180 = INT8_MAX;
	static volatile uint64_t t42 = 2954924482693454402LLU;

    t42 = ((x177|(x178/x179))&x180);

    if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = 2;
	volatile int16_t x186 = INT16_MIN;
	volatile uint16_t x188 = 5724U;
	volatile int32_t t43 = -22462;

    t43 = ((x185|(x186/x187))&x188);

    if (t43 != 5724) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = INT16_MIN;
	volatile int32_t x191 = INT32_MIN;
	static int64_t x192 = -1LL;
	int64_t t44 = 1914249140943LL;

    t44 = ((x189|(x190/x191))&x192);

    if (t44 != -32768LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x193 = -1;
	uint32_t x194 = 1929097676U;
	int8_t x195 = -1;
	int64_t x196 = -1LL;
	volatile int64_t t45 = -111704LL;

    t45 = ((x193|(x194/x195))&x196);

    if (t45 != 4294967295LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x198 = 3855677637864973LLU;
	volatile uint16_t x200 = 2U;
	volatile uint64_t t46 = 16238120399971933LLU;

    t46 = ((x197|(x198/x199))&x200);

    if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x201 = UINT32_MAX;
	int16_t x202 = INT16_MAX;
	uint8_t x203 = UINT8_MAX;
	int32_t x204 = -1;
	static uint32_t t47 = UINT32_MAX;

    t47 = ((x201|(x202/x203))&x204);

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x205 = INT32_MIN;
	static int16_t x206 = -1;
	int64_t x207 = -255644206275103107LL;
	volatile uint16_t x208 = 1946U;
	int64_t t48 = -29714480137683LL;

    t48 = ((x205|(x206/x207))&x208);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x209 = 335354U;
	volatile int64_t x211 = INT64_MIN;
	uint8_t x212 = 46U;
	volatile int64_t t49 = -5005872126996LL;

    t49 = ((x209|(x210/x211))&x212);

    if (t49 != 42LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x213 = UINT64_MAX;
	static int16_t x214 = INT16_MIN;
	uint64_t x215 = UINT64_MAX;
	static volatile uint64_t t50 = 2383139LLU;

    t50 = ((x213|(x214/x215))&x216);

    if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x218 = 86LL;
	volatile int16_t x220 = -1;
	static volatile int64_t t51 = -128311802874LL;

    t51 = ((x217|(x218/x219))&x220);

    if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x222 = 254LLU;
	int32_t x223 = 3395;
	uint64_t t52 = 759257866LLU;

    t52 = ((x221|(x222/x223))&x224);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = 0;
	int64_t x226 = 1830708493117366LL;
	int32_t x227 = INT32_MIN;
	uint32_t x228 = 619322530U;
	static int64_t t53 = 464060165LL;

    t53 = ((x225|(x226/x227))&x228);

    if (t53 != 618798242LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = -4;
	int16_t x230 = INT16_MAX;
	uint64_t x231 = UINT64_MAX;
	volatile int64_t x232 = -211451LL;
	uint64_t t54 = 154326596LLU;

    t54 = ((x229|(x230/x231))&x232);

    if (t54 != 18446744073709340164LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x233 = 112;
	int16_t x235 = -1;
	volatile uint32_t x236 = 902318494U;

    t55 = ((x233|(x234/x235))&x236);

    if (t55 != 902318482U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x237 = UINT32_MAX;
	int32_t x239 = INT32_MIN;
	uint64_t t56 = 647140277127514LLU;

    t56 = ((x237|(x238/x239))&x240);

    if (t56 != 4294967295LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = -903;
	uint64_t x242 = 923046628LLU;
	int8_t x243 = INT8_MAX;
	static uint8_t x244 = 4U;
	volatile uint64_t t57 = 46060937933LLU;

    t57 = ((x241|(x242/x243))&x244);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = INT16_MIN;
	static int16_t x246 = -30;
	int64_t x247 = 9897757076780572LL;
	int32_t x248 = 1;

    t58 = ((x245|(x246/x247))&x248);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x249 = UINT64_MAX;
	int64_t x251 = INT64_MIN;
	int32_t x252 = 53170;
	uint64_t t59 = 124LLU;

    t59 = ((x249|(x250/x251))&x252);

    if (t59 != 53170LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x253 = -1;
	int8_t x254 = INT8_MIN;
	uint64_t x256 = 6914146786515LLU;
	volatile uint64_t t60 = 63LLU;

    t60 = ((x253|(x254/x255))&x256);

    if (t60 != 6914146786515LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x257 = 632715497943841321LLU;
	static uint8_t x259 = 5U;
	int16_t x260 = INT16_MIN;
	uint64_t t61 = 2746858LLU;

    t61 = ((x257|(x258/x259))&x260);

    if (t61 != 632715497943826432LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x261 = 5060218105047514777LLU;
	int8_t x262 = INT8_MIN;
	volatile int32_t x263 = 13992;

    t62 = ((x261|(x262/x263))&x264);

    if (t62 != 5060218105047514752LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x265 = -1LL;
	static int16_t x266 = -164;
	volatile uint64_t x267 = 7683070189541205244LLU;
	uint8_t x268 = 58U;
	volatile uint64_t t63 = 14LLU;

    t63 = ((x265|(x266/x267))&x268);

    if (t63 != 58LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = INT8_MAX;
	volatile int16_t x271 = INT16_MAX;

    t64 = ((x269|(x270/x271))&x272);

    if (t64 != 98) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x273 = INT32_MAX;
	int8_t x274 = INT8_MIN;
	volatile uint8_t x275 = 1U;
	int64_t x276 = -1LL;

    t65 = ((x273|(x274/x275))&x276);

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = 1;
	int16_t x278 = -1;
	int32_t x279 = INT32_MIN;
	volatile int32_t t66 = -2771308;

    t66 = ((x277|(x278/x279))&x280);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x281 = INT8_MAX;
	int64_t x282 = INT64_MIN;
	int32_t x283 = -63047917;
	uint64_t x284 = 280335320631633730LLU;
	volatile uint64_t t67 = 15167LLU;

    t67 = ((x281|(x282/x283))&x284);

    if (t67 != 137508553794LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x285 = 13U;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = 27U;
	int8_t x288 = -14;
	uint32_t t68 = 1U;

    t68 = ((x285|(x286/x287))&x288);

    if (t68 != 79536418U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x289 = INT64_MIN;
	volatile int8_t x291 = INT8_MIN;
	uint8_t x292 = UINT8_MAX;
	volatile int64_t t69 = -6LL;

    t69 = ((x289|(x290/x291))&x292);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x293 = -1;
	uint64_t x294 = 65685441798180500LLU;

    t70 = ((x293|(x294/x295))&x296);

    if (t70 != 65535LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x297 = INT32_MAX;
	static volatile int32_t x298 = 298844;
	static uint64_t x299 = 61091574705188989LLU;
	uint8_t x300 = 13U;
	uint64_t t71 = 34810739502840LLU;

    t71 = ((x297|(x298/x299))&x300);

    if (t71 != 13LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = -1;
	int64_t x302 = 74388078562LL;
	volatile uint32_t x303 = UINT32_MAX;
	uint8_t x304 = UINT8_MAX;
	int64_t t72 = -3337LL;

    t72 = ((x301|(x302/x303))&x304);

    if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x305 = 3;
	int16_t x306 = 0;
	int16_t x308 = INT16_MIN;
	volatile int32_t t73 = -130696;

    t73 = ((x305|(x306/x307))&x308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x309 = -11;
	int64_t x310 = -6952LL;
	volatile uint16_t x311 = UINT16_MAX;
	int16_t x312 = -42;
	int64_t t74 = -69906794135871LL;

    t74 = ((x309|(x310/x311))&x312);

    if (t74 != -44LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x313 = -1;
	uint8_t x314 = 15U;
	uint16_t x316 = 2U;

    t75 = ((x313|(x314/x315))&x316);

    if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x317 = INT64_MAX;
	int16_t x318 = -1;
	uint32_t x319 = 4005727U;
	volatile int64_t x320 = -807LL;
	int64_t t76 = -16253178LL;

    t76 = ((x317|(x318/x319))&x320);

    if (t76 != 9223372036854775001LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x321 = 3U;
	int32_t x323 = -50;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t77 = -30598258262LL;

    t77 = ((x321|(x322/x323))&x324);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x325 = INT64_MAX;
	volatile int32_t x326 = INT32_MIN;
	int16_t x327 = -71;
	int16_t x328 = 0;

    t78 = ((x325|(x326/x327))&x328);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x329 = 9744;
	int64_t x330 = INT64_MAX;
	int64_t x331 = INT64_MAX;
	static int32_t x332 = INT32_MIN;
	volatile int64_t t79 = 0LL;

    t79 = ((x329|(x330/x331))&x332);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint32_t x334 = 17232288U;
	int64_t x335 = 175643331248LL;
	volatile int64_t t80 = -551011204087464LL;

    t80 = ((x333|(x334/x335))&x336);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x337 = 8059214426504LLU;
	uint64_t x338 = 1857422345221LLU;
	static int64_t x339 = 136108238597LL;
	int16_t x340 = INT16_MIN;

    t81 = ((x337|(x338/x339))&x340);

    if (t81 != 8059214397440LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x345 = 175LLU;
	int8_t x347 = INT8_MIN;
	volatile int32_t x348 = INT32_MAX;
	static uint64_t t82 = 16071020305479LLU;

    t82 = ((x345|(x346/x347))&x348);

    if (t82 != 2036905967LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x350 = INT32_MAX;
	uint32_t x351 = 2796U;
	uint8_t x352 = 1U;
	volatile uint32_t t83 = 1844332U;

    t83 = ((x349|(x350/x351))&x352);

    if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x354 = -788;
	int16_t x355 = -1;
	uint32_t x356 = 11253U;
	static uint32_t t84 = 82347064U;

    t84 = ((x353|(x354/x355))&x356);

    if (t84 != 789U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x357 = UINT16_MAX;
	static volatile int32_t x358 = -1;
	volatile uint8_t x359 = 2U;
	volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t85 = 39497300220496365LLU;

    t85 = ((x357|(x358/x359))&x360);

    if (t85 != 65535LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x361 = INT16_MAX;
	static uint8_t x364 = 91U;

    t86 = ((x361|(x362/x363))&x364);

    if (t86 != 91) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x365 = -2663;
	static int64_t x366 = 2736638555691356953LL;
	int16_t x367 = INT16_MIN;
	volatile int32_t x368 = INT32_MIN;

    t87 = ((x365|(x366/x367))&x368);

    if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MAX;
	static volatile int8_t x371 = 1;
	uint16_t x372 = 115U;

    t88 = ((x369|(x370/x371))&x372);

    if (t88 != 115LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x373 = INT64_MIN;
	static int8_t x374 = INT8_MIN;
	uint64_t x375 = 5198522LLU;
	static uint32_t x376 = UINT32_MAX;
	uint64_t t89 = 521822079171675LLU;

    t89 = ((x373|(x374/x375))&x376);

    if (t89 != 816378244LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x377 = INT64_MAX;
	volatile uint64_t x378 = 69591341092833LLU;
	int16_t x379 = -1;
	int8_t x380 = -1;

    t90 = ((x377|(x378/x379))&x380);

    if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x385 = 2955LLU;
	uint32_t x386 = 495045214U;
	static volatile uint16_t x387 = 80U;
	volatile uint64_t t91 = 11LLU;

    t91 = ((x385|(x386/x387))&x388);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x389 = -1;

    t92 = ((x389|(x390/x391))&x392);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x393 = INT64_MIN;
	static volatile uint32_t x394 = 15589992U;
	int16_t x395 = INT16_MIN;
	uint8_t x396 = 0U;
	volatile int64_t t93 = 20792440054LL;

    t93 = ((x393|(x394/x395))&x396);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x397 = 78U;
	volatile int64_t x400 = -1LL;
	volatile uint64_t t94 = 1645217977827LLU;

    t94 = ((x397|(x398/x399))&x400);

    if (t94 != 78LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x401 = INT16_MIN;
	int32_t x402 = 98289918;
	int16_t x403 = -13;
	uint32_t x404 = 1744U;
	static volatile uint32_t t95 = 1007U;

    t95 = ((x401|(x402/x403))&x404);

    if (t95 != 192U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x405 = 0U;
	int8_t x406 = -1;
	static int64_t x407 = -1576819626096384610LL;
	int8_t x408 = INT8_MIN;
	int64_t t96 = 164843LL;

    t96 = ((x405|(x406/x407))&x408);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x409 = 0U;
	int32_t x410 = INT32_MAX;
	int32_t t97 = 844701702;

    t97 = ((x409|(x410/x411))&x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x413 = INT8_MAX;
	static int16_t x415 = INT16_MAX;
	uint8_t x416 = 9U;
	volatile int32_t t98 = 14729;

    t98 = ((x413|(x414/x415))&x416);

    if (t98 != 9) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x419 = INT32_MAX;
	int32_t t99 = -7044393;

    t99 = ((x417|(x418/x419))&x420);

    if (t99 != 41506694) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x421 = UINT64_MAX;
	uint32_t x422 = 19668257U;
	static int64_t x423 = -1LL;
	uint16_t x424 = 12U;

    t100 = ((x421|(x422/x423))&x424);

    if (t100 != 12LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x425 = INT16_MAX;
	static int64_t x426 = INT64_MAX;
	int8_t x427 = -1;
	uint8_t x428 = 1U;
	int64_t t101 = -132331791149702574LL;

    t101 = ((x425|(x426/x427))&x428);

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x429 = INT8_MAX;
	int32_t x431 = INT32_MAX;
	int32_t x432 = INT32_MIN;
	volatile int32_t t102 = -125687862;

    t102 = ((x429|(x430/x431))&x432);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x433 = -333;
	static int32_t x434 = INT32_MAX;
	int64_t x435 = -3600893243254125LL;
	int64_t x436 = INT64_MAX;
	int64_t t103 = 263012603296884442LL;

    t103 = ((x433|(x434/x435))&x436);

    if (t103 != 9223372036854775475LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x437 = INT8_MIN;
	int8_t x438 = -1;
	int8_t x439 = -1;

    t104 = ((x437|(x438/x439))&x440);

    if (t104 != 129) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x441 = -1LL;
	int16_t x442 = -48;
	int64_t x444 = -205905LL;

    t105 = ((x441|(x442/x443))&x444);

    if (t105 != 18446744073709345711LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x445 = INT8_MIN;
	int16_t x446 = -3726;
	int64_t x448 = 11591562674066528LL;
	int64_t t106 = 35250866327940484LL;

    t106 = ((x445|(x446/x447))&x448);

    if (t106 != 11591562674066528LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x457 = INT8_MIN;
	static int32_t x458 = INT32_MIN;
	static volatile uint64_t x459 = UINT64_MAX;
	static int32_t x460 = -3600;
	uint64_t t107 = 1LLU;

    t107 = ((x457|(x458/x459))&x460);

    if (t107 != 18446744073709547904LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x462 = -1LL;
	volatile int64_t x463 = INT64_MIN;
	static int8_t x464 = 21;
	int64_t t108 = 15LL;

    t108 = ((x461|(x462/x463))&x464);

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x465 = 116U;
	static int16_t x466 = 899;
	static int32_t x467 = -1129;
	static volatile int64_t t109 = 3863972108406LL;

    t109 = ((x465|(x466/x467))&x468);

    if (t109 != 112LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x469 = 3U;
	int8_t x470 = -19;
	uint16_t x471 = 3U;
	uint32_t x472 = 136790616U;

    t110 = ((x469|(x470/x471))&x472);

    if (t110 != 136790616U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x473 = INT16_MIN;
	int32_t x474 = INT32_MIN;
	static int16_t x475 = INT16_MIN;
	volatile int32_t t111 = 2265;

    t111 = ((x473|(x474/x475))&x476);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x477 = 22862497LLU;
	uint16_t x478 = 97U;
	int32_t x479 = INT32_MAX;
	uint64_t t112 = 144359LLU;

    t112 = ((x477|(x478/x479))&x480);

    if (t112 != 33LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x482 = -1;
	volatile int16_t x483 = INT16_MIN;
	int16_t x484 = INT16_MIN;
	volatile int32_t t113 = 5;

    t113 = ((x481|(x482/x483))&x484);

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x485 = 12073592;
	static int32_t t114 = -483413;

    t114 = ((x485|(x486/x487))&x488);

    if (t114 != 14968) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x490 = 7U;
	uint8_t x491 = UINT8_MAX;
	int64_t x492 = 598432795214LL;
	int64_t t115 = 4772LL;

    t115 = ((x489|(x490/x491))&x492);

    if (t115 != 16462LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x493 = INT32_MIN;
	int8_t x495 = INT8_MAX;
	int16_t x496 = INT16_MIN;

    t116 = ((x493|(x494/x495))&x496);

    if (t116 != 18446744072103165952LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x497 = 7276485317847LLU;
	uint32_t x498 = 370U;
	static int64_t x499 = 122LL;
	int32_t x500 = -9;
	volatile uint64_t t117 = 11418575LLU;

    t117 = ((x497|(x498/x499))&x500);

    if (t117 != 7276485317847LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x501 = -4;
	volatile int8_t x502 = INT8_MIN;
	int16_t x504 = -1;
	int64_t t118 = -131621293685245514LL;

    t118 = ((x501|(x502/x503))&x504);

    if (t118 != -4LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x507 = 5917U;
	int64_t x508 = -45659036LL;
	volatile int64_t t119 = -54576950511064LL;

    t119 = ((x505|(x506/x507))&x508);

    if (t119 != 4249308260LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x510 = 1025450589344LL;
	uint16_t x511 = 172U;
	static volatile int64_t t120 = -277226985004LL;

    t120 = ((x509|(x510/x511))&x512);

    if (t120 != 5961922031LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x513 = INT64_MIN;
	int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MIN;
	int64_t x516 = INT64_MIN;
	volatile int64_t t121 = INT64_MIN;

    t121 = ((x513|(x514/x515))&x516);

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x518 = 198U;
	int8_t x519 = INT8_MIN;
	int16_t x520 = INT16_MIN;

    t122 = ((x517|(x518/x519))&x520);

    if (t122 != -32768) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x521 = UINT16_MAX;
	uint8_t x522 = 3U;
	int8_t x523 = INT8_MAX;
	int32_t x524 = -1;
	volatile int32_t t123 = 95017380;

    t123 = ((x521|(x522/x523))&x524);

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x525 = INT32_MAX;
	int32_t x526 = INT32_MIN;
	int32_t x527 = INT32_MIN;
	int64_t t124 = -326009LL;

    t124 = ((x525|(x526/x527))&x528);

    if (t124 != 2147483647LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x529 = UINT64_MAX;
	uint64_t x530 = 3833105075706LLU;
	uint8_t x531 = UINT8_MAX;
	int64_t x532 = INT64_MIN;
	volatile uint64_t t125 = 222709532294589279LLU;

    t125 = ((x529|(x530/x531))&x532);

    if (t125 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x533 = 26U;
	uint32_t x534 = 25300U;
	int32_t x535 = INT32_MIN;
	int16_t x536 = 1937;
	static volatile uint32_t t126 = 96114333U;

    t126 = ((x533|(x534/x535))&x536);

    if (t126 != 16U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x537 = -1;
	static volatile int16_t x538 = 295;
	uint8_t x539 = UINT8_MAX;
	int16_t x540 = INT16_MAX;
	int32_t t127 = 156965;

    t127 = ((x537|(x538/x539))&x540);

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x541 = 3U;
	int16_t x542 = INT16_MIN;
	int16_t x544 = INT16_MIN;
	uint32_t t128 = 2U;

    t128 = ((x541|(x542/x543))&x544);

    if (t128 != 4294934528U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x545 = -51;
	uint32_t x547 = 548832U;
	volatile uint8_t x548 = 45U;
	uint32_t t129 = 2543U;

    t129 = ((x545|(x546/x547))&x548);

    if (t129 != 13U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile int16_t x550 = INT16_MAX;
	int8_t x551 = -1;

    t130 = ((x549|(x550/x551))&x552);

    if (t130 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x553 = INT16_MIN;
	uint64_t x554 = UINT64_MAX;
	int32_t x555 = INT32_MIN;
	uint32_t x556 = 125257U;
	uint64_t t131 = 36748LLU;

    t131 = ((x553|(x554/x555))&x556);

    if (t131 != 98305LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x557 = -1LL;
	int16_t x558 = -1;
	int16_t x559 = INT16_MAX;
	static int32_t x560 = INT32_MIN;
	int64_t t132 = 0LL;

    t132 = ((x557|(x558/x559))&x560);

    if (t132 != -2147483648LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x562 = 451036167219LLU;
	uint64_t x563 = 35812721710861376LLU;

    t133 = ((x561|(x562/x563))&x564);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x566 = 3879U;
	volatile uint64_t x568 = UINT64_MAX;
	static uint64_t t134 = 4237043841851LLU;

    t134 = ((x565|(x566/x567))&x568);

    if (t134 != 270LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x569 = INT64_MIN;
	volatile int32_t x570 = INT32_MIN;
	int8_t x572 = INT8_MIN;
	int64_t t135 = 21886LL;

    t135 = ((x569|(x570/x571))&x572);

    if (t135 != -9223372036837998592LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x573 = UINT8_MAX;
	uint64_t x574 = 912821874639706LLU;
	int32_t x575 = INT32_MIN;
	int32_t x576 = INT32_MIN;
	volatile uint64_t t136 = 41971349510406687LLU;

    t136 = ((x573|(x574/x575))&x576);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x577 = UINT64_MAX;
	int64_t x580 = INT64_MIN;

    t137 = ((x577|(x578/x579))&x580);

    if (t137 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x581 = UINT32_MAX;
	static uint64_t x582 = UINT64_MAX;
	uint8_t x583 = UINT8_MAX;
	volatile uint64_t x584 = 1627265128LLU;
	uint64_t t138 = 3LLU;

    t138 = ((x581|(x582/x583))&x584);

    if (t138 != 1627265128LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x586 = 11;
	int16_t x587 = -1;
	int32_t t139 = INT32_MIN;

    t139 = ((x585|(x586/x587))&x588);

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x589 = 30484364;
	int8_t x590 = INT8_MIN;
	int32_t x591 = -1;
	static int32_t t140 = -70;

    t140 = ((x589|(x590/x591))&x592);

    if (t140 != 30484364) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x593 = UINT16_MAX;
	int64_t x594 = INT64_MIN;
	volatile uint16_t x595 = UINT16_MAX;
	int16_t x596 = -1;
	int64_t t141 = -89298210LL;

    t141 = ((x593|(x594/x595))&x596);

    if (t141 != -140739635838977LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x597 = -1;
	int64_t x600 = 3962806605795LL;
	int64_t t142 = 3LL;

    t142 = ((x597|(x598/x599))&x600);

    if (t142 != 3962806605795LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x601 = -1;
	volatile int32_t x602 = 10934;
	int16_t x603 = -1;
	uint16_t x604 = 3109U;
	int32_t t143 = -19;

    t143 = ((x601|(x602/x603))&x604);

    if (t143 != 3109) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x606 = 6;
	static int64_t t144 = -28400858710156936LL;

    t144 = ((x605|(x606/x607))&x608);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x610 = INT32_MIN;
	int32_t x612 = INT32_MAX;
	volatile int32_t t145 = -63110726;

    t145 = ((x609|(x610/x611))&x612);

    if (t145 != 2130574329) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x613 = 125722515LL;
	int8_t x615 = -63;
	uint64_t t146 = 32297758628318452LLU;

    t146 = ((x613|(x614/x615))&x616);

    if (t146 != 125722515LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x617 = 28541U;
	volatile uint16_t x618 = 26U;
	volatile uint8_t x619 = UINT8_MAX;
	int32_t x620 = -49665;
	int32_t t147 = 864792304;

    t147 = ((x617|(x618/x619))&x620);

    if (t147 != 11645) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x621 = 42U;
	int32_t x623 = INT32_MIN;
	int64_t t148 = 4143684167LL;

    t148 = ((x621|(x622/x623))&x624);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x626 = INT16_MAX;
	uint8_t x627 = 2U;
	int32_t x628 = 2666;
	volatile int32_t t149 = -74265;

    t149 = ((x625|(x626/x627))&x628);

    if (t149 != 2666) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x629 = 1U;
	static uint32_t x631 = UINT32_MAX;
	static uint64_t t150 = 526334785048328085LLU;

    t150 = ((x629|(x630/x631))&x632);

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x633 = -1LL;
	volatile uint8_t x634 = 14U;
	volatile int8_t x635 = -50;
	volatile int8_t x636 = INT8_MIN;
	volatile int64_t t151 = 1211LL;

    t151 = ((x633|(x634/x635))&x636);

    if (t151 != -128LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x638 = 0;
	static int32_t t152 = -97;

    t152 = ((x637|(x638/x639))&x640);

    if (t152 != -32768) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x645 = INT64_MIN;
	uint64_t x647 = 17135774LLU;
	uint32_t x648 = 5127761U;
	uint64_t t153 = 124142559310249869LLU;

    t153 = ((x645|(x646/x647))&x648);

    if (t153 != 10304LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x649 = -6;
	uint32_t x650 = 92U;
	int32_t x651 = 46669588;
	int64_t x652 = INT64_MIN;
	int64_t t154 = 215679780219296027LL;

    t154 = ((x649|(x650/x651))&x652);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x653 = UINT32_MAX;
	static uint32_t x654 = 269U;
	static uint64_t x655 = UINT64_MAX;
	uint32_t x656 = UINT32_MAX;
	static volatile uint64_t t155 = 108274LLU;

    t155 = ((x653|(x654/x655))&x656);

    if (t155 != 4294967295LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x658 = 977201428LLU;
	static uint8_t x660 = 7U;
	uint64_t t156 = 5LLU;

    t156 = ((x657|(x658/x659))&x660);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x661 = 284255965641364LLU;
	static int64_t x664 = -658677298267787429LL;
	uint64_t t157 = 10892093LLU;

    t157 = ((x661|(x662/x663))&x664);

    if (t157 != 281492945267216LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x665 = INT16_MIN;
	uint16_t x666 = 3U;
	int32_t x668 = INT32_MIN;
	int64_t t158 = 48323384685931038LL;

    t158 = ((x665|(x666/x667))&x668);

    if (t158 != -2147483648LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x670 = INT8_MIN;
	static volatile int64_t x671 = INT64_MAX;
	static volatile uint64_t t159 = 6191LLU;

    t159 = ((x669|(x670/x671))&x672);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x674 = -22595337418534863LL;
	uint16_t x675 = UINT16_MAX;
	int64_t x676 = INT64_MAX;

    t160 = ((x673|(x674/x675))&x676);

    if (t160 != 9223371692072027383LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x677 = 64U;
	static volatile int16_t x680 = INT16_MIN;
	static int64_t t161 = 41085004610154LL;

    t161 = ((x677|(x678/x679))&x680);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x681 = 7U;
	int32_t x683 = -1676;
	uint32_t t162 = 259U;

    t162 = ((x681|(x682/x683))&x684);

    if (t162 != 5U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x688 = INT32_MIN;
	volatile int64_t t163 = 83245LL;

    t163 = ((x685|(x686/x687))&x688);

    if (t163 != -2147483648LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x689 = INT32_MIN;
	uint8_t x690 = 1U;
	volatile int64_t x691 = INT64_MIN;
	volatile int64_t x692 = -3147320103967905LL;

    t164 = ((x689|(x690/x691))&x692);

    if (t164 != -3147321969737728LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x693 = 4U;
	int8_t x694 = INT8_MIN;
	static int64_t x695 = -1LL;
	int64_t x696 = -57476655LL;

    t165 = ((x693|(x694/x695))&x696);

    if (t165 != 128LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x697 = UINT16_MAX;
	int16_t x698 = INT16_MAX;
	int16_t x699 = INT16_MAX;
	static int16_t x700 = -5;

    t166 = ((x697|(x698/x699))&x700);

    if (t166 != 65531) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x701 = 14U;
	static int16_t x702 = INT16_MIN;
	static int32_t x703 = INT32_MAX;
	int32_t x704 = -1;

    t167 = ((x701|(x702/x703))&x704);

    if (t167 != 14U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x706 = UINT8_MAX;
	volatile uint16_t x708 = 102U;
	volatile int32_t t168 = -388;

    t168 = ((x705|(x706/x707))&x708);

    if (t168 != 38) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x710 = UINT32_MAX;
	int64_t x711 = -1760409013130LL;
	volatile int64_t t169 = INT64_MIN;

    t169 = ((x709|(x710/x711))&x712);

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x713 = 57U;
	int16_t x715 = INT16_MIN;
	int64_t t170 = -3493338748735322077LL;

    t170 = ((x713|(x714/x715))&x716);

    if (t170 != -281474976710599LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x718 = -873009LL;
	int16_t x719 = INT16_MAX;
	uint64_t x720 = 3468808111367LLU;
	static uint64_t t171 = 3LLU;

    t171 = ((x717|(x718/x719))&x720);

    if (t171 != 3468808111367LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x722 = INT16_MIN;
	int64_t x723 = INT64_MAX;
	volatile uint32_t x724 = 10313357U;
	int64_t t172 = 4467LL;

    t172 = ((x721|(x722/x723))&x724);

    if (t172 != 10313357LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x725 = INT8_MIN;
	int8_t x726 = INT8_MAX;
	static volatile int32_t x727 = INT32_MAX;
	int64_t x728 = INT64_MIN;
	static int64_t t173 = INT64_MIN;

    t173 = ((x725|(x726/x727))&x728);

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x733 = -1;
	static int32_t x734 = 2018429;
	int32_t x735 = INT32_MIN;
	uint8_t x736 = 8U;
	volatile int32_t t174 = -514002887;

    t174 = ((x733|(x734/x735))&x736);

    if (t174 != 8) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x737 = INT64_MIN;
	uint64_t x738 = 3934152LLU;
	int64_t x739 = -1692156LL;
	static uint64_t x740 = 2328674023LLU;
	volatile uint64_t t175 = 6391477345LLU;

    t175 = ((x737|(x738/x739))&x740);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x741 = 0U;
	volatile uint8_t x742 = 2U;
	uint16_t x744 = 3019U;
	volatile int32_t t176 = -64430;

    t176 = ((x741|(x742/x743))&x744);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x746 = -1991;
	int64_t x747 = -1LL;
	uint16_t x748 = 10397U;
	volatile int64_t t177 = 55LL;

    t177 = ((x745|(x746/x747))&x748);

    if (t177 != 157LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x749 = 491;
	uint8_t x750 = UINT8_MAX;
	int64_t x751 = INT64_MAX;
	int16_t x752 = INT16_MIN;
	static int64_t t178 = 43357618LL;

    t178 = ((x749|(x750/x751))&x752);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x753 = INT8_MIN;
	static uint32_t x755 = UINT32_MAX;
	volatile uint64_t x756 = 324705059134818088LLU;
	volatile uint64_t t179 = 12741840758061425LLU;

    t179 = ((x753|(x754/x755))&x756);

    if (t179 != 3934308096LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x757 = INT16_MAX;
	int8_t x758 = 0;
	int32_t x759 = -1;
	volatile int32_t x760 = -1;
	volatile int32_t t180 = 0;

    t180 = ((x757|(x758/x759))&x760);

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	int8_t x763 = INT8_MAX;
	volatile int32_t t181 = 1286325;

    t181 = ((x761|(x762/x763))&x764);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x766 = 8U;
	volatile uint8_t x767 = UINT8_MAX;
	static int32_t t182 = 59;

    t182 = ((x765|(x766/x767))&x768);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x769 = -1;
	uint32_t x770 = 114970505U;
	static int16_t x771 = INT16_MAX;
	static volatile int64_t x772 = INT64_MAX;
	static volatile int64_t t183 = -3LL;

    t183 = ((x769|(x770/x771))&x772);

    if (t183 != 4294967295LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x773 = 798U;
	int16_t x774 = INT16_MIN;
	int32_t x775 = INT32_MIN;
	volatile int8_t x776 = INT8_MAX;
	volatile int32_t t184 = -202;

    t184 = ((x773|(x774/x775))&x776);

    if (t184 != 30) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x777 = INT16_MAX;
	int8_t x778 = -11;
	volatile int32_t x779 = -1;
	uint64_t t185 = 15LLU;

    t185 = ((x777|(x778/x779))&x780);

    if (t185 != 32767LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x781 = -427504860;
	int32_t x782 = -1;
	int16_t x784 = 5111;
	volatile int32_t t186 = 93093;

    t186 = ((x781|(x782/x783))&x784);

    if (t186 != 804) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x789 = UINT8_MAX;
	static volatile int64_t x790 = -86727403LL;
	int32_t x791 = -1;
	int64_t x792 = 108LL;
	volatile int64_t t187 = 2025500736LL;

    t187 = ((x789|(x790/x791))&x792);

    if (t187 != 108LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x793 = 3861U;
	int32_t x794 = -1;
	volatile int32_t t188 = -6;

    t188 = ((x793|(x794/x795))&x796);

    if (t188 != 3840) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x797 = 860441822066LLU;
	int16_t x798 = -1;
	volatile int16_t x799 = 301;
	volatile int16_t x800 = -1;
	volatile uint64_t t189 = 217221274030037740LLU;

    t189 = ((x797|(x798/x799))&x800);

    if (t189 != 860441822066LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x801 = INT8_MIN;
	int8_t x802 = INT8_MIN;
	static int16_t x803 = INT16_MIN;
	uint8_t x804 = 0U;

    t190 = ((x801|(x802/x803))&x804);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x805 = UINT8_MAX;
	uint32_t x806 = UINT32_MAX;
	int32_t x807 = -1;
	int16_t x808 = -1;
	static volatile uint32_t t191 = 60U;

    t191 = ((x805|(x806/x807))&x808);

    if (t191 != 255U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x809 = 65129958176464LLU;
	int64_t x810 = INT64_MAX;
	int8_t x811 = -1;
	uint64_t t192 = 3039227719857843LLU;

    t192 = ((x809|(x810/x811))&x812);

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x813 = 228;
	static int8_t x814 = -1;
	int16_t x815 = -1;
	int64_t x816 = 176570849279LL;
	volatile int64_t t193 = 3978757775932197875LL;

    t193 = ((x813|(x814/x815))&x816);

    if (t193 != 229LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x818 = UINT16_MAX;
	volatile int8_t x819 = 1;
	uint32_t x820 = UINT32_MAX;
	volatile uint64_t t194 = 14349LLU;

    t194 = ((x817|(x818/x819))&x820);

    if (t194 != 3065577471LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x823 = UINT8_MAX;
	uint8_t x824 = UINT8_MAX;
	int64_t t195 = -1189999LL;

    t195 = ((x821|(x822/x823))&x824);

    if (t195 != 255LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x825 = INT32_MIN;
	int32_t x826 = INT32_MAX;
	int8_t x827 = INT8_MIN;
	volatile int64_t t196 = -1651223772232861LL;

    t196 = ((x825|(x826/x827))&x828);

    if (t196 != 9223372036837998593LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x829 = INT32_MIN;
	int16_t x830 = INT16_MIN;
	static uint64_t x832 = 64090LLU;
	static uint64_t t197 = 6024882LLU;

    t197 = ((x829|(x830/x831))&x832);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x833 = -1;
	volatile uint32_t x834 = UINT32_MAX;
	int32_t x836 = 66352943;
	int64_t t198 = 3999LL;

    t198 = ((x833|(x834/x835))&x836);

    if (t198 != 66352943LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x837 = 14;
	int64_t x838 = -20075882084431493LL;
	static int16_t x840 = INT16_MAX;
	int64_t t199 = 4LL;

    t199 = ((x837|(x838/x839))&x840);

    if (t199 != 31215LL) { NG(); } else { ; }
	
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

