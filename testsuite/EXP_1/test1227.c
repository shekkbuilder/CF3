
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

static uint64_t x5 = UINT64_MAX;
int32_t x10 = -1;
volatile int8_t x13 = -2;
int64_t x18 = -1LL;
volatile int8_t x22 = -1;
volatile uint8_t x28 = 3U;
static int32_t t7 = 305146204;
static int32_t x35 = INT32_MIN;
uint64_t x38 = 298046049LLU;
int32_t x40 = -77;
static int64_t x53 = -1LL;
int32_t x55 = INT32_MAX;
int64_t x59 = INT64_MIN;
volatile int32_t t15 = -6;
int32_t t17 = 494588;
int32_t t18 = 54;
static int8_t x84 = INT8_MAX;
int32_t x89 = -13813;
volatile int64_t x94 = INT64_MIN;
volatile uint64_t x96 = 4643702LLU;
int8_t x97 = INT8_MAX;
int32_t x102 = INT32_MAX;
int16_t x103 = -11;
volatile int32_t t26 = 1;
uint8_t x109 = 2U;
int16_t x110 = INT16_MIN;
static int8_t x120 = 0;
int32_t x121 = -1;
int32_t t31 = 3390549;
int32_t t32 = 0;
int8_t x133 = INT8_MAX;
volatile int32_t x136 = INT32_MIN;
uint8_t x137 = 0U;
static uint32_t x141 = UINT32_MAX;
static int32_t t37 = -147241;
volatile uint64_t x153 = 2157226612LLU;
volatile int32_t t38 = 6878;
static int64_t x158 = -1LL;
int8_t x160 = -1;
volatile int8_t x163 = INT8_MIN;
int32_t t40 = 4709485;
uint32_t x166 = UINT32_MAX;
volatile uint64_t x171 = 18609LLU;
static int8_t x181 = INT8_MAX;
int8_t x184 = INT8_MIN;
static int64_t x185 = -119LL;
volatile int32_t t47 = 48210870;
uint64_t x198 = 18566LLU;
static volatile int32_t t49 = -7012;
int16_t x202 = INT16_MIN;
static uint16_t x206 = UINT16_MAX;
uint32_t x207 = UINT32_MAX;
int32_t x212 = INT32_MIN;
int32_t t55 = 311;
static int8_t x226 = -1;
static volatile int8_t x227 = INT8_MAX;
uint32_t x230 = 470319U;
volatile int8_t x239 = -43;
int64_t x245 = -12LL;
int64_t x247 = INT64_MIN;
volatile int8_t x253 = INT8_MIN;
static volatile int64_t x259 = 239328LL;
static volatile int32_t t64 = 13169482;
uint64_t x264 = UINT64_MAX;
static uint64_t x282 = 23354501500LLU;
volatile int32_t t69 = -132796789;
int16_t x289 = INT16_MIN;
int32_t t75 = 847501753;
static volatile int32_t t76 = -2119238;
uint8_t x316 = UINT8_MAX;
volatile uint16_t x319 = 70U;
volatile int32_t x321 = 2;
uint32_t x324 = UINT32_MAX;
int32_t t79 = -700395748;
volatile int32_t t81 = -10254;
volatile int32_t t82 = 13;
uint8_t x343 = 116U;
int32_t t84 = 7423010;
static volatile uint64_t x346 = UINT64_MAX;
volatile int32_t t85 = 80532723;
uint32_t x352 = UINT32_MAX;
int32_t t86 = 453022436;
uint8_t x353 = UINT8_MAX;
int32_t x370 = INT32_MIN;
uint8_t x372 = 57U;
int64_t x373 = -1535889745552453117LL;
int32_t x375 = 39;
uint64_t x378 = 5166304LLU;
int32_t t93 = -5;
volatile int32_t t94 = -918766049;
int64_t x385 = -1281320LL;
int16_t x389 = -229;
volatile int32_t t99 = 36587636;
uint64_t x406 = UINT64_MAX;
static volatile int32_t t100 = -12;
static int8_t x411 = 60;
volatile int8_t x412 = -4;
static volatile int32_t t102 = -1840594;
static uint32_t x422 = UINT32_MAX;
uint32_t x424 = 250U;
int64_t x433 = -1LL;
int64_t x439 = 49320LL;
volatile int32_t x440 = INT32_MIN;
int32_t x441 = INT32_MAX;
int64_t x464 = INT64_MIN;
int16_t x472 = INT16_MIN;
int32_t x475 = INT32_MIN;
int32_t t117 = 2870;
int32_t x489 = -1;
uint8_t x495 = UINT8_MAX;
static int32_t x498 = -18522;
static uint32_t x500 = 2799U;
int32_t x501 = INT32_MIN;
uint64_t x507 = 1044040312289LLU;
int32_t t124 = 81849069;
uint16_t x510 = UINT16_MAX;
volatile int32_t x514 = -30;
int32_t t126 = -1530550;
uint8_t x519 = 21U;
uint8_t x521 = 0U;
volatile int32_t x523 = -7916;
volatile int32_t t128 = 25760549;
static uint64_t x536 = 107LLU;
int16_t x540 = -1;
volatile uint32_t x546 = 26U;
volatile uint32_t x554 = UINT32_MAX;
static int64_t x560 = 1LL;
int8_t x567 = 47;
uint64_t x570 = UINT64_MAX;
int8_t x573 = -23;
static volatile int64_t x574 = 35645073929320660LL;
int16_t x585 = 48;
static int32_t t143 = -2;
uint16_t x590 = UINT16_MAX;
volatile int32_t t144 = -8204629;
uint64_t x595 = 48356543968855183LLU;
volatile int8_t x596 = INT8_MAX;
static volatile int32_t t145 = -272524184;
int16_t x599 = INT16_MIN;
int8_t x600 = INT8_MAX;
int32_t x604 = -1;
uint16_t x619 = 3U;
uint64_t x626 = 19LLU;
static volatile uint8_t x627 = UINT8_MAX;
uint32_t x628 = 0U;
int64_t x629 = -217846501438LL;
volatile int32_t t154 = -1008966;
int16_t x638 = 0;
int32_t x642 = -6013286;
volatile int32_t t158 = -6697757;
static int16_t x651 = -11970;
volatile uint64_t x660 = UINT64_MAX;
int16_t x661 = 1;
static uint32_t x664 = UINT32_MAX;
volatile int16_t x668 = 0;
int32_t t163 = -108726211;
int16_t x671 = -11162;
uint32_t x679 = 19U;
int8_t x680 = INT8_MAX;
volatile int8_t x682 = INT8_MAX;
volatile uint64_t x686 = 52037893LLU;
int32_t t168 = 53717;
int32_t x691 = 28535408;
uint32_t x692 = 1406156240U;
int64_t x694 = INT64_MIN;
static volatile int32_t t172 = 3647;
int32_t t173 = 1;
int16_t x711 = INT16_MIN;
volatile int8_t x715 = -1;
int32_t t175 = 44;
int16_t x717 = INT16_MAX;
int16_t x721 = INT16_MAX;
int8_t x728 = INT8_MIN;
int8_t x731 = -1;
int32_t t182 = 58281346;
static volatile uint32_t x756 = UINT32_MAX;
int8_t x767 = INT8_MIN;
volatile int16_t x778 = -1;
int32_t x779 = INT32_MAX;
int32_t t191 = 2;
int8_t x786 = INT8_MIN;
volatile int32_t t195 = -45;
int16_t x804 = -91;
static volatile uint64_t x805 = UINT64_MAX;
static int32_t t198 = -23645;
static volatile int32_t t199 = -1643;


void f0(void) {
    	uint16_t x1 = 15U;
	int8_t x2 = -1;
	volatile int16_t x3 = -4;
	uint64_t x4 = 1242555194027LLU;
	volatile int32_t t0 = -13017;

    t0 = (((x1!=x2)/x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MAX;
	int8_t x7 = INT8_MIN;
	uint8_t x8 = 17U;
	int32_t t1 = -1696;

    t1 = (((x5!=x6)/x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 0;
	uint32_t x11 = 209431282U;
	int32_t x12 = -19004;
	volatile int32_t t2 = 402413;

    t2 = (((x9!=x10)/x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x14 = UINT8_MAX;
	int16_t x15 = 9239;
	uint64_t x16 = 3974710581413LLU;
	volatile int32_t t3 = 103500668;

    t3 = (((x13!=x14)/x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 188;

    t4 = (((x17!=x18)/x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	int64_t x23 = -1LL;
	static int64_t x24 = -1LL;
	volatile int32_t t5 = -77361;

    t5 = (((x21!=x22)/x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 85093;
	uint32_t x26 = 3U;
	uint64_t x27 = UINT64_MAX;
	volatile int32_t t6 = 90312;

    t6 = (((x25!=x26)/x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int32_t x30 = -2;
	uint8_t x31 = 1U;
	uint32_t x32 = UINT32_MAX;

    t7 = (((x29!=x30)/x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MAX;
	int64_t x34 = INT64_MIN;
	volatile int8_t x36 = INT8_MAX;
	static volatile int32_t t8 = 30;

    t8 = (((x33!=x34)/x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	static int8_t x39 = INT8_MAX;
	static volatile int32_t t9 = 4175358;

    t9 = (((x37!=x38)/x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 795294590U;
	volatile uint16_t x42 = UINT16_MAX;
	int32_t x43 = INT32_MAX;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 1195557;

    t10 = (((x41!=x42)/x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = 143;
	static int8_t x46 = INT8_MIN;
	static int8_t x47 = INT8_MIN;
	static volatile int64_t x48 = -1LL;
	static volatile int32_t t11 = -11365191;

    t11 = (((x45!=x46)/x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 3674853U;
	int16_t x50 = -1;
	volatile int16_t x51 = 4414;
	uint8_t x52 = 9U;
	volatile int32_t t12 = -13013712;

    t12 = (((x49!=x50)/x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = 1;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -4452;

    t13 = (((x53!=x54)/x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x57 = 35U;
	int64_t x58 = INT64_MIN;
	static volatile uint16_t x60 = 1U;
	volatile int32_t t14 = 57;

    t14 = (((x57!=x58)/x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	uint8_t x62 = 0U;
	int8_t x63 = INT8_MAX;
	static volatile int16_t x64 = INT16_MAX;

    t15 = (((x61!=x62)/x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 0U;
	uint16_t x66 = UINT16_MAX;
	int32_t x67 = INT32_MIN;
	static uint64_t x68 = 1678699277LLU;
	volatile int32_t t16 = -15150;

    t16 = (((x65!=x66)/x67)>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	static volatile int64_t x70 = 467355379712LL;
	int16_t x71 = INT16_MIN;
	int16_t x72 = INT16_MIN;

    t17 = (((x69!=x70)/x71)>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	int32_t x74 = -1;
	int32_t x75 = -1;
	static uint8_t x76 = 5U;

    t18 = (((x73!=x74)/x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x77 = 4U;
	uint32_t x78 = 1082663213U;
	uint8_t x79 = UINT8_MAX;
	int16_t x80 = 4009;
	int32_t t19 = -5711693;

    t19 = (((x77!=x78)/x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 10141900237266LL;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = 2;
	static volatile int32_t t20 = -6;

    t20 = (((x81!=x82)/x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	int16_t x86 = -3;
	uint8_t x87 = UINT8_MAX;
	int8_t x88 = -1;
	int32_t t21 = 0;

    t21 = (((x85!=x86)/x87)>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = INT32_MIN;
	volatile int32_t x91 = INT32_MIN;
	static uint64_t x92 = 31068716215945389LLU;
	int32_t t22 = 9755453;

    t22 = (((x89!=x90)/x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = -1;
	volatile uint64_t x95 = UINT64_MAX;
	static int32_t t23 = 1892049;

    t23 = (((x93!=x94)/x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x98 = 8;
	uint32_t x99 = UINT32_MAX;
	volatile int32_t x100 = INT32_MIN;
	volatile int32_t t24 = 29;

    t24 = (((x97!=x98)/x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -20631;

    t25 = (((x101!=x102)/x103)>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 13U;
	volatile int16_t x106 = 713;
	uint16_t x107 = 49U;
	uint16_t x108 = UINT16_MAX;

    t26 = (((x105!=x106)/x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x111 = INT32_MAX;
	int8_t x112 = -1;
	int32_t t27 = -73530;

    t27 = (((x109!=x110)/x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	static int64_t x114 = -85914758LL;
	int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = -2486;

    t28 = (((x113!=x114)/x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 37898230699376LLU;
	static int64_t x118 = INT64_MIN;
	int64_t x119 = 76113869177629449LL;
	int32_t t29 = 3;

    t29 = (((x117!=x118)/x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = -10323LL;
	int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MIN;
	static volatile int32_t t30 = 4;

    t30 = (((x121!=x122)/x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int8_t x126 = INT8_MIN;
	int64_t x127 = -1LL;
	int64_t x128 = -1LL;

    t31 = (((x125!=x126)/x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 766LLU;
	volatile int16_t x130 = INT16_MIN;
	uint64_t x131 = UINT64_MAX;
	uint32_t x132 = UINT32_MAX;

    t32 = (((x129!=x130)/x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = INT8_MIN;
	int32_t x135 = 8;
	volatile int32_t t33 = -71228976;

    t33 = (((x133!=x134)/x135)>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MAX;
	static int32_t x140 = -1;
	static volatile int32_t t34 = 106781;

    t34 = (((x137!=x138)/x139)>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x142 = UINT16_MAX;
	volatile uint16_t x143 = 9U;
	volatile int16_t x144 = -1;
	volatile int32_t t35 = -1111867;

    t35 = (((x141!=x142)/x143)>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	volatile int32_t x146 = 2;
	static int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MIN;
	int32_t t36 = 51000;

    t36 = (((x145!=x146)/x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -5549;
	int8_t x150 = 53;
	static uint32_t x151 = 430923U;
	volatile uint16_t x152 = UINT16_MAX;

    t37 = (((x149!=x150)/x151)>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x154 = -1;
	uint16_t x155 = UINT16_MAX;
	int32_t x156 = INT32_MIN;

    t38 = (((x153!=x154)/x155)>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x157 = 1U;
	static uint32_t x159 = 186407U;
	int32_t t39 = 472;

    t39 = (((x157!=x158)/x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x161 = -17;
	static int8_t x162 = INT8_MAX;
	static volatile int64_t x164 = INT64_MIN;

    t40 = (((x161!=x162)/x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 124U;
	int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t41 = 180984475;

    t41 = (((x165!=x166)/x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 27062U;
	int64_t x170 = INT64_MAX;
	static uint8_t x172 = 2U;
	static volatile int32_t t42 = -225047132;

    t42 = (((x169!=x170)/x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -1LL;
	int8_t x174 = INT8_MIN;
	int64_t x175 = -32909LL;
	int16_t x176 = 20;
	static volatile int32_t t43 = 8060;

    t43 = (((x173!=x174)/x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = -1;
	int8_t x178 = -1;
	int8_t x179 = -1;
	uint32_t x180 = 41358733U;
	int32_t t44 = 2040294;

    t44 = (((x177!=x178)/x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x182 = -6151;
	uint16_t x183 = UINT16_MAX;
	volatile int32_t t45 = 211;

    t45 = (((x181!=x182)/x183)>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MAX;
	int64_t x188 = -10384900451212491LL;
	volatile int32_t t46 = 198;

    t46 = (((x185!=x186)/x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = INT32_MAX;
	int64_t x190 = -3LL;
	int8_t x191 = 16;
	int16_t x192 = 0;

    t47 = (((x189!=x190)/x191)>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = -1;
	volatile int16_t x194 = INT16_MIN;
	static int32_t x195 = 19787;
	static uint8_t x196 = 36U;
	volatile int32_t t48 = -13;

    t48 = (((x193!=x194)/x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	volatile uint8_t x199 = 6U;
	volatile int32_t x200 = INT32_MIN;

    t49 = (((x197!=x198)/x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = -1;
	int64_t x203 = -35825327040LL;
	int32_t x204 = INT32_MAX;
	static volatile int32_t t50 = 1243715;

    t50 = (((x201!=x202)/x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	int64_t x208 = -2054455744LL;
	volatile int32_t t51 = 11043397;

    t51 = (((x205!=x206)/x207)>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = UINT64_MAX;
	static volatile uint64_t x210 = 131112484999LLU;
	static int16_t x211 = INT16_MAX;
	static volatile int32_t t52 = 4060;

    t52 = (((x209!=x210)/x211)>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = INT32_MAX;
	uint64_t x214 = 82364677LLU;
	int16_t x215 = INT16_MAX;
	int16_t x216 = -1;
	volatile int32_t t53 = -1059;

    t53 = (((x213!=x214)/x215)>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -1LL;
	int32_t x218 = INT32_MIN;
	static volatile int16_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t54 = -41642512;

    t54 = (((x217!=x218)/x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 3;
	static int32_t x222 = INT32_MIN;
	static int32_t x223 = 12192;
	int16_t x224 = INT16_MIN;

    t55 = (((x221!=x222)/x223)>x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MIN;
	int8_t x228 = -1;
	int32_t t56 = 31303;

    t56 = (((x225!=x226)/x227)>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = UINT64_MAX;
	uint64_t x231 = 2911236532LLU;
	static int8_t x232 = INT8_MIN;
	int32_t t57 = 25;

    t57 = (((x229!=x230)/x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = INT32_MIN;
	static int16_t x234 = INT16_MAX;
	static int16_t x235 = INT16_MIN;
	int64_t x236 = 81322507649LL;
	static int32_t t58 = -1051202;

    t58 = (((x233!=x234)/x235)>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	uint32_t x240 = 218257113U;
	volatile int32_t t59 = 3677976;

    t59 = (((x237!=x238)/x239)>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x241 = -1;
	int32_t x242 = -1;
	static int16_t x243 = INT16_MAX;
	int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -115192;

    t60 = (((x241!=x242)/x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = 5;
	static int32_t x248 = 307653;
	int32_t t61 = -7;

    t61 = (((x245!=x246)/x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -40;
	static uint16_t x250 = 966U;
	int8_t x251 = -50;
	static volatile uint32_t x252 = 12U;
	volatile int32_t t62 = 2193332;

    t62 = (((x249!=x250)/x251)>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x254 = 0U;
	int8_t x255 = 35;
	uint32_t x256 = 3230667U;
	int32_t t63 = -314663;

    t63 = (((x253!=x254)/x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = 57;
	static int64_t x258 = -1LL;
	uint16_t x260 = 192U;

    t64 = (((x257!=x258)/x259)>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = 377254604127LL;
	int64_t x262 = -1LL;
	static uint8_t x263 = 101U;
	int32_t t65 = 4344703;

    t65 = (((x261!=x262)/x263)>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MAX;
	static int8_t x266 = -1;
	uint8_t x267 = 25U;
	uint16_t x268 = 49U;
	volatile int32_t t66 = 12017;

    t66 = (((x265!=x266)/x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = INT32_MIN;
	uint16_t x270 = 857U;
	int8_t x271 = INT8_MAX;
	static volatile int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -21;

    t67 = (((x269!=x270)/x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x277 = 7991U;
	int32_t x278 = 18456034;
	static uint16_t x279 = UINT16_MAX;
	int8_t x280 = -1;
	volatile int32_t t68 = -2264;

    t68 = (((x277!=x278)/x279)>x280);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = -1;
	volatile uint64_t x283 = 1346374587LLU;
	volatile uint32_t x284 = 11509U;

    t69 = (((x281!=x282)/x283)>x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x285 = INT16_MIN;
	static uint32_t x286 = 491791U;
	int8_t x287 = INT8_MIN;
	int8_t x288 = 0;
	static volatile int32_t t70 = 2292;

    t70 = (((x285!=x286)/x287)>x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x290 = 1024U;
	volatile int16_t x291 = 1;
	volatile uint64_t x292 = 272525LLU;
	volatile int32_t t71 = 1626;

    t71 = (((x289!=x290)/x291)>x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x293 = -1;
	int64_t x294 = -1LL;
	static int32_t x295 = INT32_MIN;
	static int8_t x296 = -1;
	int32_t t72 = 0;

    t72 = (((x293!=x294)/x295)>x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x297 = INT64_MAX;
	int64_t x298 = 2084809788LL;
	uint64_t x299 = 1577LLU;
	uint16_t x300 = 15196U;
	static volatile int32_t t73 = 3446;

    t73 = (((x297!=x298)/x299)>x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x301 = 573U;
	uint16_t x302 = UINT16_MAX;
	uint16_t x303 = 630U;
	static volatile int16_t x304 = INT16_MIN;
	volatile int32_t t74 = 475;

    t74 = (((x301!=x302)/x303)>x304);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x305 = 3U;
	volatile uint32_t x306 = 1U;
	int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MAX;

    t75 = (((x305!=x306)/x307)>x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x309 = INT32_MIN;
	static int64_t x310 = -1LL;
	int16_t x311 = -1;
	int64_t x312 = INT64_MAX;

    t76 = (((x309!=x310)/x311)>x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x313 = 15447U;
	int8_t x314 = INT8_MIN;
	static volatile uint32_t x315 = 213379595U;
	int32_t t77 = 0;

    t77 = (((x313!=x314)/x315)>x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x317 = INT32_MIN;
	volatile int64_t x318 = -1204313LL;
	uint32_t x320 = 1817456909U;
	volatile int32_t t78 = -176766;

    t78 = (((x317!=x318)/x319)>x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x322 = 1660116U;
	uint16_t x323 = UINT16_MAX;

    t79 = (((x321!=x322)/x323)>x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x325 = -25;
	uint32_t x326 = UINT32_MAX;
	int32_t x327 = INT32_MAX;
	volatile uint16_t x328 = 5U;
	static int32_t t80 = -13;

    t80 = (((x325!=x326)/x327)>x328);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x329 = INT32_MAX;
	volatile uint16_t x330 = 8942U;
	int32_t x331 = -111;
	uint64_t x332 = 42840106LLU;

    t81 = (((x329!=x330)/x331)>x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x333 = 0;
	int32_t x334 = INT32_MAX;
	int64_t x335 = 1704510366423619LL;
	uint16_t x336 = UINT16_MAX;

    t82 = (((x333!=x334)/x335)>x336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x337 = INT32_MIN;
	int32_t x338 = INT32_MAX;
	static int32_t x339 = INT32_MAX;
	static int32_t x340 = -1;
	volatile int32_t t83 = 13125;

    t83 = (((x337!=x338)/x339)>x340);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x341 = 1;
	static int64_t x342 = -1023LL;
	volatile int16_t x344 = 504;

    t84 = (((x341!=x342)/x343)>x344);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x345 = INT32_MAX;
	uint32_t x347 = 1154666U;
	volatile int8_t x348 = INT8_MAX;

    t85 = (((x345!=x346)/x347)>x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x349 = -1;
	int16_t x350 = INT16_MIN;
	static int8_t x351 = INT8_MIN;

    t86 = (((x349!=x350)/x351)>x352);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x354 = 2;
	volatile int32_t x355 = INT32_MIN;
	uint8_t x356 = 111U;
	static int32_t t87 = 0;

    t87 = (((x353!=x354)/x355)>x356);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x357 = 0U;
	static volatile int32_t x358 = INT32_MIN;
	uint32_t x359 = 895406U;
	volatile int32_t x360 = INT32_MIN;
	volatile int32_t t88 = 240254717;

    t88 = (((x357!=x358)/x359)>x360);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x361 = 3264U;
	static int16_t x362 = -322;
	uint8_t x363 = UINT8_MAX;
	volatile int16_t x364 = 8;
	int32_t t89 = -32075;

    t89 = (((x361!=x362)/x363)>x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	static int64_t x368 = -6LL;
	volatile int32_t t90 = -64781;

    t90 = (((x365!=x366)/x367)>x368);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x369 = -1;
	int8_t x371 = -6;
	int32_t t91 = -157;

    t91 = (((x369!=x370)/x371)>x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x374 = -1;
	int64_t x376 = INT64_MAX;
	static int32_t t92 = -2949979;

    t92 = (((x373!=x374)/x375)>x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x377 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	volatile uint16_t x380 = 82U;

    t93 = (((x377!=x378)/x379)>x380);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x381 = -1;
	int64_t x382 = -105LL;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = 54U;

    t94 = (((x381!=x382)/x383)>x384);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x386 = INT16_MAX;
	uint16_t x387 = 1U;
	int16_t x388 = 0;
	static int32_t t95 = 49;

    t95 = (((x385!=x386)/x387)>x388);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x390 = -408;
	int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	int32_t t96 = -41023;

    t96 = (((x389!=x390)/x391)>x392);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x393 = 5U;
	volatile uint32_t x394 = 6476U;
	uint16_t x395 = UINT16_MAX;
	uint32_t x396 = 2591273U;
	static volatile int32_t t97 = 116788112;

    t97 = (((x393!=x394)/x395)>x396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x397 = -57;
	int8_t x398 = -34;
	volatile uint16_t x399 = 3194U;
	int16_t x400 = INT16_MIN;
	int32_t t98 = 375661;

    t98 = (((x397!=x398)/x399)>x400);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x401 = UINT32_MAX;
	int8_t x402 = INT8_MIN;
	uint32_t x403 = 55394031U;
	static uint8_t x404 = 62U;

    t99 = (((x401!=x402)/x403)>x404);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x405 = UINT16_MAX;
	int32_t x407 = INT32_MIN;
	static int64_t x408 = INT64_MIN;

    t100 = (((x405!=x406)/x407)>x408);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x409 = 2;
	int8_t x410 = INT8_MIN;
	volatile int32_t t101 = -1;

    t101 = (((x409!=x410)/x411)>x412);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x413 = INT16_MIN;
	int64_t x414 = INT64_MIN;
	uint16_t x415 = UINT16_MAX;
	int64_t x416 = INT64_MAX;

    t102 = (((x413!=x414)/x415)>x416);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x417 = 12868791688LLU;
	int16_t x418 = -381;
	static int16_t x419 = INT16_MIN;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t103 = -1;

    t103 = (((x417!=x418)/x419)>x420);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x421 = 16566428U;
	volatile int32_t x423 = 154517;
	static volatile int32_t t104 = -542069;

    t104 = (((x421!=x422)/x423)>x424);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x429 = UINT32_MAX;
	int8_t x430 = INT8_MAX;
	volatile int64_t x431 = -1LL;
	int8_t x432 = -1;
	volatile int32_t t105 = -1;

    t105 = (((x429!=x430)/x431)>x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x434 = INT8_MIN;
	int64_t x435 = -3LL;
	static int32_t x436 = -1;
	int32_t t106 = -4064;

    t106 = (((x433!=x434)/x435)>x436);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x437 = -9163224158075LL;
	volatile uint8_t x438 = 0U;
	volatile int32_t t107 = -2;

    t107 = (((x437!=x438)/x439)>x440);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x442 = INT64_MIN;
	uint32_t x443 = 255U;
	uint8_t x444 = UINT8_MAX;
	volatile int32_t t108 = 1095;

    t108 = (((x441!=x442)/x443)>x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x445 = INT8_MIN;
	int64_t x446 = 8138321618292467LL;
	int64_t x447 = INT64_MIN;
	volatile uint32_t x448 = 204235122U;
	int32_t t109 = -3;

    t109 = (((x445!=x446)/x447)>x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = INT8_MAX;
	int16_t x450 = INT16_MIN;
	static int8_t x451 = -1;
	uint8_t x452 = 79U;
	static volatile int32_t t110 = 3;

    t110 = (((x449!=x450)/x451)>x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x453 = UINT32_MAX;
	int64_t x454 = INT64_MAX;
	uint64_t x455 = UINT64_MAX;
	static int8_t x456 = INT8_MIN;
	int32_t t111 = 1178;

    t111 = (((x453!=x454)/x455)>x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x457 = 2244753178LLU;
	static uint16_t x458 = UINT16_MAX;
	volatile uint64_t x459 = UINT64_MAX;
	volatile int16_t x460 = INT16_MIN;
	volatile int32_t t112 = 646376;

    t112 = (((x457!=x458)/x459)>x460);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x461 = 13U;
	int16_t x462 = INT16_MIN;
	uint16_t x463 = 3381U;
	volatile int32_t t113 = -6715;

    t113 = (((x461!=x462)/x463)>x464);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x465 = -1;
	int8_t x466 = -1;
	int8_t x467 = INT8_MIN;
	uint16_t x468 = 2624U;
	static int32_t t114 = 153422;

    t114 = (((x465!=x466)/x467)>x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x469 = 2284204;
	int32_t x470 = -1;
	volatile int64_t x471 = INT64_MIN;
	int32_t t115 = 113129034;

    t115 = (((x469!=x470)/x471)>x472);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x473 = 3216U;
	volatile int64_t x474 = INT64_MIN;
	int64_t x476 = -45405LL;
	volatile int32_t t116 = -1468;

    t116 = (((x473!=x474)/x475)>x476);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x477 = -8;
	volatile int32_t x478 = INT32_MAX;
	uint64_t x479 = 182443203923LLU;
	volatile uint64_t x480 = 2784788999832841245LLU;

    t117 = (((x477!=x478)/x479)>x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x481 = UINT64_MAX;
	uint32_t x482 = 10960519U;
	uint8_t x483 = UINT8_MAX;
	volatile int16_t x484 = INT16_MIN;
	int32_t t118 = 44557;

    t118 = (((x481!=x482)/x483)>x484);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x485 = -1LL;
	int16_t x486 = -12556;
	int8_t x487 = -1;
	int32_t x488 = -1;
	volatile int32_t t119 = 61;

    t119 = (((x485!=x486)/x487)>x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x490 = -1;
	uint8_t x491 = 126U;
	volatile uint8_t x492 = 2U;
	int32_t t120 = 34840;

    t120 = (((x489!=x490)/x491)>x492);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x493 = INT8_MIN;
	int8_t x494 = INT8_MIN;
	volatile int16_t x496 = INT16_MIN;
	int32_t t121 = 91;

    t121 = (((x493!=x494)/x495)>x496);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x497 = INT8_MAX;
	volatile int32_t x499 = INT32_MIN;
	static int32_t t122 = 15338030;

    t122 = (((x497!=x498)/x499)>x500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x502 = -1LL;
	static int32_t x503 = -1;
	static int32_t x504 = INT32_MIN;
	static int32_t t123 = 4;

    t123 = (((x501!=x502)/x503)>x504);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x505 = INT16_MIN;
	volatile int16_t x506 = INT16_MAX;
	int32_t x508 = INT32_MIN;

    t124 = (((x505!=x506)/x507)>x508);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint32_t x509 = UINT32_MAX;
	volatile int8_t x511 = INT8_MIN;
	int16_t x512 = INT16_MIN;
	static volatile int32_t t125 = 25728390;

    t125 = (((x509!=x510)/x511)>x512);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x513 = 7U;
	int16_t x515 = 10;
	volatile int8_t x516 = -3;

    t126 = (((x513!=x514)/x515)>x516);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x517 = 2LL;
	int64_t x518 = INT64_MAX;
	int8_t x520 = INT8_MIN;
	volatile int32_t t127 = 734;

    t127 = (((x517!=x518)/x519)>x520);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x522 = 301;
	uint8_t x524 = UINT8_MAX;

    t128 = (((x521!=x522)/x523)>x524);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x525 = INT32_MIN;
	volatile int8_t x526 = -50;
	int16_t x527 = -1116;
	uint32_t x528 = 1391722085U;
	int32_t t129 = -22086130;

    t129 = (((x525!=x526)/x527)>x528);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x533 = UINT32_MAX;
	static int8_t x534 = -7;
	uint32_t x535 = 1U;
	static int32_t t130 = 21985509;

    t130 = (((x533!=x534)/x535)>x536);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x537 = 55U;
	static volatile int8_t x538 = INT8_MIN;
	int16_t x539 = 4757;
	volatile int32_t t131 = 91263089;

    t131 = (((x537!=x538)/x539)>x540);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = INT64_MIN;
	static int32_t x542 = 14;
	static int64_t x543 = -33964010313347735LL;
	volatile int64_t x544 = -32275135156885LL;
	static volatile int32_t t132 = 0;

    t132 = (((x541!=x542)/x543)>x544);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x545 = INT32_MIN;
	static volatile uint32_t x547 = UINT32_MAX;
	volatile int32_t x548 = INT32_MIN;
	static volatile int32_t t133 = 0;

    t133 = (((x545!=x546)/x547)>x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x549 = -39;
	volatile int16_t x550 = -11775;
	int64_t x551 = INT64_MIN;
	int8_t x552 = -1;
	static volatile int32_t t134 = 13755;

    t134 = (((x549!=x550)/x551)>x552);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x553 = 1154645456LLU;
	int64_t x555 = INT64_MIN;
	static int16_t x556 = INT16_MIN;
	volatile int32_t t135 = 4;

    t135 = (((x553!=x554)/x555)>x556);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x557 = INT64_MAX;
	int8_t x558 = -4;
	int32_t x559 = -1;
	int32_t t136 = -1;

    t136 = (((x557!=x558)/x559)>x560);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = 4;
	static uint64_t x562 = UINT64_MAX;
	volatile int8_t x563 = -2;
	int64_t x564 = -1LL;
	static int32_t t137 = 7927325;

    t137 = (((x561!=x562)/x563)>x564);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x565 = 253646U;
	static int16_t x566 = INT16_MAX;
	uint16_t x568 = 18U;
	static int32_t t138 = -12041;

    t138 = (((x565!=x566)/x567)>x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x569 = 5U;
	uint32_t x571 = 2214240U;
	volatile int32_t x572 = 431854883;
	int32_t t139 = 257296030;

    t139 = (((x569!=x570)/x571)>x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x575 = 16U;
	int8_t x576 = INT8_MAX;
	static int32_t t140 = -102261;

    t140 = (((x573!=x574)/x575)>x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x577 = INT8_MAX;
	static int64_t x578 = -1LL;
	volatile int64_t x579 = 606191824LL;
	uint32_t x580 = UINT32_MAX;
	int32_t t141 = 0;

    t141 = (((x577!=x578)/x579)>x580);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = INT16_MIN;
	int64_t x582 = -2LL;
	static uint32_t x583 = UINT32_MAX;
	int16_t x584 = INT16_MIN;
	static volatile int32_t t142 = 3;

    t142 = (((x581!=x582)/x583)>x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x586 = INT8_MIN;
	int8_t x587 = 3;
	int8_t x588 = INT8_MAX;

    t143 = (((x585!=x586)/x587)>x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x589 = UINT16_MAX;
	uint64_t x591 = UINT64_MAX;
	int32_t x592 = -1;

    t144 = (((x589!=x590)/x591)>x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x593 = 715999U;
	static uint64_t x594 = 1538200276LLU;

    t145 = (((x593!=x594)/x595)>x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x597 = -1LL;
	int64_t x598 = -1LL;
	int32_t t146 = 5868161;

    t146 = (((x597!=x598)/x599)>x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x601 = -7;
	int32_t x602 = -291311;
	static volatile uint32_t x603 = UINT32_MAX;
	static int32_t t147 = -991121554;

    t147 = (((x601!=x602)/x603)>x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x605 = INT64_MIN;
	int64_t x606 = -1LL;
	uint16_t x607 = 590U;
	volatile int8_t x608 = INT8_MIN;
	int32_t t148 = -98;

    t148 = (((x605!=x606)/x607)>x608);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x609 = 7551506462362054LLU;
	static int32_t x610 = -1;
	volatile uint64_t x611 = UINT64_MAX;
	int32_t x612 = INT32_MIN;
	static int32_t t149 = 323680;

    t149 = (((x609!=x610)/x611)>x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x613 = -1;
	volatile int64_t x614 = -1LL;
	int64_t x615 = -17710105983929LL;
	int16_t x616 = -42;
	int32_t t150 = -785734;

    t150 = (((x613!=x614)/x615)>x616);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x617 = INT8_MIN;
	volatile uint32_t x618 = UINT32_MAX;
	static volatile uint16_t x620 = UINT16_MAX;
	volatile int32_t t151 = 1033536357;

    t151 = (((x617!=x618)/x619)>x620);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x621 = -1LL;
	static int64_t x622 = -642241435LL;
	static int32_t x623 = INT32_MIN;
	uint8_t x624 = 15U;
	volatile int32_t t152 = 126590492;

    t152 = (((x621!=x622)/x623)>x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x625 = -1;
	int32_t t153 = 53;

    t153 = (((x625!=x626)/x627)>x628);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x630 = UINT16_MAX;
	static uint16_t x631 = UINT16_MAX;
	int8_t x632 = INT8_MIN;

    t154 = (((x629!=x630)/x631)>x632);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x633 = 90U;
	int8_t x634 = -30;
	static uint64_t x635 = 70609871835354380LLU;
	int32_t x636 = INT32_MAX;
	int32_t t155 = -35299;

    t155 = (((x633!=x634)/x635)>x636);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x637 = -1LL;
	static uint8_t x639 = 4U;
	static volatile int32_t x640 = -7995;
	int32_t t156 = 143;

    t156 = (((x637!=x638)/x639)>x640);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x641 = INT64_MIN;
	int64_t x643 = INT64_MIN;
	static uint8_t x644 = 3U;
	volatile int32_t t157 = 3212;

    t157 = (((x641!=x642)/x643)>x644);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x645 = 738;
	int32_t x646 = INT32_MAX;
	static int8_t x647 = INT8_MIN;
	static int16_t x648 = INT16_MIN;

    t158 = (((x645!=x646)/x647)>x648);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = -1;
	static volatile int32_t x650 = INT32_MIN;
	static uint64_t x652 = 2633562LLU;
	int32_t t159 = -51;

    t159 = (((x649!=x650)/x651)>x652);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x653 = 25U;
	uint64_t x654 = 40364344149534LLU;
	int64_t x655 = -1LL;
	static uint64_t x656 = 16848607509709LLU;
	volatile int32_t t160 = -1;

    t160 = (((x653!=x654)/x655)>x656);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x657 = 1;
	uint16_t x658 = 3880U;
	static int8_t x659 = -6;
	static volatile int32_t t161 = 6;

    t161 = (((x657!=x658)/x659)>x660);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x662 = 31524506084708LLU;
	static int16_t x663 = INT16_MIN;
	volatile int32_t t162 = -7;

    t162 = (((x661!=x662)/x663)>x664);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x665 = 1;
	int16_t x666 = INT16_MAX;
	uint32_t x667 = UINT32_MAX;

    t163 = (((x665!=x666)/x667)>x668);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x669 = INT8_MAX;
	uint64_t x670 = 6006705783958398LLU;
	int64_t x672 = INT64_MAX;
	static int32_t t164 = 519121678;

    t164 = (((x669!=x670)/x671)>x672);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x673 = UINT8_MAX;
	uint16_t x674 = 6946U;
	int32_t x675 = INT32_MIN;
	static volatile int16_t x676 = -52;
	volatile int32_t t165 = -4;

    t165 = (((x673!=x674)/x675)>x676);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x677 = UINT16_MAX;
	uint32_t x678 = 5U;
	int32_t t166 = 226;

    t166 = (((x677!=x678)/x679)>x680);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x681 = INT8_MAX;
	int16_t x683 = -9;
	volatile int16_t x684 = 311;
	static volatile int32_t t167 = 1;

    t167 = (((x681!=x682)/x683)>x684);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x685 = UINT32_MAX;
	int32_t x687 = INT32_MIN;
	int16_t x688 = INT16_MIN;

    t168 = (((x685!=x686)/x687)>x688);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x689 = 4LL;
	int8_t x690 = INT8_MIN;
	volatile int32_t t169 = -824;

    t169 = (((x689!=x690)/x691)>x692);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint32_t x693 = UINT32_MAX;
	volatile int32_t x695 = INT32_MIN;
	int8_t x696 = -38;
	volatile int32_t t170 = 398;

    t170 = (((x693!=x694)/x695)>x696);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = -1LL;
	int64_t x698 = INT64_MIN;
	volatile uint16_t x699 = UINT16_MAX;
	static int64_t x700 = -441LL;
	static volatile int32_t t171 = -785032834;

    t171 = (((x697!=x698)/x699)>x700);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x701 = UINT64_MAX;
	static int8_t x702 = INT8_MAX;
	static uint32_t x703 = 1974U;
	int32_t x704 = INT32_MIN;

    t172 = (((x701!=x702)/x703)>x704);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x705 = INT8_MAX;
	int16_t x706 = -1;
	volatile int32_t x707 = INT32_MIN;
	static int8_t x708 = -1;

    t173 = (((x705!=x706)/x707)>x708);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x709 = 1687LL;
	int8_t x710 = INT8_MAX;
	static int32_t x712 = INT32_MIN;
	volatile int32_t t174 = -820066187;

    t174 = (((x709!=x710)/x711)>x712);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x713 = -4380142777194LL;
	int64_t x714 = INT64_MAX;
	static int8_t x716 = -1;

    t175 = (((x713!=x714)/x715)>x716);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x718 = 356U;
	int8_t x719 = INT8_MAX;
	volatile int8_t x720 = INT8_MIN;
	volatile int32_t t176 = -448;

    t176 = (((x717!=x718)/x719)>x720);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x722 = 4693161390538764LLU;
	static volatile int16_t x723 = 3139;
	static int8_t x724 = -23;
	volatile int32_t t177 = -80;

    t177 = (((x721!=x722)/x723)>x724);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = -1;
	uint32_t x727 = UINT32_MAX;
	static int32_t t178 = 218;

    t178 = (((x725!=x726)/x727)>x728);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x729 = INT16_MIN;
	int8_t x730 = -1;
	int64_t x732 = INT64_MIN;
	int32_t t179 = 1405620;

    t179 = (((x729!=x730)/x731)>x732);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x733 = INT64_MIN;
	int16_t x734 = INT16_MIN;
	int8_t x735 = -14;
	static int32_t x736 = 2158;
	volatile int32_t t180 = -12635;

    t180 = (((x733!=x734)/x735)>x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x737 = INT16_MIN;
	uint8_t x738 = 6U;
	uint64_t x739 = UINT64_MAX;
	uint32_t x740 = 4016513U;
	int32_t t181 = -3802;

    t181 = (((x737!=x738)/x739)>x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x741 = INT8_MAX;
	uint32_t x742 = 0U;
	static int64_t x743 = -1198596083684710LL;
	static int16_t x744 = -2;

    t182 = (((x741!=x742)/x743)>x744);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x745 = 32U;
	int16_t x746 = 374;
	static uint32_t x747 = 602169780U;
	uint32_t x748 = 131565232U;
	int32_t t183 = 42;

    t183 = (((x745!=x746)/x747)>x748);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x749 = INT16_MIN;
	uint16_t x750 = 84U;
	int32_t x751 = INT32_MIN;
	volatile int8_t x752 = INT8_MIN;
	volatile int32_t t184 = -2007093;

    t184 = (((x749!=x750)/x751)>x752);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x753 = -1;
	uint16_t x754 = 1341U;
	uint32_t x755 = 2230U;
	volatile int32_t t185 = 49307157;

    t185 = (((x753!=x754)/x755)>x756);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x757 = INT16_MIN;
	uint32_t x758 = 8U;
	int8_t x759 = INT8_MAX;
	int16_t x760 = INT16_MIN;
	int32_t t186 = 39009129;

    t186 = (((x757!=x758)/x759)>x760);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x761 = -1LL;
	static uint16_t x762 = 472U;
	uint32_t x763 = 2557578U;
	int8_t x764 = -1;
	int32_t t187 = 540677807;

    t187 = (((x761!=x762)/x763)>x764);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x765 = INT32_MIN;
	volatile uint8_t x766 = UINT8_MAX;
	static uint16_t x768 = 2952U;
	static int32_t t188 = 15818173;

    t188 = (((x765!=x766)/x767)>x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x769 = INT16_MIN;
	volatile uint64_t x770 = 99478928958265006LLU;
	uint64_t x771 = 15069LLU;
	static uint8_t x772 = UINT8_MAX;
	static volatile int32_t t189 = -3841;

    t189 = (((x769!=x770)/x771)>x772);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x773 = -1LL;
	int64_t x774 = -1LL;
	int32_t x775 = -1;
	volatile uint16_t x776 = 3480U;
	volatile int32_t t190 = -165245;

    t190 = (((x773!=x774)/x775)>x776);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x777 = UINT64_MAX;
	int64_t x780 = INT64_MAX;

    t191 = (((x777!=x778)/x779)>x780);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x781 = 4307U;
	int64_t x782 = INT64_MIN;
	int32_t x783 = INT32_MIN;
	static uint64_t x784 = 8072292674LLU;
	int32_t t192 = 59;

    t192 = (((x781!=x782)/x783)>x784);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x785 = -228315309676LL;
	volatile int32_t x787 = -1;
	volatile int32_t x788 = INT32_MIN;
	volatile int32_t t193 = 209953024;

    t193 = (((x785!=x786)/x787)>x788);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x789 = 3U;
	uint8_t x790 = 38U;
	int8_t x791 = INT8_MIN;
	int8_t x792 = 26;
	volatile int32_t t194 = 12235;

    t194 = (((x789!=x790)/x791)>x792);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x793 = 15912524374LLU;
	int8_t x794 = 61;
	int64_t x795 = -804217824647442LL;
	int32_t x796 = INT32_MAX;

    t195 = (((x793!=x794)/x795)>x796);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x797 = INT8_MIN;
	volatile uint64_t x798 = 156824663LLU;
	uint8_t x799 = 7U;
	uint8_t x800 = UINT8_MAX;
	volatile int32_t t196 = 51250;

    t196 = (((x797!=x798)/x799)>x800);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x801 = -13;
	int8_t x802 = INT8_MIN;
	int8_t x803 = INT8_MIN;
	int32_t t197 = -3395827;

    t197 = (((x801!=x802)/x803)>x804);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint8_t x806 = 6U;
	int64_t x807 = -3LL;
	static int32_t x808 = -1;

    t198 = (((x805!=x806)/x807)>x808);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x809 = 1470648827LL;
	int64_t x810 = INT64_MIN;
	uint64_t x811 = UINT64_MAX;
	int64_t x812 = INT64_MIN;

    t199 = (((x809!=x810)/x811)>x812);

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

