#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 5719U;
static uint16_t x4 = 169U;
volatile uint32_t t0 = 15U;
uint64_t x8 = UINT64_MAX;
static volatile int64_t x20 = INT64_MAX;
int16_t x28 = INT16_MAX;
volatile int8_t x40 = -1;
int16_t x42 = -1;
uint8_t x43 = UINT8_MAX;
volatile int64_t t9 = -6113903LL;
int32_t x50 = INT32_MAX;
int64_t t11 = -12510680676LL;
uint64_t x62 = 154469117420LLU;
int64_t x63 = INT64_MIN;
static int32_t t15 = 1;
uint32_t x71 = 898U;
int16_t x72 = INT16_MAX;
volatile int32_t x84 = -1;
uint8_t x96 = 3U;
static int32_t x108 = -66;
int64_t t26 = 10LL;
static int32_t x115 = -1471;
int32_t x118 = -89;
static int64_t x119 = INT64_MAX;
static uint64_t x123 = 2976309LLU;
static volatile int32_t x133 = INT32_MAX;
static volatile uint64_t x140 = UINT64_MAX;
int64_t x146 = INT64_MIN;
int64_t t35 = 7787LL;
volatile int64_t t36 = -15841288LL;
volatile uint32_t x153 = 20U;
static volatile int64_t t37 = 12069578629820254LL;
int32_t x159 = INT32_MIN;
static int16_t x166 = INT16_MIN;
static uint64_t x173 = 132603878035953LLU;
volatile uint8_t x174 = UINT8_MAX;
uint16_t x178 = 1883U;
int8_t x182 = INT8_MIN;
volatile int64_t x184 = -1LL;
uint16_t x191 = 129U;
int8_t x192 = INT8_MIN;
uint16_t x193 = 95U;
static uint32_t x194 = 42587U;
int32_t t47 = -17;
int32_t x209 = INT32_MIN;
volatile uint64_t x216 = 1400897563826051388LLU;
static volatile uint64_t t51 = 5LLU;
static uint8_t x218 = 21U;
volatile int8_t x219 = INT8_MIN;
static int32_t t52 = -66292743;
volatile int32_t x221 = -63536;
uint64_t t53 = 2216LLU;
int64_t x225 = INT64_MIN;
volatile uint64_t t56 = 1064460838679644LLU;
uint16_t x239 = UINT16_MAX;
int8_t x244 = 5;
int8_t x250 = INT8_MIN;
static volatile int64_t t61 = -348LL;
uint8_t x257 = 14U;
volatile uint64_t x265 = 987974LLU;
volatile uint64_t t63 = 5350764443737084458LLU;
uint8_t x272 = 1U;
volatile int64_t x278 = 1058431592503935LL;
int64_t t66 = 1839223319LL;
int8_t x285 = -1;
volatile int64_t x290 = -2LL;
volatile int32_t t70 = 7;
static int64_t x301 = INT64_MIN;
int8_t x319 = INT8_MAX;
int8_t x329 = INT8_MIN;
int16_t x331 = INT16_MIN;
volatile uint32_t x335 = 9761U;
volatile uint32_t t79 = 52286786U;
int32_t t80 = -41182845;
int8_t x343 = INT8_MIN;
volatile uint64_t x344 = 209863606LLU;
volatile int32_t t83 = -185;
static uint16_t x365 = 15826U;
volatile int8_t x366 = INT8_MIN;
uint32_t t86 = 5U;
uint32_t t87 = 942676369U;
int32_t x375 = -1;
static int16_t x377 = INT16_MIN;
uint8_t x382 = UINT8_MAX;
static int8_t x390 = -2;
volatile int8_t x395 = 21;
uint16_t x396 = 5149U;
static int64_t x401 = INT64_MAX;
volatile int16_t x403 = 232;
uint8_t x404 = UINT8_MAX;
volatile int64_t t95 = 5537105797782LL;
int16_t x405 = INT16_MIN;
volatile int32_t x408 = INT32_MIN;
uint8_t x412 = 22U;
static int32_t x413 = 24;
int64_t x414 = INT64_MAX;
static volatile int32_t x417 = -1;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	uint32_t x3 = 50717U;

	t0 = ((x1/x2)+(x3/x4));

	if (t0 != 295U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint16_t x6 = 5U;
	static int16_t x7 = INT16_MIN;
	uint64_t t1 = 6493641367287404LLU;

	t1 = ((x5/x6)+(x7/x8));

	if (t1 != 16602069666338596455LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 45;
	uint8_t x10 = 15U;
	static uint32_t x11 = 1032312859U;
	volatile int8_t x12 = INT8_MIN;
	volatile uint32_t t2 = 7050873U;

	t2 = ((x9/x10)+(x11/x12));

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MIN;
	uint64_t x18 = 2816473LLU;
	uint16_t x19 = 20U;
	uint64_t t3 = 125LLU;

	t3 = ((x17/x18)+(x19/x20));

	if (t3 != 3274795120299LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -1LL;
	static uint32_t x22 = UINT32_MAX;
	int32_t x23 = -12;
	static uint64_t x24 = 1LLU;
	volatile uint64_t t4 = 14545809LLU;

	t4 = ((x21/x22)+(x23/x24));

	if (t4 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static volatile int16_t x26 = INT16_MIN;
	uint64_t x27 = 57267LLU;
	uint64_t t5 = 12751218LLU;

	t5 = ((x25/x26)+(x27/x28));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = INT8_MIN;
	static volatile int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t6 = -260577;

	t6 = ((x29/x30)+(x31/x32));

	if (t6 != 16842752) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	int8_t x34 = -1;
	static int64_t x35 = -1LL;
	uint8_t x36 = 28U;
	int64_t t7 = 1623883LL;

	t7 = ((x33/x34)+(x35/x36));

	if (t7 != -65535LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	static uint64_t x38 = UINT64_MAX;
	int16_t x39 = INT16_MIN;
	volatile uint64_t t8 = 129674684417292LLU;

	t8 = ((x37/x38)+(x39/x40));

	if (t8 != 32769LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = -157LL;
	int64_t x44 = -1LL;

	t9 = ((x41/x42)+(x43/x44));

	if (t9 != -98LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = 3;
	int32_t x46 = 198;
	int32_t x47 = 200796104;
	int32_t x48 = INT32_MAX;
	int32_t t10 = -61965;

	t10 = ((x45/x46)+(x47/x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x49 = UINT32_MAX;
	static int64_t x51 = INT64_MIN;
	int64_t x52 = 532407609558LL;

	t11 = ((x49/x50)+(x51/x52));

	if (t11 != -17323890LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x54 = -7LL;
	uint32_t x55 = 349U;
	static int8_t x56 = INT8_MIN;
	static volatile int64_t t12 = -66279871766921063LL;

	t12 = ((x53/x54)+(x55/x56));

	if (t12 != -613566756LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 46U;
	int64_t x58 = 3072877858735LL;
	volatile int8_t x59 = 30;
	static int32_t x60 = 3;
	volatile int64_t t13 = 18316669775632LL;

	t13 = ((x57/x58)+(x59/x60));

	if (t13 != 10LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = 30;
	int64_t x64 = INT64_MIN;
	uint64_t t14 = 15620424808254517LLU;

	t14 = ((x61/x62)+(x63/x64));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int32_t x66 = -1;
	int32_t x67 = -1;
	volatile int8_t x68 = INT8_MAX;

	t15 = ((x65/x66)+(x67/x68));

	if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -13010912;
	int32_t x70 = 6793;
	volatile uint32_t t16 = 25U;

	t16 = ((x69/x70)+(x71/x72));

	if (t16 != 4294965381U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	int32_t x74 = INT32_MIN;
	int64_t x75 = INT64_MAX;
	static int32_t x76 = INT32_MIN;
	int64_t t17 = -8612170502433LL;

	t17 = ((x73/x74)+(x75/x76));

	if (t17 != -4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x77 = 806056478710678LL;
	static int64_t x78 = INT64_MAX;
	int16_t x79 = INT16_MIN;
	volatile int32_t x80 = -1;
	volatile int64_t t18 = 408823675040018LL;

	t18 = ((x77/x78)+(x79/x80));

	if (t18 != 32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x81 = 5880U;
	static volatile uint8_t x82 = 59U;
	int8_t x83 = INT8_MIN;
	static uint32_t t19 = 3314U;

	t19 = ((x81/x82)+(x83/x84));

	if (t19 != 227U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = INT8_MAX;
	volatile int8_t x86 = INT8_MIN;
	uint32_t x87 = 385787U;
	int32_t x88 = 507;
	volatile uint32_t t20 = 115116U;

	t20 = ((x85/x86)+(x87/x88));

	if (t20 != 760U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = UINT16_MAX;
	volatile int64_t x90 = INT64_MIN;
	uint64_t x91 = 1017713492998752LLU;
	volatile int32_t x92 = INT32_MAX;
	uint64_t t21 = 911610LLU;

	t21 = ((x89/x90)+(x91/x92));

	if (t21 != 473909LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 16657271LL;
	uint32_t x94 = 27978U;
	static volatile int32_t x95 = -1;
	volatile int64_t t22 = 3358166869LL;

	t22 = ((x93/x94)+(x95/x96));

	if (t22 != 595LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 62084499U;
	int64_t x98 = -1LL;
	volatile int8_t x99 = 13;
	uint32_t x100 = UINT32_MAX;
	int64_t t23 = 643234821445412940LL;

	t23 = ((x97/x98)+(x99/x100));

	if (t23 != -62084499LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -1LL;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;
	volatile int64_t t24 = 31320298858428LL;

	t24 = ((x101/x102)+(x103/x104));

	if (t24 != 256LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x105 = -19177956089LL;
	int64_t x106 = -200043407972909954LL;
	int16_t x107 = INT16_MIN;
	volatile int64_t t25 = 3226485201545616LL;

	t25 = ((x105/x106)+(x107/x108));

	if (t25 != 496LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = 213464522570LL;
	int32_t x110 = INT32_MAX;
	int32_t x111 = -1;
	int16_t x112 = 1;

	t26 = ((x109/x110)+(x111/x112));

	if (t26 != 98LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -475608333165416970LL;
	int8_t x114 = INT8_MIN;
	int8_t x116 = -1;
	static int64_t t27 = -1044557LL;

	t27 = ((x113/x114)+(x115/x116));

	if (t27 != 3715690102856291LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	int16_t x120 = INT16_MIN;
	volatile int64_t t28 = 242605539620298LL;

	t28 = ((x117/x118)+(x119/x120));

	if (t28 != -281474976710654LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = -1LL;
	int16_t x122 = INT16_MAX;
	static uint8_t x124 = 31U;
	uint64_t t29 = 2040459922155570LLU;

	t29 = ((x121/x122)+(x123/x124));

	if (t29 != 96009LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 90275034978LLU;
	uint64_t x126 = UINT64_MAX;
	static int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MAX;
	volatile uint64_t t30 = 26371463LLU;

	t30 = ((x125/x126)+(x127/x128));

	if (t30 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x130 = UINT64_MAX;
	int64_t x131 = 1935933126807326LL;
	uint32_t x132 = 144069U;
	volatile uint64_t t31 = 12056107378592LLU;

	t31 = ((x129/x130)+(x131/x132));

	if (t31 != 13437541225LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	int64_t t32 = -16707948107221768LL;

	t32 = ((x133/x134)+(x135/x136));

	if (t32 != 256LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x137 = 3260239288378818LLU;
	int16_t x138 = INT16_MIN;
	static volatile int8_t x139 = INT8_MIN;
	uint64_t t33 = 252842381415LLU;

	t33 = ((x137/x138)+(x139/x140));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	static int32_t x142 = INT32_MIN;
	uint64_t x143 = 113969LLU;
	int8_t x144 = -1;
	volatile uint64_t t34 = 52510650208500LLU;

	t34 = ((x141/x142)+(x143/x144));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	int64_t x147 = -1LL;
	uint16_t x148 = UINT16_MAX;

	t35 = ((x145/x146)+(x147/x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MIN;
	uint16_t x151 = UINT16_MAX;
	uint32_t x152 = UINT32_MAX;

	t36 = ((x149/x150)+(x151/x152));

	if (t36 != 4294967296LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x154 = UINT16_MAX;
	int64_t x155 = INT64_MAX;
	static int16_t x156 = -1;

	t37 = ((x153/x154)+(x155/x156));

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = INT64_MIN;
	static volatile uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t38 = 4051969256458687715LLU;

	t38 = ((x157/x158)+(x159/x160));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x161 = -1LL;
	int16_t x162 = INT16_MAX;
	uint32_t x163 = 4758U;
	int16_t x164 = -1657;
	int64_t t39 = -24760LL;

	t39 = ((x161/x162)+(x163/x164));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 13U;
	int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MAX;
	volatile uint32_t t40 = 1030871784U;

	t40 = ((x165/x166)+(x167/x168));

	if (t40 != 4294901758U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = UINT8_MAX;
	uint32_t x170 = 2468U;
	int16_t x171 = INT16_MIN;
	int8_t x172 = -16;
	uint32_t t41 = 871U;

	t41 = ((x169/x170)+(x171/x172));

	if (t41 != 2048U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x175 = 24;
	int64_t x176 = 191408040LL;
	uint64_t t42 = 13LLU;

	t42 = ((x173/x174)+(x175/x176));

	if (t42 != 520015207984LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x177 = INT8_MIN;
	int32_t x179 = -1;
	int8_t x180 = INT8_MAX;
	volatile int32_t t43 = 430;

	t43 = ((x177/x178)+(x179/x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x181 = UINT16_MAX;
	static uint64_t x183 = UINT64_MAX;
	static volatile uint64_t t44 = 3LLU;

	t44 = ((x181/x182)+(x183/x184));

	if (t44 != 18446744073709551106LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x189 = 106966948;
	uint8_t x190 = UINT8_MAX;
	int32_t t45 = -3364;

	t45 = ((x189/x190)+(x191/x192));

	if (t45 != 419477) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x195 = 345U;
	uint8_t x196 = 81U;
	volatile uint32_t t46 = 12507111U;

	t46 = ((x193/x194)+(x195/x196));

	if (t46 != 4U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 299U;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MIN;
	uint16_t x200 = 500U;

	t47 = ((x197/x198)+(x199/x200));

	if (t47 != -4294969) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	int8_t x202 = -1;
	int16_t x203 = INT16_MIN;
	volatile int8_t x204 = INT8_MIN;
	int32_t t48 = 1;

	t48 = ((x201/x202)+(x203/x204));

	if (t48 != 129) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -2863;
	uint64_t x206 = UINT64_MAX;
	volatile int16_t x207 = 1;
	int32_t x208 = INT32_MAX;
	volatile uint64_t t49 = 249449LLU;

	t49 = ((x205/x206)+(x207/x208));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x210 = 27U;
	int64_t x211 = 795938158LL;
	static volatile uint16_t x212 = UINT16_MAX;
	volatile int64_t t50 = 0LL;

	t50 = ((x209/x210)+(x211/x212));

	if (t50 != 79548576LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -1;
	static uint8_t x214 = 11U;
	int8_t x215 = -1;

	t51 = ((x213/x214)+(x215/x216));

	if (t51 != 13LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = 30U;
	uint8_t x220 = 11U;

	t52 = ((x217/x218)+(x219/x220));

	if (t52 != -10) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MAX;
	static volatile int64_t x224 = INT64_MIN;

	t53 = ((x221/x222)+(x223/x224));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x226 = 122U;
	uint64_t x227 = 1764LLU;
	volatile int64_t x228 = INT64_MAX;
	volatile uint64_t t54 = 127077805212201LLU;

	t54 = ((x225/x226)+(x227/x228));

	if (t54 != 18371142663571397716LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = -58;
	static uint8_t x230 = UINT8_MAX;
	int64_t x231 = 62893244952549225LL;
	volatile uint64_t x232 = 31213759789679300LLU;
	uint64_t t55 = 425LLU;

	t55 = ((x229/x230)+(x231/x232));

	if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 1U;
	static volatile int8_t x234 = INT8_MIN;
	uint64_t x235 = 915LLU;
	static uint16_t x236 = 790U;

	t56 = ((x233/x234)+(x235/x236));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x237 = 55;
	uint8_t x238 = 23U;
	uint32_t x240 = 2566777U;
	volatile uint32_t t57 = 2U;

	t57 = ((x237/x238)+(x239/x240));

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = UINT64_MAX;
	static int64_t x242 = -1LL;
	int32_t x243 = -1;
	uint64_t t58 = 33268477596169LLU;

	t58 = ((x241/x242)+(x243/x244));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MIN;
	volatile uint64_t x246 = 239986536366964585LLU;
	int8_t x247 = INT8_MIN;
	int8_t x248 = -2;
	volatile uint64_t t59 = 62LLU;

	t59 = ((x245/x246)+(x247/x248));

	if (t59 != 102LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x249 = -1LL;
	uint32_t x251 = 16569105U;
	uint16_t x252 = UINT16_MAX;
	int64_t t60 = 3545LL;

	t60 = ((x249/x250)+(x251/x252));

	if (t60 != 252LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = -219;
	volatile int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	volatile uint32_t x256 = UINT32_MAX;

	t61 = ((x253/x254)+(x255/x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x258 = UINT8_MAX;
	volatile uint8_t x259 = 1U;
	static volatile int8_t x260 = INT8_MIN;
	int32_t t62 = 3063322;

	t62 = ((x257/x258)+(x259/x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x266 = UINT64_MAX;
	int32_t x267 = 0;
	uint16_t x268 = 91U;

	t63 = ((x265/x266)+(x267/x268));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x269 = 21U;
	int8_t x270 = -1;
	int32_t x271 = -11;
	int32_t t64 = 4;

	t64 = ((x269/x270)+(x271/x272));

	if (t64 != -32) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x273 = UINT64_MAX;
	static uint32_t x274 = 10398817U;
	int64_t x275 = 295LL;
	int16_t x276 = -10;
	volatile uint64_t t65 = 4819872LLU;

	t65 = ((x273/x274)+(x275/x276));

	if (t65 != 1773927175890LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x277 = 13812324U;
	int16_t x279 = -6448;
	int16_t x280 = INT16_MIN;

	t66 = ((x277/x278)+(x279/x280));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x281 = UINT64_MAX;
	uint16_t x282 = UINT16_MAX;
	static int8_t x283 = -1;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t67 = 13774LLU;

	t67 = ((x281/x282)+(x283/x284));

	if (t67 != 281479271743490LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x286 = -1;
	int16_t x287 = INT16_MAX;
	static volatile int32_t x288 = -1;
	static volatile int32_t t68 = -1;

	t68 = ((x285/x286)+(x287/x288));

	if (t68 != -32766) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = 169;
	int64_t x291 = 96993438440061LL;
	volatile uint32_t x292 = 90693U;
	int64_t t69 = -488348826LL;

	t69 = ((x289/x290)+(x291/x292));

	if (t69 != 1069469868LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = INT32_MIN;
	static int16_t x294 = 96;
	int32_t x295 = -1;
	int16_t x296 = INT16_MAX;

	t70 = ((x293/x294)+(x295/x296));

	if (t70 != -22369621) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x302 = 97U;
	static int8_t x303 = INT8_MIN;
	static uint64_t x304 = 1842991LLU;
	uint64_t t71 = 556LLU;

	t71 = ((x301/x302)+(x303/x304));

	if (t71 != 18351667773185360176LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x305 = INT64_MIN;
	uint32_t x306 = UINT32_MAX;
	uint8_t x307 = 0U;
	static volatile int16_t x308 = INT16_MAX;
	int64_t t72 = 544075145339654LL;

	t72 = ((x305/x306)+(x307/x308));

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = INT64_MIN;
	volatile int32_t x310 = INT32_MAX;
	static int64_t x311 = -1LL;
	int64_t x312 = INT64_MIN;
	static volatile int64_t t73 = -3864088240839525LL;

	t73 = ((x309/x310)+(x311/x312));

	if (t73 != -4294967298LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x313 = INT8_MIN;
	uint8_t x314 = 53U;
	int32_t x315 = INT32_MIN;
	int64_t x316 = -1LL;
	int64_t t74 = -214944695733082563LL;

	t74 = ((x313/x314)+(x315/x316));

	if (t74 != 2147483646LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MAX;
	int32_t x318 = INT32_MIN;
	int64_t x320 = 3587896LL;
	int64_t t75 = 1451651078632LL;

	t75 = ((x317/x318)+(x319/x320));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x321 = 3U;
	static volatile uint64_t x322 = 3LLU;
	static int32_t x323 = INT32_MIN;
	int8_t x324 = -21;
	volatile uint64_t t76 = 95144437424029966LLU;

	t76 = ((x321/x322)+(x323/x324));

	if (t76 != 102261127LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = INT8_MAX;
	uint64_t x326 = UINT64_MAX;
	volatile uint8_t x327 = UINT8_MAX;
	int16_t x328 = INT16_MAX;
	uint64_t t77 = 279LLU;

	t77 = ((x325/x326)+(x327/x328));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x330 = INT32_MIN;
	int32_t x332 = -1;
	volatile int32_t t78 = -375;

	t78 = ((x329/x330)+(x331/x332));

	if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = 830827U;
	static uint16_t x336 = UINT16_MAX;

	t79 = ((x333/x334)+(x335/x336));

	if (t79 != 5169U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = -1;
	int16_t x338 = 2218;
	uint8_t x339 = UINT8_MAX;
	static int16_t x340 = -13843;

	t80 = ((x337/x338)+(x339/x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = 0U;
	static int32_t x342 = -7628557;
	uint64_t t81 = 47348026412437929LLU;

	t81 = ((x341/x342)+(x343/x344));

	if (t81 != 87898728251LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = 1;
	int16_t x346 = -768;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = 6;
	int32_t t82 = -2930;

	t82 = ((x345/x346)+(x347/x348));

	if (t82 != 42) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 1U;
	static int16_t x350 = INT16_MAX;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = INT16_MIN;

	t83 = ((x349/x350)+(x351/x352));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x357 = INT64_MIN;
	uint64_t x358 = 12353446LLU;
	volatile uint8_t x359 = 1U;
	uint32_t x360 = 980U;
	volatile uint64_t t84 = 112872486LLU;

	t84 = ((x357/x358)+(x359/x360));

	if (t84 != 746623414782LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = -178892;
	uint8_t x362 = 105U;
	static volatile uint16_t x363 = UINT16_MAX;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t85 = 34571398;

	t85 = ((x361/x362)+(x363/x364));

	if (t85 != -1702) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x367 = -1;
	static uint32_t x368 = 25216U;

	t86 = ((x365/x366)+(x367/x368));

	if (t86 != 170204U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x369 = -41;
	int32_t x370 = -1;
	int16_t x371 = INT16_MIN;
	volatile uint32_t x372 = UINT32_MAX;

	t87 = ((x369/x370)+(x371/x372));

	if (t87 != 41U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = -8948699829LL;
	uint16_t x374 = 254U;
	int8_t x376 = INT8_MAX;
	static int64_t t88 = 13292134851LL;

	t88 = ((x373/x374)+(x375/x376));

	if (t88 != -35231101LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x378 = -1LL;
	int64_t x379 = 18467188978LL;
	static int16_t x380 = -1;
	int64_t t89 = -5830218839334LL;

	t89 = ((x377/x378)+(x379/x380));

	if (t89 != -18467156210LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x381 = UINT16_MAX;
	uint32_t x383 = 7025U;
	int64_t x384 = INT64_MAX;
	int64_t t90 = -8851687195345LL;

	t90 = ((x381/x382)+(x383/x384));

	if (t90 != 257LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x385 = INT8_MIN;
	int64_t x386 = 35692LL;
	volatile int8_t x387 = 6;
	uint64_t x388 = 790070931LLU;
	volatile uint64_t t91 = 2422380279368LLU;

	t91 = ((x385/x386)+(x387/x388));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x389 = INT8_MAX;
	static int64_t x391 = -1LL;
	int8_t x392 = INT8_MAX;
	int64_t t92 = -30760183LL;

	t92 = ((x389/x390)+(x391/x392));

	if (t92 != -63LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x393 = INT8_MAX;
	uint16_t x394 = UINT16_MAX;
	volatile int32_t t93 = 12870;

	t93 = ((x393/x394)+(x395/x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x397 = INT8_MAX;
	static int64_t x398 = -1LL;
	static uint64_t x399 = UINT64_MAX;
	uint64_t x400 = 1983LLU;
	volatile uint64_t t94 = 506934353876LLU;

	t94 = ((x397/x398)+(x399/x400));

	if (t94 != 9302442800660262LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x402 = -1LL;

	t95 = ((x401/x402)+(x403/x404));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x406 = 381U;
	int16_t x407 = INT16_MIN;
	volatile uint32_t t96 = 247088932U;

	t96 = ((x405/x406)+(x407/x408));

	if (t96 != 11272794U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = UINT16_MAX;
	int32_t x410 = INT32_MIN;
	static volatile uint64_t x411 = UINT64_MAX;
	uint64_t t97 = 1LLU;

	t97 = ((x409/x410)+(x411/x412));

	if (t97 != 838488366986797800LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MIN;
	int64_t t98 = -24834538767606510LL;

	t98 = ((x413/x414)+(x415/x416));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x418 = UINT8_MAX;
	static int8_t x419 = INT8_MIN;
	int64_t x420 = -1LL;
	int64_t t99 = -33823849881LL;

	t99 = ((x417/x418)+(x419/x420));

	if (t99 != 128LL) { NG(); } else { ; }
	
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
