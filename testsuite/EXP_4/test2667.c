
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

static uint32_t x1 = UINT32_MAX;
volatile uint8_t x4 = 1U;
int16_t x5 = INT16_MAX;
int16_t x8 = 23;
volatile int64_t x9 = INT64_MAX;
uint64_t x10 = 93099833537676LLU;
static int8_t x18 = -1;
int16_t x19 = -43;
volatile uint32_t x27 = 1689U;
uint32_t x29 = 10279721U;
int16_t x30 = -23;
int32_t t7 = -49;
volatile uint16_t x34 = UINT16_MAX;
uint16_t x39 = UINT16_MAX;
uint64_t x40 = 876020543496LLU;
volatile int32_t t9 = -43313607;
static volatile int16_t x41 = -1;
static volatile int32_t t10 = -15094050;
int32_t t11 = 10779191;
uint32_t x52 = 13U;
int32_t t12 = 1423;
int16_t x54 = INT16_MAX;
int32_t t16 = 2;
int32_t x70 = INT32_MIN;
int16_t x72 = -1;
int16_t x86 = INT16_MIN;
int8_t x93 = -1;
volatile uint16_t x97 = UINT16_MAX;
uint16_t x99 = 1000U;
static uint32_t x100 = 0U;
int32_t t24 = -30141;
int16_t x101 = INT16_MAX;
volatile int8_t x102 = INT8_MIN;
static uint8_t x108 = 2U;
volatile int8_t x109 = -4;
int32_t t27 = 23858237;
volatile uint8_t x113 = 13U;
int8_t x119 = 0;
volatile int8_t x125 = INT8_MIN;
uint8_t x127 = 14U;
int16_t x136 = INT16_MIN;
int32_t t34 = -61025;
volatile uint32_t x147 = UINT32_MAX;
uint32_t x149 = 1220990U;
int64_t x167 = 828784LL;
uint64_t x168 = UINT64_MAX;
uint32_t x182 = UINT32_MAX;
static int32_t x183 = INT32_MIN;
int8_t x190 = INT8_MIN;
int32_t t47 = 236031288;
volatile int32_t t48 = 8161501;
volatile uint32_t x201 = UINT32_MAX;
int8_t x203 = INT8_MAX;
static int16_t x205 = INT16_MIN;
volatile uint8_t x210 = 30U;
int32_t t52 = 331328;
static int32_t t54 = 38213575;
int8_t x221 = INT8_MAX;
int16_t x226 = INT16_MIN;
static int32_t t56 = -6697;
int64_t x231 = INT64_MAX;
int16_t x235 = -28;
int16_t x237 = -1;
int16_t x243 = INT16_MIN;
int32_t t60 = 61756;
static int64_t x251 = INT64_MIN;
volatile int32_t t63 = 2558;
static int64_t x259 = 1LL;
int16_t x263 = -1;
int8_t x269 = INT8_MAX;
volatile int16_t x271 = INT16_MIN;
uint8_t x281 = 2U;
uint8_t x288 = 1U;
uint32_t x290 = 36U;
int32_t x296 = -1;
static int16_t x309 = 7;
int32_t x318 = -8;
int8_t x320 = INT8_MIN;
volatile uint8_t x322 = UINT8_MAX;
int8_t x324 = -5;
volatile int32_t x327 = -1;
uint64_t x328 = 635149LLU;
volatile int32_t t81 = 19133931;
int32_t x331 = INT32_MAX;
uint8_t x339 = UINT8_MAX;
static int32_t t84 = -84886357;
volatile int64_t x346 = -21656274LL;
static int8_t x348 = INT8_MIN;
volatile int32_t t87 = 0;
volatile int16_t x359 = INT16_MIN;
volatile int32_t t90 = -5448055;
int16_t x370 = -1;
int16_t x374 = -1;
volatile int64_t x376 = -1LL;
int32_t x380 = -1;
uint16_t x385 = UINT16_MAX;
int64_t x387 = INT64_MAX;
volatile uint32_t x391 = UINT32_MAX;
static volatile int32_t t97 = -131;
int16_t x402 = -1;
int8_t x404 = INT8_MIN;
int32_t t100 = -38459;
int8_t x406 = INT8_MIN;
volatile int32_t t102 = 16;
int16_t x420 = 17;
int16_t x423 = -1;
volatile int32_t t106 = -1;
int16_t x432 = INT16_MIN;
static volatile int32_t x433 = INT32_MIN;
static volatile uint16_t x435 = 683U;
int16_t x436 = -1;
int16_t x437 = INT16_MAX;
static int32_t x440 = INT32_MAX;
uint8_t x443 = 12U;
volatile int32_t t111 = -479;
uint32_t x455 = UINT32_MAX;
int16_t x463 = INT16_MIN;
static int32_t t115 = -9752914;
int32_t x470 = -228;
int32_t x477 = -1518;
volatile int64_t x479 = -2376878294464LL;
volatile uint8_t x481 = 4U;
int64_t x483 = -28505645096139LL;
volatile uint8_t x490 = 0U;
int8_t x491 = -1;
volatile int32_t x492 = INT32_MIN;
int16_t x495 = INT16_MAX;
static volatile int32_t t126 = -1415;
uint64_t x509 = UINT64_MAX;
int64_t x510 = -1693103465384593170LL;
volatile int8_t x512 = 0;
uint64_t x518 = 1LLU;
int32_t t130 = -260298551;
int8_t x530 = INT8_MIN;
int32_t t133 = 91;
int32_t t134 = -1910226;
int32_t t135 = -1713835;
static volatile uint32_t x546 = 35U;
volatile int8_t x557 = INT8_MAX;
uint16_t x566 = 2U;
int32_t x576 = 14121;
uint16_t x585 = 5679U;
int8_t x590 = INT8_MIN;
int32_t x591 = -483;
int32_t x592 = INT32_MIN;
static int32_t t147 = -95145;
static int8_t x599 = -14;
int16_t x600 = -1;
static uint8_t x601 = 27U;
int16_t x615 = INT16_MIN;
int32_t x616 = INT32_MAX;
volatile uint64_t x619 = 0LLU;
uint8_t x620 = UINT8_MAX;
static int32_t t155 = -50478693;
int32_t t157 = 185943496;
static uint8_t x637 = 47U;
volatile int16_t x639 = INT16_MIN;
int8_t x641 = INT8_MIN;
int32_t x646 = INT32_MIN;
static int64_t x648 = INT64_MIN;
volatile uint8_t x649 = UINT8_MAX;
int32_t x652 = INT32_MIN;
int32_t x655 = 62985;
volatile int32_t t166 = 96443616;
volatile uint16_t x669 = 22U;
int16_t x670 = -1313;
uint32_t x671 = UINT32_MAX;
volatile int32_t t171 = 4045787;
uint16_t x689 = UINT16_MAX;
volatile int16_t x693 = 21;
static int8_t x694 = -4;
int16_t x697 = INT16_MAX;
int32_t t174 = -514357;
volatile int32_t x705 = INT32_MAX;
uint64_t x706 = 5794881616084LLU;
int16_t x707 = INT16_MIN;
int64_t x708 = INT64_MIN;
int16_t x712 = INT16_MAX;
int32_t t177 = 32594;
static int32_t t178 = 167888378;
int32_t x718 = -34024;
volatile int64_t x721 = INT64_MIN;
int16_t x723 = INT16_MIN;
int64_t x728 = INT64_MIN;
volatile int8_t x729 = INT8_MIN;
int64_t x732 = INT64_MIN;
int16_t x733 = INT16_MIN;
volatile int32_t t183 = 3364;
uint32_t x739 = 36573U;
int32_t t187 = -1;
uint8_t x754 = 15U;
static volatile int8_t x755 = INT8_MIN;
uint64_t x756 = 2084741621258623292LLU;
int16_t x762 = -1;
uint64_t x764 = UINT64_MAX;
int64_t x767 = INT64_MIN;
int32_t x770 = 50119196;
uint8_t x772 = 109U;
int32_t t192 = -2558811;
uint8_t x773 = 66U;
int32_t x775 = INT32_MIN;
int64_t x780 = INT64_MAX;
static volatile int32_t t194 = -1924;
volatile int64_t x782 = INT64_MAX;
volatile int8_t x792 = INT8_MAX;
int16_t x796 = INT16_MIN;
uint16_t x800 = 16855U;
int32_t t199 = -28;


void f0(void) {
    	int64_t x2 = -261902068221171LL;
	volatile int32_t x3 = INT32_MAX;
	int32_t t0 = 31801292;

    t0 = (x1!=(x2>(x3^x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = 443813;
	int8_t x7 = -28;
	int32_t t1 = -22;

    t1 = (x5!=(x6>(x7^x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x11 = 3;
	static int64_t x12 = -1LL;
	volatile int32_t t2 = -1012;

    t2 = (x9!=(x10>(x11^x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	static int64_t x14 = 11981065933653355LL;
	volatile int64_t x15 = INT64_MIN;
	static uint32_t x16 = 69469673U;
	int32_t t3 = -451743386;

    t3 = (x13!=(x14>(x15^x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int32_t x20 = -1;
	int32_t t4 = 26659133;

    t4 = (x17!=(x18>(x19^x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 0;
	int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	static int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -361980;

    t5 = (x21!=(x22>(x23^x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	volatile int64_t x26 = INT64_MAX;
	static int64_t x28 = -4644575LL;
	int32_t t6 = 237606150;

    t6 = (x25!=(x26>(x27^x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x31 = INT32_MIN;
	volatile int64_t x32 = -1LL;

    t7 = (x29!=(x30>(x31^x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int8_t x35 = INT8_MAX;
	uint32_t x36 = 476807033U;
	volatile int32_t t8 = 1389;

    t8 = (x33!=(x34>(x35^x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 1U;
	uint16_t x38 = 588U;

    t9 = (x37!=(x38>(x39^x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = INT32_MIN;
	int32_t x43 = INT32_MIN;
	volatile int32_t x44 = -2183447;

    t10 = (x41!=(x42>(x43^x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 22U;
	static volatile uint16_t x46 = 0U;
	int64_t x47 = INT64_MIN;
	int64_t x48 = INT64_MIN;

    t11 = (x45!=(x46>(x47^x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = 38;
	int16_t x50 = -258;
	int32_t x51 = INT32_MAX;

    t12 = (x49!=(x50>(x51^x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = 30;
	uint32_t x55 = 1270889361U;
	uint32_t x56 = 13055130U;
	int32_t t13 = -125882483;

    t13 = (x53!=(x54>(x55^x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int16_t x58 = INT16_MIN;
	static volatile int32_t x59 = INT32_MAX;
	static uint64_t x60 = 110400625939332LLU;
	int32_t t14 = -4;

    t14 = (x57!=(x58>(x59^x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 0;
	uint64_t x62 = UINT64_MAX;
	static int64_t x63 = 4263059927LL;
	uint32_t x64 = 16U;
	int32_t t15 = -16156;

    t15 = (x61!=(x62>(x63^x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 0;
	int8_t x66 = INT8_MIN;
	int64_t x67 = INT64_MIN;
	int8_t x68 = -1;

    t16 = (x65!=(x66>(x67^x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int8_t x71 = INT8_MAX;
	int32_t t17 = -1059514123;

    t17 = (x69!=(x70>(x71^x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = INT16_MIN;
	int8_t x74 = INT8_MAX;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t18 = 1;

    t18 = (x73!=(x74>(x75^x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = 7048313LL;
	int16_t x78 = INT16_MAX;
	int16_t x79 = -1;
	static int64_t x80 = -203274751423LL;
	volatile int32_t t19 = -1;

    t19 = (x77!=(x78>(x79^x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	uint16_t x82 = 217U;
	int16_t x83 = -1;
	static int16_t x84 = -1;
	volatile int32_t t20 = 8;

    t20 = (x81!=(x82>(x83^x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MAX;
	uint8_t x87 = 1U;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -15973511;

    t21 = (x85!=(x86>(x87^x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	static volatile int64_t x90 = -109664LL;
	uint8_t x91 = 29U;
	volatile uint32_t x92 = UINT32_MAX;
	int32_t t22 = 1;

    t22 = (x89!=(x90>(x91^x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = -1;
	static volatile uint16_t x95 = UINT16_MAX;
	int16_t x96 = -8123;
	volatile int32_t t23 = -1;

    t23 = (x93!=(x94>(x95^x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = -1LL;

    t24 = (x97!=(x98>(x99^x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x103 = UINT32_MAX;
	static uint64_t x104 = 19331358812LLU;
	static volatile int32_t t25 = 3;

    t25 = (x101!=(x102>(x103^x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = INT32_MAX;
	static volatile uint64_t x106 = 157090125030755LLU;
	uint64_t x107 = 696411LLU;
	int32_t t26 = -249884;

    t26 = (x105!=(x106>(x107^x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = INT32_MIN;
	int8_t x111 = 29;
	volatile uint8_t x112 = UINT8_MAX;

    t27 = (x109!=(x110>(x111^x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x114 = UINT8_MAX;
	int8_t x115 = INT8_MAX;
	int8_t x116 = -30;
	int32_t t28 = 1972;

    t28 = (x113!=(x114>(x115^x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -1LL;
	int16_t x118 = 12;
	static int16_t x120 = INT16_MIN;
	int32_t t29 = 36217791;

    t29 = (x117!=(x118>(x119^x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint16_t x121 = UINT16_MAX;
	int8_t x122 = INT8_MIN;
	volatile uint8_t x123 = 2U;
	int64_t x124 = INT64_MAX;
	volatile int32_t t30 = 7973776;

    t30 = (x121!=(x122>(x123^x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = INT8_MIN;
	uint16_t x128 = 10143U;
	int32_t t31 = 2994;

    t31 = (x125!=(x126>(x127^x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1LL;
	int8_t x130 = -1;
	int32_t x131 = INT32_MIN;
	static volatile int16_t x132 = -1;
	int32_t t32 = -34962276;

    t32 = (x129!=(x130>(x131^x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	uint16_t x134 = 363U;
	volatile int8_t x135 = -7;
	volatile int32_t t33 = 3635;

    t33 = (x133!=(x134>(x135^x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 27669U;
	int16_t x138 = INT16_MIN;
	static uint8_t x139 = 64U;
	int16_t x140 = -1;

    t34 = (x137!=(x138>(x139^x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -27;
	uint32_t x142 = 45821152U;
	int8_t x143 = INT8_MAX;
	volatile uint32_t x144 = 5U;
	int32_t t35 = 455994;

    t35 = (x141!=(x142>(x143^x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = -1;
	volatile int8_t x146 = INT8_MIN;
	volatile uint32_t x148 = 189449U;
	volatile int32_t t36 = 475821;

    t36 = (x145!=(x146>(x147^x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x150 = 27;
	uint16_t x151 = 10125U;
	static int64_t x152 = INT64_MIN;
	volatile int32_t t37 = -244;

    t37 = (x149!=(x150>(x151^x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 86U;
	int8_t x154 = INT8_MIN;
	int64_t x155 = 3234413LL;
	int8_t x156 = INT8_MAX;
	int32_t t38 = 2318559;

    t38 = (x153!=(x154>(x155^x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 12935;
	uint8_t x158 = 4U;
	volatile uint16_t x159 = 17551U;
	volatile int8_t x160 = -1;
	int32_t t39 = -16347;

    t39 = (x157!=(x158>(x159^x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MIN;
	static int16_t x162 = -1276;
	int32_t x163 = -1;
	int16_t x164 = -1;
	volatile int32_t t40 = -314;

    t40 = (x161!=(x162>(x163^x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int16_t x166 = -1;
	int32_t t41 = -1062956761;

    t41 = (x165!=(x166>(x167^x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x169 = INT8_MAX;
	static int16_t x170 = -1;
	int8_t x171 = 58;
	int8_t x172 = INT8_MAX;
	int32_t t42 = -593739;

    t42 = (x169!=(x170>(x171^x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = -1LL;
	int32_t x174 = 74;
	uint8_t x175 = 21U;
	volatile int64_t x176 = INT64_MIN;
	int32_t t43 = 572;

    t43 = (x173!=(x174>(x175^x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = UINT8_MAX;
	volatile int16_t x178 = 4;
	int64_t x179 = -1LL;
	volatile int16_t x180 = INT16_MAX;
	static volatile int32_t t44 = 0;

    t44 = (x177!=(x178>(x179^x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	int8_t x184 = INT8_MIN;
	static int32_t t45 = -319;

    t45 = (x181!=(x182>(x183^x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	volatile int32_t x186 = INT32_MIN;
	volatile uint8_t x187 = 0U;
	uint8_t x188 = 3U;
	int32_t t46 = 58695;

    t46 = (x185!=(x186>(x187^x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = -44526197307LL;

    t47 = (x189!=(x190>(x191^x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 61205U;
	int64_t x194 = INT64_MAX;
	volatile uint64_t x195 = 588LLU;
	volatile int64_t x196 = -25LL;

    t48 = (x193!=(x194>(x195^x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MAX;
	int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MAX;
	int32_t t49 = -402;

    t49 = (x197!=(x198>(x199^x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x202 = 447LLU;
	int64_t x204 = -215700629956754910LL;
	int32_t t50 = 9552240;

    t50 = (x201!=(x202>(x203^x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x206 = -1LL;
	int8_t x207 = INT8_MIN;
	volatile int8_t x208 = INT8_MIN;
	volatile int32_t t51 = 393692718;

    t51 = (x205!=(x206>(x207^x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = UINT16_MAX;
	uint64_t x211 = 27796521LLU;
	int8_t x212 = INT8_MIN;

    t52 = (x209!=(x210>(x211^x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x213 = 28U;
	int64_t x214 = -1LL;
	static int8_t x215 = 2;
	static uint16_t x216 = 12331U;
	int32_t t53 = 33;

    t53 = (x213!=(x214>(x215^x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -3;
	uint32_t x218 = 11U;
	static volatile int64_t x219 = 1610199832186795LL;
	uint8_t x220 = 85U;

    t54 = (x217!=(x218>(x219^x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x222 = -1;
	int32_t x223 = INT32_MAX;
	uint32_t x224 = UINT32_MAX;
	int32_t t55 = 6410;

    t55 = (x221!=(x222>(x223^x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 11752U;
	volatile int64_t x227 = -46961197LL;
	int32_t x228 = INT32_MIN;

    t56 = (x225!=(x226>(x227^x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = UINT8_MAX;
	static int32_t x230 = INT32_MIN;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 10;

    t57 = (x229!=(x230>(x231^x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 0LL;
	static int32_t x234 = 56109;
	static int32_t x236 = -1;
	static int32_t t58 = -1;

    t58 = (x233!=(x234>(x235^x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x238 = 3U;
	int64_t x239 = INT64_MAX;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -2;

    t59 = (x237!=(x238>(x239^x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	int32_t x242 = -158360823;
	int16_t x244 = 1;

    t60 = (x241!=(x242>(x243^x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint8_t x245 = UINT8_MAX;
	uint8_t x246 = UINT8_MAX;
	uint64_t x247 = 6633LLU;
	uint16_t x248 = 464U;
	volatile int32_t t61 = 123;

    t61 = (x245!=(x246>(x247^x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int8_t x250 = -1;
	static int16_t x252 = INT16_MIN;
	int32_t t62 = -613;

    t62 = (x249!=(x250>(x251^x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	int64_t x254 = -15165LL;
	static volatile uint8_t x255 = 15U;
	int32_t x256 = 0;

    t63 = (x253!=(x254>(x255^x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x257 = UINT8_MAX;
	int64_t x258 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t64 = 294;

    t64 = (x257!=(x258>(x259^x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	uint8_t x262 = 10U;
	int64_t x264 = INT64_MIN;
	int32_t t65 = -154882138;

    t65 = (x261!=(x262>(x263^x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 45U;
	int32_t x266 = 0;
	int64_t x267 = -1LL;
	int8_t x268 = INT8_MAX;
	int32_t t66 = 261;

    t66 = (x265!=(x266>(x267^x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = -1;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 1;

    t67 = (x269!=(x270>(x271^x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 7624897LLU;
	uint64_t x274 = 1LLU;
	volatile int32_t x275 = INT32_MIN;
	uint64_t x276 = 103864068940968LLU;
	int32_t t68 = -55;

    t68 = (x273!=(x274>(x275^x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = -2;
	int8_t x279 = INT8_MAX;
	static int16_t x280 = -32;
	int32_t t69 = -83925845;

    t69 = (x277!=(x278>(x279^x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x282 = -74;
	static int16_t x283 = 45;
	int64_t x284 = -1LL;
	volatile int32_t t70 = 53275;

    t70 = (x281!=(x282>(x283^x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	uint64_t x286 = 5192330817403LLU;
	static int32_t x287 = INT32_MIN;
	int32_t t71 = -2086532;

    t71 = (x285!=(x286>(x287^x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 5008U;
	int16_t x291 = INT16_MIN;
	int64_t x292 = 504895455LL;
	volatile int32_t t72 = 36250;

    t72 = (x289!=(x290>(x291^x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x293 = INT32_MIN;
	static int64_t x294 = -1LL;
	volatile int16_t x295 = 19;
	volatile int32_t t73 = 1;

    t73 = (x293!=(x294>(x295^x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x297 = 223713U;
	int64_t x298 = -75450LL;
	static volatile uint8_t x299 = UINT8_MAX;
	int64_t x300 = INT64_MAX;
	int32_t t74 = 3955;

    t74 = (x297!=(x298>(x299^x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 20U;
	int8_t x302 = 5;
	int32_t x303 = INT32_MAX;
	uint16_t x304 = UINT16_MAX;
	int32_t t75 = 2202;

    t75 = (x301!=(x302>(x303^x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 23U;
	int8_t x306 = INT8_MIN;
	int16_t x307 = 1;
	volatile uint16_t x308 = 2390U;
	int32_t t76 = -37;

    t76 = (x305!=(x306>(x307^x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x310 = -230845434;
	int16_t x311 = -2;
	volatile uint32_t x312 = 10883U;
	volatile int32_t t77 = -673;

    t77 = (x309!=(x310>(x311^x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x313 = 7U;
	volatile int32_t x314 = INT32_MIN;
	uint64_t x315 = 958391563857739575LLU;
	int8_t x316 = -1;
	volatile int32_t t78 = -191245098;

    t78 = (x313!=(x314>(x315^x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = -391927545543497LL;
	int32_t x319 = 8;
	volatile int32_t t79 = -321005;

    t79 = (x317!=(x318>(x319^x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 395782U;
	static int64_t x323 = INT64_MAX;
	int32_t t80 = -4837;

    t80 = (x321!=(x322>(x323^x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	int64_t x326 = INT64_MIN;

    t81 = (x325!=(x326>(x327^x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	static volatile uint8_t x330 = 123U;
	uint64_t x332 = UINT64_MAX;
	int32_t t82 = -849136;

    t82 = (x329!=(x330>(x331^x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	uint8_t x335 = 2U;
	uint8_t x336 = 50U;
	volatile int32_t t83 = 1;

    t83 = (x333!=(x334>(x335^x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	int8_t x338 = INT8_MAX;
	static uint32_t x340 = 54417U;

    t84 = (x337!=(x338>(x339^x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x341 = 8;
	uint64_t x342 = 0LLU;
	int8_t x343 = -12;
	static int16_t x344 = INT16_MIN;
	int32_t t85 = 176;

    t85 = (x341!=(x342>(x343^x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 8U;
	int32_t x347 = -1;
	volatile int32_t t86 = -1;

    t86 = (x345!=(x346>(x347^x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = INT32_MIN;
	volatile int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MIN;
	static int8_t x352 = INT8_MIN;

    t87 = (x349!=(x350>(x351^x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = 0;
	int16_t x354 = 1;
	int8_t x355 = INT8_MIN;
	volatile int32_t x356 = -1;
	int32_t t88 = 194;

    t88 = (x353!=(x354>(x355^x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -3457;
	uint8_t x358 = UINT8_MAX;
	uint32_t x360 = UINT32_MAX;
	static int32_t t89 = -436887794;

    t89 = (x357!=(x358>(x359^x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MAX;
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MAX;

    t90 = (x361!=(x362>(x363^x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = -1;
	int32_t x366 = 790;
	uint16_t x367 = 5536U;
	volatile uint32_t x368 = 23U;
	volatile int32_t t91 = -428;

    t91 = (x365!=(x366>(x367^x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 37394500U;
	int64_t x371 = INT64_MIN;
	int64_t x372 = 14853687002828LL;
	int32_t t92 = 77330669;

    t92 = (x369!=(x370>(x371^x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = UINT64_MAX;
	int32_t x375 = -1;
	int32_t t93 = -10543579;

    t93 = (x373!=(x374>(x375^x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	uint64_t x378 = 5560186721774351377LLU;
	uint32_t x379 = 1U;
	int32_t t94 = 17;

    t94 = (x377!=(x378>(x379^x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = 4;
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = -1;
	uint64_t x384 = 132797508851LLU;
	volatile int32_t t95 = -107426930;

    t95 = (x381!=(x382>(x383^x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = INT64_MAX;
	volatile uint16_t x388 = UINT16_MAX;
	int32_t t96 = 65361;

    t96 = (x385!=(x386>(x387^x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	static uint8_t x390 = UINT8_MAX;
	static volatile int8_t x392 = INT8_MAX;

    t97 = (x389!=(x390>(x391^x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = UINT16_MAX;
	int32_t x394 = INT32_MIN;
	static uint32_t x395 = UINT32_MAX;
	volatile uint64_t x396 = 2017LLU;
	volatile int32_t t98 = 298654416;

    t98 = (x393!=(x394>(x395^x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x397 = 49U;
	int32_t x398 = -197584;
	uint8_t x399 = UINT8_MAX;
	int64_t x400 = 2252522633711LL;
	static volatile int32_t t99 = -1;

    t99 = (x397!=(x398>(x399^x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 1635U;
	uint8_t x403 = UINT8_MAX;

    t100 = (x401!=(x402>(x403^x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -1LL;
	int64_t x407 = 116607LL;
	int8_t x408 = INT8_MAX;
	int32_t t101 = 21;

    t101 = (x405!=(x406>(x407^x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int64_t x410 = -434317264131LL;
	int32_t x411 = INT32_MIN;
	int8_t x412 = -1;

    t102 = (x409!=(x410>(x411^x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -1LL;
	volatile uint64_t x414 = 238552525LLU;
	volatile int16_t x415 = -51;
	static uint64_t x416 = 56467002377LLU;
	volatile int32_t t103 = 21163;

    t103 = (x413!=(x414>(x415^x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = -1;
	int64_t x418 = -2102LL;
	static volatile int64_t x419 = INT64_MIN;
	volatile int32_t t104 = 45779;

    t104 = (x417!=(x418>(x419^x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	static uint16_t x422 = 1439U;
	uint8_t x424 = 10U;
	static volatile int32_t t105 = 223557;

    t105 = (x421!=(x422>(x423^x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 612454U;
	volatile int16_t x426 = -1;
	int32_t x427 = -1;
	int8_t x428 = INT8_MIN;

    t106 = (x425!=(x426>(x427^x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x429 = 298LLU;
	uint64_t x430 = 1733LLU;
	int8_t x431 = INT8_MAX;
	volatile int32_t t107 = 393513461;

    t107 = (x429!=(x430>(x431^x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = INT32_MAX;
	volatile int32_t t108 = 999;

    t108 = (x433!=(x434>(x435^x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x438 = 98U;
	volatile int16_t x439 = INT16_MIN;
	static volatile int32_t t109 = -1506;

    t109 = (x437!=(x438>(x439^x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = INT64_MIN;
	static uint16_t x442 = 5U;
	static uint8_t x444 = 1U;
	volatile int32_t t110 = -898976;

    t110 = (x441!=(x442>(x443^x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 127U;
	int32_t x446 = INT32_MIN;
	uint16_t x447 = 89U;
	volatile int8_t x448 = INT8_MIN;

    t111 = (x445!=(x446>(x447^x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 7U;
	static uint64_t x450 = UINT64_MAX;
	static uint8_t x451 = 4U;
	int32_t x452 = -358228395;
	int32_t t112 = -3;

    t112 = (x449!=(x450>(x451^x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	volatile int64_t x454 = 0LL;
	static int32_t x456 = INT32_MIN;
	static int32_t t113 = -284;

    t113 = (x453!=(x454>(x455^x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 4504507001762101106LLU;
	volatile int16_t x458 = 2146;
	static int64_t x459 = -1LL;
	uint8_t x460 = 44U;
	static volatile int32_t t114 = -242943;

    t114 = (x457!=(x458>(x459^x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint8_t x461 = 14U;
	uint16_t x462 = UINT16_MAX;
	volatile uint32_t x464 = 25U;

    t115 = (x461!=(x462>(x463^x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -56;
	int8_t x466 = 0;
	volatile int64_t x467 = -1LL;
	uint64_t x468 = 23LLU;
	volatile int32_t t116 = 10;

    t116 = (x465!=(x466>(x467^x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = UINT32_MAX;
	uint64_t x471 = UINT64_MAX;
	volatile uint64_t x472 = 4058665845744996LLU;
	static volatile int32_t t117 = -4000;

    t117 = (x469!=(x470>(x471^x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x473 = INT16_MAX;
	int64_t x474 = INT64_MIN;
	int64_t x475 = -12978375297929LL;
	uint16_t x476 = UINT16_MAX;
	int32_t t118 = -252;

    t118 = (x473!=(x474>(x475^x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x478 = -1486;
	volatile int8_t x480 = -1;
	volatile int32_t t119 = -5148004;

    t119 = (x477!=(x478>(x479^x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x482 = 1093877U;
	int16_t x484 = 0;
	int32_t t120 = -1;

    t120 = (x481!=(x482>(x483^x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	int16_t x486 = INT16_MIN;
	volatile uint8_t x487 = UINT8_MAX;
	static int16_t x488 = 14862;
	static int32_t t121 = -7551;

    t121 = (x485!=(x486>(x487^x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x489 = -1;
	static volatile int32_t t122 = 92912254;

    t122 = (x489!=(x490>(x491^x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = INT16_MIN;
	int32_t x494 = INT32_MIN;
	volatile int64_t x496 = -97LL;
	static volatile int32_t t123 = -707;

    t123 = (x493!=(x494>(x495^x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 15232558LLU;
	int32_t x498 = 30;
	volatile int64_t x499 = INT64_MAX;
	static int16_t x500 = INT16_MIN;
	int32_t t124 = 4514202;

    t124 = (x497!=(x498>(x499^x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	uint16_t x502 = UINT16_MAX;
	uint16_t x503 = 6610U;
	int64_t x504 = INT64_MIN;
	int32_t t125 = 19012;

    t125 = (x501!=(x502>(x503^x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = INT16_MIN;
	int16_t x506 = INT16_MIN;
	uint64_t x507 = 939708LLU;
	static int16_t x508 = -1;

    t126 = (x505!=(x506>(x507^x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x511 = 136467628847LL;
	static int32_t t127 = 129731;

    t127 = (x509!=(x510>(x511^x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	int32_t x514 = INT32_MAX;
	uint64_t x515 = UINT64_MAX;
	int32_t x516 = -1;
	volatile int32_t t128 = -1;

    t128 = (x513!=(x514>(x515^x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 1088U;
	static int8_t x519 = INT8_MAX;
	int32_t x520 = -1;
	volatile int32_t t129 = 1873;

    t129 = (x517!=(x518>(x519^x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = 8328035;
	volatile uint8_t x522 = 3U;
	int16_t x523 = INT16_MIN;
	int64_t x524 = 46358162LL;

    t130 = (x521!=(x522>(x523^x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x525 = INT32_MIN;
	int64_t x526 = -10135334LL;
	int32_t x527 = INT32_MAX;
	int64_t x528 = INT64_MAX;
	volatile int32_t t131 = -318;

    t131 = (x525!=(x526>(x527^x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x529 = INT32_MIN;
	int16_t x531 = 1;
	int8_t x532 = INT8_MIN;
	volatile int32_t t132 = 0;

    t132 = (x529!=(x530>(x531^x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x533 = 2U;
	volatile int64_t x534 = 48721399598LL;
	int16_t x535 = INT16_MIN;
	static volatile int16_t x536 = INT16_MAX;

    t133 = (x533!=(x534>(x535^x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	int8_t x538 = INT8_MIN;
	static int16_t x539 = 92;
	static uint32_t x540 = UINT32_MAX;

    t134 = (x537!=(x538>(x539^x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 5371;
	volatile int16_t x542 = -1;
	volatile int64_t x543 = -1LL;
	int32_t x544 = INT32_MIN;

    t135 = (x541!=(x542>(x543^x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	static volatile uint32_t x547 = 0U;
	int16_t x548 = 30;
	volatile int32_t t136 = 66173;

    t136 = (x545!=(x546>(x547^x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 3U;
	int32_t x550 = INT32_MIN;
	int32_t x551 = INT32_MIN;
	int16_t x552 = INT16_MIN;
	static volatile int32_t t137 = 57;

    t137 = (x549!=(x550>(x551^x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x553 = 7U;
	static volatile int32_t x554 = -1;
	uint8_t x555 = 10U;
	int16_t x556 = INT16_MIN;
	volatile int32_t t138 = -1;

    t138 = (x553!=(x554>(x555^x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x558 = 26LLU;
	int64_t x559 = INT64_MAX;
	int16_t x560 = 1064;
	static int32_t t139 = 33630;

    t139 = (x557!=(x558>(x559^x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MAX;
	uint32_t x562 = UINT32_MAX;
	int64_t x563 = -1LL;
	uint64_t x564 = 7LLU;
	static int32_t t140 = 67;

    t140 = (x561!=(x562>(x563^x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -1;
	int16_t x567 = INT16_MAX;
	volatile int16_t x568 = 4;
	volatile int32_t t141 = -8274;

    t141 = (x565!=(x566>(x567^x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = -3154;
	uint16_t x570 = UINT16_MAX;
	int16_t x571 = -1;
	uint8_t x572 = 61U;
	volatile int32_t t142 = 22873013;

    t142 = (x569!=(x570>(x571^x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x573 = UINT32_MAX;
	volatile uint16_t x574 = 33U;
	int16_t x575 = 4768;
	int32_t t143 = -12201;

    t143 = (x573!=(x574>(x575^x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = 8LL;
	int32_t x578 = INT32_MIN;
	int64_t x579 = INT64_MAX;
	static volatile uint16_t x580 = 118U;
	volatile int32_t t144 = -297;

    t144 = (x577!=(x578>(x579^x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MIN;
	int8_t x582 = INT8_MAX;
	int32_t x583 = 1;
	int32_t x584 = INT32_MAX;
	int32_t t145 = 895;

    t145 = (x581!=(x582>(x583^x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x586 = INT16_MIN;
	static int8_t x587 = 0;
	static int64_t x588 = INT64_MAX;
	volatile int32_t t146 = -2;

    t146 = (x585!=(x586>(x587^x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 258U;

    t147 = (x589!=(x590>(x591^x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x593 = 188390682111285827LLU;
	volatile int32_t x594 = INT32_MIN;
	int16_t x595 = INT16_MIN;
	volatile int32_t x596 = INT32_MIN;
	volatile int32_t t148 = 7839;

    t148 = (x593!=(x594>(x595^x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	int16_t x598 = INT16_MAX;
	volatile int32_t t149 = 126918720;

    t149 = (x597!=(x598>(x599^x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = 7;
	static uint16_t x603 = 7U;
	uint8_t x604 = 0U;
	int32_t t150 = 454313150;

    t150 = (x601!=(x602>(x603^x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = UINT64_MAX;
	int64_t x606 = -59449729018079LL;
	static volatile int64_t x607 = -3465870144221429LL;
	static uint32_t x608 = 86181315U;
	volatile int32_t t151 = -734;

    t151 = (x605!=(x606>(x607^x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = 259464324407LLU;
	int16_t x610 = 15;
	int8_t x611 = INT8_MAX;
	int8_t x612 = -1;
	volatile int32_t t152 = 3;

    t152 = (x609!=(x610>(x611^x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = 23;
	int64_t x614 = INT64_MAX;
	int32_t t153 = -55;

    t153 = (x613!=(x614>(x615^x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x617 = -1LL;
	int64_t x618 = INT64_MAX;
	int32_t t154 = -16;

    t154 = (x617!=(x618>(x619^x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	int32_t x622 = -3;
	int32_t x623 = -1;
	volatile int8_t x624 = INT8_MIN;

    t155 = (x621!=(x622>(x623^x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x625 = 7U;
	int64_t x626 = INT64_MIN;
	static int8_t x627 = 1;
	volatile int32_t x628 = -82;
	volatile int32_t t156 = 16648;

    t156 = (x625!=(x626>(x627^x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 4U;
	uint64_t x630 = 80505880289751790LLU;
	uint64_t x631 = UINT64_MAX;
	static uint8_t x632 = 1U;

    t157 = (x629!=(x630>(x631^x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 14U;
	volatile int64_t x634 = INT64_MIN;
	int8_t x635 = INT8_MAX;
	int64_t x636 = 0LL;
	static int32_t t158 = 16099;

    t158 = (x633!=(x634>(x635^x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x638 = 1525;
	int64_t x640 = INT64_MIN;
	volatile int32_t t159 = -14274737;

    t159 = (x637!=(x638>(x639^x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x642 = INT8_MAX;
	uint8_t x643 = 1U;
	int8_t x644 = -6;
	int32_t t160 = 448918;

    t160 = (x641!=(x642>(x643^x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x645 = 237991LLU;
	int32_t x647 = -133843275;
	volatile int32_t t161 = -2391548;

    t161 = (x645!=(x646>(x647^x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int64_t x650 = INT64_MIN;
	static int8_t x651 = INT8_MIN;
	volatile int32_t t162 = -3;

    t162 = (x649!=(x650>(x651^x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	int64_t x654 = -236LL;
	int8_t x656 = INT8_MIN;
	int32_t t163 = -54335;

    t163 = (x653!=(x654>(x655^x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 2U;
	int16_t x658 = INT16_MAX;
	uint32_t x659 = 195800926U;
	volatile int8_t x660 = -27;
	volatile int32_t t164 = 24853911;

    t164 = (x657!=(x658>(x659^x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	int8_t x662 = -1;
	uint64_t x663 = 13265LLU;
	static int16_t x664 = INT16_MAX;
	volatile int32_t t165 = -58874409;

    t165 = (x661!=(x662>(x663^x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	int32_t x666 = INT32_MIN;
	int16_t x667 = -6232;
	static int8_t x668 = -1;

    t166 = (x665!=(x666>(x667^x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x672 = 2;
	static volatile int32_t t167 = 6;

    t167 = (x669!=(x670>(x671^x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint8_t x673 = UINT8_MAX;
	static uint8_t x674 = UINT8_MAX;
	static uint32_t x675 = 214U;
	static uint8_t x676 = UINT8_MAX;
	int32_t t168 = 110947;

    t168 = (x673!=(x674>(x675^x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 13U;
	static int8_t x678 = INT8_MAX;
	int32_t x679 = INT32_MIN;
	uint8_t x680 = 1U;
	int32_t t169 = 14346252;

    t169 = (x677!=(x678>(x679^x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	int32_t x682 = INT32_MIN;
	int64_t x683 = -549735582LL;
	static uint16_t x684 = 0U;
	volatile int32_t t170 = -30;

    t170 = (x681!=(x682>(x683^x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = UINT8_MAX;
	volatile uint8_t x686 = 9U;
	static int16_t x687 = -1;
	int16_t x688 = INT16_MIN;

    t171 = (x685!=(x686>(x687^x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x690 = 25441U;
	static int64_t x691 = INT64_MAX;
	int64_t x692 = -1LL;
	volatile int32_t t172 = 1152561;

    t172 = (x689!=(x690>(x691^x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x695 = -1;
	static volatile int64_t x696 = -1287827111552LL;
	static volatile int32_t t173 = 2;

    t173 = (x693!=(x694>(x695^x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = 13U;
	int64_t x699 = INT64_MAX;
	static volatile int8_t x700 = -2;

    t174 = (x697!=(x698>(x699^x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x701 = 891446831U;
	int32_t x702 = -966734982;
	static uint64_t x703 = UINT64_MAX;
	volatile int64_t x704 = -1LL;
	volatile int32_t t175 = 1;

    t175 = (x701!=(x702>(x703^x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t t176 = 1;

    t176 = (x705!=(x706>(x707^x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 47341U;
	int32_t x710 = INT32_MAX;
	int16_t x711 = INT16_MIN;

    t177 = (x709!=(x710>(x711^x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = INT16_MIN;
	volatile int16_t x714 = -3;
	volatile int16_t x715 = -1;
	static volatile int8_t x716 = INT8_MIN;

    t178 = (x713!=(x714>(x715^x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MIN;
	int64_t x719 = 197403021877338LL;
	int64_t x720 = -177267LL;
	int32_t t179 = 147680861;

    t179 = (x717!=(x718>(x719^x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x722 = UINT64_MAX;
	int16_t x724 = -1;
	volatile int32_t t180 = -2241;

    t180 = (x721!=(x722>(x723^x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = 346268300U;
	int32_t x726 = -1;
	static volatile int16_t x727 = INT16_MAX;
	int32_t t181 = -57;

    t181 = (x725!=(x726>(x727^x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x730 = INT32_MIN;
	int64_t x731 = INT64_MIN;
	static int32_t t182 = -246153939;

    t182 = (x729!=(x730>(x731^x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x734 = -1;
	int16_t x735 = -1842;
	uint32_t x736 = UINT32_MAX;

    t183 = (x733!=(x734>(x735^x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	int16_t x738 = -52;
	static int64_t x740 = -6382048649LL;
	volatile int32_t t184 = -74581649;

    t184 = (x737!=(x738>(x739^x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = 3;
	uint8_t x742 = 5U;
	int64_t x743 = 210357000011LL;
	static uint64_t x744 = 4093LLU;
	static int32_t t185 = 1423824;

    t185 = (x741!=(x742>(x743^x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -417;
	volatile int64_t x746 = INT64_MAX;
	uint8_t x747 = 1U;
	int32_t x748 = INT32_MIN;
	int32_t t186 = 196176;

    t186 = (x745!=(x746>(x747^x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	uint64_t x750 = 103137327285LLU;
	int64_t x751 = INT64_MIN;
	int16_t x752 = INT16_MIN;

    t187 = (x749!=(x750>(x751^x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -148330LL;
	int32_t t188 = 0;

    t188 = (x753!=(x754>(x755^x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 33LLU;
	int64_t x758 = -5LL;
	uint32_t x759 = UINT32_MAX;
	static volatile int16_t x760 = INT16_MIN;
	volatile int32_t t189 = 7;

    t189 = (x757!=(x758>(x759^x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MAX;
	uint16_t x763 = UINT16_MAX;
	volatile int32_t t190 = -457;

    t190 = (x761!=(x762>(x763^x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = UINT64_MAX;
	int64_t x766 = INT64_MAX;
	static int32_t x768 = -41;
	static int32_t t191 = 253;

    t191 = (x765!=(x766>(x767^x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = -6534;
	uint32_t x771 = 3640611U;

    t192 = (x769!=(x770>(x771^x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = INT8_MAX;
	int8_t x776 = -62;
	volatile int32_t t193 = 2415;

    t193 = (x773!=(x774>(x775^x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 14U;
	int32_t x778 = -1;
	uint64_t x779 = 6LLU;

    t194 = (x777!=(x778>(x779^x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = INT8_MAX;
	uint16_t x783 = UINT16_MAX;
	int8_t x784 = 60;
	static int32_t t195 = -200;

    t195 = (x781!=(x782>(x783^x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	volatile uint32_t x786 = 1626213U;
	static int16_t x787 = 2075;
	uint64_t x788 = 1468609922434961LLU;
	volatile int32_t t196 = 140392;

    t196 = (x785!=(x786>(x787^x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = UINT8_MAX;
	static int64_t x790 = INT64_MIN;
	int8_t x791 = -1;
	int32_t t197 = -243618518;

    t197 = (x789!=(x790>(x791^x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = INT8_MAX;
	int16_t x794 = INT16_MAX;
	volatile int16_t x795 = INT16_MIN;
	int32_t t198 = 219;

    t198 = (x793!=(x794>(x795^x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	static int16_t x798 = INT16_MAX;
	static volatile int8_t x799 = INT8_MAX;

    t199 = (x797!=(x798>(x799^x800)));

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
