
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

int16_t x1 = INT16_MIN;
int16_t x4 = INT16_MAX;
int8_t x7 = -17;
int64_t x17 = 29364878125LL;
volatile int16_t x21 = -1;
volatile int64_t x25 = -1LL;
int32_t x27 = -1;
volatile int8_t x34 = 1;
int32_t x35 = -266340607;
static volatile int32_t t8 = 258622;
volatile int16_t x43 = INT16_MIN;
static volatile uint8_t x47 = UINT8_MAX;
volatile int8_t x52 = -5;
int16_t x53 = INT16_MIN;
static uint8_t x63 = 26U;
uint16_t x68 = UINT16_MAX;
int8_t x71 = 6;
int32_t x73 = 15815963;
uint64_t x83 = UINT64_MAX;
static int32_t x90 = INT32_MIN;
uint8_t x91 = 4U;
uint8_t x99 = 49U;
volatile int32_t t24 = -7493;
volatile int64_t t28 = 76042450981146505LL;
int64_t x121 = INT64_MIN;
static int16_t x123 = INT16_MIN;
uint16_t x125 = 0U;
uint64_t t32 = UINT64_MAX;
int8_t x137 = INT8_MIN;
int64_t x146 = -492338LL;
volatile int8_t x147 = -1;
int32_t x150 = -2149381;
static int32_t x160 = INT32_MAX;
volatile int32_t t39 = INT32_MAX;
volatile uint32_t x169 = UINT32_MAX;
uint64_t x179 = 1423393LLU;
volatile int8_t x181 = INT8_MIN;
int64_t x183 = -45408LL;
volatile int32_t t47 = -1;
int8_t x195 = 2;
volatile uint16_t x199 = 180U;
int64_t x209 = 704183234431LL;
int16_t x210 = 283;
uint32_t x211 = 26795634U;
int64_t x215 = 100739LL;
int16_t x217 = INT16_MIN;
int16_t x220 = -14780;
volatile int64_t x230 = INT64_MAX;
uint64_t x231 = UINT64_MAX;
int32_t t58 = 420;
static int8_t x237 = INT8_MAX;
int32_t x244 = -1;
static int16_t x250 = -1;
static int16_t x256 = INT16_MIN;
static int8_t x262 = -6;
static int8_t x268 = INT8_MIN;
volatile int32_t t66 = 30055;
int8_t x273 = INT8_MAX;
int8_t x274 = 7;
static int8_t x286 = -36;
int8_t x287 = INT8_MIN;
int16_t x289 = -1;
volatile int8_t x301 = 2;
int16_t x303 = -22;
int32_t x304 = INT32_MIN;
volatile int8_t x309 = INT8_MIN;
volatile int16_t x314 = INT16_MAX;
static int64_t x318 = -10627703315940831LL;
static volatile uint16_t x320 = 306U;
int16_t x324 = -1089;
int16_t x327 = -1;
static int32_t x331 = -1;
int64_t x332 = -674LL;
static volatile int32_t t84 = -481932357;
int16_t x343 = INT16_MIN;
int32_t x345 = INT32_MAX;
static int32_t x346 = 14897990;
int32_t x374 = -1;
int32_t x376 = INT32_MIN;
uint64_t x377 = 15LLU;
int32_t x384 = INT32_MIN;
static uint32_t x387 = UINT32_MAX;
int8_t x395 = INT8_MIN;
int32_t x396 = -1;
static int64_t x397 = INT64_MIN;
uint64_t x399 = UINT64_MAX;
static int8_t x401 = INT8_MAX;
volatile int16_t x405 = INT16_MAX;
int64_t x410 = INT64_MIN;
int32_t x411 = 2302;
int64_t x416 = INT64_MIN;
int16_t x420 = INT16_MIN;
static uint8_t x425 = UINT8_MAX;
int64_t x434 = 701436919808327LL;
uint32_t x438 = UINT32_MAX;
uint32_t x439 = UINT32_MAX;
uint32_t x441 = 167286U;
int8_t x446 = INT8_MAX;
uint16_t x447 = 37U;
int16_t x454 = 0;
int16_t x459 = -1;
static uint8_t x461 = 0U;
int32_t x467 = -1;
int8_t x468 = -12;
static int64_t x469 = -77450094905473LL;
static int32_t x482 = -1;
uint64_t x483 = 2138278272124835LLU;
uint32_t x484 = 1315U;
static int32_t x492 = INT32_MIN;
volatile int32_t x500 = 11014;
int32_t x504 = -1;
volatile int64_t x505 = INT64_MIN;
int32_t x506 = 2520462;
int16_t x517 = -1;
uint8_t x520 = UINT8_MAX;
volatile int32_t t129 = 8;
static uint16_t x522 = UINT16_MAX;
static uint32_t x523 = 242U;
static uint16_t x524 = 1U;
volatile int32_t t130 = -153036575;
static volatile int64_t t131 = -2839944484189703LL;
int32_t x532 = INT32_MIN;
uint32_t x533 = 1291U;
int64_t x536 = -1LL;
int32_t x543 = 947581245;
static int8_t x551 = INT8_MIN;
int8_t x554 = 0;
uint64_t x567 = UINT64_MAX;
uint8_t x570 = 1U;
volatile int64_t t145 = -275LL;
uint64_t x591 = 79659503736274636LLU;
uint64_t x592 = UINT64_MAX;
volatile int32_t x596 = INT32_MAX;
volatile int8_t x599 = INT8_MAX;
static int16_t x603 = 2167;
int16_t x604 = -1;
volatile int32_t t150 = 13588;
uint16_t x605 = 1523U;
static int32_t x606 = INT32_MIN;
uint16_t x619 = 95U;
volatile int32_t t156 = -7508;
volatile int64_t x639 = 606593570026782622LL;
static volatile int32_t t162 = INT32_MIN;
int8_t x653 = INT8_MAX;
static int8_t x668 = INT8_MIN;
int8_t x670 = 0;
volatile int32_t t167 = INT32_MIN;
static int64_t x673 = -1LL;
uint16_t x674 = 23U;
uint8_t x677 = 22U;
volatile int8_t x678 = INT8_MIN;
int32_t t169 = -69548;
uint64_t x686 = 269867921694747LLU;
volatile uint8_t x695 = 1U;
static int64_t x699 = INT64_MIN;
volatile int32_t t175 = 32431;
int64_t x705 = INT64_MAX;
int16_t x708 = -6;
volatile uint32_t x709 = UINT32_MAX;
volatile int32_t x717 = -3812;
uint64_t t179 = UINT64_MAX;
int64_t x721 = 78641897743749367LL;
int32_t x722 = -245736;
int8_t x730 = INT8_MIN;
int32_t x731 = INT32_MIN;
int8_t x736 = INT8_MIN;
uint32_t x743 = 110454708U;
uint8_t x745 = UINT8_MAX;
static int32_t x750 = -1;
int32_t x760 = -1;
volatile int64_t x761 = INT64_MAX;
uint64_t x764 = UINT64_MAX;
int16_t x768 = -368;
int32_t x772 = INT32_MAX;
int32_t x774 = INT32_MIN;
static int16_t x776 = -1;
volatile uint64_t t194 = 337LLU;
uint8_t x784 = 27U;
int64_t x789 = INT64_MAX;
uint32_t x793 = 228322U;
volatile int32_t t198 = INT32_MAX;


void f0(void) {
    	static int16_t x2 = INT16_MIN;
	int8_t x3 = -5;
	volatile int32_t t0 = 0;

    t0 = (((x1>x2)>x3)|x4);

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = 24;
	volatile int32_t x6 = -14;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = UINT32_MAX;

    t1 = (((x5>x6)>x7)|x8);

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	static volatile uint8_t x10 = 89U;
	uint32_t x11 = 12325U;
	static uint64_t x12 = UINT64_MAX;
	static uint64_t t2 = UINT64_MAX;

    t2 = (((x9>x10)>x11)|x12);

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 53381LL;
	uint16_t x14 = 53U;
	uint16_t x15 = 70U;
	int64_t x16 = INT64_MAX;
	int64_t t3 = INT64_MAX;

    t3 = (((x13>x14)>x15)|x16);

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x18 = UINT16_MAX;
	volatile int16_t x19 = 0;
	uint64_t x20 = 6919850370793627676LLU;
	uint64_t t4 = 16LLU;

    t4 = (((x17>x18)>x19)|x20);

    if (t4 != 6919850370793627677LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x22 = 12175811131862809LLU;
	uint64_t x23 = 7040522877559LLU;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = INT32_MAX;

    t5 = (((x21>x22)>x23)|x24);

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = 444570506700LLU;
	volatile int16_t x28 = 5654;
	volatile int32_t t6 = -1017975;

    t6 = (((x25>x26)>x27)|x28);

    if (t6 != 5655) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MIN;
	int32_t x30 = -1;
	static uint16_t x31 = 57U;
	uint16_t x32 = 4U;
	static int32_t t7 = 331857086;

    t7 = (((x29>x30)>x31)|x32);

    if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MIN;
	int8_t x36 = 12;

    t8 = (((x33>x34)>x35)|x36);

    if (t8 != 13) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = 26U;
	int16_t x38 = 173;
	uint8_t x39 = 125U;
	static volatile int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 111;

    t9 = (((x37>x38)>x39)|x40);

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 0LLU;
	static uint32_t x42 = UINT32_MAX;
	volatile int32_t x44 = 321466;
	int32_t t10 = 0;

    t10 = (((x41>x42)>x43)|x44);

    if (t10 != 321467) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = 50;
	static uint8_t x46 = 29U;
	static int64_t x48 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

    t11 = (((x45>x46)>x47)|x48);

    if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	volatile int16_t x50 = INT16_MIN;
	static int64_t x51 = INT64_MIN;
	int32_t t12 = -1;

    t12 = (((x49>x50)>x51)|x52);

    if (t12 != -5) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x54 = UINT32_MAX;
	int64_t x55 = INT64_MAX;
	int32_t x56 = -244281182;
	int32_t t13 = 83;

    t13 = (((x53>x54)>x55)|x56);

    if (t13 != -244281182) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x57 = 22LLU;
	static int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MIN;
	uint8_t x60 = 41U;
	int32_t t14 = -418325268;

    t14 = (((x57>x58)>x59)|x60);

    if (t14 != 41) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	int8_t x62 = -1;
	int64_t x64 = INT64_MAX;
	int64_t t15 = INT64_MAX;

    t15 = (((x61>x62)>x63)|x64);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	volatile uint16_t x66 = 5U;
	static int32_t x67 = -1;
	static volatile int32_t t16 = -3714488;

    t16 = (((x65>x66)>x67)|x68);

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1077;
	int8_t x70 = -1;
	uint16_t x72 = 10215U;
	int32_t t17 = -2677;

    t17 = (((x69>x70)>x71)|x72);

    if (t17 != 10215) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = INT8_MIN;
	volatile uint16_t x75 = UINT16_MAX;
	static volatile int64_t x76 = INT64_MIN;
	static volatile int64_t t18 = INT64_MIN;

    t18 = (((x73>x74)>x75)|x76);

    if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	int8_t x78 = INT8_MIN;
	uint64_t x79 = 74LLU;
	uint64_t x80 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

    t19 = (((x77>x78)>x79)|x80);

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 2LL;
	int8_t x82 = -1;
	volatile int64_t x84 = INT64_MIN;
	volatile int64_t t20 = INT64_MIN;

    t20 = (((x81>x82)>x83)|x84);

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = 799;
	volatile int64_t x86 = INT64_MIN;
	uint8_t x87 = 2U;
	uint8_t x88 = 95U;
	int32_t t21 = 206;

    t21 = (((x85>x86)>x87)|x88);

    if (t21 != 95) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = 809;
	static uint16_t x92 = UINT16_MAX;
	int32_t t22 = -99;

    t22 = (((x89>x90)>x91)|x92);

    if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 48U;
	static volatile int16_t x94 = INT16_MAX;
	uint8_t x95 = UINT8_MAX;
	static volatile int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -3287;

    t23 = (((x93>x94)>x95)|x96);

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 3;
	int64_t x98 = INT64_MIN;
	uint8_t x100 = 77U;

    t24 = (((x97>x98)>x99)|x100);

    if (t24 != 77) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MIN;
	static uint8_t x103 = 76U;
	volatile uint16_t x104 = 49U;
	volatile int32_t t25 = -12698025;

    t25 = (((x101>x102)>x103)|x104);

    if (t25 != 49) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MIN;
	int16_t x106 = -1;
	uint8_t x107 = 45U;
	static int32_t x108 = 7;
	static volatile int32_t t26 = -283750083;

    t26 = (((x105>x106)>x107)|x108);

    if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	static int32_t x110 = INT32_MIN;
	static volatile uint8_t x111 = 0U;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t27 = UINT32_MAX;

    t27 = (((x109>x110)>x111)|x112);

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = INT16_MIN;
	static uint8_t x114 = 41U;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MIN;

    t28 = (((x113>x114)>x115)|x116);

    if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	static uint32_t x118 = 764003U;
	uint8_t x119 = UINT8_MAX;
	int64_t x120 = -3400088812LL;
	volatile int64_t t29 = -2955836462430LL;

    t29 = (((x117>x118)>x119)|x120);

    if (t29 != -3400088812LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = INT64_MIN;
	volatile int16_t x124 = INT16_MIN;
	int32_t t30 = 30833;

    t30 = (((x121>x122)>x123)|x124);

    if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x126 = UINT16_MAX;
	volatile uint8_t x127 = 28U;
	static int8_t x128 = INT8_MAX;
	int32_t t31 = 261292;

    t31 = (((x125>x126)>x127)|x128);

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 270U;
	int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MAX;
	uint64_t x132 = UINT64_MAX;

    t32 = (((x129>x130)>x131)|x132);

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MAX;
	volatile uint8_t x134 = UINT8_MAX;
	int8_t x135 = INT8_MIN;
	static volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = -261383905;

    t33 = (((x133>x134)>x135)|x136);

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = INT32_MIN;
	static int16_t x139 = INT16_MIN;
	int8_t x140 = 0;
	int32_t t34 = -361817;

    t34 = (((x137>x138)>x139)|x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = INT16_MAX;
	static volatile int32_t x142 = INT32_MAX;
	uint64_t x143 = UINT64_MAX;
	static volatile int64_t x144 = INT64_MAX;
	int64_t t35 = INT64_MAX;

    t35 = (((x141>x142)>x143)|x144);

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -1LL;
	volatile int32_t x148 = INT32_MIN;
	static int32_t t36 = 431;

    t36 = (((x145>x146)>x147)|x148);

    if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	int32_t x151 = -1;
	static int16_t x152 = -1;
	static volatile int32_t t37 = -58122;

    t37 = (((x149>x150)>x151)|x152);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = -1;
	volatile int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MIN;
	int8_t x156 = -1;
	volatile int32_t t38 = 377;

    t38 = (((x153>x154)>x155)|x156);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	uint32_t x158 = 986670443U;
	static volatile int64_t x159 = 1165508043750743LL;

    t39 = (((x157>x158)>x159)|x160);

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	int16_t x162 = -1;
	volatile int64_t x163 = -1LL;
	int8_t x164 = -4;
	volatile int32_t t40 = -381;

    t40 = (((x161>x162)>x163)|x164);

    if (t40 != -3) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 0U;
	int16_t x166 = INT16_MAX;
	int16_t x167 = 0;
	static int16_t x168 = INT16_MAX;
	static int32_t t41 = -4077125;

    t41 = (((x165>x166)>x167)|x168);

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x170 = INT16_MAX;
	volatile int16_t x171 = INT16_MIN;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = 1383;

    t42 = (((x169>x170)>x171)|x172);

    if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MAX;
	volatile int32_t x174 = INT32_MIN;
	int64_t x175 = -1LL;
	int8_t x176 = INT8_MAX;
	volatile int32_t t43 = 15;

    t43 = (((x173>x174)>x175)|x176);

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 0LLU;
	volatile int16_t x178 = INT16_MIN;
	uint16_t x180 = 21U;
	int32_t t44 = -130836;

    t44 = (((x177>x178)>x179)|x180);

    if (t44 != 21) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = -143;
	volatile int64_t x184 = -8660LL;
	volatile int64_t t45 = -8636937LL;

    t45 = (((x181>x182)>x183)|x184);

    if (t45 != -8659LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	volatile uint64_t x186 = UINT64_MAX;
	int16_t x187 = INT16_MIN;
	static volatile int32_t x188 = -1;
	volatile int32_t t46 = -1283;

    t46 = (((x185>x186)>x187)|x188);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int16_t x190 = -8210;
	volatile int64_t x191 = -470052983118LL;
	int8_t x192 = -1;

    t47 = (((x189>x190)>x191)|x192);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 172282U;
	int32_t x194 = INT32_MAX;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t48 = -24620;

    t48 = (((x193>x194)>x195)|x196);

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = 1769;
	volatile int32_t x198 = INT32_MAX;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = 130891930;

    t49 = (((x197>x198)>x199)|x200);

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = 2;
	uint32_t x202 = 449U;
	int32_t x203 = -1;
	int16_t x204 = -21;
	int32_t t50 = -427559;

    t50 = (((x201>x202)>x203)|x204);

    if (t50 != -21) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MAX;
	static int8_t x207 = -1;
	static int64_t x208 = INT64_MIN;
	int64_t t51 = -1019339229156200584LL;

    t51 = (((x205>x206)>x207)|x208);

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = INT32_MIN;

    t52 = (((x209>x210)>x211)|x212);

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = UINT64_MAX;
	uint32_t x214 = 212U;
	static uint16_t x216 = 234U;
	int32_t t53 = 4;

    t53 = (((x213>x214)>x215)|x216);

    if (t53 != 234) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x218 = 12588847U;
	static int32_t x219 = INT32_MIN;
	static int32_t t54 = 8859857;

    t54 = (((x217>x218)>x219)|x220);

    if (t54 != -14779) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = INT32_MIN;
	int32_t x222 = -1;
	uint8_t x223 = UINT8_MAX;
	int16_t x224 = INT16_MAX;
	static volatile int32_t t55 = 14934;

    t55 = (((x221>x222)>x223)|x224);

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 17613387;
	int8_t x226 = -1;
	static int16_t x227 = INT16_MIN;
	static uint8_t x228 = 6U;
	volatile int32_t t56 = 5;

    t56 = (((x225>x226)>x227)|x228);

    if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -1LL;
	int64_t x232 = -1LL;
	static int64_t t57 = 19234776945619334LL;

    t57 = (((x229>x230)>x231)|x232);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MAX;
	uint32_t x234 = 62694880U;
	int64_t x235 = -1322960510519233955LL;
	int8_t x236 = INT8_MIN;

    t58 = (((x233>x234)>x235)|x236);

    if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = -1;
	int16_t x239 = -47;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t59 = UINT32_MAX;

    t59 = (((x237>x238)>x239)|x240);

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	static int16_t x242 = -1;
	static int16_t x243 = -1;
	static volatile int32_t t60 = 105;

    t60 = (((x241>x242)>x243)|x244);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MAX;
	static uint8_t x247 = 0U;
	volatile int32_t x248 = INT32_MAX;
	static int32_t t61 = INT32_MAX;

    t61 = (((x245>x246)>x247)|x248);

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 12U;
	int64_t x251 = INT64_MIN;
	int8_t x252 = INT8_MAX;
	int32_t t62 = -3941396;

    t62 = (((x249>x250)>x251)|x252);

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = 1025240644206577246LLU;
	int8_t x254 = INT8_MIN;
	static int32_t x255 = INT32_MIN;
	static int32_t t63 = 906425907;

    t63 = (((x253>x254)>x255)|x256);

    if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = -1LL;
	uint16_t x258 = UINT16_MAX;
	uint64_t x259 = 287LLU;
	int64_t x260 = 1352293284032LL;
	static volatile int64_t t64 = 248LL;

    t64 = (((x257>x258)>x259)|x260);

    if (t64 != 1352293284032LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 3048U;
	int32_t x263 = 1;
	static int32_t x264 = -1;
	int32_t t65 = -19862;

    t65 = (((x261>x262)>x263)|x264);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -2003795306892519676LL;
	static uint32_t x266 = 61137606U;
	int16_t x267 = INT16_MAX;

    t66 = (((x265>x266)>x267)|x268);

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = INT16_MIN;
	static volatile int16_t x270 = INT16_MAX;
	int32_t x271 = -39;
	int32_t x272 = INT32_MIN;
	int32_t t67 = 6870;

    t67 = (((x269>x270)>x271)|x272);

    if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x275 = 22185U;
	int32_t x276 = INT32_MIN;
	int32_t t68 = INT32_MIN;

    t68 = (((x273>x274)>x275)|x276);

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = 4645;
	uint16_t x278 = 2270U;
	int64_t x279 = 12194345LL;
	uint16_t x280 = 1U;
	int32_t t69 = -1884;

    t69 = (((x277>x278)>x279)|x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	volatile int8_t x282 = INT8_MAX;
	volatile uint16_t x283 = UINT16_MAX;
	static int64_t x284 = -1LL;
	volatile int64_t t70 = -32115LL;

    t70 = (((x281>x282)>x283)|x284);

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -1;
	volatile int32_t x288 = 0;
	int32_t t71 = 6119687;

    t71 = (((x285>x286)>x287)|x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x290 = UINT64_MAX;
	int8_t x291 = INT8_MIN;
	static volatile uint64_t x292 = UINT64_MAX;
	uint64_t t72 = UINT64_MAX;

    t72 = (((x289>x290)>x291)|x292);

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = UINT32_MAX;
	int64_t x294 = INT64_MIN;
	uint32_t x295 = 17878650U;
	volatile int8_t x296 = INT8_MAX;
	int32_t t73 = -1978;

    t73 = (((x293>x294)>x295)|x296);

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MAX;
	uint32_t x298 = UINT32_MAX;
	volatile int16_t x299 = INT16_MAX;
	static uint8_t x300 = UINT8_MAX;
	int32_t t74 = -7885;

    t74 = (((x297>x298)>x299)|x300);

    if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = -92586333;
	static volatile int32_t t75 = 13642446;

    t75 = (((x301>x302)>x303)|x304);

    if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = INT64_MAX;
	static uint8_t x306 = UINT8_MAX;
	int64_t x307 = 107868LL;
	int16_t x308 = -1;
	static int32_t t76 = 156;

    t76 = (((x305>x306)>x307)|x308);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x310 = INT32_MIN;
	int64_t x311 = -1LL;
	int32_t x312 = INT32_MIN;
	int32_t t77 = -925;

    t77 = (((x309>x310)>x311)|x312);

    if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x313 = 1;
	uint16_t x315 = 1890U;
	int32_t x316 = -6307;
	int32_t t78 = 1026;

    t78 = (((x313>x314)>x315)|x316);

    if (t78 != -6307) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MIN;
	uint16_t x319 = 1U;
	volatile int32_t t79 = -5;

    t79 = (((x317>x318)>x319)|x320);

    if (t79 != 306) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MIN;
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = INT16_MIN;
	volatile int32_t t80 = -184717005;

    t80 = (((x321>x322)>x323)|x324);

    if (t80 != -1089) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = INT16_MIN;
	int32_t x326 = INT32_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t81 = 23664606;

    t81 = (((x325>x326)>x327)|x328);

    if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x330 = 17;
	int64_t t82 = 6666557LL;

    t82 = (((x329>x330)>x331)|x332);

    if (t82 != -673LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	static uint8_t x334 = UINT8_MAX;
	volatile uint8_t x335 = 26U;
	uint8_t x336 = 3U;
	int32_t t83 = 37194;

    t83 = (((x333>x334)>x335)|x336);

    if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x337 = 4094189LL;
	int64_t x338 = INT64_MIN;
	int64_t x339 = INT64_MIN;
	volatile int32_t x340 = INT32_MIN;

    t84 = (((x337>x338)>x339)|x340);

    if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	int8_t x344 = -1;
	volatile int32_t t85 = -3495;

    t85 = (((x341>x342)>x343)|x344);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x347 = INT16_MIN;
	static volatile uint32_t x348 = UINT32_MAX;
	static volatile uint32_t t86 = UINT32_MAX;

    t86 = (((x345>x346)>x347)|x348);

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x349 = 3358487LLU;
	uint8_t x350 = 1U;
	volatile uint32_t x351 = 3U;
	int16_t x352 = INT16_MAX;
	volatile int32_t t87 = 7920324;

    t87 = (((x349>x350)>x351)|x352);

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	volatile int16_t x354 = 2676;
	int16_t x355 = 7;
	uint8_t x356 = 7U;
	int32_t t88 = -34424;

    t88 = (((x353>x354)>x355)|x356);

    if (t88 != 7) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = -1;
	static uint8_t x358 = UINT8_MAX;
	int8_t x359 = INT8_MAX;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t89 = UINT64_MAX;

    t89 = (((x357>x358)>x359)|x360);

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 656773364U;
	int16_t x362 = 1;
	static uint32_t x363 = 482U;
	int64_t x364 = -963477933LL;
	volatile int64_t t90 = 19013196760LL;

    t90 = (((x361>x362)>x363)|x364);

    if (t90 != -963477933LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -32390007LL;
	uint64_t x366 = UINT64_MAX;
	int8_t x367 = 2;
	volatile int8_t x368 = INT8_MAX;
	static int32_t t91 = 443;

    t91 = (((x365>x366)>x367)|x368);

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = INT16_MAX;
	volatile int8_t x370 = INT8_MAX;
	uint32_t x371 = 58883U;
	uint32_t x372 = 2U;
	uint32_t t92 = 286414720U;

    t92 = (((x369>x370)>x371)|x372);

    if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	volatile int16_t x375 = 441;
	volatile int32_t t93 = INT32_MIN;

    t93 = (((x373>x374)>x375)|x376);

    if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = INT64_MIN;
	int16_t x379 = -1;
	static volatile uint32_t x380 = UINT32_MAX;
	volatile uint32_t t94 = UINT32_MAX;

    t94 = (((x377>x378)>x379)|x380);

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x381 = UINT32_MAX;
	int8_t x382 = INT8_MIN;
	volatile int16_t x383 = -1;
	volatile int32_t t95 = -127626;

    t95 = (((x381>x382)>x383)|x384);

    if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MAX;
	int8_t x386 = -1;
	uint16_t x388 = 1389U;
	volatile int32_t t96 = -279270;

    t96 = (((x385>x386)>x387)|x388);

    if (t96 != 1389) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = 31;
	int8_t x390 = 0;
	int16_t x391 = -1326;
	int32_t x392 = INT32_MIN;
	int32_t t97 = 24;

    t97 = (((x389>x390)>x391)|x392);

    if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	uint8_t x394 = 85U;
	int32_t t98 = 661165;

    t98 = (((x393>x394)>x395)|x396);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x398 = INT16_MIN;
	uint16_t x400 = 1430U;
	int32_t t99 = 124;

    t99 = (((x397>x398)>x399)|x400);

    if (t99 != 1430) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x402 = -267;
	uint32_t x403 = 367253U;
	uint32_t x404 = UINT32_MAX;
	volatile uint32_t t100 = UINT32_MAX;

    t100 = (((x401>x402)>x403)|x404);

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = INT32_MAX;
	static uint32_t x407 = 3U;
	uint64_t x408 = 816683922625LLU;
	static volatile uint64_t t101 = 1LLU;

    t101 = (((x405>x406)>x407)|x408);

    if (t101 != 816683922625LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -91041889LL;
	static volatile uint8_t x412 = UINT8_MAX;
	int32_t t102 = 25;

    t102 = (((x409>x410)>x411)|x412);

    if (t102 != 255) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x413 = -138;
	int64_t x414 = -2104211138373LL;
	int32_t x415 = -1;
	volatile int64_t t103 = 41804583563875403LL;

    t103 = (((x413>x414)>x415)|x416);

    if (t103 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	int32_t x418 = 3211035;
	int16_t x419 = INT16_MIN;
	int32_t t104 = -13822102;

    t104 = (((x417>x418)>x419)|x420);

    if (t104 != -32767) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	static int16_t x422 = INT16_MIN;
	static uint16_t x423 = UINT16_MAX;
	uint64_t x424 = 3676375658339872603LLU;
	static volatile uint64_t t105 = 6LLU;

    t105 = (((x421>x422)>x423)|x424);

    if (t105 != 3676375658339872603LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x426 = INT64_MIN;
	int16_t x427 = -1;
	int8_t x428 = INT8_MAX;
	int32_t t106 = 473;

    t106 = (((x425>x426)>x427)|x428);

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 2U;
	int64_t x430 = -1LL;
	uint8_t x431 = UINT8_MAX;
	uint16_t x432 = 0U;
	volatile int32_t t107 = -50908176;

    t107 = (((x429>x430)>x431)|x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	static volatile int32_t x435 = INT32_MAX;
	uint32_t x436 = 1710970429U;
	uint32_t t108 = 30568U;

    t108 = (((x433>x434)>x435)|x436);

    if (t108 != 1710970429U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 1371U;
	uint32_t x440 = 844180U;
	uint32_t t109 = 627127U;

    t109 = (((x437>x438)>x439)|x440);

    if (t109 != 844180U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x442 = 53U;
	static uint8_t x443 = 120U;
	int32_t x444 = INT32_MAX;
	int32_t t110 = INT32_MAX;

    t110 = (((x441>x442)>x443)|x444);

    if (t110 != INT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	int64_t x448 = INT64_MAX;
	int64_t t111 = INT64_MAX;

    t111 = (((x445>x446)>x447)|x448);

    if (t111 != INT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	static volatile int16_t x450 = INT16_MIN;
	uint64_t x451 = UINT64_MAX;
	int8_t x452 = 8;
	static int32_t t112 = -12;

    t112 = (((x449>x450)>x451)|x452);

    if (t112 != 8) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = INT32_MIN;
	int64_t x455 = 15754682803668LL;
	int8_t x456 = INT8_MAX;
	volatile int32_t t113 = 9;

    t113 = (((x453>x454)>x455)|x456);

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 37586LLU;
	int32_t x458 = 0;
	int32_t x460 = 79795;
	volatile int32_t t114 = -83819;

    t114 = (((x457>x458)>x459)|x460);

    if (t114 != 79795) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x462 = 15936634LLU;
	int64_t x463 = INT64_MIN;
	int16_t x464 = INT16_MAX;
	int32_t t115 = -363077;

    t115 = (((x461>x462)>x463)|x464);

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = 1;
	uint64_t x466 = 33951633159LLU;
	int32_t t116 = 227;

    t116 = (((x465>x466)>x467)|x468);

    if (t116 != -11) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x470 = UINT8_MAX;
	static int16_t x471 = -429;
	static uint64_t x472 = 19187LLU;
	uint64_t t117 = 2LLU;

    t117 = (((x469>x470)>x471)|x472);

    if (t117 != 19187LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = -59607;
	int32_t x474 = 1018550;
	int64_t x475 = INT64_MIN;
	uint8_t x476 = 0U;
	int32_t t118 = 1803137;

    t118 = (((x473>x474)>x475)|x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	volatile uint64_t x478 = 6691LLU;
	int32_t x479 = 11;
	static volatile uint64_t x480 = 2946882741673LLU;
	uint64_t t119 = 3196LLU;

    t119 = (((x477>x478)>x479)|x480);

    if (t119 != 2946882741673LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = UINT64_MAX;
	uint32_t t120 = 846197517U;

    t120 = (((x481>x482)>x483)|x484);

    if (t120 != 1315U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 329U;
	static volatile int8_t x486 = -1;
	volatile int8_t x487 = INT8_MIN;
	uint16_t x488 = UINT16_MAX;
	int32_t t121 = -4;

    t121 = (((x485>x486)>x487)|x488);

    if (t121 != 65535) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = UINT16_MAX;
	int64_t x490 = INT64_MAX;
	int32_t x491 = INT32_MIN;
	volatile int32_t t122 = 2801477;

    t122 = (((x489>x490)>x491)|x492);

    if (t122 != -2147483647) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	uint8_t x494 = 73U;
	volatile int16_t x495 = INT16_MIN;
	int16_t x496 = 1;
	volatile int32_t t123 = 73635291;

    t123 = (((x493>x494)>x495)|x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -896779666;
	int64_t x498 = 133698243455427672LL;
	int16_t x499 = 70;
	int32_t t124 = 2;

    t124 = (((x497>x498)>x499)|x500);

    if (t124 != 11014) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x501 = UINT16_MAX;
	static int64_t x502 = -31LL;
	int8_t x503 = -1;
	volatile int32_t t125 = -849321675;

    t125 = (((x501>x502)>x503)|x504);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x507 = INT8_MIN;
	int32_t x508 = -1;
	int32_t t126 = -32521;

    t126 = (((x505>x506)>x507)|x508);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 2U;
	int16_t x510 = INT16_MIN;
	static int32_t x511 = -4153008;
	int8_t x512 = INT8_MAX;
	volatile int32_t t127 = -120920787;

    t127 = (((x509>x510)>x511)|x512);

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x513 = 6281LLU;
	int32_t x514 = INT32_MAX;
	int64_t x515 = 107LL;
	int16_t x516 = 1;
	int32_t t128 = -226188529;

    t128 = (((x513>x514)>x515)|x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x518 = -1LL;
	uint64_t x519 = 199954177159LLU;

    t129 = (((x517>x518)>x519)|x520);

    if (t129 != 255) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x521 = UINT32_MAX;

    t130 = (((x521>x522)>x523)|x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	int16_t x526 = -1;
	uint8_t x527 = 6U;
	int64_t x528 = 4941091652352LL;

    t131 = (((x525>x526)>x527)|x528);

    if (t131 != 4941091652352LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = 177074LL;
	int64_t x530 = INT64_MIN;
	static int64_t x531 = INT64_MAX;
	int32_t t132 = INT32_MIN;

    t132 = (((x529>x530)>x531)|x532);

    if (t132 != INT32_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x534 = UINT16_MAX;
	int32_t x535 = INT32_MIN;
	int64_t t133 = 514936609990471LL;

    t133 = (((x533>x534)>x535)|x536);

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	int64_t x538 = -1LL;
	uint32_t x539 = 2U;
	int16_t x540 = -1;
	static volatile int32_t t134 = 41842807;

    t134 = (((x537>x538)>x539)|x540);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = UINT16_MAX;
	uint64_t x542 = 1734367187239901278LLU;
	int32_t x544 = INT32_MIN;
	volatile int32_t t135 = INT32_MIN;

    t135 = (((x541>x542)>x543)|x544);

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = INT32_MIN;
	volatile int64_t x546 = INT64_MIN;
	volatile int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MIN;
	static int32_t t136 = -229;

    t136 = (((x545>x546)>x547)|x548);

    if (t136 != -2147483647) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x549 = 1;
	static int16_t x550 = -12976;
	static int32_t x552 = 48;
	static int32_t t137 = 2;

    t137 = (((x549>x550)>x551)|x552);

    if (t137 != 49) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -1LL;
	int16_t x555 = -1;
	volatile uint8_t x556 = UINT8_MAX;
	int32_t t138 = 1875068;

    t138 = (((x553>x554)>x555)|x556);

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -1;
	int16_t x558 = INT16_MIN;
	static int8_t x559 = -7;
	int8_t x560 = INT8_MIN;
	static int32_t t139 = 3;

    t139 = (((x557>x558)>x559)|x560);

    if (t139 != -127) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = INT8_MAX;
	uint32_t x562 = 391511243U;
	static volatile uint32_t x563 = UINT32_MAX;
	int32_t x564 = -1;
	int32_t t140 = 34571808;

    t140 = (((x561>x562)>x563)|x564);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = 5U;
	int16_t x566 = INT16_MIN;
	int8_t x568 = -29;
	volatile int32_t t141 = 234;

    t141 = (((x565>x566)>x567)|x568);

    if (t141 != -29) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	int16_t x571 = -1;
	int64_t x572 = -1LL;
	volatile int64_t t142 = -11448894966478LL;

    t142 = (((x569>x570)>x571)|x572);

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -6;
	int8_t x574 = -2;
	static int64_t x575 = -1LL;
	int16_t x576 = INT16_MIN;
	int32_t t143 = 43608;

    t143 = (((x573>x574)>x575)|x576);

    if (t143 != -32767) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = -1;
	static volatile uint64_t x578 = UINT64_MAX;
	int8_t x579 = INT8_MAX;
	int8_t x580 = INT8_MIN;
	int32_t t144 = 87987;

    t144 = (((x577>x578)>x579)|x580);

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = INT8_MIN;
	static int16_t x582 = -1;
	volatile uint8_t x583 = 25U;
	static int64_t x584 = -14706LL;

    t145 = (((x581>x582)>x583)|x584);

    if (t145 != -14706LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -103670355;
	volatile uint64_t x586 = 11721367119327590LLU;
	volatile int16_t x587 = INT16_MIN;
	volatile uint32_t x588 = 992U;
	volatile uint32_t t146 = 0U;

    t146 = (((x585>x586)>x587)|x588);

    if (t146 != 993U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -1LL;
	int16_t x590 = -157;
	uint64_t t147 = UINT64_MAX;

    t147 = (((x589>x590)>x591)|x592);

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = UINT32_MAX;
	int64_t x594 = INT64_MIN;
	static volatile int16_t x595 = -1;
	volatile int32_t t148 = INT32_MAX;

    t148 = (((x593>x594)>x595)|x596);

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = UINT16_MAX;
	static int32_t x598 = 181057018;
	uint16_t x600 = 11845U;
	volatile int32_t t149 = -172;

    t149 = (((x597>x598)>x599)|x600);

    if (t149 != 11845) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	static int64_t x602 = INT64_MIN;

    t150 = (((x601>x602)>x603)|x604);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x607 = UINT8_MAX;
	volatile int32_t x608 = -1158;
	volatile int32_t t151 = -3233330;

    t151 = (((x605>x606)>x607)|x608);

    if (t151 != -1158) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x609 = 96U;
	int8_t x610 = -1;
	uint8_t x611 = UINT8_MAX;
	int8_t x612 = -1;
	int32_t t152 = 1;

    t152 = (((x609>x610)>x611)|x612);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	uint16_t x614 = 13601U;
	int64_t x615 = -1LL;
	int16_t x616 = INT16_MAX;
	int32_t t153 = -101839;

    t153 = (((x613>x614)>x615)|x616);

    if (t153 != 32767) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = -1;
	static int32_t x618 = INT32_MIN;
	int16_t x620 = INT16_MAX;
	volatile int32_t t154 = 2800;

    t154 = (((x617>x618)>x619)|x620);

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	int64_t x622 = INT64_MAX;
	volatile int8_t x623 = -1;
	int16_t x624 = INT16_MIN;
	volatile int32_t t155 = 40;

    t155 = (((x621>x622)>x623)|x624);

    if (t155 != -32767) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 8150U;
	int64_t x626 = -1LL;
	volatile int8_t x627 = 1;
	uint16_t x628 = 3U;

    t156 = (((x625>x626)>x627)|x628);

    if (t156 != 3) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = UINT64_MAX;
	int32_t x630 = INT32_MIN;
	uint8_t x631 = 29U;
	int8_t x632 = INT8_MIN;
	int32_t t157 = -1;

    t157 = (((x629>x630)>x631)|x632);

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x633 = 543102195315975596LL;
	int16_t x634 = 0;
	int8_t x635 = 63;
	int64_t x636 = -115539486438051LL;
	volatile int64_t t158 = 3164182787551148LL;

    t158 = (((x633>x634)>x635)|x636);

    if (t158 != -115539486438051LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = INT32_MIN;
	static uint32_t x638 = 26519016U;
	int64_t x640 = INT64_MIN;
	static volatile int64_t t159 = INT64_MIN;

    t159 = (((x637>x638)>x639)|x640);

    if (t159 != INT64_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 55124477245529LLU;
	static uint32_t x642 = 1428040U;
	volatile uint8_t x643 = UINT8_MAX;
	uint8_t x644 = 17U;
	int32_t t160 = 505761478;

    t160 = (((x641>x642)>x643)|x644);

    if (t160 != 17) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 95U;
	volatile int32_t x646 = INT32_MAX;
	int16_t x647 = -1308;
	volatile int16_t x648 = INT16_MIN;
	volatile int32_t t161 = -458907;

    t161 = (((x645>x646)>x647)|x648);

    if (t161 != -32767) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	volatile int8_t x650 = 26;
	volatile int32_t x651 = INT32_MAX;
	int32_t x652 = INT32_MIN;

    t162 = (((x649>x650)>x651)|x652);

    if (t162 != INT32_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x654 = -1;
	uint16_t x655 = UINT16_MAX;
	static uint32_t x656 = UINT32_MAX;
	uint32_t t163 = UINT32_MAX;

    t163 = (((x653>x654)>x655)|x656);

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint64_t x657 = 18610435LLU;
	int8_t x658 = INT8_MIN;
	static int32_t x659 = INT32_MAX;
	static int8_t x660 = INT8_MIN;
	int32_t t164 = -27437;

    t164 = (((x657>x658)>x659)|x660);

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 14U;
	int16_t x662 = -1;
	volatile int64_t x663 = -1LL;
	uint32_t x664 = 1333677U;
	uint32_t t165 = 10702274U;

    t165 = (((x661>x662)>x663)|x664);

    if (t165 != 1333677U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x665 = 0U;
	volatile uint32_t x666 = UINT32_MAX;
	int64_t x667 = INT64_MIN;
	static volatile int32_t t166 = -205475;

    t166 = (((x665>x666)>x667)|x668);

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = INT16_MIN;
	uint32_t x671 = 5U;
	static int32_t x672 = INT32_MIN;

    t167 = (((x669>x670)>x671)|x672);

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x675 = -1;
	int64_t x676 = INT64_MIN;
	int64_t t168 = -25LL;

    t168 = (((x673>x674)>x675)|x676);

    if (t168 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x679 = UINT32_MAX;
	uint8_t x680 = 44U;

    t169 = (((x677>x678)>x679)|x680);

    if (t169 != 44) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MAX;
	uint32_t x682 = 0U;
	uint16_t x683 = 143U;
	int8_t x684 = 1;
	volatile int32_t t170 = -20566;

    t170 = (((x681>x682)>x683)|x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 1727U;
	int8_t x687 = 12;
	int16_t x688 = -1;
	volatile int32_t t171 = 38351;

    t171 = (((x685>x686)>x687)|x688);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -525055995;
	int64_t x690 = 47LL;
	int16_t x691 = INT16_MIN;
	volatile int8_t x692 = INT8_MAX;
	int32_t t172 = 7;

    t172 = (((x689>x690)>x691)|x692);

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = 78672612246LL;
	int32_t x694 = INT32_MIN;
	volatile int16_t x696 = -1;
	static int32_t t173 = -532;

    t173 = (((x693>x694)>x695)|x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x697 = 113U;
	int32_t x698 = INT32_MAX;
	static uint64_t x700 = 0LLU;
	volatile uint64_t t174 = 0LLU;

    t174 = (((x697>x698)>x699)|x700);

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint16_t x701 = 0U;
	uint64_t x702 = UINT64_MAX;
	volatile int16_t x703 = INT16_MIN;
	volatile int16_t x704 = -1;

    t175 = (((x701>x702)>x703)|x704);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MAX;
	int16_t x707 = -1;
	volatile int32_t t176 = -14920;

    t176 = (((x705>x706)>x707)|x708);

    if (t176 != -5) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x710 = -1;
	volatile int16_t x711 = INT16_MIN;
	int64_t x712 = INT64_MIN;
	static int64_t t177 = 1475545297762688LL;

    t177 = (((x709>x710)>x711)|x712);

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = INT8_MIN;
	int64_t x714 = 2LL;
	volatile int64_t x715 = -1196288628158LL;
	uint8_t x716 = 26U;
	static volatile int32_t t178 = 3;

    t178 = (((x713>x714)>x715)|x716);

    if (t178 != 27) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x718 = -52;
	static int16_t x719 = INT16_MIN;
	uint64_t x720 = UINT64_MAX;

    t179 = (((x717>x718)>x719)|x720);

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x723 = UINT16_MAX;
	static int8_t x724 = -1;
	int32_t t180 = 5535;

    t180 = (((x721>x722)>x723)|x724);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = INT8_MIN;
	int32_t x726 = -14706120;
	static int16_t x727 = -4505;
	uint8_t x728 = UINT8_MAX;
	int32_t t181 = 70701;

    t181 = (((x725>x726)>x727)|x728);

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = -1;
	uint64_t x732 = 8002672949421144LLU;
	uint64_t t182 = 126307194LLU;

    t182 = (((x729>x730)>x731)|x732);

    if (t182 != 8002672949421145LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	uint16_t x734 = 543U;
	uint16_t x735 = 6U;
	volatile int32_t t183 = 8;

    t183 = (((x733>x734)>x735)|x736);

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = 0LL;
	uint8_t x738 = UINT8_MAX;
	int32_t x739 = 17;
	int64_t x740 = -1LL;
	volatile int64_t t184 = 7631066455680321LL;

    t184 = (((x737>x738)>x739)|x740);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = 4281;
	int16_t x742 = -1;
	static int8_t x744 = INT8_MIN;
	volatile int32_t t185 = -34382;

    t185 = (((x741>x742)>x743)|x744);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x746 = 21U;
	volatile int16_t x747 = INT16_MIN;
	static uint16_t x748 = UINT16_MAX;
	static volatile int32_t t186 = -81;

    t186 = (((x745>x746)>x747)|x748);

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -1;
	int64_t x751 = INT64_MAX;
	volatile uint64_t x752 = 184053327LLU;
	uint64_t t187 = 4508990525LLU;

    t187 = (((x749>x750)>x751)|x752);

    if (t187 != 184053327LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MAX;
	static volatile int16_t x754 = 55;
	int8_t x755 = INT8_MAX;
	int32_t x756 = 498340;
	volatile int32_t t188 = 745369;

    t188 = (((x753>x754)>x755)|x756);

    if (t188 != 498340) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = -9985875LL;
	static uint16_t x758 = UINT16_MAX;
	int32_t x759 = INT32_MIN;
	static int32_t t189 = 3;

    t189 = (((x757>x758)>x759)|x760);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = 15069899LL;
	int32_t x763 = INT32_MIN;
	volatile uint64_t t190 = UINT64_MAX;

    t190 = (((x761>x762)>x763)|x764);

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = 449284;
	volatile uint8_t x766 = 91U;
	volatile uint16_t x767 = 0U;
	volatile int32_t t191 = 391;

    t191 = (((x765>x766)>x767)|x768);

    if (t191 != -367) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = INT64_MIN;
	uint64_t x770 = 2993935LLU;
	volatile uint16_t x771 = 1U;
	volatile int32_t t192 = INT32_MAX;

    t192 = (((x769>x770)>x771)|x772);

    if (t192 != INT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = -1LL;
	uint16_t x775 = UINT16_MAX;
	int32_t t193 = 1;

    t193 = (((x773>x774)>x775)|x776);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1;
	int32_t x778 = INT32_MIN;
	int8_t x779 = -1;
	static uint64_t x780 = 249248220295LLU;

    t194 = (((x777>x778)>x779)|x780);

    if (t194 != 249248220295LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x781 = -85;
	volatile int8_t x782 = INT8_MAX;
	volatile int32_t x783 = INT32_MIN;
	volatile int32_t t195 = 664;

    t195 = (((x781>x782)>x783)|x784);

    if (t195 != 27) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = 195;
	int64_t x786 = -1LL;
	int16_t x787 = -14;
	int32_t x788 = INT32_MAX;
	static int32_t t196 = INT32_MAX;

    t196 = (((x785>x786)>x787)|x788);

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x790 = INT32_MIN;
	uint16_t x791 = 8U;
	int16_t x792 = 0;
	static volatile int32_t t197 = -1;

    t197 = (((x789>x790)>x791)|x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = 8953;
	uint64_t x795 = 64228203216LLU;
	volatile int32_t x796 = INT32_MAX;

    t198 = (((x793>x794)>x795)|x796);

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x797 = 5822577706163499LLU;
	static int8_t x798 = INT8_MAX;
	static int32_t x799 = INT32_MAX;
	static uint16_t x800 = 966U;
	static volatile int32_t t199 = -1861635;

    t199 = (((x797>x798)>x799)|x800);

    if (t199 != 966) { NG(); } else { ; }
	
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

