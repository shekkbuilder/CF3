#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int32_t t1 = -1;
int16_t x11 = INT16_MIN;
static int16_t x17 = INT16_MAX;
volatile int32_t x19 = INT32_MIN;
static int32_t t5 = 3531;
volatile uint32_t x25 = 1281545902U;
static int8_t x28 = -1;
static int32_t x34 = INT32_MIN;
int8_t x38 = INT8_MAX;
volatile int64_t x39 = -6762098596028LL;
uint32_t x40 = 8180969U;
static volatile int16_t x42 = 3;
static uint64_t x46 = 148695620506130035LLU;
static uint32_t x60 = 352564U;
int64_t x64 = -1LL;
int8_t x66 = -1;
int8_t x68 = 1;
uint16_t x69 = 0U;
static int64_t x71 = INT64_MAX;
volatile int64_t x72 = -1LL;
int8_t x73 = INT8_MIN;
int8_t x79 = INT8_MIN;
volatile int64_t x83 = INT64_MIN;
volatile uint16_t x94 = UINT16_MAX;
static int64_t x99 = INT64_MAX;
static int64_t x101 = -1LL;
volatile int8_t x102 = INT8_MIN;
volatile int32_t t26 = 13;
int32_t x109 = 1440;
uint32_t x113 = 21527U;
uint16_t x115 = 4U;
int8_t x116 = 0;
volatile int32_t t28 = 220483647;
int32_t x117 = 10098;
int16_t x119 = INT16_MIN;
uint16_t x127 = 3926U;
int16_t x129 = -1;
int32_t t32 = -660031919;
static int64_t x149 = 112503758976758LL;
int16_t x150 = -1;
int16_t x153 = -266;
uint64_t x155 = UINT64_MAX;
static volatile int8_t x156 = INT8_MAX;
int64_t x158 = INT64_MAX;
volatile int16_t x165 = -4232;
static volatile int8_t x166 = INT8_MAX;
uint16_t x169 = 96U;
static volatile int32_t x170 = INT32_MAX;
static int32_t x171 = -137704842;
static volatile int32_t t42 = -3;
int64_t x179 = -184LL;
int32_t t44 = 85;
int64_t x184 = INT64_MIN;
static int32_t t45 = 3637;
static volatile int64_t x187 = -1LL;
uint16_t x189 = UINT16_MAX;
static int64_t x190 = INT64_MIN;
volatile int16_t x192 = -1;
int8_t x194 = INT8_MIN;
int32_t t48 = 91;
volatile int8_t x198 = INT8_MIN;
int64_t x204 = -1LL;
int8_t x209 = -1;
int8_t x211 = INT8_MAX;
int64_t x222 = 1LL;
int64_t x226 = -1LL;
volatile uint32_t x227 = UINT32_MAX;
int8_t x231 = INT8_MAX;
static uint16_t x235 = UINT16_MAX;
static volatile int64_t x242 = -5454384606900361LL;
static int16_t x243 = INT16_MIN;
uint8_t x244 = 124U;
int32_t t60 = -24879;
volatile int32_t t61 = 35;
int16_t x251 = INT16_MAX;
int16_t x252 = -72;
uint16_t x254 = 234U;
int32_t t63 = 420775;
int64_t x259 = INT64_MAX;
int32_t x261 = -1;
uint8_t x262 = UINT8_MAX;
int16_t x263 = INT16_MIN;
static int64_t x267 = -2LL;
volatile int8_t x274 = INT8_MIN;
uint64_t x275 = 3380182783506LLU;
int32_t x276 = -24;
static int16_t x278 = INT16_MIN;
int64_t x283 = -1798424713385LL;
int64_t x291 = 1555922745030551LL;
static int32_t x292 = INT32_MIN;
volatile uint16_t x293 = UINT16_MAX;
int64_t x300 = -1LL;
uint8_t x303 = 1U;
uint8_t x305 = 52U;
int32_t x306 = INT32_MIN;
volatile uint8_t x314 = 74U;
static int32_t x321 = 1;
int8_t x326 = INT8_MIN;
volatile int32_t x330 = INT32_MIN;
volatile uint16_t x332 = 77U;
volatile int32_t t83 = 5;
volatile uint64_t x337 = 637409886031880LLU;
volatile int8_t x344 = -18;
volatile int32_t t85 = 410;
uint16_t x357 = 2869U;
int32_t x358 = -1;
static int32_t x360 = INT32_MIN;
volatile int32_t x365 = -1;
static int64_t x366 = -1LL;
int64_t x377 = 79167470059301LL;
int32_t x389 = INT32_MAX;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	static volatile int32_t x2 = -1;
	int8_t x3 = INT8_MIN;
	static volatile int32_t t0 = 27;

	t0 = ((x1==x2)-(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 841115LL;
	int8_t x6 = -1;
	static int64_t x7 = 19516625093LL;
	int64_t x8 = -1LL;

	t1 = ((x5==x6)-(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 12629;
	uint32_t x10 = 108889707U;
	static int8_t x12 = -1;
	int32_t t2 = 1;

	t2 = ((x9==x10)-(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = 0U;
	static int64_t x14 = INT64_MAX;
	int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 1;

	t3 = ((x13==x14)-(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x18 = UINT8_MAX;
	int64_t x20 = INT64_MIN;
	int32_t t4 = -2248;

	t4 = ((x17==x18)-(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	static volatile int64_t x22 = 288138172605LL;
	int16_t x23 = INT16_MIN;
	volatile int64_t x24 = -63878LL;

	t5 = ((x21==x22)-(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 0U;
	uint64_t x27 = 130LLU;
	volatile int32_t t6 = 173;

	t6 = ((x25==x26)-(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -37;
	static int16_t x30 = INT16_MIN;
	uint64_t x31 = 3306910LLU;
	int32_t x32 = -528313580;
	volatile int32_t t7 = 14;

	t7 = ((x29==x30)-(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MAX;
	int64_t x35 = -29LL;
	int32_t x36 = 58015;
	volatile int32_t t8 = -73754;

	t8 = ((x33==x34)-(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 6U;
	volatile int32_t t9 = -15;

	t9 = ((x37==x38)-(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 170LLU;
	uint32_t x43 = 13661U;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -5;

	t10 = ((x41==x42)-(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int8_t x47 = -2;
	int64_t x48 = INT64_MIN;
	int32_t t11 = 9;

	t11 = ((x45==x46)-(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int16_t x50 = INT16_MIN;
	int32_t x51 = -1;
	int32_t x52 = -16560;
	int32_t t12 = 439377286;

	t12 = ((x49==x50)-(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 17125173848218LLU;
	static uint16_t x54 = 0U;
	volatile uint16_t x55 = 341U;
	static int16_t x56 = -11;
	static volatile int32_t t13 = 686407;

	t13 = ((x53==x54)-(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int8_t x58 = INT8_MAX;
	int8_t x59 = INT8_MIN;
	volatile int32_t t14 = 202;

	t14 = ((x57==x58)-(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	static volatile int16_t x62 = INT16_MAX;
	int8_t x63 = -1;
	static volatile int32_t t15 = -25;

	t15 = ((x61==x62)-(x63==x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 8;
	uint32_t x67 = 58884944U;
	volatile int32_t t16 = -23957096;

	t16 = ((x65==x66)-(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x70 = 176U;
	static int32_t t17 = 34;

	t17 = ((x69==x70)-(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x74 = UINT32_MAX;
	int16_t x75 = -1;
	volatile uint16_t x76 = UINT16_MAX;
	static volatile int32_t t18 = -733055411;

	t18 = ((x73==x74)-(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = INT32_MIN;
	int8_t x78 = -1;
	static int32_t x80 = 1;
	int32_t t19 = -16;

	t19 = ((x77==x78)-(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -1LL;
	volatile uint16_t x82 = 508U;
	uint8_t x84 = UINT8_MAX;
	int32_t t20 = 144970;

	t20 = ((x81==x82)-(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 3;
	static uint16_t x86 = 9134U;
	volatile int8_t x87 = -1;
	int32_t x88 = -1;
	volatile int32_t t21 = 2522104;

	t21 = ((x85==x86)-(x87==x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = -16346;
	int8_t x90 = INT8_MIN;
	int16_t x91 = -1;
	static uint8_t x92 = UINT8_MAX;
	int32_t t22 = -39;

	t22 = ((x89==x90)-(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = 732833309;

	t23 = ((x93==x94)-(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 31U;
	uint8_t x98 = 120U;
	int16_t x100 = 10;
	static volatile int32_t t24 = -54667;

	t24 = ((x97==x98)-(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x103 = INT32_MAX;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = -162287;

	t25 = ((x101==x102)-(x103==x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 83U;
	int32_t x106 = -2113112;
	int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MAX;

	t26 = ((x105==x106)-(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x110 = 43U;
	uint16_t x111 = UINT16_MAX;
	volatile int64_t x112 = -474LL;
	int32_t t27 = -264182923;

	t27 = ((x109==x110)-(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x114 = INT8_MIN;

	t28 = ((x113==x114)-(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = 915133273U;
	int16_t x120 = -1;
	volatile int32_t t29 = 117;

	t29 = ((x117==x118)-(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	static uint16_t x122 = UINT16_MAX;
	int8_t x123 = INT8_MAX;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t30 = -42;

	t30 = ((x121==x122)-(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 11192U;
	volatile uint8_t x126 = 26U;
	int64_t x128 = -3148410LL;
	int32_t t31 = 7;

	t31 = ((x125==x126)-(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = 205649459354084071LLU;
	static int8_t x131 = INT8_MIN;
	volatile uint64_t x132 = 8196466008418537266LLU;

	t32 = ((x129==x130)-(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MAX;
	volatile uint64_t x135 = 230499LLU;
	volatile uint64_t x136 = 2362767LLU;
	volatile int32_t t33 = 103;

	t33 = ((x133==x134)-(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = 14;
	uint32_t x138 = 76974432U;
	int32_t x139 = INT32_MIN;
	int16_t x140 = -5;
	static volatile int32_t t34 = -118;

	t34 = ((x137==x138)-(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int8_t x142 = -29;
	static int64_t x143 = INT64_MIN;
	static int32_t x144 = -1;
	static int32_t t35 = -7;

	t35 = ((x141==x142)-(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 5U;
	volatile uint64_t x146 = UINT64_MAX;
	int64_t x147 = INT64_MIN;
	int64_t x148 = -716619284543909870LL;
	volatile int32_t t36 = -3;

	t36 = ((x145==x146)-(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x151 = INT8_MAX;
	volatile uint64_t x152 = 58214LLU;
	volatile int32_t t37 = -191911837;

	t37 = ((x149==x150)-(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x154 = INT64_MAX;
	static int32_t t38 = 22;

	t38 = ((x153==x154)-(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int8_t x159 = -1;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -26844;

	t39 = ((x157==x158)-(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = -1LL;
	int8_t x163 = INT8_MAX;
	volatile int8_t x164 = -1;
	int32_t t40 = 4260347;

	t40 = ((x161==x162)-(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x167 = 3;
	uint64_t x168 = 266741135755815LLU;
	int32_t t41 = 4282;

	t41 = ((x165==x166)-(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x172 = INT8_MIN;

	t42 = ((x169==x170)-(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int32_t x175 = 188415;
	int64_t x176 = 2075539LL;
	int32_t t43 = 187;

	t43 = ((x173==x174)-(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	uint64_t x178 = 11165LLU;
	uint32_t x180 = UINT32_MAX;

	t44 = ((x177==x178)-(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	volatile uint64_t x182 = UINT64_MAX;
	uint32_t x183 = 94663911U;

	t45 = ((x181==x182)-(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = UINT8_MAX;
	uint64_t x186 = 266668602676471569LLU;
	volatile int16_t x188 = -1;
	int32_t t46 = -3;

	t46 = ((x185==x186)-(x187==x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x191 = UINT32_MAX;
	volatile int32_t t47 = 1;

	t47 = ((x189==x190)-(x191==x192));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MIN;

	t48 = ((x193==x194)-(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int64_t x199 = INT64_MAX;
	uint16_t x200 = 28660U;
	volatile int32_t t49 = -376;

	t49 = ((x197==x198)-(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 2U;
	static volatile int16_t x202 = INT16_MAX;
	uint64_t x203 = 29310748186304LLU;
	volatile int32_t t50 = 0;

	t50 = ((x201==x202)-(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 54145U;
	volatile int64_t x206 = 67439218LL;
	int8_t x207 = -23;
	int16_t x208 = 257;
	volatile int32_t t51 = 0;

	t51 = ((x205==x206)-(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x210 = -1;
	uint64_t x212 = 1131869057460110308LLU;
	volatile int32_t t52 = -2473236;

	t52 = ((x209==x210)-(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int8_t x214 = INT8_MAX;
	int8_t x215 = -22;
	uint32_t x216 = 7498946U;
	static int32_t t53 = -45;

	t53 = ((x213==x214)-(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -1LL;
	int64_t x218 = INT64_MIN;
	volatile int8_t x219 = INT8_MIN;
	volatile int32_t x220 = INT32_MAX;
	int32_t t54 = -126660898;

	t54 = ((x217==x218)-(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	volatile int8_t x223 = INT8_MIN;
	int8_t x224 = -1;
	int32_t t55 = 105157;

	t55 = ((x221==x222)-(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -12;
	int64_t x228 = INT64_MAX;
	static volatile int32_t t56 = -7;

	t56 = ((x225==x226)-(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = 22LL;
	volatile int64_t x232 = -886163683LL;
	volatile int32_t t57 = -866475813;

	t57 = ((x229==x230)-(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	volatile int16_t x234 = INT16_MIN;
	uint8_t x236 = 13U;
	volatile int32_t t58 = -105;

	t58 = ((x233==x234)-(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -11;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = INT8_MAX;
	static int16_t x240 = 0;
	int32_t t59 = -306017;

	t59 = ((x237==x238)-(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 3395U;

	t60 = ((x241==x242)-(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = 1;
	uint64_t x246 = 125951718445397LLU;
	int64_t x247 = 916909335169615790LL;
	int32_t x248 = INT32_MIN;

	t61 = ((x245==x246)-(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	volatile int16_t x250 = -501;
	volatile int32_t t62 = -29063559;

	t62 = ((x249==x250)-(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = -25;
	static int16_t x255 = INT16_MIN;
	int32_t x256 = -490;

	t63 = ((x253==x254)-(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 26U;
	static volatile int64_t x258 = 299LL;
	static volatile uint32_t x260 = UINT32_MAX;
	static volatile int32_t t64 = 58;

	t64 = ((x257==x258)-(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x264 = INT32_MAX;
	int32_t t65 = 22;

	t65 = ((x261==x262)-(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint8_t x266 = UINT8_MAX;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 2093176;

	t66 = ((x265==x266)-(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 59;
	int8_t x270 = INT8_MIN;
	static uint8_t x271 = 11U;
	int64_t x272 = 16262313238LL;
	volatile int32_t t67 = -297;

	t67 = ((x269==x270)-(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = 1851627688565LL;
	static int32_t t68 = 0;

	t68 = ((x273==x274)-(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -3321802692696LL;
	volatile uint64_t x279 = UINT64_MAX;
	uint32_t x280 = UINT32_MAX;
	static volatile int32_t t69 = 57037579;

	t69 = ((x277==x278)-(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	uint32_t x282 = 12283U;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = 477;

	t70 = ((x281==x282)-(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MAX;
	uint64_t x287 = 31318979563LLU;
	int64_t x288 = -139088681LL;
	volatile int32_t t71 = -6187132;

	t71 = ((x285==x286)-(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	static int8_t x290 = 5;
	int32_t t72 = 0;

	t72 = ((x289==x290)-(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;
	static int8_t x295 = 49;
	uint64_t x296 = 240LLU;
	int32_t t73 = -1;

	t73 = ((x293==x294)-(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = -3977950351LL;
	int16_t x298 = 1;
	static int16_t x299 = -1;
	static volatile int32_t t74 = 386260;

	t74 = ((x297==x298)-(x299==x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static int16_t x302 = INT16_MAX;
	static int64_t x304 = 58964070692765701LL;
	int32_t t75 = 1044615170;

	t75 = ((x301==x302)-(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x307 = INT64_MAX;
	int32_t x308 = -1;
	int32_t t76 = 77732396;

	t76 = ((x305==x306)-(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	int32_t x310 = INT32_MIN;
	uint16_t x311 = UINT16_MAX;
	volatile uint16_t x312 = 324U;
	volatile int32_t t77 = 538;

	t77 = ((x309==x310)-(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 1U;
	uint16_t x315 = 98U;
	int64_t x316 = INT64_MAX;
	int32_t t78 = 634;

	t78 = ((x313==x314)-(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 1559LL;
	volatile int8_t x318 = 62;
	uint32_t x319 = 443U;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t79 = 116;

	t79 = ((x317==x318)-(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = 4210439LLU;
	int8_t x323 = INT8_MAX;
	volatile int16_t x324 = INT16_MIN;
	int32_t t80 = -2772;

	t80 = ((x321==x322)-(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = 123579077260LL;
	int32_t x327 = -1;
	int32_t x328 = INT32_MAX;
	int32_t t81 = -1969;

	t81 = ((x325==x326)-(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 116U;
	int8_t x331 = INT8_MIN;
	volatile int32_t t82 = 707;

	t82 = ((x329==x330)-(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x333 = INT64_MIN;
	static uint16_t x334 = 195U;
	int64_t x335 = -1LL;
	int16_t x336 = -70;

	t83 = ((x333==x334)-(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = -1;
	static int64_t x339 = -348664784LL;
	int8_t x340 = -5;
	int32_t t84 = -408248667;

	t84 = ((x337==x338)-(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = INT8_MIN;
	static int8_t x342 = -1;
	volatile int64_t x343 = INT64_MAX;

	t85 = ((x341==x342)-(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = 2286U;
	volatile uint16_t x346 = UINT16_MAX;
	int16_t x347 = -1;
	uint16_t x348 = 1618U;
	volatile int32_t t86 = 385;

	t86 = ((x345==x346)-(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	static volatile int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MIN;
	volatile int8_t x352 = 0;
	volatile int32_t t87 = -90;

	t87 = ((x349==x350)-(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	int8_t x354 = INT8_MAX;
	static volatile int64_t x355 = INT64_MIN;
	uint32_t x356 = 226180U;
	static int32_t t88 = 351417413;

	t88 = ((x353==x354)-(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x359 = -1;
	volatile int32_t t89 = -360;

	t89 = ((x357==x358)-(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	static int8_t x362 = -1;
	int16_t x363 = INT16_MIN;
	volatile uint32_t x364 = UINT32_MAX;
	static int32_t t90 = 6496974;

	t90 = ((x361==x362)-(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = -1;
	int32_t t91 = -687639;

	t91 = ((x365==x366)-(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int64_t x370 = INT64_MAX;
	int8_t x371 = -1;
	int32_t x372 = -2027;
	int32_t t92 = 3908;

	t92 = ((x369==x370)-(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x373 = INT16_MIN;
	uint64_t x374 = UINT64_MAX;
	int32_t x375 = INT32_MAX;
	static volatile int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -348;

	t93 = ((x373==x374)-(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = 773740098U;
	volatile uint8_t x379 = UINT8_MAX;
	int32_t x380 = INT32_MAX;
	int32_t t94 = 1273649;

	t94 = ((x377==x378)-(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int16_t x382 = 63;
	volatile int8_t x383 = 0;
	uint32_t x384 = 228U;
	static int32_t t95 = 96;

	t95 = ((x381==x382)-(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	uint16_t x386 = 154U;
	uint64_t x387 = 253683767382812LLU;
	volatile uint64_t x388 = UINT64_MAX;
	volatile int32_t t96 = -94;

	t96 = ((x385==x386)-(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	int8_t x391 = -1;
	static uint32_t x392 = 8089712U;
	volatile int32_t t97 = 52495;

	t97 = ((x389==x390)-(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = INT16_MAX;
	int64_t x396 = 158590474466632LL;
	int32_t t98 = 2330763;

	t98 = ((x393==x394)-(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = -20;
	uint8_t x398 = UINT8_MAX;
	uint16_t x399 = UINT16_MAX;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -2;

	t99 = ((x397==x398)-(x399==x400));

	if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}
