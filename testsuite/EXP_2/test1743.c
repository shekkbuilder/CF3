
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

uint16_t x2 = 162U;
int16_t x7 = 1;
uint32_t x9 = 14736453U;
volatile int64_t x14 = -1LL;
static volatile uint32_t x21 = UINT32_MAX;
volatile uint8_t x23 = 63U;
uint64_t x25 = 186LLU;
uint32_t x34 = 5663U;
volatile int32_t t8 = -7648;
uint16_t x37 = 1U;
int32_t x41 = INT32_MIN;
volatile uint16_t x54 = 0U;
int64_t x57 = INT64_MIN;
int8_t x65 = INT8_MIN;
static int16_t x68 = INT16_MIN;
int32_t t16 = -249539266;
static int32_t t17 = 216;
int16_t x75 = 10;
int64_t x76 = 19LL;
volatile int32_t x81 = 15130238;
static uint8_t x85 = 1U;
static uint64_t x88 = 542LLU;
static int64_t x95 = INT64_MIN;
static uint64_t x96 = 29LLU;
volatile int8_t x101 = INT8_MAX;
static volatile uint16_t x108 = 84U;
uint8_t x111 = 62U;
int32_t x119 = 100794762;
volatile int32_t x120 = INT32_MIN;
volatile int8_t x122 = -1;
static volatile int8_t x127 = -1;
static int32_t t32 = -6017613;
int32_t t33 = 103048802;
static uint8_t x139 = 50U;
uint32_t x148 = 1U;
int32_t t36 = 15801;
int64_t x154 = 104594371LL;
volatile uint8_t x162 = 1U;
int64_t x163 = INT64_MAX;
static volatile int16_t x164 = INT16_MAX;
volatile int32_t t40 = 127684924;
int64_t x182 = INT64_MAX;
int64_t x186 = -1LL;
static int32_t t46 = 149635610;
int32_t x189 = INT32_MAX;
static int8_t x191 = -43;
int8_t x192 = -4;
volatile int32_t x193 = INT32_MIN;
volatile uint8_t x197 = 41U;
int16_t x198 = INT16_MAX;
volatile int32_t t50 = -2919;
int64_t x211 = INT64_MIN;
int32_t x212 = INT32_MAX;
int8_t x213 = INT8_MIN;
volatile uint64_t x215 = 3914LLU;
int32_t x216 = INT32_MIN;
volatile int8_t x217 = -50;
uint16_t x222 = 18953U;
int8_t x227 = 15;
static uint16_t x231 = 28919U;
int64_t x232 = INT64_MAX;
volatile uint64_t x237 = 338997740008808367LLU;
int32_t t59 = 307815;
volatile uint32_t x252 = UINT32_MAX;
int64_t x253 = -1LL;
static uint64_t x254 = 7959649902478LLU;
volatile int32_t t63 = -15721;
volatile int32_t x267 = -1;
volatile int64_t x268 = -1LL;
int64_t x269 = INT64_MIN;
int8_t x273 = 19;
static uint64_t x287 = 34074615LLU;
uint64_t x289 = 549LLU;
uint8_t x294 = 1U;
volatile int32_t t74 = -1022479;
static volatile uint32_t x312 = UINT32_MAX;
int8_t x324 = INT8_MIN;
int32_t t82 = -62343513;
int32_t t84 = -1;
int32_t x342 = 4;
volatile int32_t x351 = -16513;
int64_t x354 = 4903686826LL;
volatile int32_t t88 = -2671741;
volatile int16_t x358 = -485;
volatile int32_t x361 = 14767;
uint8_t x362 = 0U;
volatile int32_t t91 = -1;
volatile int8_t x371 = 5;
int16_t x372 = -1;
static volatile int32_t t92 = -13918;
volatile int16_t x376 = INT16_MIN;
volatile int8_t x384 = -39;
volatile int64_t x386 = INT64_MAX;
volatile int8_t x388 = -13;
int32_t x392 = INT32_MAX;
int32_t x394 = -69218;
uint64_t x398 = 56505784757240008LLU;
int16_t x400 = INT16_MAX;
volatile int64_t x403 = -68LL;
volatile uint32_t x404 = 247U;
static uint32_t x413 = 157038U;
int32_t t103 = 85517;
int32_t x420 = 58;
volatile uint32_t x421 = UINT32_MAX;
volatile int64_t x422 = INT64_MIN;
static int32_t t105 = -29593179;
volatile int8_t x425 = -1;
int32_t x431 = INT32_MIN;
int8_t x435 = INT8_MIN;
int8_t x436 = -54;
static int32_t t108 = -1;
static int64_t x442 = 68049419413049LL;
int8_t x451 = INT8_MAX;
uint64_t x453 = 1288984LLU;
volatile int32_t t113 = 508704;
volatile int32_t t114 = 2336148;
uint64_t x464 = 547156799778060600LLU;
static volatile int64_t x468 = -8683415083535768LL;
int8_t x471 = INT8_MIN;
static volatile int32_t t119 = 0;
int16_t x486 = -385;
int64_t x487 = -1187666267076137LL;
static int64_t x488 = INT64_MAX;
int64_t x496 = INT64_MIN;
static int32_t x501 = -1;
int8_t x503 = INT8_MIN;
int32_t t125 = -16;
int64_t x507 = 23LL;
int32_t t127 = -902310;
volatile uint32_t x520 = 155U;
int8_t x521 = 3;
volatile int8_t x524 = INT8_MAX;
int16_t x528 = -1;
uint16_t x529 = 910U;
int32_t x532 = INT32_MIN;
uint8_t x536 = 0U;
static uint64_t x542 = 3LLU;
int32_t t135 = 162486350;
uint64_t x548 = UINT64_MAX;
volatile int32_t t136 = 8;
int32_t x551 = -1;
static uint8_t x555 = UINT8_MAX;
static int8_t x556 = -1;
int64_t x558 = -1LL;
volatile int8_t x559 = -7;
int32_t t140 = 7;
int32_t t141 = -25;
uint64_t x570 = 37827291LLU;
static int16_t x574 = INT16_MIN;
int64_t x580 = INT64_MAX;
int32_t t144 = -571184881;
int64_t x581 = INT64_MIN;
volatile int32_t t145 = -59501;
uint32_t x588 = UINT32_MAX;
uint8_t x590 = 1U;
int8_t x592 = -1;
volatile int32_t t147 = -1029386527;
int8_t x593 = 11;
static uint16_t x596 = 1431U;
int32_t x598 = INT32_MIN;
int8_t x600 = 0;
volatile int8_t x601 = -1;
uint32_t x602 = 141698U;
int8_t x606 = INT8_MIN;
int32_t t151 = 89412122;
volatile int8_t x610 = INT8_MIN;
int8_t x623 = -12;
volatile uint32_t x627 = 6032U;
uint16_t x628 = 27U;
int32_t x638 = INT32_MIN;
int8_t x641 = INT8_MAX;
static volatile int16_t x644 = -1;
int64_t x646 = -1LL;
volatile int16_t x648 = INT16_MIN;
volatile uint32_t x650 = 23U;
uint32_t x652 = UINT32_MAX;
int32_t x654 = INT32_MIN;
static int16_t x658 = INT16_MAX;
uint64_t x667 = 103043879LLU;
static volatile uint8_t x670 = 2U;
volatile uint8_t x683 = 27U;
static int32_t x686 = -1;
int32_t x687 = 7863;
volatile int32_t t171 = -4434;
volatile uint64_t x689 = UINT64_MAX;
int8_t x691 = 30;
int32_t x692 = INT32_MAX;
volatile int16_t x696 = -1;
int32_t x700 = -23565;
volatile int32_t t174 = 224898576;
static int16_t x703 = INT16_MIN;
volatile int32_t t176 = -40;
int16_t x710 = INT16_MIN;
int32_t t178 = 18818;
uint16_t x719 = 23U;
uint32_t x720 = 4391U;
volatile int32_t t180 = -253526;
uint8_t x730 = 1U;
volatile int32_t t182 = -338;
static int32_t x734 = INT32_MAX;
uint8_t x739 = 28U;
int32_t t184 = -6019113;
uint32_t x741 = 19742633U;
int8_t x742 = INT8_MIN;
int32_t t185 = 22653;
static int16_t x751 = -1;
int64_t x755 = 4LL;
int64_t x764 = 3520886445325LL;
static int64_t x767 = INT64_MIN;
uint8_t x768 = 0U;
int32_t t193 = -20;
int64_t x777 = 0LL;
static uint8_t x789 = UINT8_MAX;
uint8_t x790 = 4U;
int8_t x792 = -1;
int32_t x800 = 7191402;
int32_t t199 = 542476;


void f0(void) {
    	int16_t x1 = 6;
	volatile int64_t x3 = INT64_MIN;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 1930;

    t0 = ((x1|(x2>x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int16_t x6 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -251416;

    t1 = ((x5|(x6>x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x10 = UINT16_MAX;
	uint8_t x11 = 55U;
	uint16_t x12 = 2U;
	static int32_t t2 = -7513888;

    t2 = ((x9|(x10>x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	int8_t x15 = -6;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = -111862688;

    t3 = ((x13|(x14>x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MAX;
	volatile int64_t x19 = INT64_MAX;
	volatile int8_t x20 = INT8_MIN;
	int32_t t4 = 207098720;

    t4 = ((x17|(x18>x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x22 = INT32_MIN;
	int32_t x24 = -1126;
	volatile int32_t t5 = 7;

    t5 = ((x21|(x22>x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = -7;
	uint32_t x27 = 254U;
	volatile uint32_t x28 = 5809U;
	int32_t t6 = -6943;

    t6 = ((x25|(x26>x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	int64_t x30 = INT64_MIN;
	static uint8_t x31 = UINT8_MAX;
	static int64_t x32 = INT64_MIN;
	static volatile int32_t t7 = -24;

    t7 = ((x29|(x30>x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MAX;
	uint32_t x35 = UINT32_MAX;
	int8_t x36 = -1;

    t8 = ((x33|(x34>x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x38 = -38;
	int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -1;

    t9 = ((x37|(x38>x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = INT32_MIN;
	static int64_t x43 = INT64_MIN;
	uint32_t x44 = 169723U;
	volatile int32_t t10 = 0;

    t10 = ((x41|(x42>x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = INT32_MAX;
	uint64_t x46 = UINT64_MAX;
	int16_t x47 = 0;
	int64_t x48 = INT64_MIN;
	int32_t t11 = 15036295;

    t11 = ((x45|(x46>x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x49 = -4;
	uint8_t x50 = 56U;
	volatile uint32_t x51 = 8603367U;
	volatile uint64_t x52 = 587809LLU;
	int32_t t12 = -122738;

    t12 = ((x49|(x50>x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = UINT64_MAX;
	int32_t t13 = -7304;

    t13 = ((x53|(x54>x55))!=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x58 = INT64_MIN;
	uint32_t x59 = 31U;
	int64_t x60 = INT64_MAX;
	int32_t t14 = -9801499;

    t14 = ((x57|(x58>x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	static int32_t x62 = INT32_MIN;
	int32_t x63 = INT32_MIN;
	int32_t x64 = -1;
	volatile int32_t t15 = -29488336;

    t15 = ((x61|(x62>x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = -15;
	int8_t x67 = -42;

    t16 = ((x65|(x66>x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint32_t x69 = UINT32_MAX;
	volatile uint32_t x70 = 1252387U;
	volatile uint64_t x71 = UINT64_MAX;
	uint8_t x72 = 3U;

    t17 = ((x69|(x70>x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 142782492;
	uint64_t x74 = 301471LLU;
	static int32_t t18 = -784;

    t18 = ((x73|(x74>x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = INT16_MIN;
	static int32_t x78 = INT32_MAX;
	int64_t x79 = -7147892010LL;
	volatile uint8_t x80 = 1U;
	volatile int32_t t19 = -8152;

    t19 = ((x77|(x78>x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = INT32_MIN;
	static int64_t x83 = INT64_MIN;
	volatile int16_t x84 = INT16_MIN;
	int32_t t20 = -2182;

    t20 = ((x81|(x82>x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = -1;
	static int64_t x87 = INT64_MIN;
	static int32_t t21 = -417229702;

    t21 = ((x85|(x86>x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	uint32_t x90 = 1881295U;
	int64_t x91 = INT64_MIN;
	volatile int64_t x92 = INT64_MIN;
	int32_t t22 = 2;

    t22 = ((x89|(x90>x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = INT64_MIN;
	uint64_t x94 = 819755481773872998LLU;
	int32_t t23 = 496;

    t23 = ((x93|(x94>x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x97 = 336U;
	uint64_t x98 = 14423039605671406LLU;
	volatile int8_t x99 = INT8_MAX;
	int8_t x100 = -1;
	volatile int32_t t24 = -27761285;

    t24 = ((x97|(x98>x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x102 = -35;
	int16_t x103 = INT16_MIN;
	static int32_t x104 = INT32_MAX;
	volatile int32_t t25 = -6;

    t25 = ((x101|(x102>x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = UINT64_MAX;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = -1;
	static int32_t t26 = 16;

    t26 = ((x105|(x106>x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 8;
	static int32_t x110 = INT32_MIN;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 52771;

    t27 = ((x109|(x110>x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -54;
	uint64_t x114 = 139654475103314LLU;
	volatile int16_t x115 = INT16_MAX;
	volatile int32_t x116 = 311099;
	volatile int32_t t28 = 115;

    t28 = ((x113|(x114>x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	int8_t x118 = 5;
	static int32_t t29 = 4561;

    t29 = ((x117|(x118>x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	int16_t x123 = -1;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -141;

    t30 = ((x121|(x122>x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 2002510U;
	uint8_t x126 = UINT8_MAX;
	static int8_t x128 = INT8_MAX;
	int32_t t31 = 57958645;

    t31 = ((x125|(x126>x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -7617;
	int8_t x130 = INT8_MIN;
	volatile uint64_t x131 = UINT64_MAX;
	int32_t x132 = 1033984505;

    t32 = ((x129|(x130>x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	static uint32_t x134 = UINT32_MAX;
	int16_t x135 = -1;
	int8_t x136 = INT8_MIN;

    t33 = ((x133|(x134>x135))!=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x137 = UINT32_MAX;
	uint8_t x138 = UINT8_MAX;
	volatile int32_t x140 = INT32_MAX;
	int32_t t34 = 13423232;

    t34 = ((x137|(x138>x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x141 = 23U;
	uint8_t x142 = 10U;
	static int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MIN;
	int32_t t35 = 1713124;

    t35 = ((x141|(x142>x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = 13567U;
	volatile int64_t x146 = 193311239LL;
	int16_t x147 = -1;

    t36 = ((x145|(x146>x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	uint16_t x150 = 32U;
	static int64_t x151 = -1LL;
	int32_t x152 = 1769638;
	int32_t t37 = -23;

    t37 = ((x149|(x150>x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	volatile uint64_t x155 = 1921089217LLU;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 9649184;

    t38 = ((x153|(x154>x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = -1;
	volatile uint16_t x158 = 22U;
	int16_t x159 = INT16_MIN;
	int16_t x160 = 23;
	int32_t t39 = 62244911;

    t39 = ((x157|(x158>x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x161 = 11191421;

    t40 = ((x161|(x162>x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	int16_t x166 = INT16_MIN;
	int64_t x167 = -1LL;
	static uint32_t x168 = 3U;
	int32_t t41 = 303583;

    t41 = ((x165|(x166>x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x169 = -1;
	uint8_t x170 = UINT8_MAX;
	static uint16_t x171 = 201U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -818202514;

    t42 = ((x169|(x170>x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = 11;
	int8_t x174 = -1;
	int32_t x175 = -1;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 426084;

    t43 = ((x173|(x174>x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	volatile int64_t x178 = -1LL;
	volatile uint64_t x179 = 26329166LLU;
	volatile int8_t x180 = INT8_MAX;
	volatile int32_t t44 = 321867;

    t44 = ((x177|(x178>x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = 1;
	int64_t x183 = 122LL;
	int64_t x184 = 274804237315953LL;
	static volatile int32_t t45 = 323;

    t45 = ((x181|(x182>x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 40096668LLU;
	int32_t x187 = 5409;
	int64_t x188 = INT64_MIN;

    t46 = ((x185|(x186>x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x190 = 2LLU;
	int32_t t47 = 3152139;

    t47 = ((x189|(x190>x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x194 = -1LL;
	volatile int16_t x195 = 1068;
	int64_t x196 = 60434351193LL;
	int32_t t48 = -1;

    t48 = ((x193|(x194>x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x199 = UINT16_MAX;
	volatile uint64_t x200 = UINT64_MAX;
	static int32_t t49 = -53306105;

    t49 = ((x197|(x198>x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = INT16_MAX;
	int32_t x202 = 2679470;
	int64_t x203 = INT64_MAX;
	uint16_t x204 = 206U;

    t50 = ((x201|(x202>x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 0;
	static int8_t x206 = INT8_MAX;
	volatile uint16_t x207 = UINT16_MAX;
	volatile int8_t x208 = INT8_MIN;
	static int32_t t51 = -1180;

    t51 = ((x205|(x206>x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x209 = 29U;
	int8_t x210 = INT8_MIN;
	volatile int32_t t52 = -951490;

    t52 = ((x209|(x210>x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x214 = 7;
	volatile int32_t t53 = -4053368;

    t53 = ((x213|(x214>x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = INT16_MAX;
	volatile int8_t x219 = INT8_MIN;
	uint16_t x220 = UINT16_MAX;
	static volatile int32_t t54 = 8164;

    t54 = ((x217|(x218>x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -14;
	int8_t x223 = INT8_MIN;
	uint32_t x224 = UINT32_MAX;
	int32_t t55 = -1;

    t55 = ((x221|(x222>x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	static int8_t x226 = INT8_MIN;
	int16_t x228 = -1;
	volatile int32_t t56 = -29225597;

    t56 = ((x225|(x226>x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	static uint16_t x230 = 2U;
	int32_t t57 = 18233431;

    t57 = ((x229|(x230>x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	int32_t x234 = INT32_MAX;
	static volatile uint32_t x235 = 15U;
	int8_t x236 = -1;
	static int32_t t58 = 3;

    t58 = ((x233|(x234>x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MAX;
	int32_t x239 = INT32_MAX;
	static uint16_t x240 = UINT16_MAX;

    t59 = ((x237|(x238>x239))!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = 54879454;
	static int64_t x242 = INT64_MAX;
	static int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;
	int32_t t60 = 182;

    t60 = ((x241|(x242>x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 46U;
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MAX;
	static uint16_t x248 = 642U;
	volatile int32_t t61 = -87955068;

    t61 = ((x245|(x246>x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = -374812;
	int16_t x250 = 14;
	int32_t x251 = INT32_MIN;
	volatile int32_t t62 = 851;

    t62 = ((x249|(x250>x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x255 = 8995117908LLU;
	int32_t x256 = INT32_MAX;

    t63 = ((x253|(x254>x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	volatile int8_t x258 = INT8_MAX;
	static volatile int64_t x259 = 202503032042LL;
	volatile int32_t x260 = INT32_MAX;
	volatile int32_t t64 = 0;

    t64 = ((x257|(x258>x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x261 = UINT32_MAX;
	int64_t x262 = INT64_MIN;
	int32_t x263 = -1;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t65 = -4041379;

    t65 = ((x261|(x262>x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int64_t x266 = INT64_MIN;
	int32_t t66 = -1154;

    t66 = ((x265|(x266>x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = INT8_MIN;
	int32_t x271 = 0;
	static int8_t x272 = -1;
	int32_t t67 = 9967;

    t67 = ((x269|(x270>x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x274 = INT32_MIN;
	static uint32_t x275 = UINT32_MAX;
	static volatile int32_t x276 = 895;
	int32_t t68 = 3177583;

    t68 = ((x273|(x274>x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -1;
	int64_t x278 = -538LL;
	static int64_t x279 = INT64_MAX;
	volatile int32_t x280 = 3161514;
	int32_t t69 = -525052937;

    t69 = ((x277|(x278>x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	static uint8_t x282 = UINT8_MAX;
	static int32_t x283 = -495;
	uint64_t x284 = 14150859009LLU;
	volatile int32_t t70 = -6;

    t70 = ((x281|(x282>x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -1;
	volatile uint8_t x286 = 8U;
	volatile int8_t x288 = -1;
	int32_t t71 = 189674633;

    t71 = ((x285|(x286>x287))!=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x290 = -1;
	uint8_t x291 = UINT8_MAX;
	uint32_t x292 = 480U;
	int32_t t72 = -15;

    t72 = ((x289|(x290>x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = INT8_MIN;
	static int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MAX;
	int32_t t73 = -26811;

    t73 = ((x293|(x294>x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MIN;
	static volatile int16_t x299 = INT16_MIN;
	uint16_t x300 = 5725U;

    t74 = ((x297|(x298>x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x301 = 46LLU;
	static int8_t x302 = 1;
	int32_t x303 = INT32_MIN;
	volatile uint8_t x304 = 44U;
	static int32_t t75 = 597;

    t75 = ((x301|(x302>x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x305 = UINT64_MAX;
	volatile uint8_t x306 = UINT8_MAX;
	int16_t x307 = -3;
	int32_t x308 = 1;
	int32_t t76 = 56965;

    t76 = ((x305|(x306>x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x309 = INT64_MIN;
	int16_t x310 = 0;
	static uint16_t x311 = 526U;
	int32_t t77 = -966904;

    t77 = ((x309|(x310>x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	static int32_t x314 = -1;
	int32_t x315 = INT32_MIN;
	int64_t x316 = 257471LL;
	int32_t t78 = -15075;

    t78 = ((x313|(x314>x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -1;
	int32_t x318 = -5668;
	int16_t x319 = 55;
	volatile int16_t x320 = 3;
	volatile int32_t t79 = -1;

    t79 = ((x317|(x318>x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = 33;
	volatile int64_t x322 = -15604LL;
	volatile uint16_t x323 = 5U;
	volatile int32_t t80 = 613328753;

    t80 = ((x321|(x322>x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	int8_t x326 = -27;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t81 = -45935;

    t81 = ((x325|(x326>x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = UINT8_MAX;
	uint16_t x330 = UINT16_MAX;
	static int16_t x331 = -1;
	volatile uint8_t x332 = 6U;

    t82 = ((x329|(x330>x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = -1LL;
	int64_t x334 = INT64_MIN;
	int16_t x335 = INT16_MIN;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t83 = 17463840;

    t83 = ((x333|(x334>x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = INT32_MIN;
	static volatile int64_t x338 = -10431076998130837LL;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;

    t84 = ((x337|(x338>x339))!=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	int8_t x343 = INT8_MIN;
	int64_t x344 = -1LL;
	int32_t t85 = 12951114;

    t85 = ((x341|(x342>x343))!=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -3;
	static int16_t x346 = -16195;
	int64_t x347 = 226LL;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = -248;

    t86 = ((x345|(x346>x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 6119U;
	static volatile int64_t x350 = -1LL;
	static volatile int64_t x352 = INT64_MIN;
	static int32_t t87 = -213388719;

    t87 = ((x349|(x350>x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = -1;
	static volatile int64_t x355 = INT64_MIN;
	int64_t x356 = INT64_MIN;

    t88 = ((x353|(x354>x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -1634733;
	volatile int16_t x359 = 62;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = -300532329;

    t89 = ((x357|(x358>x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x363 = INT64_MIN;
	uint32_t x364 = 27730U;
	volatile int32_t t90 = 12328;

    t90 = ((x361|(x362>x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x365 = 5201U;
	int64_t x366 = INT64_MIN;
	int32_t x367 = INT32_MIN;
	static uint64_t x368 = 116586342439LLU;

    t91 = ((x365|(x366>x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MIN;

    t92 = ((x369|(x370>x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	static volatile int32_t x374 = INT32_MAX;
	uint64_t x375 = 654342014423LLU;
	int32_t t93 = 1156109;

    t93 = ((x373|(x374>x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = -1;
	uint16_t x380 = 1499U;
	volatile int32_t t94 = -1388628;

    t94 = ((x377|(x378>x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 1;
	static volatile int8_t x382 = -30;
	static uint16_t x383 = 187U;
	volatile int32_t t95 = -1670735;

    t95 = ((x381|(x382>x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	int8_t x387 = INT8_MIN;
	volatile int32_t t96 = -735689;

    t96 = ((x385|(x386>x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x389 = 19U;
	static volatile uint64_t x390 = 223383466862092455LLU;
	static int8_t x391 = -6;
	static volatile int32_t t97 = -839448;

    t97 = ((x389|(x390>x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -3;
	volatile uint64_t x395 = UINT64_MAX;
	int64_t x396 = -1LL;
	int32_t t98 = -1;

    t98 = ((x393|(x394>x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	int16_t x399 = -1;
	int32_t t99 = 14423;

    t99 = ((x397|(x398>x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	int16_t x402 = INT16_MIN;
	volatile int32_t t100 = -299816252;

    t100 = ((x401|(x402>x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	static int64_t x406 = -191136869097212306LL;
	int32_t x407 = -2053;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t101 = 34312689;

    t101 = ((x405|(x406>x407))!=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -1LL;
	int16_t x410 = INT16_MIN;
	static uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MIN;
	static int32_t t102 = -9088029;

    t102 = ((x409|(x410>x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MAX;
	uint64_t x415 = UINT64_MAX;
	uint32_t x416 = 907525777U;

    t103 = ((x413|(x414>x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MAX;
	int64_t x418 = 53933166016816LL;
	int64_t x419 = INT64_MAX;
	int32_t t104 = -28636788;

    t104 = ((x417|(x418>x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x423 = 97564201918LLU;
	uint8_t x424 = 113U;

    t105 = ((x421|(x422>x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x426 = -6958LL;
	uint64_t x427 = 33980073LLU;
	uint16_t x428 = 106U;
	volatile int32_t t106 = -1;

    t106 = ((x425|(x426>x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = -1;
	uint16_t x430 = UINT16_MAX;
	uint8_t x432 = 73U;
	int32_t t107 = 57879;

    t107 = ((x429|(x430>x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	volatile int8_t x434 = -1;

    t108 = ((x433|(x434>x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x437 = INT64_MIN;
	int16_t x438 = INT16_MAX;
	uint64_t x439 = 44716811227683LLU;
	int64_t x440 = INT64_MIN;
	int32_t t109 = 116111;

    t109 = ((x437|(x438>x439))!=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	int32_t x443 = -1;
	static int32_t x444 = 14000;
	volatile int32_t t110 = -13130798;

    t110 = ((x441|(x442>x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	static int8_t x446 = INT8_MIN;
	uint32_t x447 = 130841U;
	static int32_t x448 = 1;
	static int32_t t111 = 1981403;

    t111 = ((x445|(x446>x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = INT32_MAX;
	static int8_t x450 = INT8_MIN;
	uint64_t x452 = 986LLU;
	static int32_t t112 = 1756988;

    t112 = ((x449|(x450>x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x454 = INT32_MAX;
	uint32_t x455 = 216U;
	static int32_t x456 = 66;

    t113 = ((x453|(x454>x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -5;
	int8_t x458 = 26;
	static volatile uint32_t x459 = 29U;
	uint64_t x460 = 40760LLU;

    t114 = ((x457|(x458>x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	volatile int64_t x462 = 343LL;
	uint8_t x463 = UINT8_MAX;
	static int32_t t115 = -3;

    t115 = ((x461|(x462>x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MIN;
	volatile uint16_t x466 = UINT16_MAX;
	uint16_t x467 = UINT16_MAX;
	int32_t t116 = -283438;

    t116 = ((x465|(x466>x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x469 = UINT32_MAX;
	int64_t x470 = INT64_MIN;
	volatile int32_t x472 = INT32_MAX;
	volatile int32_t t117 = 0;

    t117 = ((x469|(x470>x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x473 = 0;
	static int16_t x474 = 3316;
	int8_t x475 = INT8_MAX;
	static int64_t x476 = 13462549LL;
	volatile int32_t t118 = 227545;

    t118 = ((x473|(x474>x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x477 = UINT16_MAX;
	uint8_t x478 = 1U;
	uint32_t x479 = UINT32_MAX;
	int32_t x480 = -1;

    t119 = ((x477|(x478>x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = INT32_MIN;
	int32_t x482 = INT32_MIN;
	volatile int64_t x483 = INT64_MAX;
	uint8_t x484 = 1U;
	static int32_t t120 = -1;

    t120 = ((x481|(x482>x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	int32_t t121 = -43;

    t121 = ((x485|(x486>x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x489 = 104687937LLU;
	uint16_t x490 = 13U;
	int8_t x491 = INT8_MIN;
	uint16_t x492 = UINT16_MAX;
	int32_t t122 = -202013;

    t122 = ((x489|(x490>x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	int16_t x494 = -1055;
	int16_t x495 = INT16_MAX;
	int32_t t123 = 0;

    t123 = ((x493|(x494>x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	int16_t x498 = -1;
	volatile int8_t x499 = -1;
	volatile uint8_t x500 = 0U;
	static volatile int32_t t124 = 13707896;

    t124 = ((x497|(x498>x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x502 = INT16_MAX;
	static volatile int8_t x504 = INT8_MIN;

    t125 = ((x501|(x502>x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x505 = INT32_MAX;
	static int64_t x506 = INT64_MIN;
	int8_t x508 = 3;
	volatile int32_t t126 = 53;

    t126 = ((x505|(x506>x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 0;
	static int8_t x510 = -24;
	int16_t x511 = 6553;
	int32_t x512 = -1;

    t127 = ((x509|(x510>x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = 21296139;
	int32_t x514 = INT32_MIN;
	static int16_t x515 = INT16_MIN;
	uint32_t x516 = 602770U;
	int32_t t128 = 3;

    t128 = ((x513|(x514>x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	static volatile int32_t x518 = INT32_MIN;
	int8_t x519 = INT8_MIN;
	volatile int32_t t129 = 7;

    t129 = ((x517|(x518>x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x522 = UINT64_MAX;
	volatile uint32_t x523 = UINT32_MAX;
	int32_t t130 = -3;

    t130 = ((x521|(x522>x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MAX;
	int64_t x526 = -1LL;
	uint16_t x527 = 43U;
	volatile int32_t t131 = -240932;

    t131 = ((x525|(x526>x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x530 = 1944057U;
	uint16_t x531 = 1384U;
	volatile int32_t t132 = 425817;

    t132 = ((x529|(x530>x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = 35U;
	int32_t x534 = -415659466;
	int32_t x535 = -1;
	static volatile int32_t t133 = -162;

    t133 = ((x533|(x534>x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 78U;
	int8_t x538 = INT8_MIN;
	int16_t x539 = -1;
	int8_t x540 = -1;
	int32_t t134 = 2289;

    t134 = ((x537|(x538>x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 713854158491LLU;
	static uint8_t x543 = 123U;
	int8_t x544 = INT8_MAX;

    t135 = ((x541|(x542>x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = INT16_MAX;
	int8_t x546 = INT8_MAX;
	int32_t x547 = INT32_MIN;

    t136 = ((x545|(x546>x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x549 = 40;
	uint16_t x550 = UINT16_MAX;
	static int64_t x552 = INT64_MIN;
	int32_t t137 = 419;

    t137 = ((x549|(x550>x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 160U;
	int8_t x554 = -7;
	static int32_t t138 = 9;

    t138 = ((x553|(x554>x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -210;
	uint16_t x560 = 28U;
	int32_t t139 = 300669123;

    t139 = ((x557|(x558>x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MAX;
	int64_t x562 = INT64_MIN;
	int8_t x563 = -9;
	volatile int8_t x564 = -2;

    t140 = ((x561|(x562>x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	int64_t x566 = 1089337145918LL;
	uint8_t x567 = 4U;
	static int64_t x568 = INT64_MIN;

    t141 = ((x565|(x566>x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = UINT32_MAX;
	int32_t x571 = INT32_MIN;
	int8_t x572 = -1;
	volatile int32_t t142 = -10055;

    t142 = ((x569|(x570>x571))!=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 7U;
	volatile uint16_t x575 = 0U;
	static volatile int16_t x576 = -5;
	volatile int32_t t143 = -13123;

    t143 = ((x573|(x574>x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = -63;
	static volatile uint16_t x578 = UINT16_MAX;
	int32_t x579 = -1;

    t144 = ((x577|(x578>x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x582 = 574526376;
	static int32_t x583 = INT32_MAX;
	int16_t x584 = INT16_MIN;

    t145 = ((x581|(x582>x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x585 = 1;
	uint64_t x586 = 3265LLU;
	int16_t x587 = INT16_MAX;
	volatile int32_t t146 = -93212026;

    t146 = ((x585|(x586>x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MAX;
	int32_t x591 = INT32_MAX;

    t147 = ((x589|(x590>x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x594 = -9;
	uint16_t x595 = 4U;
	volatile int32_t t148 = 706;

    t148 = ((x593|(x594>x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 43U;
	int16_t x599 = INT16_MIN;
	static int32_t t149 = 27186016;

    t149 = ((x597|(x598>x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x603 = UINT64_MAX;
	uint8_t x604 = 1U;
	int32_t t150 = -204361;

    t150 = ((x601|(x602>x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = -1;
	uint64_t x607 = UINT64_MAX;
	int16_t x608 = INT16_MIN;

    t151 = ((x605|(x606>x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	volatile int64_t x611 = -1LL;
	int64_t x612 = 7873464376780314LL;
	volatile int32_t t152 = 36057718;

    t152 = ((x609|(x610>x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = INT64_MIN;
	static int8_t x614 = INT8_MIN;
	volatile int8_t x615 = -22;
	uint32_t x616 = 33U;
	static volatile int32_t t153 = -4269;

    t153 = ((x613|(x614>x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	int16_t x618 = 3;
	static uint32_t x619 = 124354032U;
	uint32_t x620 = 0U;
	int32_t t154 = 44;

    t154 = ((x617|(x618>x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 638616U;
	int8_t x622 = -1;
	volatile int8_t x624 = INT8_MIN;
	static volatile int32_t t155 = -2954;

    t155 = ((x621|(x622>x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1240566LL;
	int32_t x626 = 56;
	volatile int32_t t156 = -14;

    t156 = ((x625|(x626>x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x629 = 2747U;
	volatile int64_t x630 = -68460976388473649LL;
	int8_t x631 = -1;
	uint32_t x632 = 59381869U;
	int32_t t157 = 1;

    t157 = ((x629|(x630>x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = UINT8_MAX;
	volatile int32_t x634 = INT32_MIN;
	uint64_t x635 = UINT64_MAX;
	volatile uint64_t x636 = 18LLU;
	int32_t t158 = 3;

    t158 = ((x633|(x634>x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x637 = UINT8_MAX;
	static int8_t x639 = INT8_MIN;
	volatile int8_t x640 = -1;
	volatile int32_t t159 = 196;

    t159 = ((x637|(x638>x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x642 = UINT16_MAX;
	uint64_t x643 = UINT64_MAX;
	volatile int32_t t160 = -32107427;

    t160 = ((x641|(x642>x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -91933137973891979LL;
	int64_t x647 = INT64_MIN;
	int32_t t161 = 239315;

    t161 = ((x645|(x646>x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	uint64_t x651 = 457LLU;
	int32_t t162 = 2600427;

    t162 = ((x649|(x650>x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = UINT16_MAX;
	int8_t x655 = INT8_MIN;
	int64_t x656 = -137585222468LL;
	volatile int32_t t163 = 92;

    t163 = ((x653|(x654>x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	int32_t x659 = -1;
	int32_t x660 = INT32_MIN;
	static volatile int32_t t164 = 1726025;

    t164 = ((x657|(x658>x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	static uint8_t x662 = 25U;
	uint32_t x663 = 21U;
	int32_t x664 = -1;
	volatile int32_t t165 = 3948965;

    t165 = ((x661|(x662>x663))!=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -121505615325020947LL;
	volatile uint16_t x666 = 7U;
	int16_t x668 = -1;
	int32_t t166 = -50268;

    t166 = ((x665|(x666>x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MAX;
	int16_t x671 = INT16_MIN;
	uint16_t x672 = 1568U;
	static int32_t t167 = -232645806;

    t167 = ((x669|(x670>x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x673 = -1LL;
	int16_t x674 = -1;
	int64_t x675 = -1LL;
	static int16_t x676 = INT16_MIN;
	int32_t t168 = 135666724;

    t168 = ((x673|(x674>x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x677 = INT8_MAX;
	uint32_t x678 = UINT32_MAX;
	int16_t x679 = INT16_MAX;
	int16_t x680 = INT16_MIN;
	static volatile int32_t t169 = -36029303;

    t169 = ((x677|(x678>x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MAX;
	int32_t x682 = INT32_MIN;
	int32_t x684 = -87;
	volatile int32_t t170 = -29826409;

    t170 = ((x681|(x682>x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = UINT32_MAX;
	static uint8_t x688 = 24U;

    t171 = ((x685|(x686>x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = UINT8_MAX;
	static volatile int32_t t172 = 1;

    t172 = ((x689|(x690>x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 6U;
	static int32_t x694 = INT32_MAX;
	volatile int32_t x695 = 2953;
	int32_t t173 = -17371568;

    t173 = ((x693|(x694>x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x697 = 178908403075LLU;
	int8_t x698 = -1;
	int8_t x699 = INT8_MIN;

    t174 = ((x697|(x698>x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 15487U;
	int64_t x702 = 29336137LL;
	int8_t x704 = -1;
	volatile int32_t t175 = -548;

    t175 = ((x701|(x702>x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 150664694537983206LL;
	int64_t x706 = INT64_MIN;
	int32_t x707 = -312;
	int32_t x708 = -15679251;

    t176 = ((x705|(x706>x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x709 = 8;
	uint64_t x711 = 931LLU;
	int8_t x712 = INT8_MIN;
	volatile int32_t t177 = -6;

    t177 = ((x709|(x710>x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = 11988273;
	volatile int32_t x714 = INT32_MIN;
	uint64_t x715 = 14975LLU;
	volatile int8_t x716 = 25;

    t178 = ((x713|(x714>x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = UINT16_MAX;
	static uint32_t x718 = 10092U;
	int32_t t179 = -74926373;

    t179 = ((x717|(x718>x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = 6;
	static uint64_t x722 = UINT64_MAX;
	int32_t x723 = INT32_MAX;
	volatile uint8_t x724 = UINT8_MAX;

    t180 = ((x721|(x722>x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = UINT8_MAX;
	uint64_t x726 = UINT64_MAX;
	int8_t x727 = 6;
	static int32_t x728 = 31296727;
	int32_t t181 = -7150;

    t181 = ((x725|(x726>x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x729 = 53653195461LLU;
	int16_t x731 = INT16_MIN;
	static int16_t x732 = -1;

    t182 = ((x729|(x730>x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = UINT32_MAX;
	int16_t x735 = -1807;
	static uint64_t x736 = 594992422838LLU;
	volatile int32_t t183 = -2513450;

    t183 = ((x733|(x734>x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 261585258773952657LLU;
	static int16_t x738 = -125;
	uint16_t x740 = 953U;

    t184 = ((x737|(x738>x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x743 = -23113;
	static volatile uint64_t x744 = 13612156724LLU;

    t185 = ((x741|(x742>x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = 463717;
	int16_t x746 = INT16_MAX;
	int8_t x747 = INT8_MIN;
	static int8_t x748 = INT8_MAX;
	volatile int32_t t186 = -47070;

    t186 = ((x745|(x746>x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 9916U;
	int8_t x750 = INT8_MIN;
	static int32_t x752 = -1;
	volatile int32_t t187 = -102;

    t187 = ((x749|(x750>x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 19266U;
	static int32_t x754 = -1;
	volatile int32_t x756 = -787;
	int32_t t188 = 1431;

    t188 = ((x753|(x754>x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	int32_t x758 = -11419522;
	static uint8_t x759 = 9U;
	uint16_t x760 = 174U;
	int32_t t189 = 112338;

    t189 = ((x757|(x758>x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 1193653867U;
	uint16_t x762 = 154U;
	uint8_t x763 = 0U;
	int32_t t190 = -36970700;

    t190 = ((x761|(x762>x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 8040LLU;
	int8_t x766 = -42;
	int32_t t191 = 7031;

    t191 = ((x765|(x766>x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = 5299081806573290LL;
	uint16_t x770 = UINT16_MAX;
	uint16_t x771 = 31U;
	int64_t x772 = INT64_MIN;
	int32_t t192 = -27;

    t192 = ((x769|(x770>x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -1;
	static uint64_t x774 = 20751182878428767LLU;
	uint16_t x775 = 191U;
	uint32_t x776 = UINT32_MAX;

    t193 = ((x773|(x774>x775))!=x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x778 = INT32_MIN;
	int16_t x779 = INT16_MIN;
	static int32_t x780 = -38530;
	static volatile int32_t t194 = -18;

    t194 = ((x777|(x778>x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -1;
	volatile int16_t x782 = -1;
	int16_t x783 = -1;
	int8_t x784 = 0;
	volatile int32_t t195 = -230;

    t195 = ((x781|(x782>x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x785 = -37608;
	int32_t x786 = -1;
	uint64_t x787 = UINT64_MAX;
	int16_t x788 = INT16_MAX;
	int32_t t196 = 2050053;

    t196 = ((x785|(x786>x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x791 = INT32_MIN;
	static volatile int32_t t197 = -39344;

    t197 = ((x789|(x790>x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	static int16_t x794 = INT16_MAX;
	uint8_t x795 = 0U;
	int16_t x796 = INT16_MIN;
	int32_t t198 = -436941274;

    t198 = ((x793|(x794>x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -10;
	int64_t x798 = -1LL;
	uint32_t x799 = 4U;

    t199 = ((x797|(x798>x799))!=x800);

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

