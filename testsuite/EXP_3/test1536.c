
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

int32_t x3 = INT32_MIN;
int32_t t0 = -216769168;
int16_t x7 = INT16_MIN;
uint16_t x15 = 8406U;
int32_t x17 = -1;
int8_t x24 = -9;
static volatile int32_t x28 = INT32_MIN;
static int64_t x29 = INT64_MIN;
static int32_t t9 = 43983;
volatile int16_t x45 = INT16_MAX;
uint8_t x56 = UINT8_MAX;
uint32_t x57 = UINT32_MAX;
static int16_t x61 = -1;
static uint16_t x63 = 8069U;
int32_t t15 = -192;
int32_t x68 = -1;
int32_t t16 = -60488660;
volatile uint32_t x73 = 1U;
int32_t t19 = -952695152;
volatile int32_t x86 = -1;
int32_t t21 = 111;
uint64_t x89 = 10579055623LLU;
static volatile int32_t t22 = -189;
uint8_t x95 = 5U;
int32_t x99 = -1;
static int32_t x102 = -4051449;
static volatile uint8_t x107 = 6U;
int8_t x117 = 1;
int32_t t29 = 220;
uint32_t x121 = 3U;
int32_t t31 = -8286;
int64_t x129 = -82964461553LL;
uint16_t x138 = 10U;
int64_t x140 = INT64_MIN;
uint64_t x144 = UINT64_MAX;
volatile int32_t t35 = 172909;
uint32_t x145 = UINT32_MAX;
int64_t x174 = -1LL;
uint16_t x182 = 572U;
static int64_t x184 = 1454971942168LL;
uint8_t x185 = UINT8_MAX;
int64_t x186 = -24315LL;
uint64_t x189 = UINT64_MAX;
volatile int32_t t47 = 175432;
int32_t x198 = INT32_MIN;
uint16_t x201 = 71U;
int16_t x203 = 4;
volatile uint16_t x204 = 15838U;
volatile int16_t x207 = -1;
volatile int32_t t52 = -49;
static volatile int32_t t53 = 44350;
int32_t t54 = -1;
uint8_t x221 = 3U;
static uint32_t x224 = 768U;
volatile uint64_t x227 = 103446LLU;
int8_t x228 = 0;
int32_t t58 = 0;
int8_t x241 = INT8_MIN;
static int8_t x242 = -59;
int8_t x252 = INT8_MAX;
int64_t x254 = 10343754360LL;
volatile int32_t x256 = INT32_MIN;
volatile int32_t t64 = 102484576;
int32_t t65 = 2071741;
volatile uint8_t x268 = 4U;
int16_t x271 = INT16_MAX;
static volatile int8_t x272 = INT8_MAX;
uint64_t x278 = UINT64_MAX;
static int16_t x280 = INT16_MIN;
volatile int32_t x282 = -2077;
static int8_t x289 = -3;
volatile uint8_t x299 = 1U;
int8_t x309 = INT8_MIN;
int32_t t77 = 90425;
static uint32_t x313 = 53U;
int16_t x315 = -5;
int32_t x324 = -1;
uint64_t x329 = UINT64_MAX;
volatile int64_t x336 = 584827127297LL;
uint16_t x338 = 7U;
int64_t x346 = -70311LL;
volatile uint64_t x347 = UINT64_MAX;
volatile int8_t x348 = INT8_MAX;
static volatile uint8_t x349 = 122U;
uint64_t x350 = UINT64_MAX;
int32_t x353 = INT32_MIN;
int32_t x356 = -34552229;
static int32_t x360 = 50;
static volatile int64_t x362 = 1LL;
volatile int32_t t90 = -969;
static int16_t x365 = 1217;
uint64_t x371 = 576LLU;
uint64_t x379 = UINT64_MAX;
volatile int32_t t94 = 5978;
static int8_t x381 = 2;
int32_t x387 = INT32_MIN;
static volatile uint64_t x394 = 106408533LLU;
uint16_t x395 = 12U;
uint32_t x399 = 8831637U;
uint8_t x410 = 46U;
uint8_t x419 = 109U;
volatile uint16_t x420 = 6U;
uint8_t x434 = 3U;
int32_t t108 = -210226262;
int16_t x449 = INT16_MIN;
uint8_t x452 = UINT8_MAX;
uint32_t x458 = UINT32_MAX;
static uint16_t x463 = 5872U;
volatile uint64_t x464 = 31352335386LLU;
uint64_t x479 = 1394LLU;
uint64_t x481 = 1LLU;
int16_t x487 = -1;
int64_t x488 = INT64_MIN;
uint64_t x491 = 3994479380596555100LLU;
volatile int32_t t122 = 31052;
int32_t t123 = -955969;
int64_t x510 = INT64_MIN;
int16_t x514 = -1;
volatile int64_t x518 = -1LL;
int8_t x520 = INT8_MIN;
int16_t x524 = INT16_MIN;
int32_t t130 = -592976;
int32_t t131 = 0;
int64_t x540 = 2024293LL;
static volatile int64_t x544 = -2606LL;
int8_t x546 = INT8_MIN;
int16_t x549 = INT16_MAX;
volatile uint32_t x565 = UINT32_MAX;
uint64_t x567 = 1027711LLU;
int16_t x571 = 2;
static int32_t t145 = 3977;
static int32_t x586 = -1;
static int32_t t146 = -18109;
volatile int16_t x589 = -542;
static int8_t x595 = INT8_MIN;
static uint16_t x599 = 88U;
volatile uint32_t x605 = 16U;
int64_t x606 = -4144934472194977198LL;
uint64_t x613 = 1001355LLU;
int16_t x618 = INT16_MAX;
static int32_t x619 = INT32_MAX;
uint32_t x627 = UINT32_MAX;
int8_t x628 = INT8_MIN;
static int32_t x629 = -155955;
uint8_t x633 = UINT8_MAX;
int16_t x634 = INT16_MIN;
int64_t x636 = INT64_MIN;
volatile int32_t t160 = -4653;
int32_t x646 = 2;
uint32_t x647 = 6330043U;
static uint16_t x649 = 50U;
int8_t x650 = INT8_MIN;
volatile int16_t x656 = INT16_MAX;
uint32_t x665 = 8U;
volatile int32_t t166 = -1214888;
volatile int32_t t167 = -13036;
int16_t x673 = INT16_MIN;
static volatile int32_t x678 = -1;
int32_t t169 = -2;
int32_t t171 = 5447545;
uint16_t x689 = UINT16_MAX;
static int8_t x692 = INT8_MIN;
int32_t x704 = INT32_MAX;
uint64_t x707 = 222750LLU;
volatile uint32_t x709 = 3545618U;
int64_t x719 = INT64_MAX;
volatile int16_t x723 = 44;
int8_t x727 = -1;
static int32_t t183 = -1;
int64_t x738 = 57600LL;
int16_t x739 = INT16_MAX;
volatile int64_t x740 = INT64_MAX;
volatile int32_t t184 = -158;
static int32_t x745 = INT32_MIN;
int32_t t186 = 19;
uint64_t x749 = 163530LLU;
int8_t x752 = -1;
volatile int32_t t187 = -44793454;
int8_t x754 = INT8_MIN;
int64_t x755 = INT64_MAX;
volatile int32_t x760 = INT32_MIN;
int32_t x765 = 308;
uint64_t x771 = 1590855LLU;
volatile int16_t x774 = INT16_MAX;
static uint32_t x775 = 634U;
int64_t x778 = INT64_MIN;
uint32_t x787 = 3161U;
uint8_t x788 = 95U;
static volatile int32_t t196 = 60708073;
uint8_t x792 = 10U;
int64_t x795 = INT64_MIN;
volatile int32_t t198 = -2332782;
int16_t x799 = 13530;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	volatile int32_t x2 = -16415013;
	uint32_t x4 = 13973U;

    t0 = ((x1&x2)<=(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -4;
	volatile int32_t x6 = -154919860;
	static int32_t x8 = -1;
	static int32_t t1 = -58714332;

    t1 = ((x5&x6)<=(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = 221850060309LL;
	volatile int8_t x10 = -1;
	volatile uint64_t x11 = UINT64_MAX;
	volatile uint64_t x12 = UINT64_MAX;
	static volatile int32_t t2 = -614458698;

    t2 = ((x9&x10)<=(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int32_t x14 = INT32_MAX;
	int64_t x16 = INT64_MIN;
	int32_t t3 = -325277816;

    t3 = ((x13&x14)<=(x15==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = 4;
	int8_t x19 = 2;
	static uint32_t x20 = UINT32_MAX;
	static volatile int32_t t4 = 8546;

    t4 = ((x17&x18)<=(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	static uint64_t x22 = UINT64_MAX;
	volatile int8_t x23 = 23;
	volatile int32_t t5 = 71;

    t5 = ((x21&x22)<=(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = 3U;
	uint32_t x26 = 3616U;
	static uint64_t x27 = 3LLU;
	volatile int32_t t6 = 11805;

    t6 = ((x25&x26)<=(x27==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = INT16_MIN;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 226;

    t7 = ((x29&x30)<=(x31==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = -1LL;
	static int8_t x34 = -14;
	int32_t x35 = -5267010;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -1207;

    t8 = ((x33&x34)<=(x35==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -10;
	int16_t x38 = INT16_MAX;
	volatile int8_t x39 = 50;
	uint8_t x40 = 14U;

    t9 = ((x37&x38)<=(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 14963U;
	volatile int64_t x42 = INT64_MAX;
	uint64_t x43 = 81909646354LLU;
	int8_t x44 = INT8_MAX;
	static volatile int32_t t10 = -9;

    t10 = ((x41&x42)<=(x43==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = UINT8_MAX;
	int8_t x47 = INT8_MAX;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 4679;

    t11 = ((x45&x46)<=(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	int8_t x50 = 8;
	int64_t x51 = 3347546460LL;
	int8_t x52 = -57;
	volatile int32_t t12 = -1;

    t12 = ((x49&x50)<=(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	int64_t x54 = -1LL;
	volatile uint16_t x55 = 3811U;
	int32_t t13 = -145;

    t13 = ((x53&x54)<=(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = -1;
	static int32_t x59 = INT32_MAX;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = -1;

    t14 = ((x57&x58)<=(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x62 = 1U;
	volatile int64_t x64 = -1LL;

    t15 = ((x61&x62)<=(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = -3;
	static volatile int32_t x66 = INT32_MAX;
	static int16_t x67 = -1;

    t16 = ((x65&x66)<=(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MAX;
	int32_t x70 = INT32_MIN;
	volatile uint16_t x71 = UINT16_MAX;
	int64_t x72 = INT64_MAX;
	int32_t t17 = -54908;

    t17 = ((x69&x70)<=(x71==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = -898;
	int8_t x75 = INT8_MIN;
	static uint32_t x76 = UINT32_MAX;
	int32_t t18 = 58072149;

    t18 = ((x73&x74)<=(x75==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	static int8_t x78 = 5;
	volatile int8_t x79 = 30;
	uint8_t x80 = UINT8_MAX;

    t19 = ((x77&x78)<=(x79==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = 7U;
	static volatile int64_t x82 = INT64_MAX;
	static int16_t x83 = 0;
	uint16_t x84 = 40U;
	volatile int32_t t20 = 360872;

    t20 = ((x81&x82)<=(x83==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x85 = UINT32_MAX;
	static int8_t x87 = INT8_MIN;
	static int16_t x88 = 50;

    t21 = ((x85&x86)<=(x87==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x90 = UINT16_MAX;
	volatile int32_t x91 = -1;
	int8_t x92 = 1;

    t22 = ((x89&x90)<=(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	int8_t x94 = -13;
	int64_t x96 = -2797697402583739344LL;
	int32_t t23 = -4012;

    t23 = ((x93&x94)<=(x95==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x97 = 136544389U;
	volatile int32_t x98 = 416;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = -12330885;

    t24 = ((x97&x98)<=(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 758226668U;
	int16_t x103 = -1;
	uint64_t x104 = UINT64_MAX;
	int32_t t25 = 1;

    t25 = ((x101&x102)<=(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x105 = INT64_MIN;
	uint32_t x106 = UINT32_MAX;
	uint32_t x108 = UINT32_MAX;
	static int32_t t26 = 895;

    t26 = ((x105&x106)<=(x107==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = 2651;
	int16_t x110 = -1;
	volatile uint8_t x111 = 68U;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -1;

    t27 = ((x109&x110)<=(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 2686410U;
	volatile int16_t x114 = 11445;
	static int64_t x115 = INT64_MIN;
	volatile int32_t x116 = 20;
	int32_t t28 = 5;

    t28 = ((x113&x114)<=(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MAX;

    t29 = ((x117&x118)<=(x119==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = -1;
	uint8_t x123 = 98U;
	int32_t x124 = -198383;
	volatile int32_t t30 = 6;

    t30 = ((x121&x122)<=(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	uint32_t x126 = 246817U;
	static volatile int16_t x127 = INT16_MAX;
	int16_t x128 = 0;

    t31 = ((x125&x126)<=(x127==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x130 = -210;
	static uint16_t x131 = 15U;
	static uint8_t x132 = 2U;
	int32_t t32 = -3087;

    t32 = ((x129&x130)<=(x131==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 1874303LLU;
	volatile int64_t x134 = -5460314864328526LL;
	static int16_t x135 = 113;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 196931656;

    t33 = ((x133&x134)<=(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 9954U;
	static uint64_t x139 = UINT64_MAX;
	int32_t t34 = -119;

    t34 = ((x137&x138)<=(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -2;
	int64_t x142 = INT64_MIN;
	int32_t x143 = INT32_MIN;

    t35 = ((x141&x142)<=(x143==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x146 = UINT32_MAX;
	uint16_t x147 = 11U;
	int16_t x148 = INT16_MIN;
	int32_t t36 = 11;

    t36 = ((x145&x146)<=(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x149 = 7383U;
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MAX;
	volatile uint16_t x152 = 100U;
	volatile int32_t t37 = 280673;

    t37 = ((x149&x150)<=(x151==x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 4LLU;
	int32_t x154 = -1;
	uint8_t x155 = 9U;
	static volatile int32_t x156 = INT32_MIN;
	volatile int32_t t38 = -454405675;

    t38 = ((x153&x154)<=(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = 11;
	uint32_t x158 = UINT32_MAX;
	static volatile uint32_t x159 = 1619U;
	int8_t x160 = -2;
	static int32_t t39 = -437464;

    t39 = ((x157&x158)<=(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = INT32_MAX;
	int32_t x162 = INT32_MIN;
	int64_t x163 = -908LL;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -762998;

    t40 = ((x161&x162)<=(x163==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MAX;
	int64_t x166 = INT64_MIN;
	static volatile int32_t x167 = -369076;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -1;

    t41 = ((x165&x166)<=(x167==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = INT16_MIN;
	int64_t x170 = INT64_MAX;
	int64_t x171 = 12385167293LL;
	int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = -56;

    t42 = ((x169&x170)<=(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 88947315505506LLU;
	int32_t x175 = -2813;
	static int8_t x176 = INT8_MIN;
	int32_t t43 = 59;

    t43 = ((x173&x174)<=(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = UINT8_MAX;
	volatile int32_t x178 = INT32_MIN;
	static int64_t x179 = -62836177608410LL;
	int16_t x180 = 445;
	int32_t t44 = 25169757;

    t44 = ((x177&x178)<=(x179==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	volatile uint8_t x183 = UINT8_MAX;
	volatile int32_t t45 = 43818;

    t45 = ((x181&x182)<=(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x187 = -1;
	uint64_t x188 = 4010623597711330667LLU;
	volatile int32_t t46 = -66931952;

    t46 = ((x185&x186)<=(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = 15;
	int32_t x191 = -1;
	int8_t x192 = 1;

    t47 = ((x189&x190)<=(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	static int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	static int32_t t48 = -11;

    t48 = ((x193&x194)<=(x195==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x199 = -10;
	int32_t x200 = -19829;
	static int32_t t49 = -139732;

    t49 = ((x197&x198)<=(x199==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x202 = INT16_MIN;
	volatile int32_t t50 = 14731;

    t50 = ((x201&x202)<=(x203==x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = 488364696817LL;
	int64_t x206 = INT64_MAX;
	int8_t x208 = 0;
	static volatile int32_t t51 = -103;

    t51 = ((x205&x206)<=(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x209 = 3296U;
	int8_t x210 = INT8_MIN;
	uint8_t x211 = 0U;
	static int64_t x212 = -1LL;

    t52 = ((x209&x210)<=(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	int16_t x214 = INT16_MIN;
	uint32_t x215 = UINT32_MAX;
	int32_t x216 = INT32_MAX;

    t53 = ((x213&x214)<=(x215==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 90780LLU;
	volatile int8_t x218 = INT8_MAX;
	volatile int32_t x219 = INT32_MIN;
	uint32_t x220 = 20U;

    t54 = ((x217&x218)<=(x219==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x222 = INT32_MIN;
	uint64_t x223 = UINT64_MAX;
	int32_t t55 = -8049425;

    t55 = ((x221&x222)<=(x223==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 19U;
	uint32_t x226 = UINT32_MAX;
	int32_t t56 = 239368;

    t56 = ((x225&x226)<=(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = INT32_MAX;
	uint8_t x230 = 0U;
	volatile int16_t x231 = INT16_MAX;
	uint8_t x232 = 72U;
	int32_t t57 = -138196;

    t57 = ((x229&x230)<=(x231==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MAX;
	static int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MAX;
	int8_t x236 = -1;

    t58 = ((x233&x234)<=(x235==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1429;
	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	volatile int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -9132;

    t59 = ((x237&x238)<=(x239==x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x243 = INT16_MAX;
	static volatile int64_t x244 = 3LL;
	static int32_t t60 = -474287530;

    t60 = ((x241&x242)<=(x243==x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MAX;
	int16_t x246 = INT16_MIN;
	int64_t x247 = 22LL;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t61 = -97005;

    t61 = ((x245&x246)<=(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	int16_t x251 = -11047;
	int32_t t62 = 5;

    t62 = ((x249&x250)<=(x251==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x253 = 241825;
	uint32_t x255 = UINT32_MAX;
	static volatile int32_t t63 = -1;

    t63 = ((x253&x254)<=(x255==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -518930;
	int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	static int8_t x260 = 3;

    t64 = ((x257&x258)<=(x259==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x261 = 1U;
	int8_t x262 = INT8_MIN;
	int64_t x263 = -1LL;
	int32_t x264 = 4020;

    t65 = ((x261&x262)<=(x263==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x265 = UINT8_MAX;
	uint8_t x266 = 1U;
	uint64_t x267 = 305863192830630LLU;
	int32_t t66 = 549695;

    t66 = ((x265&x266)<=(x267==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x269 = 1LLU;
	int64_t x270 = 2LL;
	static volatile int32_t t67 = -944682035;

    t67 = ((x269&x270)<=(x271==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x273 = 1727U;
	int8_t x274 = INT8_MAX;
	int64_t x275 = 1917LL;
	static int8_t x276 = 27;
	static volatile int32_t t68 = 9548;

    t68 = ((x273&x274)<=(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 5U;
	int16_t x279 = INT16_MIN;
	static int32_t t69 = -1454;

    t69 = ((x277&x278)<=(x279==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 42542U;
	int16_t x283 = INT16_MIN;
	uint16_t x284 = 6290U;
	volatile int32_t t70 = -4194;

    t70 = ((x281&x282)<=(x283==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -30;
	uint32_t x286 = 40291495U;
	uint8_t x287 = 2U;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = 881993726;

    t71 = ((x285&x286)<=(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = -352829891LL;
	int64_t x291 = -1LL;
	uint8_t x292 = 1U;
	int32_t t72 = -985;

    t72 = ((x289&x290)<=(x291==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	volatile uint16_t x294 = 1608U;
	uint16_t x295 = UINT16_MAX;
	static int16_t x296 = -1;
	int32_t t73 = -16912;

    t73 = ((x293&x294)<=(x295==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	uint64_t x298 = 214929955LLU;
	uint8_t x300 = 36U;
	int32_t t74 = -133;

    t74 = ((x297&x298)<=(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	uint16_t x302 = UINT16_MAX;
	static uint8_t x303 = 13U;
	int32_t x304 = 28995215;
	int32_t t75 = 994643;

    t75 = ((x301&x302)<=(x303==x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = INT8_MIN;
	uint8_t x306 = 1U;
	static int8_t x307 = -1;
	uint32_t x308 = 0U;
	int32_t t76 = -470453;

    t76 = ((x305&x306)<=(x307==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x310 = INT32_MIN;
	static volatile int32_t x311 = 12061507;
	static int32_t x312 = -15;

    t77 = ((x309&x310)<=(x311==x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x314 = UINT8_MAX;
	static int32_t x316 = INT32_MAX;
	int32_t t78 = 57;

    t78 = ((x313&x314)<=(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -12663659LL;
	uint64_t x318 = 41LLU;
	uint64_t x319 = 7822427LLU;
	static int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -60515751;

    t79 = ((x317&x318)<=(x319==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x321 = 125U;
	int32_t x322 = 504050453;
	static int8_t x323 = 1;
	volatile int32_t t80 = 20756733;

    t80 = ((x321&x322)<=(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = 430;
	volatile uint16_t x326 = 28595U;
	uint16_t x327 = 3359U;
	static uint32_t x328 = 83U;
	int32_t t81 = -789;

    t81 = ((x325&x326)<=(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint32_t x330 = UINT32_MAX;
	static volatile int32_t x331 = INT32_MAX;
	static uint32_t x332 = 710865588U;
	volatile int32_t t82 = 7426372;

    t82 = ((x329&x330)<=(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = 3926958;
	static int8_t x334 = INT8_MAX;
	uint16_t x335 = UINT16_MAX;
	int32_t t83 = -245;

    t83 = ((x333&x334)<=(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = 6141;
	int32_t x339 = INT32_MAX;
	volatile int32_t x340 = -1;
	int32_t t84 = 0;

    t84 = ((x337&x338)<=(x339==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	volatile uint16_t x342 = UINT16_MAX;
	int8_t x343 = -1;
	volatile int64_t x344 = INT64_MAX;
	static int32_t t85 = -499113302;

    t85 = ((x341&x342)<=(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint8_t x345 = 8U;
	static volatile int32_t t86 = -679643640;

    t86 = ((x345&x346)<=(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x351 = -15;
	int32_t x352 = INT32_MAX;
	int32_t t87 = -13694904;

    t87 = ((x349&x350)<=(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x354 = 15414U;
	int32_t x355 = 0;
	int32_t t88 = -186473;

    t88 = ((x353&x354)<=(x355==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = UINT16_MAX;
	int8_t x358 = -15;
	volatile int32_t x359 = INT32_MAX;
	volatile int32_t t89 = -12;

    t89 = ((x357&x358)<=(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = 0;
	int32_t x363 = INT32_MIN;
	int64_t x364 = 90LL;

    t90 = ((x361&x362)<=(x363==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x366 = -1;
	volatile int32_t x367 = -1;
	static volatile int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -38;

    t91 = ((x365&x366)<=(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	volatile int32_t x370 = -244;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 2;

    t92 = ((x369&x370)<=(x371==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = UINT16_MAX;
	uint32_t x374 = 2142579U;
	static uint16_t x375 = UINT16_MAX;
	volatile int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -2019131;

    t93 = ((x373&x374)<=(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MAX;
	uint16_t x378 = 24U;
	uint8_t x380 = 104U;

    t94 = ((x377&x378)<=(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x382 = UINT32_MAX;
	int64_t x383 = -1LL;
	int32_t x384 = INT32_MIN;
	int32_t t95 = -160572;

    t95 = ((x381&x382)<=(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = INT32_MAX;
	int8_t x386 = 29;
	static uint16_t x388 = 0U;
	volatile int32_t t96 = 49732521;

    t96 = ((x385&x386)<=(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -3;
	uint8_t x390 = 40U;
	int32_t x391 = -1;
	int16_t x392 = INT16_MIN;
	int32_t t97 = 14082804;

    t97 = ((x389&x390)<=(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	uint64_t x396 = UINT64_MAX;
	static int32_t t98 = -17634;

    t98 = ((x393&x394)<=(x395==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	int8_t x398 = INT8_MIN;
	static uint64_t x400 = 400566184LLU;
	int32_t t99 = -3;

    t99 = ((x397&x398)<=(x399==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -86;
	int32_t x402 = INT32_MAX;
	int16_t x403 = INT16_MIN;
	volatile int64_t x404 = -26525529805LL;
	static int32_t t100 = 15188599;

    t100 = ((x401&x402)<=(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 3U;
	int16_t x406 = -1;
	int64_t x407 = INT64_MIN;
	static volatile uint16_t x408 = 23993U;
	volatile int32_t t101 = -13615;

    t101 = ((x405&x406)<=(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	uint8_t x411 = 29U;
	uint32_t x412 = 73322921U;
	int32_t t102 = -6251419;

    t102 = ((x409&x410)<=(x411==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = 2680538908LL;
	static int16_t x414 = INT16_MIN;
	uint16_t x415 = 6U;
	static int16_t x416 = -60;
	static volatile int32_t t103 = 42007;

    t103 = ((x413&x414)<=(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = 1986;
	int32_t x418 = INT32_MIN;
	static volatile int32_t t104 = 62045242;

    t104 = ((x417&x418)<=(x419==x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x421 = 3015U;
	int64_t x422 = INT64_MAX;
	uint8_t x423 = UINT8_MAX;
	static volatile int32_t x424 = -1;
	volatile int32_t t105 = 660485;

    t105 = ((x421&x422)<=(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	static uint32_t x426 = 1968465204U;
	int8_t x427 = INT8_MIN;
	uint8_t x428 = 28U;
	int32_t t106 = 672912;

    t106 = ((x425&x426)<=(x427==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	volatile int32_t x430 = INT32_MIN;
	static int64_t x431 = 6473041773666LL;
	static int8_t x432 = 40;
	int32_t t107 = 940904628;

    t107 = ((x429&x430)<=(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = 5;
	static uint16_t x435 = UINT16_MAX;
	int64_t x436 = INT64_MAX;

    t108 = ((x433&x434)<=(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = -199;
	int32_t x438 = -19301335;
	volatile uint16_t x439 = UINT16_MAX;
	volatile int64_t x440 = INT64_MAX;
	volatile int32_t t109 = -421403506;

    t109 = ((x437&x438)<=(x439==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x441 = 138U;
	int32_t x442 = INT32_MIN;
	volatile int8_t x443 = 0;
	volatile int8_t x444 = 31;
	static volatile int32_t t110 = 1;

    t110 = ((x441&x442)<=(x443==x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = 435;
	static int8_t x446 = INT8_MIN;
	static uint32_t x447 = UINT32_MAX;
	uint32_t x448 = UINT32_MAX;
	int32_t t111 = 25265187;

    t111 = ((x445&x446)<=(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x450 = INT16_MIN;
	uint16_t x451 = UINT16_MAX;
	volatile int32_t t112 = -847;

    t112 = ((x449&x450)<=(x451==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	int32_t x454 = -1;
	uint32_t x455 = UINT32_MAX;
	static volatile uint64_t x456 = 0LLU;
	static volatile int32_t t113 = 57935256;

    t113 = ((x453&x454)<=(x455==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	volatile int32_t x459 = INT32_MIN;
	uint16_t x460 = 3U;
	volatile int32_t t114 = -10;

    t114 = ((x457&x458)<=(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1879LL;
	uint32_t x462 = 1676U;
	int32_t t115 = 1;

    t115 = ((x461&x462)<=(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint64_t x465 = 14360840LLU;
	int8_t x466 = INT8_MAX;
	static int64_t x467 = -157944990LL;
	static int32_t x468 = INT32_MIN;
	int32_t t116 = 23;

    t116 = ((x465&x466)<=(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -14;
	int8_t x470 = 0;
	uint8_t x471 = 44U;
	int8_t x472 = INT8_MIN;
	int32_t t117 = -10104;

    t117 = ((x469&x470)<=(x471==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = 43;
	int16_t x474 = INT16_MIN;
	uint8_t x475 = UINT8_MAX;
	int8_t x476 = -50;
	volatile int32_t t118 = -14541641;

    t118 = ((x473&x474)<=(x475==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = INT32_MIN;
	uint64_t x478 = 65621LLU;
	volatile uint64_t x480 = UINT64_MAX;
	int32_t t119 = 212736568;

    t119 = ((x477&x478)<=(x479==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x482 = INT8_MAX;
	static int16_t x483 = INT16_MIN;
	uint32_t x484 = 18142U;
	volatile int32_t t120 = -82;

    t120 = ((x481&x482)<=(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = INT64_MAX;
	uint8_t x486 = 83U;
	volatile int32_t t121 = 98925;

    t121 = ((x485&x486)<=(x487==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x489 = 0;
	int16_t x490 = -57;
	uint16_t x492 = 1867U;

    t122 = ((x489&x490)<=(x491==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 592LLU;
	int8_t x494 = INT8_MIN;
	uint64_t x495 = 5LLU;
	uint32_t x496 = 839465155U;

    t123 = ((x493&x494)<=(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x497 = -501088315;
	int32_t x498 = 110666665;
	int32_t x499 = INT32_MAX;
	int64_t x500 = INT64_MAX;
	volatile int32_t t124 = 15077;

    t124 = ((x497&x498)<=(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MAX;
	int16_t x502 = -1;
	static uint8_t x503 = UINT8_MAX;
	int8_t x504 = INT8_MIN;
	volatile int32_t t125 = 3832;

    t125 = ((x501&x502)<=(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	static uint32_t x506 = UINT32_MAX;
	int8_t x507 = INT8_MIN;
	int16_t x508 = INT16_MIN;
	static int32_t t126 = -211;

    t126 = ((x505&x506)<=(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -1;
	int64_t x511 = INT64_MIN;
	int32_t x512 = INT32_MIN;
	int32_t t127 = 87;

    t127 = ((x509&x510)<=(x511==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int64_t x515 = -10476LL;
	volatile int64_t x516 = INT64_MAX;
	int32_t t128 = -107696843;

    t128 = ((x513&x514)<=(x515==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	uint64_t x519 = 51945489235514834LLU;
	volatile int32_t t129 = 113817;

    t129 = ((x517&x518)<=(x519==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 0LLU;
	int8_t x522 = -1;
	static int16_t x523 = 58;

    t130 = ((x521&x522)<=(x523==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MAX;
	volatile int32_t x526 = -1;
	int64_t x527 = INT64_MAX;
	volatile int64_t x528 = INT64_MAX;

    t131 = ((x525&x526)<=(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	int8_t x530 = -1;
	int8_t x531 = INT8_MIN;
	int64_t x532 = 1LL;
	static volatile int32_t t132 = -1614694;

    t132 = ((x529&x530)<=(x531==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	static int32_t x534 = -2;
	volatile uint8_t x535 = 2U;
	int64_t x536 = INT64_MIN;
	int32_t t133 = -144517;

    t133 = ((x533&x534)<=(x535==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -1;
	static volatile int64_t x538 = 1330174LL;
	int64_t x539 = -1LL;
	volatile int32_t t134 = -645808906;

    t134 = ((x537&x538)<=(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = -1;
	static uint16_t x542 = UINT16_MAX;
	volatile uint16_t x543 = UINT16_MAX;
	volatile int32_t t135 = -91;

    t135 = ((x541&x542)<=(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -1;
	static int32_t x547 = INT32_MAX;
	volatile int32_t x548 = 3286005;
	int32_t t136 = -735717688;

    t136 = ((x545&x546)<=(x547==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x550 = -1;
	volatile int16_t x551 = -1;
	int8_t x552 = 0;
	int32_t t137 = -1;

    t137 = ((x549&x550)<=(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 4002684LLU;
	static int32_t x554 = INT32_MAX;
	uint16_t x555 = UINT16_MAX;
	int32_t x556 = -1;
	volatile int32_t t138 = 3;

    t138 = ((x553&x554)<=(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = 959179822;
	static int32_t x558 = INT32_MAX;
	int32_t x559 = INT32_MAX;
	static uint16_t x560 = 1518U;
	volatile int32_t t139 = -21;

    t139 = ((x557&x558)<=(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = -1LL;
	volatile int64_t x562 = 66269562624750LL;
	int8_t x563 = 5;
	static int16_t x564 = INT16_MAX;
	static volatile int32_t t140 = -327542928;

    t140 = ((x561&x562)<=(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x566 = INT8_MIN;
	int32_t x568 = INT32_MIN;
	int32_t t141 = -360608;

    t141 = ((x565&x566)<=(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x569 = INT32_MIN;
	volatile int32_t x570 = -1;
	static uint64_t x572 = 12899LLU;
	static volatile int32_t t142 = 9;

    t142 = ((x569&x570)<=(x571==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	uint64_t x574 = UINT64_MAX;
	uint64_t x575 = 70183783136923LLU;
	static int64_t x576 = INT64_MIN;
	volatile int32_t t143 = 33929197;

    t143 = ((x573&x574)<=(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	uint64_t x578 = 21542LLU;
	int64_t x579 = -1LL;
	int8_t x580 = INT8_MIN;
	int32_t t144 = 7852936;

    t144 = ((x577&x578)<=(x579==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	int8_t x582 = INT8_MIN;
	volatile uint64_t x583 = UINT64_MAX;
	static uint32_t x584 = 532551098U;

    t145 = ((x581&x582)<=(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = 570;
	uint16_t x587 = UINT16_MAX;
	int8_t x588 = 11;

    t146 = ((x585&x586)<=(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x590 = INT32_MAX;
	int8_t x591 = -4;
	int8_t x592 = -1;
	int32_t t147 = -4188;

    t147 = ((x589&x590)<=(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = -1;
	uint16_t x594 = 978U;
	int16_t x596 = -8;
	volatile int32_t t148 = 97279;

    t148 = ((x593&x594)<=(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 1U;
	static int64_t x598 = INT64_MAX;
	uint32_t x600 = UINT32_MAX;
	volatile int32_t t149 = 2953606;

    t149 = ((x597&x598)<=(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -45LL;
	int16_t x602 = INT16_MIN;
	int32_t x603 = INT32_MIN;
	int8_t x604 = INT8_MIN;
	int32_t t150 = 1058521758;

    t150 = ((x601&x602)<=(x603==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x607 = UINT64_MAX;
	uint64_t x608 = UINT64_MAX;
	static int32_t t151 = -187;

    t151 = ((x605&x606)<=(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = 129;
	uint16_t x610 = 12734U;
	volatile uint32_t x611 = 807569U;
	uint8_t x612 = 0U;
	volatile int32_t t152 = 68460;

    t152 = ((x609&x610)<=(x611==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x614 = -1;
	static int64_t x615 = -493532601462535LL;
	uint16_t x616 = 3315U;
	int32_t t153 = -1;

    t153 = ((x613&x614)<=(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -1;
	uint64_t x620 = UINT64_MAX;
	static volatile int32_t t154 = -2627;

    t154 = ((x617&x618)<=(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x621 = 32LLU;
	static uint32_t x622 = 208899410U;
	uint8_t x623 = 3U;
	int64_t x624 = INT64_MIN;
	int32_t t155 = 242129;

    t155 = ((x621&x622)<=(x623==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -1;
	volatile uint8_t x626 = 52U;
	static int32_t t156 = 1;

    t156 = ((x625&x626)<=(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x630 = 1U;
	int16_t x631 = -833;
	uint64_t x632 = 2333625608698423840LLU;
	volatile int32_t t157 = -373767;

    t157 = ((x629&x630)<=(x631==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x635 = UINT64_MAX;
	int32_t t158 = 32774076;

    t158 = ((x633&x634)<=(x635==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = UINT64_MAX;
	static int16_t x638 = 137;
	volatile int64_t x639 = INT64_MIN;
	int32_t x640 = -39;
	volatile int32_t t159 = 2116;

    t159 = ((x637&x638)<=(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint64_t x641 = 1409381548942339LLU;
	int16_t x642 = -1;
	volatile int64_t x643 = INT64_MIN;
	static int32_t x644 = INT32_MIN;

    t160 = ((x641&x642)<=(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 82U;
	int32_t x648 = INT32_MIN;
	int32_t t161 = -18314192;

    t161 = ((x645&x646)<=(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x651 = 745130025;
	uint8_t x652 = 104U;
	int32_t t162 = -31826;

    t162 = ((x649&x650)<=(x651==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -957793077845LL;
	uint32_t x654 = 14242U;
	int64_t x655 = INT64_MIN;
	volatile int32_t t163 = 2;

    t163 = ((x653&x654)<=(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -106;
	int8_t x658 = -1;
	uint8_t x659 = 100U;
	int32_t x660 = INT32_MAX;
	volatile int32_t t164 = -8771891;

    t164 = ((x657&x658)<=(x659==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x661 = INT64_MAX;
	int64_t x662 = INT64_MIN;
	static volatile uint64_t x663 = 22145801233287463LLU;
	int32_t x664 = -51;
	int32_t t165 = 153706737;

    t165 = ((x661&x662)<=(x663==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x666 = 2U;
	static volatile uint16_t x667 = 1U;
	uint64_t x668 = 3100913038LLU;

    t166 = ((x665&x666)<=(x667==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 569438316541LLU;
	int32_t x670 = INT32_MAX;
	static uint16_t x671 = 1U;
	int8_t x672 = -2;

    t167 = ((x669&x670)<=(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x674 = -2;
	int64_t x675 = -507613261735901LL;
	volatile int8_t x676 = INT8_MAX;
	volatile int32_t t168 = -103;

    t168 = ((x673&x674)<=(x675==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -35643102126973075LL;
	uint8_t x679 = 25U;
	int64_t x680 = INT64_MAX;

    t169 = ((x677&x678)<=(x679==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = INT8_MAX;
	int64_t x682 = INT64_MIN;
	int32_t x683 = -15913073;
	int8_t x684 = INT8_MIN;
	int32_t t170 = 235511;

    t170 = ((x681&x682)<=(x683==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 2U;
	int16_t x686 = INT16_MAX;
	volatile int32_t x687 = -496830;
	uint64_t x688 = 2392LLU;

    t171 = ((x685&x686)<=(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x690 = 113U;
	int8_t x691 = 1;
	volatile int32_t t172 = 1249911;

    t172 = ((x689&x690)<=(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 1558512330083684572LLU;
	volatile int64_t x694 = -1LL;
	int64_t x695 = 10261LL;
	static uint16_t x696 = UINT16_MAX;
	volatile int32_t t173 = 410;

    t173 = ((x693&x694)<=(x695==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = -1;
	static volatile int16_t x698 = INT16_MIN;
	int64_t x699 = INT64_MIN;
	int32_t x700 = 1749;
	volatile int32_t t174 = -54;

    t174 = ((x697&x698)<=(x699==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -2;
	int16_t x702 = INT16_MIN;
	int16_t x703 = INT16_MIN;
	volatile int32_t t175 = 96;

    t175 = ((x701&x702)<=(x703==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = 355U;
	static int64_t x706 = 16655LL;
	volatile uint16_t x708 = UINT16_MAX;
	int32_t t176 = -204743258;

    t176 = ((x705&x706)<=(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x710 = INT32_MAX;
	volatile int8_t x711 = -1;
	volatile int8_t x712 = -1;
	int32_t t177 = -4;

    t177 = ((x709&x710)<=(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = 2U;
	volatile uint8_t x714 = 0U;
	static int32_t x715 = -16516546;
	volatile int32_t x716 = INT32_MAX;
	static int32_t t178 = -51781;

    t178 = ((x713&x714)<=(x715==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 11130478LLU;
	int16_t x718 = INT16_MAX;
	uint32_t x720 = 3U;
	int32_t t179 = 1650823;

    t179 = ((x717&x718)<=(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	int32_t x722 = 918712;
	static volatile int8_t x724 = -1;
	volatile int32_t t180 = 62499;

    t180 = ((x721&x722)<=(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	volatile int64_t x726 = 5453410LL;
	int64_t x728 = -1LL;
	int32_t t181 = 1575411;

    t181 = ((x725&x726)<=(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1LL;
	static uint16_t x730 = 2308U;
	static uint8_t x731 = 3U;
	int8_t x732 = INT8_MIN;
	int32_t t182 = -67397172;

    t182 = ((x729&x730)<=(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x733 = 1U;
	uint8_t x734 = UINT8_MAX;
	static int16_t x735 = -95;
	static int32_t x736 = INT32_MIN;

    t183 = ((x733&x734)<=(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = -25LL;

    t184 = ((x737&x738)<=(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 106;
	volatile uint16_t x742 = UINT16_MAX;
	int16_t x743 = 15;
	int16_t x744 = -1;
	int32_t t185 = 461146763;

    t185 = ((x741&x742)<=(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x746 = INT16_MAX;
	uint16_t x747 = 3502U;
	int8_t x748 = INT8_MIN;

    t186 = ((x745&x746)<=(x747==x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x750 = UINT8_MAX;
	volatile int32_t x751 = 55736;

    t187 = ((x749&x750)<=(x751==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 375LLU;
	int32_t x756 = INT32_MIN;
	volatile int32_t t188 = -611022;

    t188 = ((x753&x754)<=(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	static int16_t x758 = 3545;
	int8_t x759 = 1;
	int32_t t189 = -2337;

    t189 = ((x757&x758)<=(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = 63762060;
	volatile int16_t x762 = INT16_MAX;
	uint8_t x763 = 72U;
	volatile uint8_t x764 = UINT8_MAX;
	static int32_t t190 = 1;

    t190 = ((x761&x762)<=(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x766 = INT8_MIN;
	int32_t x767 = -1;
	int16_t x768 = -184;
	volatile int32_t t191 = 979772;

    t191 = ((x765&x766)<=(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MAX;
	static uint32_t x770 = UINT32_MAX;
	uint8_t x772 = 10U;
	volatile int32_t t192 = 5;

    t192 = ((x769&x770)<=(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 996;
	static int16_t x776 = -3174;
	int32_t t193 = 145308429;

    t193 = ((x773&x774)<=(x775==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MAX;
	volatile uint8_t x779 = UINT8_MAX;
	static int8_t x780 = -28;
	int32_t t194 = 7094;

    t194 = ((x777&x778)<=(x779==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x781 = 0U;
	volatile int64_t x782 = 12969291LL;
	static uint64_t x783 = 2136852694853575LLU;
	volatile uint16_t x784 = UINT16_MAX;
	volatile int32_t t195 = 43;

    t195 = ((x781&x782)<=(x783==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MAX;
	volatile uint16_t x786 = UINT16_MAX;

    t196 = ((x785&x786)<=(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 172673515U;
	int64_t x790 = -1722146010595LL;
	static uint64_t x791 = 2710998628788464028LLU;
	static volatile int32_t t197 = -589141137;

    t197 = ((x789&x790)<=(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -1LL;
	uint8_t x794 = 0U;
	static int16_t x796 = INT16_MIN;

    t198 = ((x793&x794)<=(x795==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = INT8_MAX;
	static int64_t x798 = -1LL;
	static uint8_t x800 = 0U;
	int32_t t199 = -1;

    t199 = ((x797&x798)<=(x799==x800));

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

