
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

static int8_t x2 = -1;
static int32_t x15 = INT32_MAX;
uint16_t x22 = 4275U;
uint8_t x27 = UINT8_MAX;
int8_t x29 = INT8_MIN;
volatile int8_t x31 = INT8_MAX;
int32_t x32 = INT32_MIN;
volatile uint64_t x39 = 70985LLU;
static int32_t x41 = 7;
uint8_t x53 = 27U;
static volatile int64_t x56 = -13976125375437LL;
uint16_t x59 = 32U;
uint32_t x67 = 60205U;
uint16_t x68 = 820U;
int64_t x69 = -11624803LL;
int16_t x75 = -3327;
uint8_t x79 = 48U;
int32_t x82 = INT32_MIN;
static int32_t x85 = -545;
uint64_t x87 = 134045048490LLU;
volatile int16_t x89 = INT16_MAX;
int8_t x90 = INT8_MIN;
int16_t x92 = INT16_MIN;
int8_t x95 = 2;
static int64_t x97 = INT64_MIN;
volatile uint8_t x111 = UINT8_MAX;
static int32_t t26 = -157000;
int32_t x117 = INT32_MIN;
static int16_t x119 = -1359;
volatile uint8_t x120 = 15U;
int32_t t28 = -1064626132;
int32_t x128 = INT32_MAX;
static int32_t t29 = -1589;
int32_t t32 = 430;
int64_t x142 = -545994026402LL;
int32_t x145 = -1;
int16_t x154 = -5;
static uint64_t x155 = UINT64_MAX;
static int32_t t36 = 91621;
volatile int32_t t38 = 109265;
static int32_t t40 = 0;
int8_t x176 = -6;
static volatile int8_t x183 = INT8_MIN;
volatile int64_t x189 = -1LL;
static volatile int8_t x193 = 1;
static volatile int64_t x196 = INT64_MIN;
int32_t x217 = INT32_MIN;
int64_t x222 = INT64_MIN;
int64_t x227 = INT64_MAX;
uint8_t x228 = UINT8_MAX;
volatile uint32_t x229 = UINT32_MAX;
int8_t x232 = INT8_MIN;
int16_t x233 = INT16_MIN;
int32_t x240 = -1;
static volatile int32_t x243 = -1;
int64_t x246 = INT64_MAX;
int32_t x249 = INT32_MIN;
int32_t t59 = -6753168;
int8_t x256 = -1;
volatile uint64_t x259 = 31789953413471LLU;
volatile int32_t t61 = -3201756;
static int32_t x272 = 1;
volatile int16_t x274 = INT16_MAX;
int32_t x284 = INT32_MIN;
static volatile int32_t t65 = -37077864;
static int32_t t66 = -19;
uint32_t x302 = UINT32_MAX;
int32_t x326 = -3350597;
static int64_t x328 = -1LL;
int64_t x330 = INT64_MAX;
int32_t x331 = INT32_MIN;
static int32_t t77 = 10690;
uint8_t x338 = UINT8_MAX;
int32_t t80 = -6036;
static int64_t x347 = 20LL;
int32_t t81 = 55;
int32_t x350 = -1;
uint64_t x367 = 16836087LLU;
volatile int8_t x371 = INT8_MIN;
int32_t x384 = INT32_MIN;
static uint32_t x388 = 47U;
static uint8_t x398 = 3U;
int32_t x400 = INT32_MIN;
static volatile uint64_t x406 = 69018505281108078LLU;
int32_t t96 = 4850005;
int32_t t97 = -1732;
static volatile int32_t x417 = INT32_MAX;
uint16_t x420 = UINT16_MAX;
static volatile int32_t t99 = 2996;
uint32_t x430 = 13436U;
volatile uint32_t x431 = UINT32_MAX;
volatile int32_t t103 = 0;
static int16_t x443 = INT16_MIN;
volatile int16_t x449 = 382;
volatile int64_t x452 = -1LL;
static volatile int32_t t107 = 1013;
int64_t x455 = -368LL;
volatile int32_t t109 = 69272;
static int64_t x466 = INT64_MIN;
uint16_t x468 = UINT16_MAX;
int64_t x472 = 601LL;
uint8_t x477 = 7U;
int8_t x478 = INT8_MIN;
int64_t x479 = INT64_MIN;
int32_t t114 = 28575;
int16_t x482 = INT16_MIN;
uint16_t x484 = UINT16_MAX;
volatile int32_t t115 = -14117946;
uint16_t x485 = UINT16_MAX;
int32_t t116 = 779049;
uint16_t x492 = UINT16_MAX;
int16_t x499 = 2931;
volatile int32_t t119 = -103560125;
static int16_t x508 = 2374;
int16_t x510 = INT16_MIN;
static volatile int64_t x511 = INT64_MIN;
static int8_t x512 = -1;
int8_t x513 = INT8_MAX;
volatile int32_t t122 = -59082;
volatile int32_t x519 = INT32_MAX;
volatile int32_t t123 = 319;
int16_t x523 = -14047;
volatile int64_t x526 = 170173809LL;
int32_t x533 = -1;
int64_t x537 = INT64_MIN;
static int16_t x539 = 6;
int32_t t128 = 1152917;
volatile int16_t x541 = 6;
int8_t x543 = INT8_MIN;
int16_t x548 = INT16_MIN;
static int32_t t131 = -5977;
int32_t x563 = 6393336;
volatile int32_t t134 = -1154588;
uint8_t x567 = 6U;
static uint32_t x569 = 94397232U;
uint64_t x578 = 30LLU;
static int32_t t138 = -9284;
uint32_t x583 = 1U;
int8_t x600 = INT8_MAX;
static int32_t t143 = -2342369;
int64_t x604 = INT64_MIN;
static volatile int16_t x608 = INT16_MAX;
int16_t x610 = INT16_MIN;
volatile int64_t x612 = INT64_MIN;
static volatile int32_t t146 = 74602355;
volatile int16_t x615 = INT16_MAX;
static int64_t x619 = -1LL;
uint32_t x624 = UINT32_MAX;
uint64_t x627 = 362208309LLU;
volatile int32_t x630 = -1;
static int16_t x644 = INT16_MIN;
int32_t x656 = INT32_MIN;
uint32_t x659 = UINT32_MAX;
static volatile int16_t x661 = INT16_MIN;
int64_t x662 = INT64_MIN;
int16_t x663 = INT16_MIN;
volatile uint16_t x671 = 37U;
int64_t x674 = INT64_MIN;
uint8_t x679 = UINT8_MAX;
int32_t x681 = INT32_MAX;
static volatile int32_t x682 = -1;
static int32_t x685 = -1;
int32_t x686 = 279468383;
int8_t x693 = INT8_MAX;
static volatile int32_t t167 = 1;
uint32_t x697 = 118526419U;
static int16_t x704 = -1;
volatile int32_t t169 = -11;
int32_t t171 = 19;
static uint16_t x722 = UINT16_MAX;
volatile int32_t t174 = 12902;
int64_t x725 = -1LL;
int64_t x726 = -1LL;
static volatile int64_t x727 = -1821549LL;
int32_t x728 = -903;
volatile uint16_t x730 = UINT16_MAX;
volatile int32_t x744 = 3495899;
int16_t x757 = -1;
static volatile int8_t x765 = 58;
volatile uint32_t x775 = 291831U;
static int32_t x778 = -564136;
volatile int16_t x781 = 0;
volatile int32_t t189 = 239;
int16_t x787 = 2;
int16_t x788 = INT16_MAX;
volatile int32_t t190 = -13;
volatile int32_t t191 = -1365;
uint64_t x795 = 4928895LLU;
int32_t t193 = -4;
volatile uint32_t x803 = UINT32_MAX;
volatile int8_t x809 = -13;
volatile uint16_t x816 = UINT16_MAX;
int32_t x817 = -849871;
int64_t x822 = INT64_MAX;
int16_t x823 = INT16_MIN;
static int32_t x824 = -5690420;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	int16_t x3 = -1;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -129161;

    t0 = ((x1^x2)!=(x3%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	static uint64_t x6 = UINT64_MAX;
	static int8_t x7 = -61;
	static int8_t x8 = INT8_MAX;
	int32_t t1 = -254627;

    t1 = ((x5^x6)!=(x7%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	uint64_t x14 = 8974990LLU;
	int32_t x16 = INT32_MIN;
	volatile int32_t t2 = -5523451;

    t2 = ((x13^x14)!=(x15%x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MIN;
	uint32_t x18 = 190009U;
	static int16_t x19 = INT16_MIN;
	uint16_t x20 = 39U;
	volatile int32_t t3 = -518020;

    t3 = ((x17^x18)!=(x19%x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	static uint8_t x23 = 1U;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t4 = -1008;

    t4 = ((x21^x22)!=(x23%x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x25 = -1LL;
	int8_t x26 = INT8_MIN;
	uint16_t x28 = 29U;
	volatile int32_t t5 = 2742;

    t5 = ((x25^x26)!=(x27%x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x30 = UINT16_MAX;
	static volatile int32_t t6 = 136141536;

    t6 = ((x29^x30)!=(x31%x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x33 = INT16_MIN;
	static uint16_t x34 = 30U;
	uint8_t x35 = 3U;
	static int64_t x36 = INT64_MAX;
	int32_t t7 = -32671;

    t7 = ((x33^x34)!=(x35%x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -1;
	static int64_t x38 = -1LL;
	static int16_t x40 = INT16_MAX;
	int32_t t8 = -44718351;

    t8 = ((x37^x38)!=(x39%x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x42 = INT32_MIN;
	int8_t x43 = INT8_MIN;
	static uint16_t x44 = 32U;
	volatile int32_t t9 = 99075857;

    t9 = ((x41^x42)!=(x43%x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x49 = 1037668U;
	int32_t x50 = -1;
	uint8_t x51 = 1U;
	int64_t x52 = INT64_MIN;
	volatile int32_t t10 = 794265055;

    t10 = ((x49^x50)!=(x51%x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x54 = -1;
	uint32_t x55 = 10462745U;
	static int32_t t11 = -514076;

    t11 = ((x53^x54)!=(x55%x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = INT8_MAX;
	static volatile uint64_t x58 = 13395415175853204LLU;
	int64_t x60 = INT64_MAX;
	int32_t t12 = -90210953;

    t12 = ((x57^x58)!=(x59%x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = -1LL;
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = -1;
	int16_t x64 = -32;
	static int32_t t13 = -7;

    t13 = ((x61^x62)!=(x63%x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x65 = 6116U;
	uint64_t x66 = 10153LLU;
	volatile int32_t t14 = -126215;

    t14 = ((x65^x66)!=(x67%x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x70 = UINT32_MAX;
	uint16_t x71 = UINT16_MAX;
	uint32_t x72 = 609U;
	static volatile int32_t t15 = 342001;

    t15 = ((x69^x70)!=(x71%x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x73 = -1;
	volatile uint16_t x74 = 5732U;
	int64_t x76 = -4149LL;
	static int32_t t16 = 3772;

    t16 = ((x73^x74)!=(x75%x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x77 = 76U;
	static int16_t x78 = INT16_MIN;
	int64_t x80 = -11234120875LL;
	static volatile int32_t t17 = -42;

    t17 = ((x77^x78)!=(x79%x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = INT32_MAX;
	uint8_t x83 = 15U;
	int64_t x84 = INT64_MIN;
	static int32_t t18 = -15717;

    t18 = ((x81^x82)!=(x83%x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x86 = INT16_MAX;
	int16_t x88 = INT16_MAX;
	static volatile int32_t t19 = 3;

    t19 = ((x85^x86)!=(x87%x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x91 = -1LL;
	static volatile int32_t t20 = -2121411;

    t20 = ((x89^x90)!=(x91%x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = 8U;
	int32_t x94 = -629641;
	uint32_t x96 = 25U;
	int32_t t21 = -3706;

    t21 = ((x93^x94)!=(x95%x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MAX;
	static uint8_t x100 = 1U;
	volatile int32_t t22 = 121481;

    t22 = ((x97^x98)!=(x99%x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = INT64_MIN;
	int16_t x102 = INT16_MIN;
	static uint64_t x103 = 99452274654LLU;
	volatile uint8_t x104 = 17U;
	volatile int32_t t23 = 1119;

    t23 = ((x101^x102)!=(x103%x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x105 = INT64_MAX;
	volatile int8_t x106 = -5;
	volatile int16_t x107 = INT16_MAX;
	volatile uint64_t x108 = UINT64_MAX;
	int32_t t24 = 52;

    t24 = ((x105^x106)!=(x107%x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = 2U;
	uint8_t x110 = 47U;
	static int16_t x112 = -7;
	volatile int32_t t25 = -124093;

    t25 = ((x109^x110)!=(x111%x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = 15301;
	volatile uint32_t x114 = UINT32_MAX;
	int16_t x115 = 0;
	uint64_t x116 = UINT64_MAX;

    t26 = ((x113^x114)!=(x115%x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x118 = 0;
	volatile int32_t t27 = -373;

    t27 = ((x117^x118)!=(x119%x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x121 = 13843357LLU;
	int32_t x122 = -271;
	static int16_t x123 = -1276;
	static int16_t x124 = INT16_MIN;

    t28 = ((x121^x122)!=(x123%x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x125 = 5U;
	int8_t x126 = INT8_MAX;
	volatile uint32_t x127 = UINT32_MAX;

    t29 = ((x125^x126)!=(x127%x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x129 = INT16_MIN;
	static int32_t x130 = 7000;
	int32_t x131 = -1;
	int8_t x132 = INT8_MIN;
	int32_t t30 = -106489;

    t30 = ((x129^x130)!=(x131%x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = INT32_MIN;
	uint8_t x134 = 116U;
	static uint64_t x135 = 16438LLU;
	uint8_t x136 = 116U;
	int32_t t31 = -16020407;

    t31 = ((x133^x134)!=(x135%x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x137 = 144801LLU;
	uint32_t x138 = 4179159U;
	uint16_t x139 = 1U;
	static int16_t x140 = -1;

    t32 = ((x137^x138)!=(x139%x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x141 = 2367LLU;
	static int16_t x143 = -17;
	int8_t x144 = INT8_MAX;
	volatile int32_t t33 = -24698586;

    t33 = ((x141^x142)!=(x143%x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x146 = -284647LL;
	volatile int8_t x147 = -1;
	volatile int8_t x148 = INT8_MIN;
	int32_t t34 = 14163078;

    t34 = ((x145^x146)!=(x147%x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x149 = INT8_MIN;
	int16_t x150 = 24;
	volatile uint16_t x151 = 2U;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t35 = 1517715;

    t35 = ((x149^x150)!=(x151%x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x153 = INT16_MIN;
	uint32_t x156 = 864U;

    t36 = ((x153^x154)!=(x155%x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x157 = UINT8_MAX;
	static int64_t x158 = INT64_MIN;
	static int16_t x159 = INT16_MIN;
	static int8_t x160 = 1;
	int32_t t37 = -4819659;

    t37 = ((x157^x158)!=(x159%x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = -7;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	volatile int32_t x164 = 153220;

    t38 = ((x161^x162)!=(x163%x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x165 = INT8_MIN;
	uint16_t x166 = UINT16_MAX;
	volatile int8_t x167 = -1;
	static volatile int32_t x168 = -1;
	int32_t t39 = -894641823;

    t39 = ((x165^x166)!=(x167%x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x169 = 781065U;
	int64_t x170 = INT64_MAX;
	int16_t x171 = -78;
	volatile uint64_t x172 = 253880205381LLU;

    t40 = ((x169^x170)!=(x171%x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = 82LL;
	int64_t x174 = INT64_MIN;
	volatile int64_t x175 = -1LL;
	volatile int32_t t41 = 2557590;

    t41 = ((x173^x174)!=(x175%x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 84784LLU;
	static volatile int16_t x178 = 898;
	uint64_t x179 = 55057134077360556LLU;
	static int64_t x180 = -1LL;
	int32_t t42 = -1;

    t42 = ((x177^x178)!=(x179%x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = INT64_MAX;
	static uint8_t x182 = 54U;
	int32_t x184 = -77220551;
	volatile int32_t t43 = 7;

    t43 = ((x181^x182)!=(x183%x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x185 = 971159LLU;
	int8_t x186 = INT8_MIN;
	volatile int16_t x187 = INT16_MAX;
	int64_t x188 = INT64_MIN;
	int32_t t44 = -44871478;

    t44 = ((x185^x186)!=(x187%x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x190 = -1;
	static volatile uint64_t x191 = UINT64_MAX;
	static int8_t x192 = -1;
	int32_t t45 = -202121;

    t45 = ((x189^x190)!=(x191%x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x194 = UINT64_MAX;
	uint32_t x195 = 183U;
	volatile int32_t t46 = -1;

    t46 = ((x193^x194)!=(x195%x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = INT16_MAX;
	int8_t x202 = INT8_MIN;
	uint16_t x203 = 1U;
	int8_t x204 = INT8_MAX;
	volatile int32_t t47 = 1042374879;

    t47 = ((x201^x202)!=(x203%x204));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = 1;
	uint32_t x206 = 1352302U;
	uint8_t x207 = UINT8_MAX;
	static int16_t x208 = -91;
	volatile int32_t t48 = 95;

    t48 = ((x205^x206)!=(x207%x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = INT16_MAX;
	volatile uint64_t x210 = UINT64_MAX;
	int64_t x211 = INT64_MIN;
	volatile int16_t x212 = INT16_MIN;
	int32_t t49 = -2763029;

    t49 = ((x209^x210)!=(x211%x212));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = -1;
	uint32_t x214 = 471465U;
	int8_t x215 = 6;
	uint8_t x216 = 28U;
	volatile int32_t t50 = -8;

    t50 = ((x213^x214)!=(x215%x216));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x218 = INT64_MIN;
	static int64_t x219 = INT64_MIN;
	static int8_t x220 = INT8_MIN;
	static volatile int32_t t51 = 2923;

    t51 = ((x217^x218)!=(x219%x220));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x221 = INT8_MIN;
	volatile int32_t x223 = 1;
	int32_t x224 = -1;
	volatile int32_t t52 = 143;

    t52 = ((x221^x222)!=(x223%x224));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x225 = -1;
	int32_t x226 = 117172291;
	int32_t t53 = 10769;

    t53 = ((x225^x226)!=(x227%x228));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x230 = -1;
	int32_t x231 = INT32_MIN;
	int32_t t54 = -793;

    t54 = ((x229^x230)!=(x231%x232));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x234 = UINT64_MAX;
	uint32_t x235 = 13U;
	int8_t x236 = 1;
	volatile int32_t t55 = 0;

    t55 = ((x233^x234)!=(x235%x236));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MIN;
	int32_t x239 = -517956296;
	int32_t t56 = 2203413;

    t56 = ((x237^x238)!=(x239%x240));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x241 = INT64_MAX;
	int64_t x242 = 853034862029647LL;
	int64_t x244 = -1LL;
	int32_t t57 = -1764;

    t57 = ((x241^x242)!=(x243%x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = INT64_MAX;
	int16_t x247 = 12;
	uint16_t x248 = UINT16_MAX;
	static int32_t t58 = 1510;

    t58 = ((x245^x246)!=(x247%x248));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x250 = INT16_MIN;
	uint64_t x251 = UINT64_MAX;
	volatile uint64_t x252 = 52903197LLU;

    t59 = ((x249^x250)!=(x251%x252));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x253 = INT64_MIN;
	static int64_t x254 = -1LL;
	int16_t x255 = -527;
	static int32_t t60 = 6063255;

    t60 = ((x253^x254)!=(x255%x256));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = -4655823;
	int8_t x258 = 1;
	int64_t x260 = -6233240961097012LL;

    t61 = ((x257^x258)!=(x259%x260));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = INT64_MAX;
	int32_t x262 = 519587;
	int8_t x263 = INT8_MIN;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t62 = 1579056;

    t62 = ((x261^x262)!=(x263%x264));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x269 = 175363LL;
	int16_t x270 = INT16_MIN;
	int64_t x271 = -1LL;
	volatile int32_t t63 = 58815;

    t63 = ((x269^x270)!=(x271%x272));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x273 = 1LLU;
	static int32_t x275 = -209;
	volatile int64_t x276 = -1970LL;
	volatile int32_t t64 = 20395869;

    t64 = ((x273^x274)!=(x275%x276));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x281 = INT16_MIN;
	uint8_t x282 = 9U;
	uint8_t x283 = 1U;

    t65 = ((x281^x282)!=(x283%x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x285 = 6416LLU;
	static uint32_t x286 = UINT32_MAX;
	int64_t x287 = -304704844266LL;
	static uint8_t x288 = UINT8_MAX;

    t66 = ((x285^x286)!=(x287%x288));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x289 = INT64_MAX;
	static uint64_t x290 = UINT64_MAX;
	uint32_t x291 = 194736091U;
	volatile int32_t x292 = INT32_MAX;
	volatile int32_t t67 = -14;

    t67 = ((x289^x290)!=(x291%x292));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x293 = 3455U;
	static int64_t x294 = 366084953577962LL;
	int64_t x295 = INT64_MAX;
	int32_t x296 = -1;
	static volatile int32_t t68 = -15292204;

    t68 = ((x293^x294)!=(x295%x296));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x297 = -1;
	volatile int8_t x298 = 1;
	volatile uint64_t x299 = 157LLU;
	static uint64_t x300 = 273251322443242320LLU;
	int32_t t69 = -814;

    t69 = ((x297^x298)!=(x299%x300));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x301 = -1;
	uint8_t x303 = UINT8_MAX;
	volatile int8_t x304 = 2;
	int32_t t70 = 690;

    t70 = ((x301^x302)!=(x303%x304));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x305 = INT64_MAX;
	volatile int16_t x306 = INT16_MIN;
	int32_t x307 = INT32_MIN;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t71 = 31;

    t71 = ((x305^x306)!=(x307%x308));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x309 = 44388356;
	static uint8_t x310 = 14U;
	static int64_t x311 = 32233LL;
	static uint16_t x312 = UINT16_MAX;
	int32_t t72 = -9521661;

    t72 = ((x309^x310)!=(x311%x312));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x313 = UINT8_MAX;
	int32_t x314 = 2930929;
	volatile int8_t x315 = INT8_MIN;
	int16_t x316 = 3969;
	volatile int32_t t73 = 1;

    t73 = ((x313^x314)!=(x315%x316));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x317 = -1;
	int16_t x318 = -1;
	volatile int8_t x319 = INT8_MAX;
	volatile int32_t x320 = 13464;
	int32_t t74 = -112543;

    t74 = ((x317^x318)!=(x319%x320));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint16_t x321 = 2U;
	volatile uint32_t x322 = 3050U;
	int64_t x323 = -474931991LL;
	int16_t x324 = INT16_MIN;
	volatile int32_t t75 = 1;

    t75 = ((x321^x322)!=(x323%x324));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x325 = 175704477745382LLU;
	volatile int64_t x327 = INT64_MIN;
	int32_t t76 = -59;

    t76 = ((x325^x326)!=(x327%x328));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x329 = INT32_MIN;
	int32_t x332 = 102;

    t77 = ((x329^x330)!=(x331%x332));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x333 = 8;
	volatile int64_t x334 = -1LL;
	int64_t x335 = INT64_MIN;
	volatile int8_t x336 = -1;
	static volatile int32_t t78 = -1810;

    t78 = ((x333^x334)!=(x335%x336));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x337 = -1023;
	int64_t x339 = 1025086532280127921LL;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t79 = -1818;

    t79 = ((x337^x338)!=(x339%x340));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x341 = INT16_MIN;
	volatile int16_t x342 = 101;
	volatile uint8_t x343 = 17U;
	int16_t x344 = 840;

    t80 = ((x341^x342)!=(x343%x344));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x345 = -1;
	int32_t x346 = INT32_MIN;
	int64_t x348 = 31494035LL;

    t81 = ((x345^x346)!=(x347%x348));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x349 = INT32_MIN;
	static int8_t x351 = 13;
	uint8_t x352 = 1U;
	static volatile int32_t t82 = 0;

    t82 = ((x349^x350)!=(x351%x352));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x353 = 212084478LLU;
	int16_t x354 = 0;
	int32_t x355 = -174324417;
	static uint32_t x356 = 110015304U;
	int32_t t83 = 13985;

    t83 = ((x353^x354)!=(x355%x356));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x357 = INT32_MIN;
	static uint16_t x358 = 2040U;
	volatile int8_t x359 = 0;
	uint32_t x360 = 478U;
	volatile int32_t t84 = -167;

    t84 = ((x357^x358)!=(x359%x360));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x361 = INT32_MIN;
	int32_t x362 = -45;
	int8_t x363 = INT8_MAX;
	volatile int64_t x364 = -4889033451092LL;
	int32_t t85 = -1644;

    t85 = ((x361^x362)!=(x363%x364));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x365 = 31408600;
	int8_t x366 = -1;
	int64_t x368 = -522605722892LL;
	int32_t t86 = 15640;

    t86 = ((x365^x366)!=(x367%x368));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x369 = INT64_MIN;
	volatile int32_t x370 = -1;
	int32_t x372 = -1512;
	volatile int32_t t87 = 371862415;

    t87 = ((x369^x370)!=(x371%x372));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x373 = 17;
	uint16_t x374 = 24U;
	int32_t x375 = -1;
	volatile uint8_t x376 = 13U;
	volatile int32_t t88 = -521555434;

    t88 = ((x373^x374)!=(x375%x376));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x377 = 10236;
	int16_t x378 = INT16_MAX;
	int8_t x379 = -55;
	uint64_t x380 = 1359173292827785811LLU;
	volatile int32_t t89 = 2132;

    t89 = ((x377^x378)!=(x379%x380));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x381 = 0;
	static uint8_t x382 = 9U;
	int64_t x383 = INT64_MAX;
	volatile int32_t t90 = 76365;

    t90 = ((x381^x382)!=(x383%x384));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x385 = UINT64_MAX;
	static uint64_t x386 = 2044330784338014LLU;
	int8_t x387 = -1;
	static int32_t t91 = 57051135;

    t91 = ((x385^x386)!=(x387%x388));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x389 = UINT16_MAX;
	static int32_t x390 = INT32_MAX;
	static int32_t x391 = INT32_MIN;
	uint16_t x392 = 82U;
	volatile int32_t t92 = 1;

    t92 = ((x389^x390)!=(x391%x392));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x393 = 0U;
	static volatile int16_t x394 = -90;
	int64_t x395 = -620752989931095955LL;
	volatile uint16_t x396 = UINT16_MAX;
	int32_t t93 = 25308;

    t93 = ((x393^x394)!=(x395%x396));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x397 = INT8_MIN;
	int32_t x399 = INT32_MIN;
	static int32_t t94 = 18;

    t94 = ((x397^x398)!=(x399%x400));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x401 = 98U;
	uint8_t x402 = 1U;
	volatile int64_t x403 = -1LL;
	int32_t x404 = INT32_MIN;
	int32_t t95 = 1;

    t95 = ((x401^x402)!=(x403%x404));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x405 = 52U;
	int32_t x407 = -1;
	uint16_t x408 = UINT16_MAX;

    t96 = ((x405^x406)!=(x407%x408));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x409 = -1;
	static int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MAX;
	int64_t x412 = INT64_MIN;

    t97 = ((x409^x410)!=(x411%x412));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x413 = -1;
	int64_t x414 = -1LL;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = 7;
	int32_t t98 = 2;

    t98 = ((x413^x414)!=(x415%x416));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint32_t x418 = 850399919U;
	uint16_t x419 = 602U;

    t99 = ((x417^x418)!=(x419%x420));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x421 = 4U;
	int16_t x422 = INT16_MAX;
	uint32_t x423 = 901U;
	int64_t x424 = INT64_MAX;
	volatile int32_t t100 = -30543773;

    t100 = ((x421^x422)!=(x423%x424));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x425 = INT8_MIN;
	uint8_t x426 = 20U;
	int8_t x427 = INT8_MIN;
	static volatile int32_t x428 = INT32_MIN;
	static int32_t t101 = -4638139;

    t101 = ((x425^x426)!=(x427%x428));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x429 = 278341971813162758LLU;
	int8_t x432 = -60;
	int32_t t102 = -36;

    t102 = ((x429^x430)!=(x431%x432));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x433 = INT32_MIN;
	volatile int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MIN;

    t103 = ((x433^x434)!=(x435%x436));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x437 = INT16_MIN;
	int16_t x438 = 1869;
	int64_t x439 = -2059018LL;
	int64_t x440 = INT64_MIN;
	int32_t t104 = -518794684;

    t104 = ((x437^x438)!=(x439%x440));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x441 = INT64_MIN;
	int32_t x442 = 2462442;
	volatile uint8_t x444 = UINT8_MAX;
	static volatile int32_t t105 = 14;

    t105 = ((x441^x442)!=(x443%x444));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x445 = INT16_MAX;
	volatile int8_t x446 = INT8_MIN;
	int64_t x447 = INT64_MAX;
	int8_t x448 = -56;
	int32_t t106 = 537210492;

    t106 = ((x445^x446)!=(x447%x448));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x450 = -1;
	uint8_t x451 = 1U;

    t107 = ((x449^x450)!=(x451%x452));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x453 = 6866U;
	volatile int16_t x454 = INT16_MIN;
	volatile uint16_t x456 = UINT16_MAX;
	int32_t t108 = 402216155;

    t108 = ((x453^x454)!=(x455%x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x457 = INT64_MIN;
	static uint32_t x458 = 0U;
	volatile int32_t x459 = INT32_MAX;
	int8_t x460 = -1;

    t109 = ((x457^x458)!=(x459%x460));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x461 = -1;
	static int32_t x462 = -61;
	volatile uint16_t x463 = 1U;
	int16_t x464 = INT16_MAX;
	static int32_t t110 = -5281756;

    t110 = ((x461^x462)!=(x463%x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x465 = INT8_MIN;
	static uint16_t x467 = 3088U;
	int32_t t111 = 5534099;

    t111 = ((x465^x466)!=(x467%x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x469 = UINT64_MAX;
	int64_t x470 = -1LL;
	volatile uint16_t x471 = 16214U;
	volatile int32_t t112 = -131016028;

    t112 = ((x469^x470)!=(x471%x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x473 = -1;
	int8_t x474 = INT8_MIN;
	uint16_t x475 = UINT16_MAX;
	int16_t x476 = 1;
	volatile int32_t t113 = -15416;

    t113 = ((x473^x474)!=(x475%x476));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x480 = INT32_MIN;

    t114 = ((x477^x478)!=(x479%x480));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x481 = INT8_MIN;
	int8_t x483 = 1;

    t115 = ((x481^x482)!=(x483%x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x486 = -20393927496282LL;
	int16_t x487 = -5970;
	int32_t x488 = INT32_MIN;

    t116 = ((x485^x486)!=(x487%x488));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x489 = INT8_MIN;
	int32_t x490 = INT32_MAX;
	static int32_t x491 = INT32_MIN;
	int32_t t117 = 124931;

    t117 = ((x489^x490)!=(x491%x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MAX;
	uint8_t x495 = UINT8_MAX;
	uint64_t x496 = 1584626LLU;
	volatile int32_t t118 = 23960;

    t118 = ((x493^x494)!=(x495%x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x497 = INT8_MIN;
	uint16_t x498 = 62U;
	volatile int64_t x500 = -26184499912634739LL;

    t119 = ((x497^x498)!=(x499%x500));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x505 = 25483494U;
	uint64_t x506 = 2063732835LLU;
	uint64_t x507 = 1163473265413348859LLU;
	int32_t t120 = -1;

    t120 = ((x505^x506)!=(x507%x508));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x509 = INT32_MIN;
	int32_t t121 = -15751;

    t121 = ((x509^x510)!=(x511%x512));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x514 = 9515U;
	int32_t x515 = -2168080;
	int8_t x516 = 1;

    t122 = ((x513^x514)!=(x515%x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x517 = 7100U;
	int32_t x518 = INT32_MAX;
	uint64_t x520 = 19756517818271873LLU;

    t123 = ((x517^x518)!=(x519%x520));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x521 = 2469434178LL;
	static volatile uint16_t x522 = 43U;
	volatile int64_t x524 = INT64_MIN;
	int32_t t124 = -1;

    t124 = ((x521^x522)!=(x523%x524));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x525 = 15U;
	int8_t x527 = 0;
	static uint32_t x528 = 6044U;
	int32_t t125 = -15335;

    t125 = ((x525^x526)!=(x527%x528));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x529 = -1LL;
	int64_t x530 = -4555412173LL;
	volatile int32_t x531 = INT32_MIN;
	int64_t x532 = INT64_MAX;
	static volatile int32_t t126 = 44404169;

    t126 = ((x529^x530)!=(x531%x532));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x534 = 6;
	uint64_t x535 = 147069769LLU;
	int64_t x536 = 477893619LL;
	int32_t t127 = -52177;

    t127 = ((x533^x534)!=(x535%x536));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x538 = 693446704607164814LLU;
	static int8_t x540 = -1;

    t128 = ((x537^x538)!=(x539%x540));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x542 = 417;
	static int16_t x544 = INT16_MIN;
	int32_t t129 = 4950760;

    t129 = ((x541^x542)!=(x543%x544));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x545 = -1;
	uint32_t x546 = UINT32_MAX;
	int64_t x547 = 51549LL;
	volatile int32_t t130 = -529105;

    t130 = ((x545^x546)!=(x547%x548));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x549 = INT16_MAX;
	int16_t x550 = INT16_MAX;
	volatile uint16_t x551 = 1106U;
	int8_t x552 = INT8_MIN;

    t131 = ((x549^x550)!=(x551%x552));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x553 = UINT64_MAX;
	int16_t x554 = -1;
	uint32_t x555 = UINT32_MAX;
	static int32_t x556 = INT32_MAX;
	volatile int32_t t132 = 37946;

    t132 = ((x553^x554)!=(x555%x556));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x557 = INT64_MIN;
	int64_t x558 = INT64_MAX;
	int8_t x559 = 4;
	uint64_t x560 = UINT64_MAX;
	int32_t t133 = 1618;

    t133 = ((x557^x558)!=(x559%x560));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x561 = -1;
	volatile int64_t x562 = INT64_MIN;
	volatile int8_t x564 = -22;

    t134 = ((x561^x562)!=(x563%x564));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x565 = INT16_MIN;
	int64_t x566 = 63565LL;
	uint16_t x568 = 226U;
	static int32_t t135 = -28254132;

    t135 = ((x565^x566)!=(x567%x568));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x570 = 2U;
	int16_t x571 = INT16_MAX;
	int32_t x572 = -61;
	int32_t t136 = 252295196;

    t136 = ((x569^x570)!=(x571%x572));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x573 = INT64_MAX;
	static uint8_t x574 = 109U;
	int8_t x575 = 4;
	volatile int16_t x576 = -1;
	volatile int32_t t137 = -14844002;

    t137 = ((x573^x574)!=(x575%x576));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x577 = UINT8_MAX;
	volatile int16_t x579 = INT16_MIN;
	volatile uint32_t x580 = 5008U;

    t138 = ((x577^x578)!=(x579%x580));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x581 = 93U;
	int32_t x582 = INT32_MIN;
	uint8_t x584 = 54U;
	int32_t t139 = -205907351;

    t139 = ((x581^x582)!=(x583%x584));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x585 = INT32_MAX;
	static int64_t x586 = INT64_MIN;
	volatile int8_t x587 = -1;
	uint16_t x588 = 1U;
	static int32_t t140 = 258;

    t140 = ((x585^x586)!=(x587%x588));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x589 = 1038230804U;
	uint64_t x590 = 62753511434370LLU;
	int32_t x591 = 79;
	uint16_t x592 = 528U;
	static volatile int32_t t141 = 255977;

    t141 = ((x589^x590)!=(x591%x592));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x593 = 409LLU;
	uint8_t x594 = 107U;
	volatile int64_t x595 = -1LL;
	int64_t x596 = INT64_MIN;
	int32_t t142 = -126215666;

    t142 = ((x593^x594)!=(x595%x596));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x597 = -26016594051LL;
	int16_t x598 = INT16_MIN;
	volatile int8_t x599 = INT8_MIN;

    t143 = ((x597^x598)!=(x599%x600));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x601 = 3646844U;
	volatile int16_t x602 = INT16_MAX;
	volatile uint8_t x603 = 1U;
	volatile int32_t t144 = 313550;

    t144 = ((x601^x602)!=(x603%x604));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x605 = INT64_MAX;
	int32_t x606 = INT32_MIN;
	static uint8_t x607 = 7U;
	volatile int32_t t145 = 1;

    t145 = ((x605^x606)!=(x607%x608));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x609 = INT64_MIN;
	static int8_t x611 = 2;

    t146 = ((x609^x610)!=(x611%x612));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x613 = -1;
	int32_t x614 = INT32_MIN;
	uint16_t x616 = UINT16_MAX;
	int32_t t147 = 321;

    t147 = ((x613^x614)!=(x615%x616));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x617 = UINT16_MAX;
	static volatile uint16_t x618 = 17U;
	int32_t x620 = -113;
	int32_t t148 = 109577813;

    t148 = ((x617^x618)!=(x619%x620));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x621 = INT32_MAX;
	int32_t x622 = -1;
	uint8_t x623 = 12U;
	volatile int32_t t149 = -1422;

    t149 = ((x621^x622)!=(x623%x624));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x625 = INT16_MIN;
	int16_t x626 = -1;
	static volatile int8_t x628 = -2;
	volatile int32_t t150 = -11;

    t150 = ((x625^x626)!=(x627%x628));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x629 = INT32_MIN;
	static int64_t x631 = INT64_MIN;
	int32_t x632 = INT32_MIN;
	int32_t t151 = -1487604;

    t151 = ((x629^x630)!=(x631%x632));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x633 = 7;
	static int16_t x634 = 0;
	static volatile int32_t x635 = INT32_MIN;
	static int16_t x636 = INT16_MAX;
	int32_t t152 = -30;

    t152 = ((x633^x634)!=(x635%x636));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x637 = 1U;
	uint8_t x638 = UINT8_MAX;
	int64_t x639 = INT64_MIN;
	uint8_t x640 = UINT8_MAX;
	int32_t t153 = 0;

    t153 = ((x637^x638)!=(x639%x640));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x641 = INT8_MIN;
	int32_t x642 = -1;
	int8_t x643 = INT8_MIN;
	int32_t t154 = 3;

    t154 = ((x641^x642)!=(x643%x644));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x645 = 4546233338467736191LLU;
	static volatile int32_t x646 = -1;
	int64_t x647 = -1LL;
	volatile uint32_t x648 = 5U;
	volatile int32_t t155 = -197539;

    t155 = ((x645^x646)!=(x647%x648));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x649 = 1U;
	static int64_t x650 = INT64_MIN;
	int64_t x651 = -16446479983331LL;
	int64_t x652 = -1LL;
	volatile int32_t t156 = 112102;

    t156 = ((x649^x650)!=(x651%x652));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x653 = INT32_MIN;
	static int64_t x654 = -1LL;
	int64_t x655 = INT64_MIN;
	int32_t t157 = 7126777;

    t157 = ((x653^x654)!=(x655%x656));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x657 = INT16_MAX;
	int64_t x658 = -2210LL;
	int64_t x660 = INT64_MAX;
	int32_t t158 = 23;

    t158 = ((x657^x658)!=(x659%x660));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x664 = UINT16_MAX;
	int32_t t159 = 2343;

    t159 = ((x661^x662)!=(x663%x664));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x665 = INT64_MAX;
	static int8_t x666 = -1;
	uint8_t x667 = UINT8_MAX;
	int8_t x668 = -1;
	volatile int32_t t160 = 2820950;

    t160 = ((x665^x666)!=(x667%x668));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x669 = 93651320LL;
	volatile int64_t x670 = INT64_MIN;
	uint64_t x672 = 4436155574LLU;
	int32_t t161 = -26;

    t161 = ((x669^x670)!=(x671%x672));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x673 = INT32_MIN;
	static volatile int8_t x675 = -1;
	int32_t x676 = INT32_MAX;
	volatile int32_t t162 = -338;

    t162 = ((x673^x674)!=(x675%x676));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x677 = INT32_MIN;
	int64_t x678 = INT64_MIN;
	int16_t x680 = INT16_MIN;
	volatile int32_t t163 = -25;

    t163 = ((x677^x678)!=(x679%x680));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x683 = 0;
	int16_t x684 = 15;
	volatile int32_t t164 = 565690;

    t164 = ((x681^x682)!=(x683%x684));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x687 = -33967400900647LL;
	uint16_t x688 = UINT16_MAX;
	int32_t t165 = -30;

    t165 = ((x685^x686)!=(x687%x688));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x689 = 9U;
	uint32_t x690 = UINT32_MAX;
	uint16_t x691 = UINT16_MAX;
	int32_t x692 = -237;
	int32_t t166 = -1004590;

    t166 = ((x689^x690)!=(x691%x692));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x694 = -1;
	uint32_t x695 = 26441558U;
	static uint16_t x696 = UINT16_MAX;

    t167 = ((x693^x694)!=(x695%x696));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x698 = UINT32_MAX;
	volatile int16_t x699 = -1;
	int8_t x700 = -3;
	volatile int32_t t168 = 0;

    t168 = ((x697^x698)!=(x699%x700));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x701 = 17785U;
	uint16_t x702 = 234U;
	int16_t x703 = -29;

    t169 = ((x701^x702)!=(x703%x704));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x705 = -1;
	uint32_t x706 = 1U;
	int8_t x707 = -1;
	volatile int16_t x708 = -30;
	volatile int32_t t170 = -7230239;

    t170 = ((x705^x706)!=(x707%x708));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x709 = -1;
	int64_t x710 = INT64_MIN;
	static int64_t x711 = INT64_MIN;
	int16_t x712 = INT16_MIN;

    t171 = ((x709^x710)!=(x711%x712));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x713 = INT32_MIN;
	int8_t x714 = -1;
	uint32_t x715 = 29956U;
	volatile int32_t x716 = INT32_MIN;
	int32_t t172 = 4715408;

    t172 = ((x713^x714)!=(x715%x716));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x717 = 11408;
	static volatile int16_t x718 = INT16_MIN;
	uint32_t x719 = 621593U;
	uint64_t x720 = 74206479861LLU;
	int32_t t173 = 1396628;

    t173 = ((x717^x718)!=(x719%x720));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x721 = 88;
	uint32_t x723 = 900442U;
	int8_t x724 = 17;

    t174 = ((x721^x722)!=(x723%x724));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t t175 = -2135504;

    t175 = ((x725^x726)!=(x727%x728));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x729 = 6U;
	volatile int8_t x731 = INT8_MIN;
	int32_t x732 = 454730;
	int32_t t176 = 13331163;

    t176 = ((x729^x730)!=(x731%x732));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x733 = INT32_MIN;
	static int8_t x734 = INT8_MIN;
	int32_t x735 = INT32_MAX;
	static int32_t x736 = -23375833;
	int32_t t177 = -343454530;

    t177 = ((x733^x734)!=(x735%x736));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x737 = 40U;
	static uint16_t x738 = 280U;
	volatile int8_t x739 = INT8_MIN;
	int16_t x740 = 48;
	volatile int32_t t178 = 66625627;

    t178 = ((x737^x738)!=(x739%x740));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x741 = 67885U;
	int16_t x742 = -2098;
	volatile int8_t x743 = 17;
	static int32_t t179 = 441;

    t179 = ((x741^x742)!=(x743%x744));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x745 = UINT16_MAX;
	volatile int8_t x746 = -9;
	int8_t x747 = INT8_MIN;
	uint16_t x748 = UINT16_MAX;
	volatile int32_t t180 = -7421;

    t180 = ((x745^x746)!=(x747%x748));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x749 = -1;
	volatile int16_t x750 = -1;
	uint32_t x751 = 1140446944U;
	static int16_t x752 = INT16_MIN;
	volatile int32_t t181 = 60438;

    t181 = ((x749^x750)!=(x751%x752));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x753 = INT8_MIN;
	volatile uint16_t x754 = 590U;
	static volatile int32_t x755 = -1;
	int8_t x756 = -5;
	volatile int32_t t182 = 948;

    t182 = ((x753^x754)!=(x755%x756));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x758 = INT32_MIN;
	static int64_t x759 = 133647888069LL;
	int8_t x760 = INT8_MIN;
	volatile int32_t t183 = 4066;

    t183 = ((x757^x758)!=(x759%x760));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x761 = -1;
	int64_t x762 = INT64_MIN;
	int16_t x763 = INT16_MAX;
	volatile uint32_t x764 = UINT32_MAX;
	volatile int32_t t184 = -511;

    t184 = ((x761^x762)!=(x763%x764));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x766 = 32562951U;
	int8_t x767 = 1;
	uint8_t x768 = UINT8_MAX;
	volatile int32_t t185 = -28795234;

    t185 = ((x765^x766)!=(x767%x768));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x769 = 243;
	uint16_t x770 = UINT16_MAX;
	int32_t x771 = INT32_MAX;
	uint16_t x772 = 843U;
	volatile int32_t t186 = -3171698;

    t186 = ((x769^x770)!=(x771%x772));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x773 = INT8_MAX;
	int32_t x774 = 1;
	volatile uint64_t x776 = 528352668LLU;
	static int32_t t187 = -304601;

    t187 = ((x773^x774)!=(x775%x776));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x777 = INT64_MAX;
	int8_t x779 = -2;
	static volatile uint16_t x780 = 2U;
	int32_t t188 = -1;

    t188 = ((x777^x778)!=(x779%x780));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x782 = -1026LL;
	uint8_t x783 = 61U;
	uint64_t x784 = 2240LLU;

    t189 = ((x781^x782)!=(x783%x784));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x785 = 238754LL;
	uint8_t x786 = 56U;

    t190 = ((x785^x786)!=(x787%x788));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x789 = 2U;
	volatile int16_t x790 = INT16_MIN;
	int64_t x791 = INT64_MIN;
	int32_t x792 = INT32_MIN;

    t191 = ((x789^x790)!=(x791%x792));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x793 = -356970;
	static uint32_t x794 = 30153U;
	volatile int64_t x796 = 3LL;
	int32_t t192 = 14;

    t192 = ((x793^x794)!=(x795%x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x797 = -21;
	int32_t x798 = INT32_MAX;
	volatile uint32_t x799 = UINT32_MAX;
	int64_t x800 = INT64_MIN;

    t193 = ((x797^x798)!=(x799%x800));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x801 = -12130450;
	int32_t x802 = -502;
	static int8_t x804 = INT8_MIN;
	int32_t t194 = -172762023;

    t194 = ((x801^x802)!=(x803%x804));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x805 = -30;
	static int8_t x806 = INT8_MIN;
	int8_t x807 = 0;
	int64_t x808 = -1LL;
	volatile int32_t t195 = -101;

    t195 = ((x805^x806)!=(x807%x808));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x810 = INT32_MIN;
	volatile int32_t x811 = INT32_MAX;
	int8_t x812 = 1;
	int32_t t196 = 237007221;

    t196 = ((x809^x810)!=(x811%x812));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x813 = INT64_MAX;
	int16_t x814 = INT16_MIN;
	static int64_t x815 = 12557075708896LL;
	int32_t t197 = -5243178;

    t197 = ((x813^x814)!=(x815%x816));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x818 = UINT32_MAX;
	static int8_t x819 = 31;
	uint8_t x820 = 3U;
	int32_t t198 = -1;

    t198 = ((x817^x818)!=(x819%x820));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x821 = INT64_MIN;
	int32_t t199 = 6;

    t199 = ((x821^x822)!=(x823%x824));

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

