
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

static uint32_t x11 = 1722U;
static volatile uint32_t x14 = 21319249U;
volatile int64_t x15 = INT64_MAX;
int32_t t3 = 0;
int32_t x21 = 4678912;
int32_t x22 = INT32_MIN;
int8_t x24 = INT8_MIN;
int8_t x25 = -1;
volatile int32_t t9 = -32041378;
static volatile int32_t x41 = 55099;
static int64_t x54 = 40LL;
int16_t x65 = INT16_MIN;
volatile int16_t x67 = INT16_MIN;
uint64_t x71 = 247705067925LLU;
volatile int64_t x74 = 498681936324247399LL;
uint16_t x76 = 4137U;
static int32_t x83 = 3;
uint32_t x85 = 85841334U;
int8_t x91 = -5;
int32_t t24 = 339235;
static uint64_t x107 = 49495768209LLU;
static int16_t x112 = -1309;
static volatile int32_t t28 = -17;
int8_t x124 = INT8_MAX;
int8_t x128 = INT8_MAX;
int64_t x132 = INT64_MIN;
int8_t x136 = INT8_MIN;
volatile int8_t x141 = INT8_MIN;
int64_t x143 = -1296LL;
int64_t t36 = 72348LL;
volatile uint64_t x159 = 486649618LLU;
uint16_t x165 = UINT16_MAX;
uint32_t x171 = 943U;
int8_t x174 = -1;
volatile int64_t x176 = INT64_MAX;
uint16_t x178 = UINT16_MAX;
int32_t x180 = INT32_MIN;
volatile int8_t x185 = -1;
uint16_t x187 = 1U;
int32_t t46 = 144813;
uint16_t x191 = UINT16_MAX;
volatile int32_t t47 = 23433;
int16_t x195 = -2;
static uint64_t t49 = 6338782519627457LLU;
volatile int64_t x207 = 29658758LL;
volatile int32_t t51 = 58618527;
int16_t x218 = -3120;
static uint32_t x220 = 512327843U;
volatile int8_t x223 = -2;
uint32_t x225 = 1872235737U;
uint32_t t56 = 6U;
volatile int32_t x229 = -1;
int8_t x235 = 0;
volatile int32_t x238 = INT32_MIN;
uint64_t x247 = 799425819020595587LLU;
int16_t x249 = INT16_MIN;
uint64_t x251 = 482279136589450290LLU;
static int16_t x254 = -204;
static int16_t x256 = 332;
uint8_t x257 = UINT8_MAX;
static int8_t x260 = INT8_MAX;
volatile int16_t x261 = INT16_MIN;
volatile int8_t x267 = -12;
uint32_t t66 = 20170U;
volatile int16_t x270 = INT16_MAX;
volatile int32_t t67 = 2338064;
int16_t x273 = -1;
volatile int64_t t71 = -4173930341LL;
static volatile int32_t t73 = 12669762;
static int8_t x299 = 13;
volatile int64_t x310 = INT64_MIN;
int16_t x312 = INT16_MIN;
int64_t x314 = INT64_MIN;
static uint32_t x315 = 3U;
int64_t x318 = INT64_MIN;
int64_t t79 = 881194837346LL;
volatile int16_t x322 = INT16_MIN;
int32_t x333 = 16896;
int8_t x338 = 1;
int16_t x340 = 0;
static uint64_t x341 = 131668347363LLU;
uint64_t x344 = 5985LLU;
static int8_t x348 = INT8_MIN;
int32_t t86 = 96;
int64_t x352 = INT64_MIN;
int64_t x358 = -26984LL;
uint16_t x359 = 5U;
int32_t t90 = 1100;
uint8_t x371 = UINT8_MAX;
static volatile int64_t t92 = -247974288963LL;
int64_t x374 = -2108595168LL;
int32_t x379 = INT32_MIN;
int8_t x382 = 0;
uint16_t x385 = 842U;
static volatile int16_t x386 = -1;
int16_t x387 = 1;
volatile int32_t x388 = -103;
volatile uint8_t x404 = UINT8_MAX;
volatile uint64_t t100 = 1097020104187368730LLU;
int8_t x408 = INT8_MAX;
volatile int32_t t101 = -837438;
static int8_t x409 = -2;
int16_t x414 = 123;
uint64_t x416 = 427LLU;
static volatile int16_t x419 = 2;
static uint16_t x433 = UINT16_MAX;
static int8_t x436 = -1;
int64_t x446 = 7566LL;
volatile int8_t x450 = -3;
int16_t x452 = INT16_MIN;
uint16_t x457 = UINT16_MAX;
static int8_t x460 = INT8_MIN;
volatile uint32_t x465 = UINT32_MAX;
int64_t x468 = INT64_MIN;
int64_t x485 = INT64_MAX;
uint32_t x494 = UINT32_MAX;
int64_t t123 = -807177417529802LL;
int8_t x504 = INT8_MIN;
static volatile int32_t t127 = -217;
int32_t t128 = 58948;
static int32_t x528 = INT32_MIN;
volatile int32_t t132 = -345;
static int16_t x542 = INT16_MIN;
int32_t x544 = INT32_MAX;
volatile uint32_t t136 = 295U;
static uint64_t x554 = 9350LLU;
static int16_t x555 = 312;
volatile int16_t x559 = -36;
static uint8_t x563 = UINT8_MAX;
uint16_t x569 = UINT16_MAX;
int64_t x574 = INT64_MAX;
int32_t t144 = -235;
int8_t x590 = 1;
volatile int32_t t149 = -44098;
volatile int8_t x606 = -1;
static int8_t x609 = -1;
volatile int32_t t154 = -86539398;
int16_t x628 = INT16_MIN;
int32_t t156 = -182;
uint64_t x630 = UINT64_MAX;
volatile int64_t t157 = 907LL;
int8_t x634 = INT8_MAX;
volatile uint8_t x640 = 3U;
static volatile int32_t t159 = 3470;
volatile int32_t t161 = 19239600;
int8_t x651 = INT8_MIN;
uint32_t x653 = 677722U;
uint16_t x657 = 1U;
int32_t t164 = 989;
uint16_t x666 = 961U;
int64_t x671 = -15601652462240843LL;
int64_t x672 = INT64_MAX;
volatile int16_t x680 = INT16_MAX;
volatile int64_t t169 = -1LL;
uint32_t x695 = UINT32_MAX;
volatile int64_t t174 = 16647999LL;
volatile int32_t t176 = -6291;
uint64_t x710 = 62LLU;
static volatile int32_t t177 = 4848;
int64_t x714 = 142LL;
int8_t x719 = INT8_MIN;
static int16_t x724 = 0;
volatile int32_t t180 = 359;
volatile uint16_t x729 = UINT16_MAX;
static uint32_t x736 = 603513U;
int32_t t183 = 51;
static int64_t x742 = INT64_MAX;
uint16_t x743 = 105U;
int16_t x748 = INT16_MIN;
uint16_t x770 = 9612U;
int8_t x776 = 4;
int64_t x784 = INT64_MAX;
static volatile uint64_t t195 = 3LLU;
int64_t x790 = -2468121LL;
static int8_t x792 = INT8_MIN;
static int16_t x794 = INT16_MIN;
uint16_t x797 = UINT16_MAX;


void f0(void) {
    	uint64_t x1 = 233LLU;
	int32_t x2 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	int16_t x4 = 12950;
	static uint64_t t0 = 1933031483431LLU;

    t0 = (x1&(x2==(x3!=x4)));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	uint16_t x6 = 42U;
	volatile int8_t x7 = INT8_MIN;
	static int16_t x8 = -1;
	int32_t t1 = -1;

    t1 = (x5&(x6==(x7!=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -9153LL;
	static int32_t x10 = -3280313;
	volatile int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 6LL;

    t2 = (x9&(x10==(x11!=x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	volatile int32_t x16 = INT32_MIN;

    t3 = (x13&(x14==(x15!=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	int32_t x18 = 166905047;
	uint64_t x19 = UINT64_MAX;
	int64_t x20 = 47682LL;
	static int64_t t4 = -14796943LL;

    t4 = (x17&(x18==(x19!=x20)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x23 = -7;
	volatile int32_t t5 = 1;

    t5 = (x21&(x22==(x23!=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x26 = 7U;
	static int32_t x27 = -16223838;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = 233708;

    t6 = (x25&(x26==(x27!=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	volatile int16_t x30 = INT16_MAX;
	static int8_t x31 = 1;
	static int32_t x32 = INT32_MIN;
	static volatile uint64_t t7 = 227337LLU;

    t7 = (x29&(x30==(x31!=x32)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MIN;
	static volatile int8_t x34 = -29;
	int8_t x35 = INT8_MAX;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = -7348996;

    t8 = (x33&(x34==(x35!=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	int32_t x38 = INT32_MAX;
	uint8_t x39 = 0U;
	int64_t x40 = 22027LL;

    t9 = (x37&(x38==(x39!=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x42 = UINT8_MAX;
	volatile int16_t x43 = INT16_MIN;
	uint16_t x44 = 274U;
	int32_t t10 = -59614244;

    t10 = (x41&(x42==(x43!=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int32_t x46 = -1;
	int64_t x47 = -621398534084562LL;
	static volatile int16_t x48 = 705;
	int32_t t11 = -125;

    t11 = (x45&(x46==(x47!=x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	uint32_t x50 = 0U;
	uint8_t x51 = UINT8_MAX;
	static uint16_t x52 = UINT16_MAX;
	volatile int64_t t12 = -7411736LL;

    t12 = (x49&(x50==(x51!=x52)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 9453U;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 57866689;

    t13 = (x53&(x54==(x55!=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MIN;
	int16_t x58 = -1;
	static volatile int16_t x59 = INT16_MIN;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = 0;

    t14 = (x57&(x58==(x59!=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 620808152LLU;
	volatile int32_t x62 = 7995970;
	int16_t x63 = 15604;
	int8_t x64 = 6;
	uint64_t t15 = 1252538791091LLU;

    t15 = (x61&(x62==(x63!=x64)));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 2U;
	static uint16_t x68 = 1U;
	static int32_t t16 = 334209;

    t16 = (x65&(x66==(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = -1LL;
	static int8_t x70 = -1;
	volatile uint16_t x72 = 2U;
	int64_t t17 = 13985LL;

    t17 = (x69&(x70==(x71!=x72)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x73 = INT16_MIN;
	static volatile int16_t x75 = -1;
	int32_t t18 = 1003264482;

    t18 = (x73&(x74==(x75!=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = 0;
	static uint64_t x78 = 3492LLU;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = 559898201U;
	static int32_t t19 = -5453471;

    t19 = (x77&(x78==(x79!=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1LL;
	uint64_t x82 = 8420719734940LLU;
	uint8_t x84 = 3U;
	volatile int64_t t20 = -741781493818067767LL;

    t20 = (x81&(x82==(x83!=x84)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = INT16_MIN;
	volatile int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MIN;
	volatile uint32_t t21 = 0U;

    t21 = (x85&(x86==(x87!=x88)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -1;
	uint16_t x90 = 486U;
	int64_t x92 = -1LL;
	int32_t t22 = 1948164;

    t22 = (x89&(x90==(x91!=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -103053191;
	uint64_t x94 = 8196127LLU;
	uint64_t x95 = 116092112480324481LLU;
	static int64_t x96 = INT64_MIN;
	volatile int32_t t23 = 2;

    t23 = (x93&(x94==(x95!=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	int32_t x98 = -1;
	volatile int64_t x99 = 578194LL;
	int16_t x100 = INT16_MIN;

    t24 = (x97&(x98==(x99!=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x101 = -1;
	uint8_t x102 = 74U;
	static int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MAX;
	int32_t t25 = -48;

    t25 = (x101&(x102==(x103!=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x105 = 6U;
	static int64_t x106 = -1LL;
	int16_t x108 = INT16_MIN;
	static volatile int32_t t26 = -2865;

    t26 = (x105&(x106==(x107!=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x109 = 8905U;
	static uint16_t x110 = UINT16_MAX;
	int8_t x111 = 44;
	static uint32_t t27 = 57628U;

    t27 = (x109&(x110==(x111!=x112)));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 3094U;
	static uint8_t x114 = UINT8_MAX;
	int8_t x115 = 0;
	int16_t x116 = INT16_MIN;

    t28 = (x113&(x114==(x115!=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x117 = UINT16_MAX;
	volatile int32_t x118 = INT32_MIN;
	volatile int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MIN;
	volatile int32_t t29 = -380655340;

    t29 = (x117&(x118==(x119!=x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -14;
	int64_t x122 = 69444648555729LL;
	uint8_t x123 = UINT8_MAX;
	volatile int32_t t30 = 1545414;

    t30 = (x121&(x122==(x123!=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -4705;
	int64_t x126 = INT64_MIN;
	int16_t x127 = -1;
	volatile int32_t t31 = -661155674;

    t31 = (x125&(x126==(x127!=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x129 = 15199383LLU;
	volatile int32_t x130 = -99762067;
	static uint32_t x131 = 395U;
	volatile uint64_t t32 = 21510238774LLU;

    t32 = (x129&(x130==(x131!=x132)));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MAX;
	uint16_t x135 = 8U;
	int32_t t33 = -279898983;

    t33 = (x133&(x134==(x135!=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 126U;
	uint8_t x138 = 91U;
	volatile int32_t x139 = 0;
	volatile int32_t x140 = -1;
	volatile int32_t t34 = 6;

    t34 = (x137&(x138==(x139!=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x142 = -1;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 422743;

    t35 = (x141&(x142==(x143!=x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -5387158LL;
	int16_t x146 = 0;
	static uint8_t x147 = UINT8_MAX;
	static volatile uint64_t x148 = UINT64_MAX;

    t36 = (x145&(x146==(x147!=x148)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x149 = UINT32_MAX;
	uint8_t x150 = 0U;
	uint32_t x151 = 131992518U;
	uint64_t x152 = 40LLU;
	volatile uint32_t t37 = 81U;

    t37 = (x149&(x150==(x151!=x152)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	volatile int64_t x154 = INT64_MIN;
	volatile uint16_t x155 = 2U;
	static int64_t x156 = INT64_MIN;
	static int32_t t38 = 1964;

    t38 = (x153&(x154==(x155!=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = 22004557273687LL;
	int16_t x158 = 212;
	volatile uint64_t x160 = 66425173047LLU;
	int64_t t39 = 610LL;

    t39 = (x157&(x158==(x159!=x160)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x161 = 998U;
	volatile int64_t x162 = 13589905297416LL;
	static int32_t x163 = INT32_MAX;
	int64_t x164 = INT64_MIN;
	int32_t t40 = -4;

    t40 = (x161&(x162==(x163!=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x166 = -1LL;
	static int8_t x167 = -9;
	static volatile int8_t x168 = -1;
	int32_t t41 = 4354;

    t41 = (x165&(x166==(x167!=x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	volatile int8_t x172 = INT8_MIN;
	volatile int64_t t42 = 0LL;

    t42 = (x169&(x170==(x171!=x172)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -14721416LL;
	int64_t x175 = INT64_MIN;
	int64_t t43 = -13173935050LL;

    t43 = (x173&(x174==(x175!=x176)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	int8_t x179 = INT8_MIN;
	static volatile int32_t t44 = 8096;

    t44 = (x177&(x178==(x179!=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -1;
	uint8_t x182 = 2U;
	int32_t x183 = 25;
	int64_t x184 = INT64_MAX;
	int32_t t45 = -1960;

    t45 = (x181&(x182==(x183!=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = UINT64_MAX;
	uint32_t x188 = 22536624U;

    t46 = (x185&(x186==(x187!=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 589U;
	uint32_t x190 = 2U;
	volatile int8_t x192 = INT8_MAX;

    t47 = (x189&(x190==(x191!=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -67;
	volatile int64_t x194 = INT64_MAX;
	int16_t x196 = -3;
	int32_t t48 = 299300436;

    t48 = (x193&(x194==(x195!=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	uint16_t x198 = UINT16_MAX;
	volatile uint8_t x199 = UINT8_MAX;
	int8_t x200 = 1;

    t49 = (x197&(x198==(x199!=x200)));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = INT32_MIN;
	int64_t x202 = -79LL;
	uint8_t x203 = 15U;
	static int16_t x204 = -1;
	volatile int32_t t50 = 1047450145;

    t50 = (x201&(x202==(x203!=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	static int8_t x206 = 0;
	int8_t x208 = INT8_MIN;

    t51 = (x205&(x206==(x207!=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = UINT64_MAX;
	int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MIN;
	uint32_t x212 = 1979U;
	static uint64_t t52 = 113LLU;

    t52 = (x209&(x210==(x211!=x212)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	uint8_t x214 = 3U;
	uint32_t x215 = 27683178U;
	static int32_t x216 = INT32_MIN;
	static int32_t t53 = -10325738;

    t53 = (x213&(x214==(x215!=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	static volatile int64_t x219 = INT64_MIN;
	volatile int32_t t54 = -1369130;

    t54 = (x217&(x218==(x219!=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x221 = 3549U;
	uint64_t x222 = 0LLU;
	uint64_t x224 = 5LLU;
	volatile int32_t t55 = 86913;

    t55 = (x221&(x222==(x223!=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = 43;
	int16_t x227 = 12617;
	volatile uint8_t x228 = UINT8_MAX;

    t56 = (x225&(x226==(x227!=x228)));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x230 = 1854627092106690555LL;
	static volatile uint8_t x231 = 3U;
	volatile int64_t x232 = -1LL;
	int32_t t57 = -76491;

    t57 = (x229&(x230==(x231!=x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MAX;
	uint64_t x234 = 219LLU;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t58 = -1;

    t58 = (x233&(x234==(x235!=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int8_t x239 = INT8_MAX;
	uint32_t x240 = 6U;
	int64_t t59 = -183303374122LL;

    t59 = (x237&(x238==(x239!=x240)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	volatile int16_t x242 = INT16_MIN;
	volatile int16_t x243 = 0;
	static uint16_t x244 = 6713U;
	static int32_t t60 = 4443353;

    t60 = (x241&(x242==(x243!=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x245 = 4868U;
	static uint32_t x246 = UINT32_MAX;
	uint32_t x248 = 24434U;
	uint32_t t61 = 315U;

    t61 = (x245&(x246==(x247!=x248)));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = INT64_MIN;
	uint8_t x252 = 43U;
	int32_t t62 = 9041620;

    t62 = (x249&(x250==(x251!=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MAX;
	volatile int8_t x255 = 0;
	volatile int32_t t63 = -63;

    t63 = (x253&(x254==(x255!=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x258 = 0U;
	int32_t x259 = -1;
	static volatile int32_t t64 = -13965899;

    t64 = (x257&(x258==(x259!=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x262 = 2324U;
	static volatile uint32_t x263 = 428U;
	volatile int16_t x264 = INT16_MAX;
	int32_t t65 = -4;

    t65 = (x261&(x262==(x263!=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x265 = 84U;
	static uint16_t x266 = 8239U;
	uint64_t x268 = 7764720560LLU;

    t66 = (x265&(x266==(x267!=x268)));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x269 = 12U;
	int64_t x271 = INT64_MIN;
	int32_t x272 = -6;

    t67 = (x269&(x270==(x271!=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = INT8_MAX;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MAX;
	static int32_t t68 = 344854243;

    t68 = (x273&(x274==(x275!=x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -4975752LL;
	volatile int64_t x278 = -944668632386296027LL;
	volatile int16_t x279 = 8590;
	int8_t x280 = 5;
	volatile int64_t t69 = 293490164317LL;

    t69 = (x277&(x278==(x279!=x280)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -3049673408971LL;
	static int32_t x282 = -640399677;
	volatile int64_t x283 = INT64_MAX;
	volatile int16_t x284 = INT16_MAX;
	volatile int64_t t70 = 6174LL;

    t70 = (x281&(x282==(x283!=x284)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -858LL;
	uint8_t x286 = 1U;
	int16_t x287 = 54;
	uint8_t x288 = 46U;

    t71 = (x285&(x286==(x287!=x288)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -1;
	int64_t x290 = INT64_MIN;
	uint16_t x291 = 1U;
	int64_t x292 = INT64_MAX;
	volatile int32_t t72 = -14074483;

    t72 = (x289&(x290==(x291!=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x293 = 0U;
	int8_t x294 = -1;
	int16_t x295 = -8707;
	int64_t x296 = -963214453141LL;

    t73 = (x293&(x294==(x295!=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	int16_t x298 = 13005;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 946195788;

    t74 = (x297&(x298==(x299!=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint32_t x301 = 31U;
	volatile int64_t x302 = -1LL;
	int8_t x303 = INT8_MIN;
	volatile uint8_t x304 = UINT8_MAX;
	static uint32_t t75 = 2053613U;

    t75 = (x301&(x302==(x303!=x304)));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 13U;
	uint16_t x306 = 143U;
	uint64_t x307 = 19LLU;
	int32_t x308 = INT32_MAX;
	int32_t t76 = -2435649;

    t76 = (x305&(x306==(x307!=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	static int32_t x311 = -1;
	static volatile int32_t t77 = -5;

    t77 = (x309&(x310==(x311!=x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	static uint64_t x316 = UINT64_MAX;
	static int32_t t78 = 692;

    t78 = (x313&(x314==(x315!=x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = 25299128LL;
	uint16_t x319 = 2111U;
	uint16_t x320 = 14168U;

    t79 = (x317&(x318==(x319!=x320)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = -67;
	int16_t x323 = -29;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = -688158;

    t80 = (x321&(x322==(x323!=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = 0;
	int64_t x326 = INT64_MAX;
	volatile int32_t x327 = INT32_MAX;
	volatile uint16_t x328 = 1503U;
	int32_t t81 = 121867;

    t81 = (x325&(x326==(x327!=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MIN;
	uint16_t x330 = UINT16_MAX;
	volatile int64_t x331 = INT64_MAX;
	int8_t x332 = INT8_MIN;
	static volatile int32_t t82 = 112305;

    t82 = (x329&(x330==(x331!=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x334 = UINT32_MAX;
	static uint8_t x335 = 0U;
	volatile int32_t x336 = INT32_MIN;
	volatile int32_t t83 = 187;

    t83 = (x333&(x334==(x335!=x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 11;
	static volatile uint32_t x339 = 242280U;
	static volatile int32_t t84 = 1531026;

    t84 = (x337&(x338==(x339!=x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x342 = 1473U;
	uint64_t x343 = 32224697LLU;
	volatile uint64_t t85 = 13035827401609LLU;

    t85 = (x341&(x342==(x343!=x344)));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -21;
	int32_t x346 = -1;
	uint16_t x347 = UINT16_MAX;

    t86 = (x345&(x346==(x347!=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 10985;
	int8_t x350 = INT8_MIN;
	volatile int64_t x351 = INT64_MAX;
	static int32_t t87 = 943;

    t87 = (x349&(x350==(x351!=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -30;
	int8_t x354 = -8;
	static uint64_t x355 = UINT64_MAX;
	uint8_t x356 = 9U;
	int32_t t88 = -1;

    t88 = (x353&(x354==(x355!=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MAX;
	static uint8_t x360 = 44U;
	volatile int32_t t89 = -216322;

    t89 = (x357&(x358==(x359!=x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x361 = 0U;
	int32_t x362 = INT32_MIN;
	uint64_t x363 = UINT64_MAX;
	static uint16_t x364 = UINT16_MAX;

    t90 = (x361&(x362==(x363!=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = -2875464855LL;
	int16_t x366 = INT16_MIN;
	uint32_t x367 = 28773509U;
	volatile int32_t x368 = INT32_MAX;
	volatile int64_t t91 = 6283848814493269LL;

    t91 = (x365&(x366==(x367!=x368)));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = INT64_MAX;
	int16_t x370 = INT16_MIN;
	int64_t x372 = -1LL;

    t92 = (x369&(x370==(x371!=x372)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -14;
	int16_t x375 = INT16_MIN;
	uint32_t x376 = 47899U;
	int32_t t93 = 198;

    t93 = (x373&(x374==(x375!=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 5;
	uint32_t x378 = 600124U;
	int32_t x380 = -7516;
	int32_t t94 = -29;

    t94 = (x377&(x378==(x379!=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	uint64_t x383 = UINT64_MAX;
	int8_t x384 = 6;
	static volatile int32_t t95 = -53914;

    t95 = (x381&(x382==(x383!=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t t96 = -500589484;

    t96 = (x385&(x386==(x387!=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x389 = 1U;
	int64_t x390 = INT64_MIN;
	volatile uint8_t x391 = UINT8_MAX;
	uint64_t x392 = UINT64_MAX;
	int32_t t97 = 14342032;

    t97 = (x389&(x390==(x391!=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = -1LL;
	uint64_t x394 = 56407083454458LLU;
	volatile int32_t x395 = -15;
	int16_t x396 = -1;
	volatile int64_t t98 = -941394LL;

    t98 = (x393&(x394==(x395!=x396)));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	int8_t x398 = INT8_MIN;
	int64_t x399 = INT64_MAX;
	static int32_t x400 = -249883;
	int64_t t99 = -217629925403722LL;

    t99 = (x397&(x398==(x399!=x400)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile int32_t x402 = -1;
	int64_t x403 = 12739LL;

    t100 = (x401&(x402==(x403!=x404)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MAX;
	volatile int8_t x406 = INT8_MIN;
	uint32_t x407 = UINT32_MAX;

    t101 = (x405&(x406==(x407!=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = INT16_MIN;
	int8_t x411 = -1;
	uint32_t x412 = UINT32_MAX;
	volatile int32_t t102 = 469;

    t102 = (x409&(x410==(x411!=x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	static int64_t x415 = -155132LL;
	volatile int32_t t103 = 3397684;

    t103 = (x413&(x414==(x415!=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = 1;
	uint16_t x418 = UINT16_MAX;
	int8_t x420 = 15;
	volatile int32_t t104 = -27342;

    t104 = (x417&(x418==(x419!=x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = 397;
	volatile int64_t x422 = -1LL;
	int32_t x423 = -1;
	int32_t x424 = 190435235;
	int32_t t105 = -15693932;

    t105 = (x421&(x422==(x423!=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = 204061;
	static int8_t x426 = -1;
	uint32_t x427 = 41864708U;
	int8_t x428 = INT8_MAX;
	volatile int32_t t106 = 27443335;

    t106 = (x425&(x426==(x427!=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x429 = -1;
	int64_t x430 = 366530LL;
	int16_t x431 = 8;
	int16_t x432 = INT16_MIN;
	int32_t t107 = 200969;

    t107 = (x429&(x430==(x431!=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x434 = -3;
	static int32_t x435 = INT32_MIN;
	static volatile int32_t t108 = 2061003;

    t108 = (x433&(x434==(x435!=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 25U;
	uint64_t x438 = 3921292LLU;
	int64_t x439 = INT64_MIN;
	int32_t x440 = 0;
	static int32_t t109 = 6;

    t109 = (x437&(x438==(x439!=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = 1672LLU;
	uint32_t x442 = 10726U;
	int16_t x443 = INT16_MIN;
	int32_t x444 = INT32_MIN;
	volatile uint64_t t110 = 278233LLU;

    t110 = (x441&(x442==(x443!=x444)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = 53;
	static volatile int32_t x447 = -102981;
	int16_t x448 = INT16_MIN;
	volatile int32_t t111 = -310;

    t111 = (x445&(x446==(x447!=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MAX;
	int8_t x451 = -12;
	int32_t t112 = 10502;

    t112 = (x449&(x450==(x451!=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 0U;
	static int64_t x454 = INT64_MIN;
	int16_t x455 = INT16_MIN;
	int32_t x456 = -5764;
	int32_t t113 = 28127908;

    t113 = (x453&(x454==(x455!=x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x458 = 16633641U;
	uint32_t x459 = 0U;
	int32_t t114 = 61151641;

    t114 = (x457&(x458==(x459!=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = INT16_MAX;
	uint8_t x462 = 74U;
	uint8_t x463 = 60U;
	static volatile uint32_t x464 = 482426U;
	int32_t t115 = -407804060;

    t115 = (x461&(x462==(x463!=x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x466 = 1532552780LL;
	uint64_t x467 = 6LLU;
	static uint32_t t116 = 203323901U;

    t116 = (x465&(x466==(x467!=x468)));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 12LL;
	uint32_t x470 = UINT32_MAX;
	static uint8_t x471 = 17U;
	int64_t x472 = 54839182000468LL;
	int64_t t117 = 2903815288393772LL;

    t117 = (x469&(x470==(x471!=x472)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	int8_t x474 = -17;
	static int64_t x475 = INT64_MAX;
	int64_t x476 = -228772690109650046LL;
	int64_t t118 = -507347LL;

    t118 = (x473&(x474==(x475!=x476)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = -1;
	int16_t x478 = INT16_MIN;
	int8_t x479 = -63;
	int8_t x480 = -1;
	int32_t t119 = 107212;

    t119 = (x477&(x478==(x479!=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = UINT32_MAX;
	int64_t x482 = INT64_MIN;
	static int16_t x483 = -1;
	static volatile uint16_t x484 = UINT16_MAX;
	volatile uint32_t t120 = 143128644U;

    t120 = (x481&(x482==(x483!=x484)));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x486 = -1;
	static uint8_t x487 = UINT8_MAX;
	uint32_t x488 = UINT32_MAX;
	static volatile int64_t t121 = -1LL;

    t121 = (x485&(x486==(x487!=x488)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	static uint32_t x490 = 423792823U;
	int8_t x491 = -1;
	int32_t x492 = 16499312;
	uint32_t t122 = 2U;

    t122 = (x489&(x490==(x491!=x492)));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	static int8_t x495 = INT8_MIN;
	static int64_t x496 = INT64_MIN;

    t123 = (x493&(x494==(x495!=x496)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint32_t x497 = 27483U;
	static int16_t x498 = -1;
	int64_t x499 = INT64_MIN;
	uint64_t x500 = 14401656LLU;
	volatile uint32_t t124 = 95446850U;

    t124 = (x497&(x498==(x499!=x500)));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 18U;
	int8_t x502 = INT8_MAX;
	uint16_t x503 = UINT16_MAX;
	int32_t t125 = 32245;

    t125 = (x501&(x502==(x503!=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 2U;
	int8_t x506 = INT8_MAX;
	uint64_t x507 = UINT64_MAX;
	static int32_t x508 = -185124309;
	volatile uint32_t t126 = 14686970U;

    t126 = (x505&(x506==(x507!=x508)));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x509 = 11019U;
	static int8_t x510 = INT8_MIN;
	int32_t x511 = INT32_MIN;
	static uint32_t x512 = 2U;

    t127 = (x509&(x510==(x511!=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MIN;
	int8_t x514 = INT8_MIN;
	uint16_t x515 = 8U;
	static int8_t x516 = INT8_MIN;

    t128 = (x513&(x514==(x515!=x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 22U;
	volatile int8_t x518 = -1;
	uint64_t x519 = UINT64_MAX;
	int8_t x520 = INT8_MIN;
	static int32_t t129 = 12689;

    t129 = (x517&(x518==(x519!=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	volatile uint8_t x522 = 36U;
	uint8_t x523 = 0U;
	uint16_t x524 = 414U;
	volatile int32_t t130 = 119993100;

    t130 = (x521&(x522==(x523!=x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = -4147;
	static volatile uint32_t x526 = UINT32_MAX;
	volatile int32_t x527 = INT32_MIN;
	volatile int32_t t131 = 109573242;

    t131 = (x525&(x526==(x527!=x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x529 = 62U;
	int32_t x530 = INT32_MAX;
	uint64_t x531 = 3LLU;
	int16_t x532 = INT16_MAX;

    t132 = (x529&(x530==(x531!=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	int16_t x534 = -1;
	uint8_t x535 = 30U;
	static uint32_t x536 = UINT32_MAX;
	int32_t t133 = -6164;

    t133 = (x533&(x534==(x535!=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x537 = 34U;
	int64_t x538 = 198639066210LL;
	static int64_t x539 = -1LL;
	int64_t x540 = INT64_MIN;
	uint32_t t134 = 972U;

    t134 = (x537&(x538==(x539!=x540)));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x541 = 95927578LLU;
	int8_t x543 = INT8_MAX;
	volatile uint64_t t135 = 709052LLU;

    t135 = (x541&(x542==(x543!=x544)));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x545 = 944712U;
	uint32_t x546 = 438U;
	static int8_t x547 = INT8_MIN;
	volatile uint8_t x548 = UINT8_MAX;

    t136 = (x545&(x546==(x547!=x548)));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x549 = UINT32_MAX;
	static volatile int16_t x550 = 2991;
	int8_t x551 = INT8_MIN;
	static uint8_t x552 = 10U;
	volatile uint32_t t137 = 723655U;

    t137 = (x549&(x550==(x551!=x552)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MAX;
	uint8_t x556 = 6U;
	int64_t t138 = 9578271901170775LL;

    t138 = (x553&(x554==(x555!=x556)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -54;
	uint64_t x558 = 2412LLU;
	volatile int16_t x560 = 7;
	static int32_t t139 = -256596999;

    t139 = (x557&(x558==(x559!=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = 102659424018037LL;
	uint8_t x562 = 0U;
	uint8_t x564 = UINT8_MAX;
	static volatile int64_t t140 = 1384LL;

    t140 = (x561&(x562==(x563!=x564)));

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	uint32_t x566 = 2364U;
	int64_t x567 = INT64_MIN;
	int32_t x568 = -1;
	int32_t t141 = -1771;

    t141 = (x565&(x566==(x567!=x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x570 = INT64_MIN;
	int64_t x571 = -49696627075LL;
	uint64_t x572 = 480433880216116080LLU;
	volatile int32_t t142 = 12;

    t142 = (x569&(x570==(x571!=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint16_t x573 = UINT16_MAX;
	int32_t x575 = 6611902;
	static volatile int32_t x576 = INT32_MAX;
	int32_t t143 = 932836;

    t143 = (x573&(x574==(x575!=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 5U;
	int64_t x578 = -1721507217947LL;
	volatile uint8_t x579 = 1U;
	int8_t x580 = -39;

    t144 = (x577&(x578==(x579!=x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = -1;
	static uint16_t x582 = 415U;
	static int8_t x583 = INT8_MIN;
	static int32_t x584 = INT32_MIN;
	volatile int32_t t145 = 1;

    t145 = (x581&(x582==(x583!=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	uint64_t x586 = UINT64_MAX;
	uint64_t x587 = 241939937761554LLU;
	int32_t x588 = -14265350;
	volatile uint64_t t146 = 13978312863927LLU;

    t146 = (x585&(x586==(x587!=x588)));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 1U;
	int16_t x591 = INT16_MAX;
	int8_t x592 = INT8_MIN;
	volatile int32_t t147 = -11;

    t147 = (x589&(x590==(x591!=x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = UINT32_MAX;
	uint16_t x594 = 4016U;
	static int64_t x595 = 59LL;
	int64_t x596 = INT64_MIN;
	uint32_t t148 = 513U;

    t148 = (x593&(x594==(x595!=x596)));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = -1;
	uint16_t x598 = 16U;
	static int64_t x599 = INT64_MAX;
	int16_t x600 = 2;

    t149 = (x597&(x598==(x599!=x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = UINT32_MAX;
	int8_t x602 = INT8_MIN;
	uint8_t x603 = 47U;
	static uint8_t x604 = 1U;
	static uint32_t t150 = 659U;

    t150 = (x601&(x602==(x603!=x604)));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	int8_t x607 = INT8_MAX;
	static int8_t x608 = INT8_MIN;
	int32_t t151 = -200556;

    t151 = (x605&(x606==(x607!=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x610 = 23U;
	static volatile uint8_t x611 = 8U;
	int64_t x612 = INT64_MIN;
	int32_t t152 = -14;

    t152 = (x609&(x610==(x611!=x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = INT16_MIN;
	int16_t x614 = -965;
	uint16_t x615 = 2083U;
	uint32_t x616 = UINT32_MAX;
	volatile int32_t t153 = -105051;

    t153 = (x613&(x614==(x615!=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = INT16_MIN;
	volatile int16_t x618 = -9;
	volatile int8_t x619 = INT8_MIN;
	int16_t x620 = -2295;

    t154 = (x617&(x618==(x619!=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 949U;
	int32_t x622 = 4565;
	uint16_t x623 = 293U;
	volatile uint8_t x624 = 9U;
	int32_t t155 = -1;

    t155 = (x621&(x622==(x623!=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MAX;
	volatile int16_t x626 = INT16_MAX;
	int32_t x627 = 3;

    t156 = (x625&(x626==(x627!=x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -1LL;
	int16_t x631 = INT16_MIN;
	static int8_t x632 = 1;

    t157 = (x629&(x630==(x631!=x632)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 4U;
	volatile int32_t x635 = INT32_MIN;
	uint8_t x636 = 0U;
	static volatile int32_t t158 = -27;

    t158 = (x633&(x634==(x635!=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x637 = UINT8_MAX;
	volatile int32_t x638 = INT32_MIN;
	volatile int16_t x639 = INT16_MIN;

    t159 = (x637&(x638==(x639!=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x641 = -1;
	static int64_t x642 = -1LL;
	volatile int8_t x643 = 8;
	int64_t x644 = -1LL;
	int32_t t160 = 167475;

    t160 = (x641&(x642==(x643!=x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	uint16_t x646 = UINT16_MAX;
	static int16_t x647 = INT16_MIN;
	uint64_t x648 = 492160683711LLU;

    t161 = (x645&(x646==(x647!=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -113668493LL;
	uint64_t x650 = 30434747242LLU;
	int16_t x652 = INT16_MIN;
	int64_t t162 = 4472606539549469267LL;

    t162 = (x649&(x650==(x651!=x652)));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x654 = 585352;
	int16_t x655 = INT16_MAX;
	int32_t x656 = INT32_MIN;
	static uint32_t t163 = 14919735U;

    t163 = (x653&(x654==(x655!=x656)));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x658 = -1;
	int16_t x659 = -502;
	uint16_t x660 = 29U;

    t164 = (x657&(x658==(x659!=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MAX;
	int32_t x662 = INT32_MIN;
	int8_t x663 = INT8_MIN;
	uint16_t x664 = 8995U;
	static int32_t t165 = -782;

    t165 = (x661&(x662==(x663!=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MAX;
	uint32_t x667 = 1479662U;
	static uint64_t x668 = 849265735LLU;
	int32_t t166 = 137493346;

    t166 = (x665&(x666==(x667!=x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x669 = 6036892117912188234LLU;
	uint32_t x670 = UINT32_MAX;
	volatile uint64_t t167 = 618760627844837653LLU;

    t167 = (x669&(x670==(x671!=x672)));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	volatile int16_t x674 = 2;
	int64_t x675 = -7785856LL;
	int64_t x676 = INT64_MIN;
	int32_t t168 = -583;

    t168 = (x673&(x674==(x675!=x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MAX;
	int32_t x678 = -11998;
	int8_t x679 = INT8_MIN;

    t169 = (x677&(x678==(x679!=x680)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	int16_t x682 = INT16_MIN;
	volatile uint32_t x683 = 1U;
	int64_t x684 = INT64_MIN;
	volatile int32_t t170 = -202;

    t170 = (x681&(x682==(x683!=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x685 = UINT32_MAX;
	int64_t x686 = INT64_MIN;
	int8_t x687 = INT8_MAX;
	uint8_t x688 = 0U;
	volatile uint32_t t171 = 2U;

    t171 = (x685&(x686==(x687!=x688)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -3079;
	volatile int64_t x690 = -1LL;
	int8_t x691 = -3;
	int32_t x692 = INT32_MIN;
	int32_t t172 = -2;

    t172 = (x689&(x690==(x691!=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = -1;
	int8_t x694 = INT8_MIN;
	static uint32_t x696 = UINT32_MAX;
	static volatile int32_t t173 = -23050;

    t173 = (x693&(x694==(x695!=x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -22943779659494LL;
	int8_t x698 = -1;
	int64_t x699 = INT64_MIN;
	int32_t x700 = INT32_MIN;

    t174 = (x697&(x698==(x699!=x700)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = UINT32_MAX;
	uint16_t x702 = UINT16_MAX;
	static uint16_t x703 = 1252U;
	static volatile int64_t x704 = -1LL;
	uint32_t t175 = 11U;

    t175 = (x701&(x702==(x703!=x704)));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MAX;
	static int16_t x706 = INT16_MIN;
	uint8_t x707 = UINT8_MAX;
	int64_t x708 = -1LL;

    t176 = (x705&(x706==(x707!=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = UINT16_MAX;
	int32_t x711 = INT32_MIN;
	int8_t x712 = INT8_MAX;

    t177 = (x709&(x710==(x711!=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = -1;
	int16_t x715 = INT16_MIN;
	uint8_t x716 = UINT8_MAX;
	int32_t t178 = 149404618;

    t178 = (x713&(x714==(x715!=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = -1;
	uint32_t x718 = 86819U;
	volatile uint16_t x720 = UINT16_MAX;
	volatile int32_t t179 = 7040;

    t179 = (x717&(x718==(x719!=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	uint8_t x722 = UINT8_MAX;
	int16_t x723 = -1;

    t180 = (x721&(x722==(x723!=x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = 104900910;
	int64_t x726 = -1LL;
	int64_t x727 = INT64_MIN;
	volatile int8_t x728 = -1;
	volatile int32_t t181 = 0;

    t181 = (x725&(x726==(x727!=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x730 = 123286U;
	static int32_t x731 = INT32_MIN;
	uint64_t x732 = 471018LLU;
	int32_t t182 = -26;

    t182 = (x729&(x730==(x731!=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = 0;
	int32_t x734 = 53;
	volatile int32_t x735 = -1;

    t183 = (x733&(x734==(x735!=x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MIN;
	int64_t x738 = INT64_MAX;
	int32_t x739 = -1;
	int32_t x740 = -1;
	volatile int32_t t184 = 6174943;

    t184 = (x737&(x738==(x739!=x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	uint8_t x744 = 13U;
	int64_t t185 = 3216327575173149LL;

    t185 = (x741&(x742==(x743!=x744)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = 1;
	int16_t x746 = 3;
	int32_t x747 = -1;
	int32_t t186 = 10;

    t186 = (x745&(x746==(x747!=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 0U;
	int64_t x750 = -1LL;
	int16_t x751 = INT16_MIN;
	volatile int32_t x752 = -1;
	volatile int32_t t187 = 7621079;

    t187 = (x749&(x750==(x751!=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 1U;
	int64_t x754 = 1LL;
	int8_t x755 = -1;
	uint64_t x756 = 1100924539677888543LLU;
	int32_t t188 = -1;

    t188 = (x753&(x754==(x755!=x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = -1;
	static int8_t x758 = -1;
	volatile int16_t x759 = INT16_MIN;
	static int32_t x760 = INT32_MIN;
	static volatile int32_t t189 = -4772;

    t189 = (x757&(x758==(x759!=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MIN;
	int64_t x762 = -1LL;
	volatile int16_t x763 = -1;
	int64_t x764 = 62LL;
	int32_t t190 = 7229;

    t190 = (x761&(x762==(x763!=x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = INT8_MAX;
	int8_t x766 = -1;
	int64_t x767 = INT64_MIN;
	static int16_t x768 = INT16_MAX;
	volatile int32_t t191 = -14980;

    t191 = (x765&(x766==(x767!=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	int32_t x771 = INT32_MAX;
	volatile uint16_t x772 = UINT16_MAX;
	int64_t t192 = -411119145967LL;

    t192 = (x769&(x770==(x771!=x772)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -34;
	int32_t x774 = -5328051;
	int8_t x775 = INT8_MAX;
	volatile int32_t t193 = -2031;

    t193 = (x773&(x774==(x775!=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x777 = 1LL;
	uint8_t x778 = 0U;
	uint64_t x779 = 7002911546144256126LLU;
	static uint8_t x780 = 0U;
	int64_t t194 = -274056689078LL;

    t194 = (x777&(x778==(x779!=x780)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = UINT64_MAX;
	uint16_t x782 = 862U;
	static int16_t x783 = -1;

    t195 = (x781&(x782==(x783!=x784)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x785 = 23U;
	int8_t x786 = INT8_MAX;
	uint64_t x787 = 70547172441281833LLU;
	static uint8_t x788 = 109U;
	static volatile int32_t t196 = -1;

    t196 = (x785&(x786==(x787!=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	uint8_t x791 = 44U;
	int32_t t197 = -493428616;

    t197 = (x789&(x790==(x791!=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 1U;
	int32_t x795 = -1;
	volatile int32_t x796 = INT32_MIN;
	volatile int32_t t198 = 76741;

    t198 = (x793&(x794==(x795!=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = -1;
	int32_t x799 = -61731981;
	volatile int32_t x800 = -1;
	volatile int32_t t199 = -847606741;

    t199 = (x797&(x798==(x799!=x800)));

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

