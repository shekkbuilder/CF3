
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

uint32_t x1 = UINT32_MAX;
int32_t t0 = 51;
static int16_t x8 = INT16_MAX;
int64_t x9 = 3LL;
int64_t x12 = 1970157905506LL;
static uint8_t x20 = 7U;
volatile int32_t x24 = 441983159;
int32_t x25 = INT32_MIN;
uint16_t x34 = 4190U;
static int16_t x36 = INT16_MAX;
volatile int32_t t8 = -15030;
uint64_t x38 = UINT64_MAX;
int32_t x43 = -1;
volatile int8_t x44 = INT8_MIN;
static volatile int8_t x45 = INT8_MIN;
uint32_t x50 = 139999239U;
int32_t x52 = INT32_MIN;
int32_t t12 = 887;
volatile int8_t x53 = INT8_MIN;
uint8_t x58 = 0U;
int32_t t15 = 7085;
static uint16_t x67 = 483U;
uint16_t x70 = 322U;
volatile int32_t x74 = INT32_MAX;
static int64_t x75 = INT64_MAX;
volatile int32_t t19 = -3;
volatile int64_t x83 = -28LL;
int64_t x85 = INT64_MIN;
uint32_t x86 = UINT32_MAX;
static uint8_t x88 = 40U;
int8_t x98 = INT8_MIN;
volatile int64_t x102 = INT64_MAX;
uint64_t x109 = 34470436149118LLU;
volatile int32_t t27 = 1840;
static int16_t x114 = -1;
int16_t x117 = INT16_MIN;
int32_t x118 = INT32_MIN;
uint64_t x119 = 421611742110LLU;
volatile uint16_t x123 = 31435U;
uint32_t x125 = UINT32_MAX;
int32_t t34 = 3;
volatile int16_t x142 = -1;
static volatile int32_t t35 = 38278;
int8_t x145 = INT8_MIN;
volatile int8_t x163 = INT8_MIN;
static volatile int32_t t42 = 1038315;
int16_t x175 = INT16_MIN;
volatile int32_t t44 = -186;
int64_t x182 = -237167975LL;
volatile uint8_t x191 = UINT8_MAX;
uint64_t x196 = UINT64_MAX;
int32_t x201 = INT32_MIN;
int32_t x205 = 1520993;
static uint8_t x206 = 0U;
uint32_t x207 = 66732U;
volatile int16_t x210 = -1;
int8_t x212 = 1;
uint32_t x218 = 2100U;
volatile int64_t x221 = INT64_MAX;
volatile int32_t x225 = -199;
uint32_t x237 = 15840483U;
int32_t t59 = 174649;
static int8_t x248 = INT8_MAX;
int32_t t63 = -22981;
volatile int8_t x262 = 1;
uint8_t x273 = UINT8_MAX;
int32_t x275 = 90483401;
static int32_t x289 = -1;
int8_t x296 = INT8_MIN;
volatile int64_t x300 = -1LL;
uint32_t x301 = 252U;
int64_t x303 = INT64_MIN;
static int16_t x304 = -1;
uint64_t x307 = UINT64_MAX;
int8_t x308 = INT8_MAX;
static int8_t x310 = INT8_MIN;
uint32_t x316 = UINT32_MAX;
int64_t x325 = -1LL;
int16_t x330 = INT16_MIN;
uint16_t x336 = UINT16_MAX;
int8_t x340 = INT8_MAX;
volatile int32_t t85 = -182162819;
volatile int16_t x357 = INT16_MAX;
static volatile uint64_t x358 = UINT64_MAX;
volatile uint16_t x366 = UINT16_MAX;
int64_t x369 = INT64_MAX;
int32_t x371 = INT32_MIN;
static volatile int32_t t92 = -54292;
volatile uint16_t x375 = 3526U;
volatile int32_t t93 = 7;
volatile int8_t x390 = 0;
static uint64_t x394 = 847873701139007144LLU;
static uint16_t x403 = UINT16_MAX;
static uint8_t x406 = UINT8_MAX;
static int8_t x407 = INT8_MAX;
volatile int32_t t101 = 8302;
static int64_t x412 = INT64_MIN;
volatile int32_t t104 = 7916;
uint32_t x423 = 403U;
uint64_t x424 = 12005400635876LLU;
static int64_t x428 = INT64_MIN;
int32_t x438 = 1;
int32_t t110 = -15119;
static uint32_t x448 = 4U;
uint16_t x459 = UINT16_MAX;
static int32_t x463 = INT32_MIN;
volatile int32_t t116 = 3241;
uint16_t x472 = 1219U;
volatile uint8_t x473 = 3U;
int8_t x481 = INT8_MAX;
static volatile int32_t x483 = INT32_MAX;
volatile int16_t x484 = INT16_MAX;
volatile int32_t t120 = 261519318;
volatile int32_t x495 = -1;
volatile int32_t t123 = -6853;
volatile int64_t x499 = -516707LL;
volatile int32_t t124 = -293308;
uint32_t x502 = UINT32_MAX;
int16_t x511 = INT16_MIN;
static int32_t x513 = INT32_MIN;
static volatile int32_t x515 = -1;
int32_t t128 = 102;
int64_t x519 = -1294317939265326610LL;
static int64_t x521 = -1LL;
uint8_t x523 = 13U;
int32_t t130 = -1048030;
uint8_t x526 = UINT8_MAX;
int32_t t133 = 12;
static int16_t x538 = -1;
volatile int64_t x541 = 19172518997307LL;
int32_t x543 = INT32_MIN;
uint16_t x544 = 14U;
uint64_t x555 = UINT64_MAX;
volatile uint8_t x556 = 25U;
static uint16_t x559 = 1U;
int8_t x560 = 0;
static uint32_t x565 = 855649U;
volatile uint8_t x566 = 31U;
volatile int16_t x572 = -5734;
volatile int32_t x573 = -52;
static uint16_t x577 = UINT16_MAX;
volatile int16_t x578 = INT16_MIN;
volatile int32_t t144 = 31499;
int8_t x588 = -1;
static int16_t x591 = 1940;
int8_t x594 = -3;
uint32_t x595 = UINT32_MAX;
static int32_t x598 = INT32_MIN;
uint32_t x599 = UINT32_MAX;
volatile int32_t t151 = -543679063;
int64_t x610 = -1LL;
static volatile int32_t t154 = -15;
int64_t x628 = 300452402751LL;
uint32_t x629 = 196772905U;
int64_t x645 = INT64_MIN;
uint16_t x647 = 2U;
volatile int32_t t161 = 7;
int32_t x664 = INT32_MAX;
int32_t x666 = INT32_MIN;
int32_t t166 = -125;
volatile int64_t x670 = -45928028017LL;
volatile int32_t x671 = -1;
int8_t x674 = INT8_MIN;
volatile int8_t x676 = INT8_MIN;
int8_t x698 = INT8_MIN;
static int16_t x701 = INT16_MIN;
static int64_t x706 = INT64_MIN;
volatile uint64_t x715 = 109551820LLU;
static int32_t t178 = -431183156;
volatile uint32_t x718 = UINT32_MAX;
volatile uint16_t x720 = 2119U;
uint8_t x722 = 0U;
int8_t x735 = INT8_MIN;
uint32_t x736 = 35855U;
int32_t t183 = 59438831;
volatile int16_t x737 = INT16_MIN;
volatile int16_t x745 = -14;
static uint32_t x748 = 21622U;
volatile uint64_t x750 = 7770604814912LLU;
uint16_t x752 = 121U;
volatile int32_t t189 = 118703813;
int32_t x765 = -1;
int32_t x776 = -4556;
volatile int32_t t193 = 122396479;
int16_t x780 = -1;
static volatile int16_t x787 = 0;
int64_t x789 = -1LL;
int32_t t197 = -2968141;
static int32_t t199 = -249;


void f0(void) {
    	int64_t x2 = INT64_MAX;
	int8_t x3 = -1;
	int8_t x4 = INT8_MIN;

    t0 = (x1!=(x2^(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	int32_t t1 = -16178;

    t1 = (x5!=(x6^(x7&x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = 29;
	volatile int64_t x11 = 2353728LL;
	int32_t t2 = 6;

    t2 = (x9!=(x10^(x11&x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MIN;
	static int64_t x14 = INT64_MIN;
	static int32_t x15 = INT32_MIN;
	static volatile int64_t x16 = 86949269846LL;
	int32_t t3 = -36436;

    t3 = (x13!=(x14^(x15&x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	int64_t x18 = INT64_MIN;
	uint8_t x19 = 6U;
	volatile int32_t t4 = 5650976;

    t4 = (x17!=(x18^(x19&x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 206411;
	uint16_t x22 = UINT16_MAX;
	int64_t x23 = -3366132567LL;
	static volatile int32_t t5 = -15677;

    t5 = (x21!=(x22^(x23&x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x26 = 26;
	uint8_t x27 = UINT8_MAX;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -235;

    t6 = (x25!=(x26^(x27&x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	int64_t x30 = 1955098412136198LL;
	volatile uint8_t x31 = 2U;
	int64_t x32 = -31LL;
	volatile int32_t t7 = 294;

    t7 = (x29!=(x30^(x31&x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x33 = UINT16_MAX;
	int8_t x35 = INT8_MAX;

    t8 = (x33!=(x34^(x35&x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 6U;
	static uint16_t x39 = 12U;
	static int16_t x40 = -10441;
	int32_t t9 = 5;

    t9 = (x37!=(x38^(x39&x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 1;
	uint32_t x42 = 101752107U;
	int32_t t10 = 3;

    t10 = (x41!=(x42^(x43&x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = -2660;
	uint16_t x47 = 3453U;
	static int16_t x48 = 2;
	int32_t t11 = 45800;

    t11 = (x45!=(x46^(x47&x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	uint32_t x51 = 9237220U;

    t12 = (x49!=(x50^(x51&x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = INT8_MIN;
	volatile int16_t x55 = INT16_MIN;
	int8_t x56 = -1;
	int32_t t13 = -55;

    t13 = (x53!=(x54^(x55&x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -29;
	uint64_t x59 = UINT64_MAX;
	static uint8_t x60 = 18U;
	int32_t t14 = 31151677;

    t14 = (x57!=(x58^(x59&x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = 0;
	uint16_t x62 = 0U;
	int32_t x63 = -1;
	int16_t x64 = -1;

    t15 = (x61!=(x62^(x63&x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 22202022;
	static int8_t x66 = -1;
	uint32_t x68 = 121U;
	volatile int32_t t16 = 162030655;

    t16 = (x65!=(x66^(x67&x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	volatile int16_t x71 = INT16_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t17 = -14207383;

    t17 = (x69!=(x70^(x71&x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = UINT64_MAX;
	int32_t x76 = INT32_MIN;
	static int32_t t18 = -451023;

    t18 = (x73!=(x74^(x75&x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = 0;
	static uint64_t x78 = 89588LLU;
	int8_t x79 = -1;
	int16_t x80 = INT16_MAX;

    t19 = (x77!=(x78^(x79&x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MAX;
	int8_t x84 = -1;
	static volatile int32_t t20 = -3657413;

    t20 = (x81!=(x82^(x83&x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x87 = -245;
	volatile int32_t t21 = -129498;

    t21 = (x85!=(x86^(x87&x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int64_t x90 = -3297LL;
	int64_t x91 = -4932242LL;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t22 = 0;

    t22 = (x89!=(x90^(x91&x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = -1;
	volatile uint32_t x94 = UINT32_MAX;
	static int8_t x95 = -1;
	int16_t x96 = -1;
	volatile int32_t t23 = -953;

    t23 = (x93!=(x94^(x95&x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	int16_t x99 = -1;
	int8_t x100 = 1;
	int32_t t24 = -13;

    t24 = (x97!=(x98^(x99&x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	int32_t x103 = INT32_MIN;
	volatile uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = -24;

    t25 = (x101!=(x102^(x103&x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 2112234018U;
	int8_t x106 = INT8_MIN;
	uint16_t x107 = 14U;
	uint32_t x108 = 7U;
	volatile int32_t t26 = 393444849;

    t26 = (x105!=(x106^(x107&x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x110 = -1;
	volatile int32_t x111 = INT32_MIN;
	volatile int64_t x112 = INT64_MAX;

    t27 = (x109!=(x110^(x111&x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	uint64_t x115 = UINT64_MAX;
	uint16_t x116 = 142U;
	static int32_t t28 = 138501;

    t28 = (x113!=(x114^(x115&x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x120 = 1618570;
	int32_t t29 = 12;

    t29 = (x117!=(x118^(x119&x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 1371219LLU;
	int64_t x122 = INT64_MAX;
	volatile int32_t x124 = INT32_MIN;
	static int32_t t30 = 21709488;

    t30 = (x121!=(x122^(x123&x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x126 = 212U;
	uint16_t x127 = UINT16_MAX;
	static uint64_t x128 = 123LLU;
	int32_t t31 = -946927;

    t31 = (x125!=(x126^(x127&x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -456;
	uint8_t x130 = 3U;
	int16_t x131 = -31;
	uint32_t x132 = 110U;
	static volatile int32_t t32 = 2201845;

    t32 = (x129!=(x130^(x131&x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x133 = UINT8_MAX;
	uint32_t x134 = UINT32_MAX;
	volatile uint64_t x135 = 4048LLU;
	int16_t x136 = -167;
	static int32_t t33 = -248471489;

    t33 = (x133!=(x134^(x135&x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = INT64_MIN;
	static int32_t x138 = INT32_MIN;
	static int32_t x139 = INT32_MIN;
	static uint64_t x140 = 7247136034437855007LLU;

    t34 = (x137!=(x138^(x139&x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	int32_t x143 = -1;
	uint32_t x144 = UINT32_MAX;

    t35 = (x141!=(x142^(x143&x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x146 = 20U;
	int32_t x147 = 2745460;
	uint8_t x148 = 1U;
	volatile int32_t t36 = -5171705;

    t36 = (x145!=(x146^(x147&x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 0;
	volatile int64_t x150 = 239LL;
	int32_t x151 = -1;
	int16_t x152 = -1;
	volatile int32_t t37 = 1613431;

    t37 = (x149!=(x150^(x151&x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 4444;
	volatile int8_t x154 = 0;
	int32_t x155 = INT32_MIN;
	uint32_t x156 = 31260357U;
	static int32_t t38 = 0;

    t38 = (x153!=(x154^(x155&x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	volatile int32_t x158 = INT32_MIN;
	int32_t x159 = -507828251;
	uint64_t x160 = UINT64_MAX;
	static volatile int32_t t39 = -60387;

    t39 = (x157!=(x158^(x159&x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = 29;
	volatile uint8_t x162 = 42U;
	uint64_t x164 = UINT64_MAX;
	int32_t t40 = -65804451;

    t40 = (x161!=(x162^(x163&x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MAX;
	static int64_t x166 = -1LL;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = UINT32_MAX;
	int32_t t41 = 978373053;

    t41 = (x165!=(x166^(x167&x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	volatile uint64_t x170 = 2071393313248LLU;
	volatile int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MAX;

    t42 = (x169!=(x170^(x171&x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	int16_t x174 = INT16_MIN;
	volatile int64_t x176 = INT64_MAX;
	static int32_t t43 = 45303;

    t43 = (x173!=(x174^(x175&x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = -64827;
	int8_t x178 = -15;
	static uint8_t x179 = 110U;
	int8_t x180 = INT8_MAX;

    t44 = (x177!=(x178^(x179&x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MAX;
	static int16_t x183 = -15047;
	int8_t x184 = -25;
	int32_t t45 = 1163;

    t45 = (x181!=(x182^(x183&x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = INT32_MIN;
	uint64_t x186 = UINT64_MAX;
	static uint8_t x187 = UINT8_MAX;
	volatile int16_t x188 = INT16_MAX;
	static volatile int32_t t46 = 151399;

    t46 = (x185!=(x186^(x187&x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = INT32_MIN;
	static int32_t x190 = INT32_MAX;
	int16_t x192 = 43;
	volatile int32_t t47 = 17857024;

    t47 = (x189!=(x190^(x191&x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MAX;
	volatile uint16_t x194 = 1U;
	volatile uint16_t x195 = UINT16_MAX;
	volatile int32_t t48 = 12083;

    t48 = (x193!=(x194^(x195&x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = 2LL;
	uint32_t x198 = UINT32_MAX;
	volatile uint8_t x199 = 24U;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 1782505;

    t49 = (x197!=(x198^(x199&x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = -9;
	static int32_t x203 = -1;
	int32_t x204 = INT32_MIN;
	int32_t t50 = 89843983;

    t50 = (x201!=(x202^(x203&x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x208 = 6062277968616LLU;
	static int32_t t51 = -42;

    t51 = (x205!=(x206^(x207&x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 55693257U;
	uint16_t x211 = 25939U;
	volatile int32_t t52 = 856161244;

    t52 = (x209!=(x210^(x211&x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = -1;
	uint32_t x214 = 1145859926U;
	static int16_t x215 = -3;
	int32_t x216 = -1;
	volatile int32_t t53 = 157348;

    t53 = (x213!=(x214^(x215&x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x217 = -1;
	int32_t x219 = INT32_MAX;
	uint16_t x220 = 1U;
	volatile int32_t t54 = -3;

    t54 = (x217!=(x218^(x219&x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = INT16_MAX;
	int64_t x223 = 1093168013052LL;
	uint16_t x224 = 96U;
	volatile int32_t t55 = -45;

    t55 = (x221!=(x222^(x223&x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = 214220536344981LL;
	static uint8_t x227 = UINT8_MAX;
	int64_t x228 = -149827518LL;
	int32_t t56 = -375;

    t56 = (x225!=(x226^(x227&x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 2U;
	volatile uint64_t x230 = UINT64_MAX;
	volatile int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = 2980517;

    t57 = (x229!=(x230^(x231&x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x233 = INT8_MIN;
	int64_t x234 = 2151471794813LL;
	uint32_t x235 = 28554U;
	volatile int64_t x236 = INT64_MAX;
	static int32_t t58 = -1;

    t58 = (x233!=(x234^(x235&x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x238 = 13158937770177802LLU;
	uint16_t x239 = 1U;
	int16_t x240 = -1;

    t59 = (x237!=(x238^(x239&x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x241 = UINT64_MAX;
	int16_t x242 = 93;
	uint8_t x243 = 28U;
	int64_t x244 = INT64_MAX;
	int32_t t60 = -330233;

    t60 = (x241!=(x242^(x243&x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MAX;
	uint8_t x246 = 69U;
	static volatile int16_t x247 = -1;
	volatile int32_t t61 = 10376;

    t61 = (x245!=(x246^(x247&x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 63549U;
	static int64_t x250 = INT64_MIN;
	static int32_t x251 = -1;
	int64_t x252 = -1LL;
	int32_t t62 = -12685759;

    t62 = (x249!=(x250^(x251&x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	volatile int64_t x254 = -3719517153614706LL;
	static uint8_t x255 = UINT8_MAX;
	static volatile uint32_t x256 = UINT32_MAX;

    t63 = (x253!=(x254^(x255&x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = INT32_MAX;
	int32_t x258 = 102430;
	static int64_t x259 = INT64_MIN;
	static int32_t x260 = 37560649;
	volatile int32_t t64 = 275;

    t64 = (x257!=(x258^(x259&x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	int32_t x264 = -1;
	volatile int32_t t65 = 0;

    t65 = (x261!=(x262^(x263&x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MAX;
	int8_t x266 = 36;
	int32_t x267 = -1;
	int32_t x268 = INT32_MAX;
	volatile int32_t t66 = 78001;

    t66 = (x265!=(x266^(x267&x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MAX;
	int32_t x270 = -4;
	int8_t x271 = -1;
	int16_t x272 = -4;
	static volatile int32_t t67 = -199323319;

    t67 = (x269!=(x270^(x271&x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = INT8_MIN;
	volatile int64_t x276 = -1LL;
	int32_t t68 = -15263759;

    t68 = (x273!=(x274^(x275&x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 0;
	int8_t x278 = INT8_MIN;
	int16_t x279 = -2;
	volatile uint16_t x280 = 2214U;
	int32_t t69 = -15696169;

    t69 = (x277!=(x278^(x279&x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 2209U;
	static int32_t x282 = -1;
	int64_t x283 = -1LL;
	volatile uint64_t x284 = 323264561001183762LLU;
	volatile int32_t t70 = -103558290;

    t70 = (x281!=(x282^(x283&x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = -12;
	volatile int8_t x287 = -7;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -335;

    t71 = (x285!=(x286^(x287&x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x290 = INT8_MIN;
	int64_t x291 = -1LL;
	int32_t x292 = 6078;
	static int32_t t72 = -2;

    t72 = (x289!=(x290^(x291&x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MIN;
	volatile int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	static int32_t t73 = 24257059;

    t73 = (x293!=(x294^(x295&x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x297 = 3U;
	volatile uint32_t x298 = UINT32_MAX;
	uint8_t x299 = UINT8_MAX;
	volatile int32_t t74 = -238;

    t74 = (x297!=(x298^(x299&x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x302 = UINT8_MAX;
	volatile int32_t t75 = 0;

    t75 = (x301!=(x302^(x303&x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x305 = 4733273U;
	int8_t x306 = -27;
	int32_t t76 = -639892237;

    t76 = (x305!=(x306^(x307&x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = INT32_MIN;
	int16_t x311 = -1;
	volatile int64_t x312 = 19166154397LL;
	volatile int32_t t77 = 3055065;

    t77 = (x309!=(x310^(x311&x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = 2;
	int8_t x314 = -3;
	uint32_t x315 = UINT32_MAX;
	volatile int32_t t78 = 4050188;

    t78 = (x313!=(x314^(x315&x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = 1;
	uint64_t x318 = 32158629961871092LLU;
	int64_t x319 = 21541007LL;
	int16_t x320 = -1;
	int32_t t79 = 17;

    t79 = (x317!=(x318^(x319&x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MIN;
	int32_t x323 = -1;
	int64_t x324 = INT64_MIN;
	volatile int32_t t80 = 10;

    t80 = (x321!=(x322^(x323&x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x326 = -3793549LL;
	static volatile int64_t x327 = INT64_MAX;
	uint8_t x328 = 1U;
	volatile int32_t t81 = 2754;

    t81 = (x325!=(x326^(x327&x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = 11478LL;
	uint16_t x331 = UINT16_MAX;
	uint16_t x332 = 49U;
	volatile int32_t t82 = -223988;

    t82 = (x329!=(x330^(x331&x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = UINT32_MAX;
	int64_t x334 = 2026LL;
	uint32_t x335 = UINT32_MAX;
	int32_t t83 = 7;

    t83 = (x333!=(x334^(x335&x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	uint8_t x338 = 37U;
	int16_t x339 = -7340;
	static int32_t t84 = -89783;

    t84 = (x337!=(x338^(x339&x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = INT8_MIN;
	static volatile uint64_t x342 = UINT64_MAX;
	int32_t x343 = 0;
	int16_t x344 = INT16_MAX;

    t85 = (x341!=(x342^(x343&x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = 2417071696416958LL;
	int16_t x346 = 0;
	static volatile int32_t x347 = INT32_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t86 = 328;

    t86 = (x345!=(x346^(x347&x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	uint64_t x350 = 2365LLU;
	int64_t x351 = 480885827468221446LL;
	int32_t x352 = INT32_MAX;
	static volatile int32_t t87 = -1355;

    t87 = (x349!=(x350^(x351&x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = INT8_MIN;
	int8_t x354 = INT8_MIN;
	static int32_t x355 = INT32_MAX;
	volatile uint16_t x356 = 2U;
	static volatile int32_t t88 = -24296971;

    t88 = (x353!=(x354^(x355&x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x359 = INT8_MAX;
	int8_t x360 = -1;
	int32_t t89 = -6;

    t89 = (x357!=(x358^(x359&x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = 137;
	uint8_t x362 = UINT8_MAX;
	static int32_t x363 = 117037;
	int16_t x364 = 10481;
	int32_t t90 = 2543;

    t90 = (x361!=(x362^(x363&x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	int64_t x367 = -24903775089904513LL;
	static int32_t x368 = INT32_MIN;
	int32_t t91 = -140;

    t91 = (x365!=(x366^(x367&x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x370 = INT64_MAX;
	uint16_t x372 = UINT16_MAX;

    t92 = (x369!=(x370^(x371&x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 3271LLU;
	static int64_t x374 = INT64_MAX;
	uint32_t x376 = 8U;

    t93 = (x373!=(x374^(x375&x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	int8_t x378 = 0;
	volatile int64_t x379 = -1LL;
	volatile int32_t x380 = -5228369;
	int32_t t94 = 62118;

    t94 = (x377!=(x378^(x379&x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = INT64_MIN;
	volatile int32_t x382 = 0;
	static uint64_t x383 = UINT64_MAX;
	int8_t x384 = INT8_MIN;
	static int32_t t95 = -652967185;

    t95 = (x381!=(x382^(x383&x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = 15;
	int16_t x386 = INT16_MAX;
	int8_t x387 = -8;
	volatile int16_t x388 = -1;
	int32_t t96 = 65990327;

    t96 = (x385!=(x386^(x387&x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = 15;
	int8_t x391 = -1;
	int32_t x392 = -200602655;
	static volatile int32_t t97 = 707207551;

    t97 = (x389!=(x390^(x391&x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x393 = 45862LL;
	int8_t x395 = INT8_MIN;
	int64_t x396 = -1LL;
	static int32_t t98 = -1;

    t98 = (x393!=(x394^(x395&x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	volatile uint32_t x398 = 8624U;
	int16_t x399 = -3583;
	int16_t x400 = INT16_MAX;
	volatile int32_t t99 = 2106;

    t99 = (x397!=(x398^(x399&x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = INT32_MIN;
	int64_t x402 = -1LL;
	int32_t x404 = INT32_MAX;
	int32_t t100 = 15;

    t100 = (x401!=(x402^(x403&x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = -513181630;
	int32_t x408 = -573292;

    t101 = (x405!=(x406^(x407&x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -34256;
	static int64_t x410 = INT64_MIN;
	static int32_t x411 = INT32_MIN;
	volatile int32_t t102 = 0;

    t102 = (x409!=(x410^(x411&x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = UINT16_MAX;
	volatile int16_t x414 = INT16_MIN;
	volatile int64_t x415 = INT64_MIN;
	int64_t x416 = -1LL;
	volatile int32_t t103 = 160202175;

    t103 = (x413!=(x414^(x415&x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	int64_t x418 = INT64_MIN;
	int64_t x419 = -3477LL;
	uint16_t x420 = 0U;

    t104 = (x417!=(x418^(x419&x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = 1689U;
	int32_t x422 = INT32_MAX;
	static volatile int32_t t105 = 4;

    t105 = (x421!=(x422^(x423&x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x425 = 1738469842U;
	static volatile uint32_t x426 = UINT32_MAX;
	int32_t x427 = -1;
	static int32_t t106 = 41287;

    t106 = (x425!=(x426^(x427&x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = 1;
	int32_t x430 = -108957;
	int32_t x431 = -652;
	volatile int32_t x432 = INT32_MIN;
	int32_t t107 = 651;

    t107 = (x429!=(x430^(x431&x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = INT32_MIN;
	int32_t x434 = INT32_MIN;
	uint64_t x435 = 204235613184926534LLU;
	int64_t x436 = 18764463877540LL;
	int32_t t108 = -32188;

    t108 = (x433!=(x434^(x435&x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	int64_t x439 = INT64_MAX;
	int32_t x440 = INT32_MAX;
	static int32_t t109 = -242;

    t109 = (x437!=(x438^(x439&x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	volatile int8_t x442 = INT8_MIN;
	static int32_t x443 = -22;
	volatile int8_t x444 = -1;

    t110 = (x441!=(x442^(x443&x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 222137LLU;
	int32_t x446 = -1;
	int32_t x447 = -1;
	volatile int32_t t111 = 4265;

    t111 = (x445!=(x446^(x447&x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = -1;
	uint8_t x450 = 10U;
	int16_t x451 = 1573;
	int32_t x452 = INT32_MIN;
	int32_t t112 = -9;

    t112 = (x449!=(x450^(x451&x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MAX;
	uint8_t x454 = UINT8_MAX;
	static int16_t x455 = INT16_MIN;
	int32_t x456 = INT32_MIN;
	volatile int32_t t113 = -23068830;

    t113 = (x453!=(x454^(x455&x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	volatile uint64_t x458 = 42820143482453LLU;
	uint16_t x460 = UINT16_MAX;
	volatile int32_t t114 = 414;

    t114 = (x457!=(x458^(x459&x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = UINT8_MAX;
	static int8_t x462 = INT8_MIN;
	int64_t x464 = INT64_MAX;
	volatile int32_t t115 = -99;

    t115 = (x461!=(x462^(x463&x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	int64_t x466 = INT64_MAX;
	uint32_t x467 = 1028U;
	static volatile int16_t x468 = 5740;

    t116 = (x465!=(x466^(x467&x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = 0;
	uint32_t x470 = 22106796U;
	volatile uint8_t x471 = UINT8_MAX;
	volatile int32_t t117 = -974044974;

    t117 = (x469!=(x470^(x471&x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x474 = 0U;
	int32_t x475 = 1;
	volatile uint16_t x476 = 1U;
	int32_t t118 = 566230306;

    t118 = (x473!=(x474^(x475&x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MAX;
	volatile uint8_t x478 = UINT8_MAX;
	int32_t x479 = -1;
	static int32_t x480 = INT32_MIN;
	volatile int32_t t119 = 8093686;

    t119 = (x477!=(x478^(x479&x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x482 = INT64_MIN;

    t120 = (x481!=(x482^(x483&x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MAX;
	static int16_t x486 = INT16_MAX;
	int16_t x487 = INT16_MAX;
	int16_t x488 = -1;
	static int32_t t121 = 5;

    t121 = (x485!=(x486^(x487&x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x489 = INT8_MAX;
	int32_t x490 = INT32_MIN;
	static uint16_t x491 = UINT16_MAX;
	int16_t x492 = 26;
	int32_t t122 = 42860848;

    t122 = (x489!=(x490^(x491&x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	int64_t x494 = INT64_MAX;
	volatile int16_t x496 = -1;

    t123 = (x493!=(x494^(x495&x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 17U;
	int32_t x498 = INT32_MIN;
	static int64_t x500 = -6729LL;

    t124 = (x497!=(x498^(x499&x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	uint8_t x503 = 9U;
	volatile int64_t x504 = -15LL;
	int32_t t125 = 101744290;

    t125 = (x501!=(x502^(x503&x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x505 = UINT8_MAX;
	int32_t x506 = -27236651;
	static uint64_t x507 = 4120418232738579006LLU;
	int8_t x508 = -49;
	volatile int32_t t126 = -12;

    t126 = (x505!=(x506^(x507&x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = UINT32_MAX;
	volatile int8_t x510 = INT8_MIN;
	volatile int16_t x512 = -301;
	volatile int32_t t127 = -65257;

    t127 = (x509!=(x510^(x511&x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x514 = INT32_MIN;
	uint64_t x516 = 148361540552LLU;

    t128 = (x513!=(x514^(x515&x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	volatile uint64_t x518 = 11056772LLU;
	int8_t x520 = 29;
	int32_t t129 = -432742;

    t129 = (x517!=(x518^(x519&x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x522 = 2137LLU;
	uint64_t x524 = UINT64_MAX;

    t130 = (x521!=(x522^(x523&x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 54U;
	int16_t x527 = 4216;
	int64_t x528 = INT64_MIN;
	static volatile int32_t t131 = -1618793;

    t131 = (x525!=(x526^(x527&x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	int16_t x530 = INT16_MIN;
	uint16_t x531 = 39U;
	int8_t x532 = INT8_MAX;
	static volatile int32_t t132 = -2;

    t132 = (x529!=(x530^(x531&x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint32_t x533 = 94129566U;
	int32_t x534 = 15459939;
	int8_t x535 = -1;
	static int16_t x536 = INT16_MIN;

    t133 = (x533!=(x534^(x535&x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x539 = INT64_MAX;
	uint64_t x540 = 126915LLU;
	int32_t t134 = -137975;

    t134 = (x537!=(x538^(x539&x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x542 = UINT8_MAX;
	int32_t t135 = -115410;

    t135 = (x541!=(x542^(x543&x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 49U;
	uint64_t x546 = 3661365899348848LLU;
	volatile int32_t x547 = 170;
	volatile uint32_t x548 = 85604U;
	volatile int32_t t136 = -434139752;

    t136 = (x545!=(x546^(x547&x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x549 = 16912U;
	volatile int64_t x550 = INT64_MAX;
	uint32_t x551 = UINT32_MAX;
	static int8_t x552 = -1;
	static volatile int32_t t137 = -270834;

    t137 = (x549!=(x550^(x551&x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 5;
	int32_t x554 = -27958;
	volatile int32_t t138 = -2688337;

    t138 = (x553!=(x554^(x555&x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = -1;
	static int8_t x558 = 1;
	int32_t t139 = -451;

    t139 = (x557!=(x558^(x559&x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x561 = UINT8_MAX;
	int32_t x562 = INT32_MIN;
	int64_t x563 = INT64_MIN;
	int16_t x564 = -1;
	int32_t t140 = 1116;

    t140 = (x561!=(x562^(x563&x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x567 = -1;
	int32_t x568 = INT32_MIN;
	int32_t t141 = 824575;

    t141 = (x565!=(x566^(x567&x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = 1;
	static int32_t x570 = INT32_MIN;
	uint32_t x571 = 1624U;
	int32_t t142 = -240043205;

    t142 = (x569!=(x570^(x571&x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = UINT64_MAX;
	uint32_t x575 = UINT32_MAX;
	int32_t x576 = INT32_MIN;
	volatile int32_t t143 = 201429;

    t143 = (x573!=(x574^(x575&x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x579 = -1;
	uint32_t x580 = 6926U;

    t144 = (x577!=(x578^(x579&x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	static int64_t x582 = -1LL;
	volatile int32_t x583 = -110837243;
	uint8_t x584 = 3U;
	volatile int32_t t145 = 793;

    t145 = (x581!=(x582^(x583&x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MAX;
	volatile uint32_t x586 = 3U;
	int64_t x587 = INT64_MIN;
	volatile int32_t t146 = -1890;

    t146 = (x585!=(x586^(x587&x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	uint32_t x590 = 2203U;
	int16_t x592 = INT16_MIN;
	int32_t t147 = -12613206;

    t147 = (x589!=(x590^(x591&x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	uint32_t x596 = UINT32_MAX;
	volatile int32_t t148 = -23917971;

    t148 = (x593!=(x594^(x595&x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	int16_t x600 = INT16_MAX;
	volatile int32_t t149 = 4806;

    t149 = (x597!=(x598^(x599&x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	int16_t x602 = -1;
	int16_t x603 = INT16_MAX;
	int64_t x604 = -1LL;
	int32_t t150 = 8193480;

    t150 = (x601!=(x602^(x603&x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x605 = 89U;
	int8_t x606 = INT8_MAX;
	uint64_t x607 = 57176624477406LLU;
	volatile uint8_t x608 = 6U;

    t151 = (x605!=(x606^(x607&x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = UINT16_MAX;
	int32_t x611 = INT32_MAX;
	volatile int16_t x612 = -118;
	int32_t t152 = 320123;

    t152 = (x609!=(x610^(x611&x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = -1LL;
	uint8_t x614 = 66U;
	volatile int16_t x615 = -1;
	static volatile uint64_t x616 = 3718344634LLU;
	volatile int32_t t153 = 74600;

    t153 = (x613!=(x614^(x615&x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x617 = UINT64_MAX;
	int32_t x618 = INT32_MAX;
	int16_t x619 = -288;
	int64_t x620 = INT64_MAX;

    t154 = (x617!=(x618^(x619&x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MAX;
	int64_t x622 = INT64_MIN;
	uint64_t x623 = UINT64_MAX;
	uint16_t x624 = 12184U;
	static int32_t t155 = -17697;

    t155 = (x621!=(x622^(x623&x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 37U;
	volatile int32_t x626 = INT32_MAX;
	static volatile uint32_t x627 = 212696082U;
	volatile int32_t t156 = 420;

    t156 = (x625!=(x626^(x627&x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x630 = INT32_MAX;
	static uint64_t x631 = 80222LLU;
	volatile uint32_t x632 = 14348U;
	int32_t t157 = 33432847;

    t157 = (x629!=(x630^(x631&x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x633 = 25;
	int32_t x634 = INT32_MAX;
	int8_t x635 = 7;
	int32_t x636 = INT32_MAX;
	int32_t t158 = -1878734;

    t158 = (x633!=(x634^(x635&x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	int32_t x638 = 0;
	static int8_t x639 = -29;
	int16_t x640 = INT16_MIN;
	volatile int32_t t159 = 23170;

    t159 = (x637!=(x638^(x639&x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MAX;
	int64_t x642 = INT64_MIN;
	int16_t x643 = INT16_MIN;
	static int8_t x644 = 1;
	static volatile int32_t t160 = 934348;

    t160 = (x641!=(x642^(x643&x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x646 = -1;
	int8_t x648 = INT8_MIN;

    t161 = (x645!=(x646^(x647&x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = 959456890;
	volatile int16_t x650 = INT16_MAX;
	static uint32_t x651 = UINT32_MAX;
	static uint16_t x652 = 3U;
	int32_t t162 = 1;

    t162 = (x649!=(x650^(x651&x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = UINT16_MAX;
	int32_t x654 = -1;
	static volatile uint16_t x655 = 237U;
	int16_t x656 = -1;
	volatile int32_t t163 = 12320;

    t163 = (x653!=(x654^(x655&x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MAX;
	int8_t x658 = -1;
	uint16_t x659 = UINT16_MAX;
	int64_t x660 = INT64_MAX;
	int32_t t164 = -23;

    t164 = (x657!=(x658^(x659&x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = UINT64_MAX;
	uint64_t x662 = UINT64_MAX;
	uint16_t x663 = 1U;
	int32_t t165 = 6904750;

    t165 = (x661!=(x662^(x663&x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = INT32_MIN;
	uint64_t x667 = UINT64_MAX;
	static int8_t x668 = -1;

    t166 = (x665!=(x666^(x667&x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	static volatile uint8_t x672 = 1U;
	int32_t t167 = 311449;

    t167 = (x669!=(x670^(x671&x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = INT16_MIN;
	int16_t x675 = INT16_MAX;
	int32_t t168 = -63;

    t168 = (x673!=(x674^(x675&x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x677 = 472U;
	volatile uint16_t x678 = UINT16_MAX;
	static int64_t x679 = -1LL;
	int16_t x680 = INT16_MAX;
	int32_t t169 = -2539;

    t169 = (x677!=(x678^(x679&x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	static volatile uint32_t x682 = 59278U;
	uint8_t x683 = 5U;
	int8_t x684 = INT8_MAX;
	int32_t t170 = 12;

    t170 = (x681!=(x682^(x683&x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 212824138254746463LLU;
	static volatile int8_t x686 = INT8_MAX;
	int32_t x687 = INT32_MIN;
	int16_t x688 = INT16_MIN;
	int32_t t171 = 11309257;

    t171 = (x685!=(x686^(x687&x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 3U;
	volatile int8_t x690 = INT8_MIN;
	static uint16_t x691 = 1U;
	int8_t x692 = -1;
	int32_t t172 = 192745004;

    t172 = (x689!=(x690^(x691&x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint8_t x693 = 0U;
	static int32_t x694 = INT32_MIN;
	int8_t x695 = 4;
	uint32_t x696 = UINT32_MAX;
	volatile int32_t t173 = 340;

    t173 = (x693!=(x694^(x695&x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -13;
	uint32_t x699 = UINT32_MAX;
	int8_t x700 = -39;
	volatile int32_t t174 = -5940;

    t174 = (x697!=(x698^(x699&x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x702 = -2811353LL;
	uint8_t x703 = UINT8_MAX;
	volatile int8_t x704 = INT8_MAX;
	volatile int32_t t175 = 441808;

    t175 = (x701!=(x702^(x703&x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 23U;
	int64_t x707 = 25932LL;
	static int32_t x708 = -1;
	static volatile int32_t t176 = -1037;

    t176 = (x705!=(x706^(x707&x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x709 = 30U;
	static int8_t x710 = 1;
	static int8_t x711 = -11;
	uint8_t x712 = UINT8_MAX;
	int32_t t177 = -56772150;

    t177 = (x709!=(x710^(x711&x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 1905509403182221LL;
	volatile int32_t x714 = INT32_MIN;
	int32_t x716 = -652;

    t178 = (x713!=(x714^(x715&x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x717 = UINT8_MAX;
	int16_t x719 = INT16_MIN;
	static int32_t t179 = 465920217;

    t179 = (x717!=(x718^(x719&x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MAX;
	int32_t x723 = 203342329;
	static uint64_t x724 = 14003LLU;
	volatile int32_t t180 = 351442108;

    t180 = (x721!=(x722^(x723&x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = 240;
	int64_t x726 = -1LL;
	static int16_t x727 = INT16_MIN;
	volatile uint32_t x728 = UINT32_MAX;
	int32_t t181 = -5;

    t181 = (x725!=(x726^(x727&x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = UINT32_MAX;
	uint16_t x730 = 6343U;
	int64_t x731 = INT64_MIN;
	int8_t x732 = INT8_MAX;
	int32_t t182 = -1;

    t182 = (x729!=(x730^(x731&x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	int8_t x734 = INT8_MIN;

    t183 = (x733!=(x734^(x735&x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x738 = INT8_MIN;
	int16_t x739 = -6329;
	static volatile int16_t x740 = INT16_MIN;
	static int32_t t184 = 1;

    t184 = (x737!=(x738^(x739&x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x741 = INT8_MIN;
	uint32_t x742 = 211300816U;
	int32_t x743 = INT32_MIN;
	uint8_t x744 = 33U;
	int32_t t185 = -2;

    t185 = (x741!=(x742^(x743&x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x746 = 6752;
	static int8_t x747 = INT8_MAX;
	static int32_t t186 = 619;

    t186 = (x745!=(x746^(x747&x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int64_t x751 = INT64_MIN;
	volatile int32_t t187 = 7708;

    t187 = (x749!=(x750^(x751&x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = INT16_MAX;
	static uint32_t x754 = 145635747U;
	static uint8_t x755 = 3U;
	int8_t x756 = 8;
	int32_t t188 = 5;

    t188 = (x753!=(x754^(x755&x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = UINT32_MAX;
	int16_t x758 = -1;
	int32_t x759 = INT32_MIN;
	int32_t x760 = -408;

    t189 = (x757!=(x758^(x759&x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = 313511LL;
	volatile int16_t x762 = 12;
	int32_t x763 = INT32_MIN;
	int8_t x764 = -1;
	int32_t t190 = -116;

    t190 = (x761!=(x762^(x763&x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = -7;
	int32_t x767 = -1;
	volatile int16_t x768 = -1;
	static int32_t t191 = -9184;

    t191 = (x765!=(x766^(x767&x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = 12;
	int8_t x770 = 0;
	static volatile int16_t x771 = -902;
	int64_t x772 = -1LL;
	int32_t t192 = 41;

    t192 = (x769!=(x770^(x771&x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	int32_t x774 = INT32_MIN;
	int16_t x775 = 15;

    t193 = (x773!=(x774^(x775&x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x777 = INT32_MIN;
	int32_t x778 = INT32_MIN;
	static int8_t x779 = -1;
	int32_t t194 = -31;

    t194 = (x777!=(x778^(x779&x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	volatile uint32_t x782 = UINT32_MAX;
	int16_t x783 = 1;
	uint64_t x784 = UINT64_MAX;
	int32_t t195 = -75;

    t195 = (x781!=(x782^(x783&x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = 1;
	static volatile int32_t x786 = -1;
	static int64_t x788 = INT64_MIN;
	volatile int32_t t196 = -1;

    t196 = (x785!=(x786^(x787&x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x790 = 1;
	int16_t x791 = 2849;
	int32_t x792 = INT32_MIN;

    t197 = (x789!=(x790^(x791&x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = INT32_MIN;
	uint32_t x794 = 1032254U;
	uint64_t x795 = 45082675041LLU;
	int32_t x796 = -7864;
	volatile int32_t t198 = 3679960;

    t198 = (x793!=(x794^(x795&x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -1;
	volatile uint64_t x798 = 826LLU;
	uint16_t x799 = UINT16_MAX;
	volatile uint16_t x800 = 7U;

    t199 = (x797!=(x798^(x799&x800)));

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

