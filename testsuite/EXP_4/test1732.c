
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

static int16_t x2 = -1;
volatile uint8_t x4 = 109U;
volatile int32_t t0 = -6;
volatile uint8_t x17 = 1U;
static uint16_t x18 = 0U;
volatile int32_t t6 = -6508503;
volatile int32_t t7 = 122710383;
int8_t x43 = INT8_MAX;
int32_t x45 = INT32_MAX;
volatile int32_t t11 = -160164271;
static volatile uint16_t x50 = 16U;
int32_t x56 = INT32_MIN;
int32_t x57 = -1;
int8_t x58 = INT8_MAX;
uint8_t x68 = UINT8_MAX;
static volatile int32_t t16 = 26;
static int16_t x82 = INT16_MIN;
int16_t x89 = 49;
int32_t t22 = -12;
int64_t x95 = INT64_MIN;
volatile int32_t x96 = INT32_MAX;
static uint64_t x102 = 1821482LLU;
int8_t x103 = INT8_MAX;
volatile int32_t t25 = 62420;
uint8_t x108 = UINT8_MAX;
volatile int32_t t26 = -3945327;
volatile int32_t t27 = 55;
volatile int64_t x114 = INT64_MIN;
static uint16_t x123 = UINT16_MAX;
static int32_t x125 = 44143057;
static int32_t x130 = -386;
int64_t x131 = 419900873008LL;
static int64_t x132 = -1LL;
int64_t x133 = 965826862225990LL;
volatile uint16_t x135 = 14791U;
volatile int8_t x137 = INT8_MAX;
uint8_t x139 = 61U;
volatile int32_t t34 = 78;
volatile uint32_t x141 = 23212858U;
int32_t x143 = INT32_MAX;
static volatile int32_t t38 = 130506;
uint8_t x157 = UINT8_MAX;
uint64_t x160 = UINT64_MAX;
int8_t x162 = INT8_MAX;
uint8_t x163 = 20U;
volatile int64_t x164 = -1LL;
volatile uint32_t x176 = 30585U;
volatile int8_t x181 = INT8_MIN;
int32_t x190 = INT32_MAX;
static int8_t x197 = INT8_MAX;
static uint8_t x202 = 18U;
int64_t x205 = 2963354428LL;
volatile int32_t t55 = 101401;
int32_t x226 = INT32_MAX;
int32_t x232 = -1;
volatile int64_t x234 = 412684547377LL;
uint8_t x247 = 35U;
volatile int32_t t61 = 596;
int32_t x249 = INT32_MIN;
uint16_t x264 = 0U;
volatile int32_t t65 = 1114;
int64_t x267 = INT64_MIN;
int32_t x268 = -1;
int32_t x270 = INT32_MIN;
int32_t x276 = 3;
static int32_t x280 = -1;
static int64_t x282 = INT64_MIN;
volatile uint16_t x283 = 1U;
int64_t x287 = INT64_MIN;
int8_t x288 = INT8_MIN;
volatile int16_t x289 = -12615;
int8_t x296 = -1;
int16_t x297 = INT16_MIN;
uint16_t x298 = 3400U;
uint64_t x318 = 20926532412346LLU;
volatile int32_t t79 = 48;
volatile int32_t t80 = -57898;
volatile int16_t x336 = INT16_MIN;
uint32_t x345 = 1737244471U;
volatile int8_t x352 = INT8_MAX;
uint32_t x353 = 15164825U;
static volatile uint16_t x361 = UINT16_MAX;
static volatile uint8_t x362 = UINT8_MAX;
uint8_t x363 = 0U;
static int8_t x366 = INT8_MIN;
volatile int32_t t91 = -31877694;
uint32_t x371 = UINT32_MAX;
static int32_t t92 = 399819;
volatile int8_t x375 = -1;
uint32_t x384 = 1965010608U;
volatile int32_t x385 = -192844628;
int64_t x389 = INT64_MAX;
static volatile int32_t t100 = 13918529;
static int8_t x408 = INT8_MAX;
static int16_t x416 = 1;
static uint8_t x419 = UINT8_MAX;
uint32_t x434 = UINT32_MAX;
int8_t x435 = -1;
uint16_t x438 = 12252U;
uint8_t x439 = 18U;
int32_t t109 = 13554;
static int32_t x441 = INT32_MIN;
static uint8_t x444 = UINT8_MAX;
int16_t x450 = INT16_MIN;
int8_t x452 = 2;
volatile int32_t x453 = INT32_MIN;
int64_t x454 = 41170476381700LL;
volatile int16_t x464 = -1;
static int32_t x466 = -36;
volatile int16_t x477 = INT16_MIN;
static int32_t x482 = INT32_MAX;
int64_t x485 = INT64_MAX;
volatile int16_t x486 = 157;
static volatile int64_t x487 = -1LL;
int16_t x490 = INT16_MAX;
int32_t x491 = INT32_MIN;
int64_t x496 = INT64_MIN;
int32_t x508 = -1;
int64_t x513 = -1LL;
static int64_t x514 = -682524696LL;
volatile int8_t x519 = INT8_MIN;
volatile int64_t x523 = INT64_MIN;
int8_t x524 = -1;
int32_t x525 = INT32_MIN;
int32_t t132 = -1804301;
uint16_t x537 = 18U;
volatile int16_t x539 = INT16_MAX;
int8_t x540 = -1;
static volatile int8_t x544 = INT8_MIN;
volatile int32_t t138 = 1267;
uint64_t x568 = 1230565802936LLU;
volatile int32_t t141 = 843634256;
uint8_t x575 = UINT8_MAX;
uint8_t x577 = UINT8_MAX;
uint8_t x581 = 28U;
int64_t x584 = INT64_MAX;
int16_t x596 = INT16_MIN;
static uint8_t x597 = UINT8_MAX;
uint16_t x600 = UINT16_MAX;
uint8_t x606 = UINT8_MAX;
static int32_t t151 = -1;
int32_t x615 = INT32_MIN;
uint16_t x618 = 6U;
uint64_t x619 = UINT64_MAX;
int32_t x620 = -1;
int64_t x629 = INT64_MIN;
volatile uint32_t x631 = 32925113U;
volatile uint16_t x636 = UINT16_MAX;
uint64_t x637 = UINT64_MAX;
int64_t x641 = -2172815073821431LL;
volatile int64_t x648 = -1LL;
volatile int32_t t162 = 2655;
static uint8_t x658 = 6U;
int32_t x662 = INT32_MIN;
volatile int32_t t165 = 101;
int64_t x669 = -28597038LL;
uint64_t x678 = UINT64_MAX;
int32_t x679 = 68045456;
uint16_t x685 = 1U;
int16_t x691 = INT16_MAX;
int32_t x692 = -54341;
volatile int8_t x697 = -1;
uint8_t x703 = UINT8_MAX;
volatile int32_t t176 = 0;
volatile uint16_t x717 = 2U;
int64_t x719 = INT64_MAX;
static uint8_t x722 = UINT8_MAX;
int32_t x725 = -30188512;
int8_t x730 = INT8_MAX;
uint32_t x736 = 35403310U;
uint32_t x738 = UINT32_MAX;
int16_t x741 = INT16_MIN;
static int64_t x751 = -384870LL;
volatile int32_t t187 = -568138;
volatile uint8_t x764 = 2U;
static int64_t x769 = INT64_MIN;
static int8_t x786 = -1;
int32_t x790 = 0;
int8_t x800 = -1;
volatile int32_t t199 = 5;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int64_t x3 = INT64_MIN;

    t0 = (x1<=(x2&(x3>x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	static uint32_t x7 = 9U;
	static uint64_t x8 = 1339649LLU;
	int32_t t1 = 13;

    t1 = (x5<=(x6&(x7>x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x9 = 13U;
	static int8_t x10 = -1;
	volatile int64_t x11 = 2750405771316428476LL;
	int16_t x12 = -1;
	int32_t t2 = 249287;

    t2 = (x9<=(x10&(x11>x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 0U;
	static int32_t x14 = INT32_MIN;
	static int32_t x15 = INT32_MAX;
	uint32_t x16 = 11U;
	int32_t t3 = -4987263;

    t3 = (x13<=(x14&(x15>x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x19 = 255294237548LLU;
	uint32_t x20 = 27127782U;
	int32_t t4 = -30325;

    t4 = (x17<=(x18&(x19>x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -3095;
	int32_t x22 = INT32_MAX;
	uint64_t x23 = UINT64_MAX;
	static int8_t x24 = 2;
	volatile int32_t t5 = 0;

    t5 = (x21<=(x22&(x23>x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 3355855U;
	volatile int32_t x26 = -1;
	int16_t x27 = INT16_MIN;
	volatile uint8_t x28 = 93U;

    t6 = (x25<=(x26&(x27>x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	uint8_t x30 = 80U;
	static int16_t x31 = 0;
	uint32_t x32 = 6770821U;

    t7 = (x29<=(x30&(x31>x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	uint64_t x34 = 3528184LLU;
	int32_t x35 = -1;
	volatile uint8_t x36 = 0U;
	int32_t t8 = -928;

    t8 = (x33<=(x34&(x35>x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = 7LL;
	uint16_t x38 = UINT16_MAX;
	uint16_t x39 = UINT16_MAX;
	static int32_t x40 = 3313055;
	int32_t t9 = -213;

    t9 = (x37<=(x38&(x39>x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	int64_t x42 = -1LL;
	volatile int16_t x44 = 1;
	volatile int32_t t10 = 283925274;

    t10 = (x41<=(x42&(x43>x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x46 = -1LL;
	volatile int16_t x47 = -241;
	int32_t x48 = -1;

    t11 = (x45<=(x46&(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -7;
	int64_t x51 = INT64_MAX;
	int16_t x52 = -1;
	volatile int32_t t12 = 22226005;

    t12 = (x49<=(x50&(x51>x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 480LLU;
	volatile int32_t x54 = 267698050;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t t13 = 9;

    t13 = (x53<=(x54&(x55>x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x59 = UINT32_MAX;
	static int32_t x60 = INT32_MAX;
	int32_t t14 = 6757;

    t14 = (x57<=(x58&(x59>x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	volatile int16_t x62 = INT16_MAX;
	uint16_t x63 = 16118U;
	volatile int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -964962;

    t15 = (x61<=(x62&(x63>x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 13103318LLU;
	int32_t x66 = -1;
	uint16_t x67 = UINT16_MAX;

    t16 = (x65<=(x66&(x67>x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint64_t x69 = UINT64_MAX;
	int64_t x70 = INT64_MIN;
	uint64_t x71 = UINT64_MAX;
	volatile int32_t x72 = INT32_MIN;
	static int32_t t17 = -29477;

    t17 = (x69<=(x70&(x71>x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 697860U;
	static uint16_t x74 = 3499U;
	static int16_t x75 = -1;
	int64_t x76 = -1LL;
	volatile int32_t t18 = -6841602;

    t18 = (x73<=(x74&(x75>x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 1U;
	static int8_t x78 = -7;
	uint32_t x79 = 157972022U;
	volatile int32_t x80 = 121432135;
	int32_t t19 = 4765;

    t19 = (x77<=(x78&(x79>x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	static int64_t x83 = -66856LL;
	int32_t x84 = 15456;
	static int32_t t20 = -1807002;

    t20 = (x81<=(x82&(x83>x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MIN;
	volatile uint16_t x86 = UINT16_MAX;
	volatile uint8_t x87 = 75U;
	uint16_t x88 = 26U;
	volatile int32_t t21 = 36;

    t21 = (x85<=(x86&(x87>x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = 0;
	int16_t x91 = INT16_MAX;
	volatile int32_t x92 = -30;

    t22 = (x89<=(x90&(x91>x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = 247396LL;
	static int64_t x94 = 19092135905515319LL;
	int32_t t23 = -17265322;

    t23 = (x93<=(x94&(x95>x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 13;
	int16_t x98 = -1;
	uint32_t x99 = 21U;
	uint32_t x100 = 643U;
	int32_t t24 = -2372067;

    t24 = (x97<=(x98&(x99>x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x101 = -1LL;
	int32_t x104 = -1;

    t25 = (x101<=(x102&(x103>x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x105 = 212122011939828399LL;
	volatile int16_t x106 = INT16_MIN;
	volatile int64_t x107 = -13408LL;

    t26 = (x105<=(x106&(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = INT64_MAX;
	volatile int8_t x110 = INT8_MIN;
	static int16_t x111 = -1;
	uint32_t x112 = 1U;

    t27 = (x109<=(x110&(x111>x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int64_t x115 = -226205744LL;
	int16_t x116 = -1;
	int32_t t28 = -104824;

    t28 = (x113<=(x114&(x115>x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 1042680283LLU;
	int64_t x118 = 514459557526599LL;
	uint8_t x119 = 15U;
	uint16_t x120 = 1U;
	volatile int32_t t29 = -559205889;

    t29 = (x117<=(x118&(x119>x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	int16_t x122 = INT16_MIN;
	static int16_t x124 = INT16_MAX;
	int32_t t30 = -265622;

    t30 = (x121<=(x122&(x123>x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = 586108623304380LL;
	int32_t x127 = -44493;
	volatile int16_t x128 = INT16_MAX;
	int32_t t31 = -122;

    t31 = (x125<=(x126&(x127>x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = INT16_MIN;
	static int32_t t32 = 468696;

    t32 = (x129<=(x130&(x131>x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x134 = 53U;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = -242;

    t33 = (x133<=(x134&(x135>x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x138 = 1;
	int64_t x140 = -1318LL;

    t34 = (x137<=(x138&(x139>x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x142 = 968U;
	uint32_t x144 = UINT32_MAX;
	int32_t t35 = 6645410;

    t35 = (x141<=(x142&(x143>x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x145 = INT32_MIN;
	static int8_t x146 = INT8_MIN;
	int16_t x147 = 733;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = 988421981;

    t36 = (x145<=(x146&(x147>x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = INT16_MAX;
	int16_t x150 = 923;
	int16_t x151 = INT16_MIN;
	uint8_t x152 = 15U;
	volatile int32_t t37 = 5331;

    t37 = (x149<=(x150&(x151>x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int16_t x154 = -435;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = 807991920LLU;

    t38 = (x153<=(x154&(x155>x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = INT8_MIN;
	int8_t x159 = -1;
	volatile int32_t t39 = -5;

    t39 = (x157<=(x158&(x159>x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x161 = INT8_MAX;
	volatile int32_t t40 = -6961877;

    t40 = (x161<=(x162&(x163>x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	volatile uint8_t x166 = UINT8_MAX;
	int32_t x167 = INT32_MIN;
	uint64_t x168 = 1LLU;
	volatile int32_t t41 = -459;

    t41 = (x165<=(x166&(x167>x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x169 = 491398U;
	static uint32_t x170 = UINT32_MAX;
	uint8_t x171 = 1U;
	volatile int64_t x172 = -3124LL;
	volatile int32_t t42 = 15;

    t42 = (x169<=(x170&(x171>x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 13LLU;
	int64_t x174 = -1LL;
	uint64_t x175 = 1LLU;
	volatile int32_t t43 = 279556;

    t43 = (x173<=(x174&(x175>x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	int8_t x178 = INT8_MIN;
	static volatile int16_t x179 = -1;
	volatile int32_t x180 = -1;
	volatile int32_t t44 = 21;

    t44 = (x177<=(x178&(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = -1;
	uint64_t x183 = 48059354LLU;
	volatile int16_t x184 = INT16_MAX;
	int32_t t45 = -154058;

    t45 = (x181<=(x182&(x183>x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = 8153;
	volatile uint8_t x186 = UINT8_MAX;
	volatile int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MIN;
	int32_t t46 = -212;

    t46 = (x185<=(x186&(x187>x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x189 = 27439901LLU;
	volatile int8_t x191 = -2;
	int64_t x192 = -1LL;
	int32_t t47 = 10;

    t47 = (x189<=(x190&(x191>x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = INT16_MAX;
	int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	uint16_t x196 = 1077U;
	volatile int32_t t48 = 1;

    t48 = (x193<=(x194&(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = 6;
	int16_t x199 = -46;
	volatile uint8_t x200 = UINT8_MAX;
	volatile int32_t t49 = 347001;

    t49 = (x197<=(x198&(x199>x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = 0;
	volatile int16_t x203 = INT16_MAX;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -15;

    t50 = (x201<=(x202&(x203>x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x206 = 1U;
	static int32_t x207 = -1;
	int64_t x208 = INT64_MIN;
	int32_t t51 = -3553;

    t51 = (x205<=(x206&(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 452023LLU;
	uint32_t x210 = 10525U;
	static int32_t x211 = INT32_MIN;
	static uint64_t x212 = UINT64_MAX;
	volatile int32_t t52 = 0;

    t52 = (x209<=(x210&(x211>x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -9151;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = INT16_MAX;
	volatile uint64_t x216 = 77708289398474401LLU;
	int32_t t53 = -6181748;

    t53 = (x213<=(x214&(x215>x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x217 = 2U;
	int16_t x218 = INT16_MAX;
	uint32_t x219 = UINT32_MAX;
	uint32_t x220 = 63849U;
	volatile int32_t t54 = 6;

    t54 = (x217<=(x218&(x219>x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MAX;
	int16_t x222 = INT16_MIN;
	int32_t x223 = INT32_MAX;
	uint64_t x224 = 343573LLU;

    t55 = (x221<=(x222&(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	uint8_t x227 = 15U;
	int64_t x228 = INT64_MAX;
	int32_t t56 = -3452;

    t56 = (x225<=(x226&(x227>x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = -1;
	volatile int8_t x230 = INT8_MIN;
	static int16_t x231 = INT16_MAX;
	int32_t t57 = -1;

    t57 = (x229<=(x230&(x231>x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 153U;
	uint8_t x235 = UINT8_MAX;
	volatile uint8_t x236 = 0U;
	int32_t t58 = -1348;

    t58 = (x233<=(x234&(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	int64_t x238 = -63179LL;
	int8_t x239 = INT8_MIN;
	int16_t x240 = 716;
	volatile int32_t t59 = 2386148;

    t59 = (x237<=(x238&(x239>x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = INT16_MAX;
	uint32_t x242 = 7418368U;
	uint64_t x243 = UINT64_MAX;
	volatile uint16_t x244 = 9U;
	volatile int32_t t60 = -2914;

    t60 = (x241<=(x242&(x243>x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	int8_t x246 = 27;
	int8_t x248 = -1;

    t61 = (x245<=(x246&(x247>x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x250 = -1;
	int8_t x251 = -5;
	uint16_t x252 = 47U;
	static volatile int32_t t62 = 220547;

    t62 = (x249<=(x250&(x251>x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MAX;
	volatile int64_t x256 = INT64_MAX;
	static int32_t t63 = 170;

    t63 = (x253<=(x254&(x255>x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = -1;
	int32_t x258 = 564419;
	int32_t x259 = -3029;
	uint64_t x260 = UINT64_MAX;
	static int32_t t64 = -13;

    t64 = (x257<=(x258&(x259>x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x261 = UINT32_MAX;
	static int16_t x262 = INT16_MAX;
	static uint16_t x263 = 3045U;

    t65 = (x261<=(x262&(x263>x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -1;
	uint64_t x266 = 61087LLU;
	static int32_t t66 = -157990;

    t66 = (x265<=(x266&(x267>x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 2U;
	int32_t x271 = INT32_MAX;
	volatile int16_t x272 = -4;
	volatile int32_t t67 = -6172;

    t67 = (x269<=(x270&(x271>x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x273 = UINT32_MAX;
	static uint32_t x274 = 1742U;
	int16_t x275 = -845;
	volatile int32_t t68 = 0;

    t68 = (x273<=(x274&(x275>x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -1;
	int64_t x278 = -1LL;
	uint16_t x279 = 470U;
	int32_t t69 = -1007759;

    t69 = (x277<=(x278&(x279>x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x281 = 125056309U;
	uint32_t x284 = UINT32_MAX;
	int32_t t70 = 0;

    t70 = (x281<=(x282&(x283>x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	static int64_t x286 = INT64_MAX;
	volatile int32_t t71 = 608035;

    t71 = (x285<=(x286&(x287>x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x290 = -1;
	static uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t72 = 31;

    t72 = (x289<=(x290&(x291>x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	volatile int64_t x294 = INT64_MIN;
	uint32_t x295 = 23059546U;
	int32_t t73 = 0;

    t73 = (x293<=(x294&(x295>x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x299 = 12999;
	int8_t x300 = INT8_MIN;
	int32_t t74 = 2271;

    t74 = (x297<=(x298&(x299>x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MAX;
	uint32_t x302 = 2180U;
	uint64_t x303 = 33114LLU;
	int32_t x304 = INT32_MIN;
	int32_t t75 = 14843944;

    t75 = (x301<=(x302&(x303>x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -1;
	volatile uint16_t x306 = UINT16_MAX;
	int64_t x307 = -1LL;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -58;

    t76 = (x305<=(x306&(x307>x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = -1;
	static volatile uint16_t x310 = 36U;
	uint32_t x311 = 33001616U;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = -25;

    t77 = (x309<=(x310&(x311>x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	static uint16_t x314 = UINT16_MAX;
	static uint32_t x315 = 13U;
	static int64_t x316 = 736495180027LL;
	static volatile int32_t t78 = 712876;

    t78 = (x313<=(x314&(x315>x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MAX;
	volatile int64_t x319 = INT64_MIN;
	volatile int32_t x320 = INT32_MAX;

    t79 = (x317<=(x318&(x319>x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x321 = 532724095U;
	int16_t x322 = INT16_MAX;
	static int32_t x323 = INT32_MIN;
	int16_t x324 = -1;

    t80 = (x321<=(x322&(x323>x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	uint64_t x326 = 6LLU;
	int64_t x327 = INT64_MIN;
	static int16_t x328 = INT16_MIN;
	int32_t t81 = -3;

    t81 = (x325<=(x326&(x327>x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 1U;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = INT64_MAX;
	uint16_t x332 = 0U;
	volatile int32_t t82 = 8;

    t82 = (x329<=(x330&(x331>x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = INT16_MIN;
	static int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MIN;
	int32_t t83 = 18040839;

    t83 = (x333<=(x334&(x335>x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -12;
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MIN;
	int8_t x340 = 37;
	int32_t t84 = -904592962;

    t84 = (x337<=(x338&(x339>x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -106693153;
	int16_t x342 = INT16_MIN;
	uint16_t x343 = UINT16_MAX;
	uint16_t x344 = 1808U;
	volatile int32_t t85 = -1;

    t85 = (x341<=(x342&(x343>x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x346 = UINT64_MAX;
	uint32_t x347 = UINT32_MAX;
	volatile int16_t x348 = 1007;
	static int32_t t86 = -2470;

    t86 = (x345<=(x346&(x347>x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	int8_t x350 = 7;
	int64_t x351 = -1LL;
	volatile int32_t t87 = 37405091;

    t87 = (x349<=(x350&(x351>x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MAX;
	int8_t x356 = -1;
	int32_t t88 = -6;

    t88 = (x353<=(x354&(x355>x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint16_t x357 = 30379U;
	static uint16_t x358 = UINT16_MAX;
	int32_t x359 = -1;
	int8_t x360 = INT8_MIN;
	static int32_t t89 = -111737;

    t89 = (x357<=(x358&(x359>x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x364 = 12068U;
	static int32_t t90 = -1;

    t90 = (x361<=(x362&(x363>x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = -1;
	int8_t x367 = INT8_MAX;
	int64_t x368 = INT64_MAX;

    t91 = (x365<=(x366&(x367>x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x369 = UINT32_MAX;
	static int64_t x370 = -31194999762965LL;
	int64_t x372 = INT64_MAX;

    t92 = (x369<=(x370&(x371>x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x373 = 0U;
	static uint8_t x374 = 9U;
	static uint32_t x376 = 219601U;
	int32_t t93 = 6791178;

    t93 = (x373<=(x374&(x375>x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	uint64_t x378 = 125LLU;
	volatile uint64_t x379 = 290459911037797LLU;
	uint32_t x380 = 418851U;
	volatile int32_t t94 = 98866175;

    t94 = (x377<=(x378&(x379>x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	uint16_t x382 = UINT16_MAX;
	uint32_t x383 = 46529U;
	int32_t t95 = -264;

    t95 = (x381<=(x382&(x383>x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	volatile int64_t x388 = INT64_MIN;
	static volatile int32_t t96 = 1;

    t96 = (x385<=(x386&(x387>x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x390 = 359099LLU;
	static int16_t x391 = INT16_MIN;
	volatile int64_t x392 = INT64_MIN;
	static int32_t t97 = -1;

    t97 = (x389<=(x390&(x391>x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	int64_t x394 = -1LL;
	int32_t x395 = INT32_MIN;
	int16_t x396 = -85;
	volatile int32_t t98 = 7;

    t98 = (x393<=(x394&(x395>x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x397 = 335339729U;
	volatile uint32_t x398 = 1U;
	uint8_t x399 = 18U;
	int8_t x400 = 15;
	volatile int32_t t99 = 12436061;

    t99 = (x397<=(x398&(x399>x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -1LL;
	uint8_t x402 = 3U;
	int8_t x403 = INT8_MIN;
	uint8_t x404 = UINT8_MAX;

    t100 = (x401<=(x402&(x403>x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -1;
	volatile int8_t x406 = INT8_MIN;
	volatile int64_t x407 = INT64_MIN;
	volatile int32_t t101 = 323059;

    t101 = (x405<=(x406&(x407>x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = -1;
	int32_t x410 = -1;
	uint16_t x411 = UINT16_MAX;
	uint64_t x412 = 2LLU;
	int32_t t102 = -22835;

    t102 = (x409<=(x410&(x411>x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	uint64_t x414 = UINT64_MAX;
	static volatile uint16_t x415 = 2042U;
	int32_t t103 = -721510066;

    t103 = (x413<=(x414&(x415>x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 104U;
	uint8_t x418 = 10U;
	volatile int8_t x420 = -1;
	static int32_t t104 = 1798021;

    t104 = (x417<=(x418&(x419>x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	int64_t x422 = INT64_MIN;
	int64_t x423 = INT64_MIN;
	volatile int32_t x424 = -1;
	int32_t t105 = 0;

    t105 = (x421<=(x422&(x423>x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -1;
	uint16_t x426 = 25U;
	uint64_t x427 = 1953846174457LLU;
	volatile int8_t x428 = 1;
	static int32_t t106 = 392462;

    t106 = (x425<=(x426&(x427>x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	uint16_t x430 = 382U;
	int16_t x431 = -1;
	uint64_t x432 = 34596047918LLU;
	volatile int32_t t107 = 0;

    t107 = (x429<=(x430&(x431>x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 42U;
	static int8_t x436 = INT8_MAX;
	int32_t t108 = -693;

    t108 = (x433<=(x434&(x435>x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = -1;
	volatile int64_t x440 = -4159278919090LL;

    t109 = (x437<=(x438&(x439>x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MIN;
	volatile int16_t x443 = INT16_MIN;
	volatile int32_t t110 = 21;

    t110 = (x441<=(x442&(x443>x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = 94331018;
	uint16_t x446 = 55U;
	uint64_t x447 = UINT64_MAX;
	int32_t x448 = -2589380;
	int32_t t111 = -1269;

    t111 = (x445<=(x446&(x447>x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 535709881LLU;
	int64_t x451 = INT64_MIN;
	volatile int32_t t112 = -82;

    t112 = (x449<=(x450&(x451>x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x455 = -4187;
	static volatile uint8_t x456 = 3U;
	int32_t t113 = -1;

    t113 = (x453<=(x454&(x455>x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -3;
	int8_t x458 = INT8_MIN;
	uint8_t x459 = 16U;
	static int32_t x460 = INT32_MAX;
	volatile int32_t t114 = 7;

    t114 = (x457<=(x458&(x459>x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	int32_t x462 = -1;
	uint16_t x463 = 331U;
	int32_t t115 = 12;

    t115 = (x461<=(x462&(x463>x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x465 = UINT32_MAX;
	uint64_t x467 = UINT64_MAX;
	static uint8_t x468 = 8U;
	int32_t t116 = 18967;

    t116 = (x465<=(x466&(x467>x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = 53U;
	int64_t x470 = -26278310392362LL;
	volatile uint8_t x471 = UINT8_MAX;
	int64_t x472 = INT64_MIN;
	volatile int32_t t117 = -3355699;

    t117 = (x469<=(x470&(x471>x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	int32_t x474 = INT32_MIN;
	int64_t x475 = -1LL;
	volatile int32_t x476 = INT32_MIN;
	static volatile int32_t t118 = -27186980;

    t118 = (x473<=(x474&(x475>x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x478 = INT32_MIN;
	int8_t x479 = INT8_MAX;
	int64_t x480 = INT64_MIN;
	int32_t t119 = 50968185;

    t119 = (x477<=(x478&(x479>x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = INT32_MAX;
	volatile int64_t x483 = INT64_MIN;
	int32_t x484 = INT32_MIN;
	int32_t t120 = 5;

    t120 = (x481<=(x482&(x483>x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x488 = 1U;
	volatile int32_t t121 = 3;

    t121 = (x485<=(x486&(x487>x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	static uint16_t x492 = UINT16_MAX;
	int32_t t122 = 1;

    t122 = (x489<=(x490&(x491>x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	static int16_t x494 = INT16_MAX;
	volatile uint32_t x495 = UINT32_MAX;
	int32_t t123 = 0;

    t123 = (x493<=(x494&(x495>x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	static int32_t x498 = -1;
	volatile int32_t x499 = INT32_MAX;
	static uint64_t x500 = 32483930LLU;
	static int32_t t124 = -1259;

    t124 = (x497<=(x498&(x499>x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -248102;
	int32_t x502 = -14;
	int64_t x503 = INT64_MIN;
	int8_t x504 = -1;
	volatile int32_t t125 = 27967239;

    t125 = (x501<=(x502&(x503>x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x505 = 4060U;
	uint32_t x506 = UINT32_MAX;
	int8_t x507 = 3;
	int32_t t126 = 41835;

    t126 = (x505<=(x506&(x507>x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x509 = 60U;
	uint64_t x510 = 8819LLU;
	volatile int16_t x511 = -1;
	static int32_t x512 = -1;
	int32_t t127 = 17579656;

    t127 = (x509<=(x510&(x511>x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x515 = 7105;
	volatile int8_t x516 = -1;
	volatile int32_t t128 = -1;

    t128 = (x513<=(x514&(x515>x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint32_t x517 = 20428776U;
	int64_t x518 = INT64_MIN;
	volatile uint64_t x520 = UINT64_MAX;
	static int32_t t129 = -321862111;

    t129 = (x517<=(x518&(x519>x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MAX;
	int64_t x522 = -1LL;
	volatile int32_t t130 = -21602;

    t130 = (x521<=(x522&(x523>x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = INT16_MAX;
	int8_t x527 = -3;
	int32_t x528 = -6313;
	volatile int32_t t131 = -28;

    t131 = (x525<=(x526&(x527>x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MIN;
	volatile int8_t x531 = INT8_MIN;
	static volatile uint32_t x532 = 498469668U;

    t132 = (x529<=(x530&(x531>x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = 0LL;
	int32_t x534 = -181;
	static int64_t x535 = INT64_MIN;
	volatile uint8_t x536 = 18U;
	int32_t t133 = 45;

    t133 = (x533<=(x534&(x535>x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x538 = INT32_MAX;
	volatile int32_t t134 = 585204;

    t134 = (x537<=(x538&(x539>x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = -1;
	static volatile uint16_t x542 = UINT16_MAX;
	volatile int8_t x543 = -1;
	volatile int32_t t135 = -533;

    t135 = (x541<=(x542&(x543>x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x545 = INT16_MIN;
	int8_t x546 = INT8_MAX;
	static volatile uint16_t x547 = 16237U;
	int64_t x548 = INT64_MIN;
	volatile int32_t t136 = 56;

    t136 = (x545<=(x546&(x547>x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = INT64_MIN;
	int16_t x550 = -1;
	static volatile int8_t x551 = 0;
	uint8_t x552 = UINT8_MAX;
	static int32_t t137 = -44279064;

    t137 = (x549<=(x550&(x551>x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 0U;
	uint8_t x554 = UINT8_MAX;
	uint64_t x555 = 21LLU;
	uint64_t x556 = 43LLU;

    t138 = (x553<=(x554&(x555>x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = 30;
	volatile int16_t x558 = 1;
	static uint32_t x559 = 41894U;
	int64_t x560 = INT64_MAX;
	int32_t t139 = -21972387;

    t139 = (x557<=(x558&(x559>x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = 0;
	int32_t x562 = INT32_MIN;
	int16_t x563 = INT16_MIN;
	uint16_t x564 = UINT16_MAX;
	int32_t t140 = 535847988;

    t140 = (x561<=(x562&(x563>x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x565 = UINT64_MAX;
	volatile int32_t x566 = INT32_MIN;
	volatile uint8_t x567 = 5U;

    t141 = (x565<=(x566&(x567>x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 61684022554948LLU;
	int16_t x570 = INT16_MIN;
	int64_t x571 = -1LL;
	uint16_t x572 = 21545U;
	volatile int32_t t142 = 474;

    t142 = (x569<=(x570&(x571>x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x573 = 11U;
	uint32_t x574 = UINT32_MAX;
	static int64_t x576 = INT64_MAX;
	static volatile int32_t t143 = 184619098;

    t143 = (x573<=(x574&(x575>x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x578 = 0U;
	uint32_t x579 = UINT32_MAX;
	int32_t x580 = INT32_MIN;
	int32_t t144 = -662695141;

    t144 = (x577<=(x578&(x579>x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x582 = INT16_MAX;
	static int64_t x583 = 258837977076737238LL;
	static int32_t t145 = 25;

    t145 = (x581<=(x582&(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = 167LLU;
	volatile int16_t x586 = INT16_MIN;
	int32_t x587 = -1;
	int32_t x588 = -164099802;
	int32_t t146 = -449183596;

    t146 = (x585<=(x586&(x587>x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -4350849638101LL;
	int8_t x590 = INT8_MIN;
	int64_t x591 = INT64_MAX;
	int32_t x592 = -18695020;
	int32_t t147 = -39526085;

    t147 = (x589<=(x590&(x591>x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = UINT8_MAX;
	static uint32_t x594 = UINT32_MAX;
	uint32_t x595 = 242330086U;
	static int32_t t148 = -1;

    t148 = (x593<=(x594&(x595>x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x598 = -1;
	static int16_t x599 = INT16_MAX;
	static volatile int32_t t149 = 50829904;

    t149 = (x597<=(x598&(x599>x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 7U;
	int32_t x602 = 510707;
	static uint8_t x603 = 15U;
	static int32_t x604 = -63;
	volatile int32_t t150 = 1;

    t150 = (x601<=(x602&(x603>x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	static int64_t x607 = -1LL;
	int32_t x608 = -1;

    t151 = (x605<=(x606&(x607>x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MAX;
	static volatile int32_t x610 = INT32_MAX;
	uint16_t x611 = UINT16_MAX;
	int16_t x612 = INT16_MAX;
	static int32_t t152 = 2;

    t152 = (x609<=(x610&(x611>x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x613 = 4042507LLU;
	uint16_t x614 = UINT16_MAX;
	int64_t x616 = INT64_MIN;
	int32_t t153 = 176451;

    t153 = (x613<=(x614&(x615>x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = UINT32_MAX;
	volatile int32_t t154 = -2234122;

    t154 = (x617<=(x618&(x619>x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = 2;
	uint8_t x622 = 23U;
	int32_t x623 = -1;
	static volatile int32_t x624 = -3452;
	int32_t t155 = -426821;

    t155 = (x621<=(x622&(x623>x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = INT64_MAX;
	int8_t x626 = -1;
	int32_t x627 = INT32_MIN;
	int64_t x628 = INT64_MIN;
	int32_t t156 = 252611;

    t156 = (x625<=(x626&(x627>x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x630 = INT64_MIN;
	static int16_t x632 = 146;
	volatile int32_t t157 = -16761582;

    t157 = (x629<=(x630&(x631>x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	int64_t x634 = INT64_MIN;
	int8_t x635 = INT8_MIN;
	volatile int32_t t158 = 197054;

    t158 = (x633<=(x634&(x635>x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x638 = 137;
	int16_t x639 = INT16_MIN;
	int16_t x640 = INT16_MIN;
	int32_t t159 = 6823;

    t159 = (x637<=(x638&(x639>x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint16_t x642 = 0U;
	static int32_t x643 = INT32_MIN;
	int64_t x644 = INT64_MAX;
	int32_t t160 = 58543336;

    t160 = (x641<=(x642&(x643>x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 5U;
	int64_t x646 = 816425LL;
	uint32_t x647 = 66763U;
	int32_t t161 = 2837653;

    t161 = (x645<=(x646&(x647>x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	int16_t x650 = -1;
	int32_t x651 = INT32_MIN;
	uint8_t x652 = UINT8_MAX;

    t162 = (x649<=(x650&(x651>x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = 992;
	int16_t x654 = -5;
	static int64_t x655 = -1LL;
	int32_t x656 = INT32_MAX;
	int32_t t163 = 447569;

    t163 = (x653<=(x654&(x655>x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -1;
	volatile int32_t x659 = INT32_MAX;
	volatile int16_t x660 = INT16_MAX;
	static int32_t t164 = -10790676;

    t164 = (x657<=(x658&(x659>x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 47233809928170LLU;
	int32_t x663 = -1336;
	int64_t x664 = INT64_MAX;

    t165 = (x661<=(x662&(x663>x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -21097682;
	int16_t x666 = INT16_MIN;
	int16_t x667 = INT16_MAX;
	int64_t x668 = INT64_MIN;
	static int32_t t166 = 870922204;

    t166 = (x665<=(x666&(x667>x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x670 = INT64_MIN;
	volatile int16_t x671 = 7538;
	static volatile int64_t x672 = INT64_MIN;
	int32_t t167 = 104;

    t167 = (x669<=(x670&(x671>x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = INT64_MAX;
	int32_t x674 = INT32_MIN;
	volatile int32_t x675 = INT32_MAX;
	int64_t x676 = INT64_MIN;
	static volatile int32_t t168 = 27222;

    t168 = (x673<=(x674&(x675>x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MAX;
	volatile int32_t x680 = -1;
	int32_t t169 = 435679520;

    t169 = (x677<=(x678&(x679>x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 11658U;
	int16_t x682 = INT16_MIN;
	int64_t x683 = 136098183LL;
	volatile int8_t x684 = INT8_MIN;
	static int32_t t170 = -16030;

    t170 = (x681<=(x682&(x683>x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = -275;
	int8_t x687 = -1;
	volatile int16_t x688 = -1;
	volatile int32_t t171 = 340466;

    t171 = (x685<=(x686&(x687>x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MAX;
	int32_t x690 = INT32_MIN;
	int32_t t172 = -61728;

    t172 = (x689<=(x690&(x691>x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = 6;
	uint32_t x694 = UINT32_MAX;
	volatile int16_t x695 = 3035;
	int8_t x696 = 0;
	volatile int32_t t173 = 7072721;

    t173 = (x693<=(x694&(x695>x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x698 = UINT64_MAX;
	int8_t x699 = INT8_MAX;
	int64_t x700 = INT64_MAX;
	int32_t t174 = -372;

    t174 = (x697<=(x698&(x699>x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = -1;
	uint16_t x702 = 289U;
	int32_t x704 = 1029;
	int32_t t175 = -2;

    t175 = (x701<=(x702&(x703>x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MAX;
	int32_t x706 = -1;
	uint32_t x707 = UINT32_MAX;
	static uint16_t x708 = UINT16_MAX;

    t176 = (x705<=(x706&(x707>x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = -18671;
	int64_t x710 = INT64_MAX;
	uint16_t x711 = UINT16_MAX;
	int8_t x712 = -1;
	volatile int32_t t177 = -1;

    t177 = (x709<=(x710&(x711>x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = INT32_MIN;
	int16_t x714 = INT16_MAX;
	volatile uint8_t x715 = UINT8_MAX;
	int16_t x716 = INT16_MAX;
	int32_t t178 = -506720;

    t178 = (x713<=(x714&(x715>x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x718 = 2827U;
	int8_t x720 = 31;
	int32_t t179 = -138808986;

    t179 = (x717<=(x718&(x719>x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	uint16_t x723 = 6076U;
	int64_t x724 = 4130664669375432233LL;
	int32_t t180 = -28532;

    t180 = (x721<=(x722&(x723>x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x726 = UINT32_MAX;
	static int8_t x727 = INT8_MIN;
	static uint8_t x728 = UINT8_MAX;
	volatile int32_t t181 = 26991;

    t181 = (x725<=(x726&(x727>x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 16126464U;
	int64_t x731 = INT64_MIN;
	volatile int8_t x732 = INT8_MAX;
	volatile int32_t t182 = 2775730;

    t182 = (x729<=(x730&(x731>x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	int8_t x734 = INT8_MIN;
	uint8_t x735 = 0U;
	int32_t t183 = 13690613;

    t183 = (x733<=(x734&(x735>x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1830;
	static int16_t x739 = 0;
	uint8_t x740 = 3U;
	int32_t t184 = 308912;

    t184 = (x737<=(x738&(x739>x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x742 = -215LL;
	uint32_t x743 = 1U;
	uint32_t x744 = UINT32_MAX;
	volatile int32_t t185 = -4000;

    t185 = (x741<=(x742&(x743>x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 76993164LLU;
	int16_t x746 = INT16_MIN;
	static volatile int64_t x747 = INT64_MIN;
	int8_t x748 = INT8_MAX;
	static int32_t t186 = 730015;

    t186 = (x745<=(x746&(x747>x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x749 = INT32_MIN;
	static int32_t x750 = -1;
	uint16_t x752 = 30U;

    t187 = (x749<=(x750&(x751>x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 3U;
	static volatile int64_t x754 = 8LL;
	int8_t x755 = INT8_MAX;
	int32_t x756 = INT32_MIN;
	int32_t t188 = -10183;

    t188 = (x753<=(x754&(x755>x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	int64_t x758 = 48810985LL;
	static volatile int64_t x759 = INT64_MAX;
	volatile int16_t x760 = INT16_MIN;
	static volatile int32_t t189 = 219140;

    t189 = (x757<=(x758&(x759>x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x761 = 2;
	int64_t x762 = INT64_MIN;
	uint16_t x763 = 1524U;
	int32_t t190 = 54948;

    t190 = (x761<=(x762&(x763>x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 17197U;
	int8_t x766 = -1;
	int16_t x767 = -1;
	uint32_t x768 = UINT32_MAX;
	int32_t t191 = 40040;

    t191 = (x765<=(x766&(x767>x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x770 = INT32_MAX;
	volatile int16_t x771 = INT16_MIN;
	int8_t x772 = INT8_MIN;
	int32_t t192 = -733367078;

    t192 = (x769<=(x770&(x771>x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -85633502435136LL;
	int64_t x774 = INT64_MAX;
	uint32_t x775 = UINT32_MAX;
	volatile int64_t x776 = INT64_MIN;
	int32_t t193 = 0;

    t193 = (x773<=(x774&(x775>x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MIN;
	static int16_t x778 = INT16_MIN;
	volatile int32_t x779 = -1;
	int64_t x780 = INT64_MIN;
	static volatile int32_t t194 = 801854;

    t194 = (x777<=(x778&(x779>x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = INT16_MAX;
	uint64_t x782 = 251884006017176LLU;
	volatile int64_t x783 = INT64_MAX;
	int32_t x784 = INT32_MIN;
	int32_t t195 = -22492235;

    t195 = (x781<=(x782&(x783>x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MAX;
	uint16_t x787 = UINT16_MAX;
	int64_t x788 = INT64_MAX;
	int32_t t196 = -1844550;

    t196 = (x785<=(x786&(x787>x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 6LLU;
	int16_t x791 = -30;
	uint8_t x792 = UINT8_MAX;
	static int32_t t197 = -25614298;

    t197 = (x789<=(x790&(x791>x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = INT8_MIN;
	uint16_t x795 = 7U;
	uint32_t x796 = 924U;
	static volatile int32_t t198 = 1052787594;

    t198 = (x793<=(x794&(x795>x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = 29090224;
	uint8_t x798 = UINT8_MAX;
	volatile int8_t x799 = INT8_MIN;

    t199 = (x797<=(x798&(x799>x800)));

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

