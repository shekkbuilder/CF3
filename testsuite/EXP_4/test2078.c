#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -6;
static int8_t x8 = -3;
int16_t x11 = 0;
uint64_t t2 = 591681634628244LLU;
static volatile uint64_t t3 = 3458525514094LLU;
int16_t x18 = INT16_MIN;
uint64_t x19 = 11814370516LLU;
uint16_t x20 = UINT16_MAX;
static int8_t x23 = INT8_MIN;
volatile int8_t x27 = 0;
static int16_t x31 = INT16_MAX;
volatile int32_t t7 = -161744108;
volatile uint32_t x37 = UINT32_MAX;
static uint16_t x44 = UINT16_MAX;
int64_t t12 = 227190540912LL;
uint8_t x61 = 3U;
int64_t x62 = INT64_MIN;
volatile uint64_t x63 = UINT64_MAX;
int16_t x67 = 958;
int64_t x69 = -7LL;
volatile int64_t x71 = INT64_MIN;
static int16_t x72 = INT16_MAX;
int16_t x74 = 501;
volatile uint32_t x83 = 22U;
uint8_t x89 = 68U;
uint32_t x94 = UINT32_MAX;
volatile int64_t x96 = -1LL;
int64_t x97 = INT64_MIN;
int64_t x98 = 8994462150LL;
volatile int32_t x108 = INT32_MIN;
int8_t x113 = -1;
uint16_t x116 = UINT16_MAX;
volatile uint64_t t27 = 2080LLU;
static volatile int16_t x117 = -4;
volatile int64_t t29 = -107163924608LL;
uint32_t x128 = 59528U;
int8_t x135 = INT8_MIN;
volatile int16_t x138 = -1;
volatile int64_t t32 = -1542LL;
int64_t x149 = -1LL;
static volatile int16_t x150 = 5063;
volatile int64_t x155 = INT64_MAX;
volatile int64_t t36 = -3LL;
volatile int16_t x160 = INT16_MAX;
volatile int32_t x161 = -1;
int16_t x162 = 3;
int64_t t38 = 656288LL;
int16_t x167 = -1;
int32_t t41 = -72;
uint32_t x198 = UINT32_MAX;
int64_t t46 = -6181025LL;
volatile uint64_t x207 = 385176LLU;
static int16_t x218 = -15;
uint32_t x223 = UINT32_MAX;
int64_t x229 = -1LL;
uint32_t x231 = 6612415U;
uint32_t x242 = UINT32_MAX;
uint16_t x246 = UINT16_MAX;
int8_t x247 = -1;
static volatile int64_t t58 = -38863567256932LL;
volatile uint16_t x249 = UINT16_MAX;
static uint32_t x250 = UINT32_MAX;
int16_t x256 = INT16_MIN;
volatile uint64_t t60 = 16031236939LLU;
int32_t x257 = INT32_MAX;
int32_t t61 = -1945;
volatile int64_t x264 = 10774088561LL;
static volatile int64_t t62 = -4914039500983LL;
int8_t x267 = -6;
static int8_t x268 = INT8_MIN;
int8_t x279 = INT8_MIN;
volatile int8_t x282 = INT8_MAX;
uint32_t x284 = UINT32_MAX;
static int32_t x288 = -1;
int16_t x295 = INT16_MIN;
volatile int32_t x296 = INT32_MIN;
uint64_t t70 = 842420LLU;
volatile uint32_t x305 = 26747U;
int64_t x306 = -1LL;
volatile uint64_t x308 = 753370LLU;
int8_t x310 = INT8_MIN;
uint16_t x313 = 119U;
uint32_t t74 = 57U;
volatile int64_t t75 = 16042908031584164LL;
volatile int32_t x321 = INT32_MAX;
volatile int64_t t76 = 4221108LL;
static volatile int64_t x326 = -1LL;
static volatile int8_t x327 = INT8_MAX;
static int64_t x328 = 8303LL;
volatile int64_t x330 = INT64_MAX;
int32_t x338 = -1;
int16_t x339 = INT16_MIN;
int32_t t80 = -594240;
int32_t x341 = INT32_MIN;
int16_t x344 = INT16_MIN;
volatile int16_t x351 = -1;
int8_t x355 = -1;
volatile int32_t x357 = INT32_MIN;
uint32_t x360 = 788480963U;
static uint8_t x362 = 4U;
static uint64_t t86 = 3132188823087543LLU;
int16_t x369 = INT16_MIN;
volatile uint32_t x377 = 3056U;
static int32_t x383 = -453050455;
volatile uint64_t t91 = 4720180167056311162LLU;
uint32_t x392 = UINT32_MAX;
int16_t x409 = INT16_MIN;
volatile int64_t t97 = 6940324LL;
volatile uint64_t t99 = 199814567216LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static int16_t x3 = INT16_MIN;
	int16_t x4 = 1942;
	uint32_t t0 = 41659366U;

	t0 = (x1&(x2/(x3^x4)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1LLU;
	int16_t x6 = INT16_MIN;
	static volatile int16_t x7 = -1;
	static volatile uint64_t t1 = 8306731866894LLU;

	t1 = (x5&(x6/(x7^x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint64_t x10 = UINT64_MAX;
	int32_t x12 = INT32_MAX;

	t2 = (x9&(x10/(x11^x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	uint32_t x14 = 197160747U;
	int64_t x15 = -1213261088LL;
	int64_t x16 = INT64_MIN;

	t3 = (x13&(x14/(x15^x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 158;
	uint64_t t4 = 210897269LLU;

	t4 = (x17&(x18/(x19^x20)));

	if (t4 != 152LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	static volatile int32_t x22 = INT32_MIN;
	uint64_t x24 = UINT64_MAX;
	static volatile uint64_t t5 = 39836652444591LLU;

	t5 = (x21&(x22/(x23^x24)));

	if (t5 != 524188921LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static int32_t x26 = INT32_MAX;
	volatile int8_t x28 = -1;
	volatile int32_t t6 = INT32_MIN;

	t6 = (x25&(x26/(x27^x28)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 0;
	uint8_t x30 = UINT8_MAX;
	int32_t x32 = INT32_MIN;

	t7 = (x29&(x30/(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = -1;
	int64_t x35 = -577348LL;
	int64_t x36 = -1LL;
	int64_t t8 = -140LL;

	t8 = (x33&(x34/(x35^x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = 177LL;
	int32_t x39 = INT32_MAX;
	volatile uint32_t x40 = UINT32_MAX;
	volatile int64_t t9 = 5035781429113859LL;

	t9 = (x37&(x38/(x39^x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	uint8_t x42 = 0U;
	int64_t x43 = INT64_MIN;
	int64_t t10 = 1400930129252404967LL;

	t10 = (x41&(x42/(x43^x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MIN;
	uint16_t x50 = 435U;
	int32_t x51 = -806231;
	volatile uint16_t x52 = 3U;
	volatile int32_t t11 = 7;

	t11 = (x49&(x50/(x51^x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x53 = 3151U;
	int64_t x54 = INT64_MIN;
	int8_t x55 = -1;
	int8_t x56 = INT8_MAX;

	t12 = (x53&(x54/(x55^x56)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MAX;
	uint64_t x59 = 920359LLU;
	int16_t x60 = -1;
	volatile uint64_t t13 = 42776225859482503LLU;

	t13 = (x57&(x58/(x59^x60)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x64 = 0;
	volatile uint64_t t14 = 64LLU;

	t14 = (x61&(x62/(x63^x64)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	volatile int64_t x66 = INT64_MIN;
	volatile int8_t x68 = INT8_MIN;
	volatile int64_t t15 = -132790972LL;

	t15 = (x65&(x66/(x67^x68)));

	if (t15 != 9587704820015359LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x70 = INT32_MIN;
	int64_t t16 = 4155975469746048LL;

	t16 = (x69&(x70/(x71^x72)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 6749LL;
	static int64_t x75 = -16264LL;
	int8_t x76 = 1;
	int64_t t17 = 992LL;

	t17 = (x73&(x74/(x75^x76)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x77 = -1LL;
	int16_t x78 = INT16_MIN;
	volatile int64_t x79 = INT64_MIN;
	uint8_t x80 = 7U;
	int64_t t18 = -123392LL;

	t18 = (x77&(x78/(x79^x80)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x81 = 1;
	static uint64_t x82 = 14LLU;
	uint8_t x84 = 29U;
	uint64_t t19 = 22304252121299744LLU;

	t19 = (x81&(x82/(x83^x84)));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x85 = 2;
	static uint16_t x86 = 121U;
	int8_t x87 = INT8_MAX;
	static int8_t x88 = -1;
	int32_t t20 = -2338392;

	t20 = (x85&(x86/(x87^x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x90 = INT16_MAX;
	int16_t x91 = -1;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t21 = -8149;

	t21 = (x89&(x90/(x91^x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = 1155;
	volatile uint16_t x95 = 1630U;
	int64_t t22 = -1121LL;

	t22 = (x93&(x94/(x95^x96)));

	if (t22 != 131LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x99 = -1;
	int32_t x100 = -1092813;
	int64_t t23 = -357577112LL;

	t23 = (x97&(x98/(x99^x100)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MIN;
	volatile int32_t x102 = INT32_MAX;
	uint16_t x103 = 588U;
	int16_t x104 = INT16_MIN;
	int32_t t24 = INT32_MIN;

	t24 = (x101&(x102/(x103^x104)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	volatile int8_t x106 = -1;
	int32_t x107 = -1;
	int32_t t25 = -748;

	t25 = (x105&(x106/(x107^x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = UINT16_MAX;
	uint32_t x110 = 114152U;
	uint8_t x111 = UINT8_MAX;
	uint64_t x112 = 1LLU;
	static volatile uint64_t t26 = 143494LLU;

	t26 = (x109&(x110/(x111^x112)));

	if (t26 != 449LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = INT8_MAX;

	t27 = (x113&(x114/(x115^x116)));

	if (t27 != 282025808367624LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x118 = 302176LLU;
	int16_t x119 = INT16_MIN;
	uint32_t x120 = UINT32_MAX;
	uint64_t t28 = 18497724230856529LLU;

	t28 = (x117&(x118/(x119^x120)));

	if (t28 != 8LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	volatile int64_t x122 = INT64_MAX;
	uint16_t x123 = 7U;
	volatile uint32_t x124 = 8712U;

	t29 = (x121&(x122/(x123^x124)));

	if (t29 != 1057847463798001LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = 5311U;
	uint16_t x126 = 978U;
	static volatile int16_t x127 = INT16_MIN;
	static uint32_t t30 = 12U;

	t30 = (x125&(x126/(x127^x128)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -1;
	int32_t x134 = INT32_MIN;
	uint64_t x136 = 12734758LLU;
	uint64_t t31 = 14662LLU;

	t31 = (x133&(x134/(x135^x136)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MIN;
	volatile uint32_t x139 = 149423U;
	static volatile uint32_t x140 = 2006U;

	t32 = (x137&(x138/(x139^x140)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 60283620U;
	uint16_t x142 = 879U;
	int32_t x143 = INT32_MIN;
	uint8_t x144 = UINT8_MAX;
	uint32_t t33 = 5U;

	t33 = (x141&(x142/(x143^x144)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x145 = 1LL;
	int16_t x146 = -1;
	int8_t x147 = INT8_MIN;
	volatile int64_t x148 = -5LL;
	int64_t t34 = -6931057LL;

	t34 = (x145&(x146/(x147^x148)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x151 = INT8_MAX;
	static uint8_t x152 = 38U;
	volatile int64_t t35 = -34450993512720085LL;

	t35 = (x149&(x150/(x151^x152)));

	if (t35 != 56LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 12U;
	volatile int64_t x154 = 21461903566329LL;
	int8_t x156 = INT8_MIN;

	t36 = (x153&(x154/(x155^x156)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -1;
	int64_t x158 = INT64_MAX;
	int64_t x159 = INT64_MAX;
	static int64_t t37 = -139446LL;

	t37 = (x157&(x158/(x159^x160)));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x163 = INT32_MIN;
	int64_t x164 = 71LL;

	t38 = (x161&(x162/(x163^x164)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = 419LL;
	int8_t x168 = INT8_MIN;
	int64_t t39 = -51618801655LL;

	t39 = (x165&(x166/(x167^x168)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x169 = INT32_MIN;
	volatile int32_t x170 = INT32_MIN;
	uint32_t x171 = 2218U;
	static int64_t x172 = INT64_MIN;
	volatile int64_t t40 = -29684293316217973LL;

	t40 = (x169&(x170/(x171^x172)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = 254;
	uint8_t x174 = 56U;
	int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MIN;

	t41 = (x173&(x174/(x175^x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x177 = 21LLU;
	int32_t x178 = INT32_MIN;
	static uint16_t x179 = 1808U;
	int64_t x180 = INT64_MIN;
	uint64_t t42 = 1LLU;

	t42 = (x177&(x178/(x179^x180)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = 2U;
	int64_t x188 = INT64_MIN;
	int64_t t43 = 6360552LL;

	t43 = (x185&(x186/(x187^x188)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MAX;
	uint32_t x190 = 1U;
	uint16_t x191 = 1U;
	int16_t x192 = INT16_MIN;
	uint32_t t44 = 8755692U;

	t44 = (x189&(x190/(x191^x192)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MAX;
	int64_t x195 = -101062600LL;
	int64_t x196 = 11132537LL;
	int64_t t45 = -7791001556LL;

	t45 = (x193&(x194/(x195^x196)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MAX;
	int32_t x199 = INT32_MAX;
	int16_t x200 = -1;

	t46 = (x197&(x198/(x199^x200)));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MAX;
	volatile int16_t x202 = -1;
	static uint16_t x203 = 30594U;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t47 = 32673438846189LLU;

	t47 = (x201&(x202/(x203^x204)));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x205 = 4;
	int64_t x206 = 79977478664395LL;
	static int64_t x208 = INT64_MIN;
	static volatile uint64_t t48 = 839894589200LLU;

	t48 = (x205&(x206/(x207^x208)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = 100U;
	static int8_t x210 = 3;
	int16_t x211 = -1;
	volatile uint32_t x212 = 20254U;
	static uint32_t t49 = 361U;

	t49 = (x209&(x210/(x211^x212)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	int8_t x216 = 0;
	int32_t t50 = -130;

	t50 = (x213&(x214/(x215^x216)));

	if (t50 != 256) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x217 = INT16_MIN;
	volatile int32_t x219 = INT32_MAX;
	volatile int8_t x220 = INT8_MIN;
	int32_t t51 = 32;

	t51 = (x217&(x218/(x219^x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = INT8_MIN;
	static int32_t x222 = INT32_MAX;
	volatile int8_t x224 = INT8_MAX;
	volatile uint32_t t52 = 2U;

	t52 = (x221&(x222/(x223^x224)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x225 = INT64_MIN;
	uint16_t x226 = UINT16_MAX;
	int64_t x227 = 3249250264LL;
	int32_t x228 = INT32_MAX;
	int64_t t53 = 11585LL;

	t53 = (x225&(x226/(x227^x228)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x230 = -6LL;
	int16_t x232 = -45;
	int64_t t54 = -10740LL;

	t54 = (x229&(x230/(x231^x232)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = 145578582LL;
	int32_t x234 = INT32_MAX;
	uint8_t x235 = UINT8_MAX;
	uint64_t x236 = 3922793421301LLU;
	volatile uint64_t t55 = 242554879LLU;

	t55 = (x233&(x234/(x235^x236)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -24;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MAX;
	volatile int64_t t56 = -18379LL;

	t56 = (x237&(x238/(x239^x240)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = INT64_MIN;
	uint16_t x243 = 11U;
	static int16_t x244 = 1147;
	int64_t t57 = -26455LL;

	t57 = (x241&(x242/(x243^x244)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MIN;
	uint16_t x248 = UINT16_MAX;

	t58 = (x245&(x246/(x247^x248)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x251 = 2056LL;
	uint8_t x252 = UINT8_MAX;
	int64_t t59 = -14116LL;

	t59 = (x249&(x250/(x251^x252)));

	if (t59 != 36437LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = UINT64_MAX;
	int8_t x254 = INT8_MIN;
	uint16_t x255 = 0U;

	t60 = (x253&(x254/(x255^x256)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x258 = 416;
	volatile int8_t x259 = INT8_MIN;
	static int32_t x260 = -1;

	t61 = (x257&(x258/(x259^x260)));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = -1;
	static int64_t x262 = 138062481LL;
	int64_t x263 = INT64_MIN;

	t62 = (x261&(x262/(x263^x264)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x265 = 802891837140309LLU;
	int64_t x266 = INT64_MAX;
	volatile uint64_t t63 = 0LLU;

	t63 = (x265&(x266/(x267^x268)));

	if (t63 != 160600949563652LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MAX;
	int16_t x270 = -1;
	int64_t x271 = INT64_MIN;
	uint64_t x272 = UINT64_MAX;
	static volatile uint64_t t64 = 15489LLU;

	t64 = (x269&(x270/(x271^x272)));

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x273 = UINT16_MAX;
	int16_t x274 = -1;
	uint16_t x275 = 196U;
	static int16_t x276 = INT16_MAX;
	static int32_t t65 = 1;

	t65 = (x273&(x274/(x275^x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = -1;
	int8_t x278 = -1;
	uint16_t x280 = 1746U;
	volatile int32_t t66 = 13695;

	t66 = (x277&(x278/(x279^x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x281 = 64592132U;
	int32_t x283 = INT32_MAX;
	uint32_t t67 = 5U;

	t67 = (x281&(x282/(x283^x284)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = INT64_MIN;
	int8_t x286 = -1;
	volatile int8_t x287 = INT8_MAX;
	static int64_t t68 = -113497014654LL;

	t68 = (x285&(x286/(x287^x288)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x293 = -1;
	static int64_t x294 = 61249LL;
	volatile int64_t t69 = 8433137655749LL;

	t69 = (x293&(x294/(x295^x296)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	static uint64_t x298 = 2861LLU;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = 113U;

	t70 = (x297&(x298/(x299^x300)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x301 = 281;
	int8_t x302 = 0;
	uint16_t x303 = 6U;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t71 = 1;

	t71 = (x301&(x302/(x303^x304)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x307 = -53;
	static volatile uint64_t t72 = 26958588795240019LLU;

	t72 = (x305&(x306/(x307^x308)));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = -1LL;
	int16_t x311 = 13922;
	volatile uint32_t x312 = 1718211359U;
	static int64_t t73 = 14125LL;

	t73 = (x309&(x310/(x311^x312)));

	if (t73 != 2LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x314 = -1;
	int32_t x315 = INT32_MAX;
	uint32_t x316 = UINT32_MAX;

	t74 = (x313&(x314/(x315^x316)));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MAX;
	int32_t x319 = INT32_MIN;
	volatile int16_t x320 = INT16_MIN;

	t75 = (x317&(x318/(x319^x320)));

	if (t75 != 4295032832LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x322 = INT16_MIN;
	volatile int64_t x323 = INT64_MIN;
	int8_t x324 = INT8_MIN;

	t76 = (x321&(x322/(x323^x324)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x325 = INT64_MAX;
	volatile int64_t t77 = 8LL;

	t77 = (x325&(x326/(x327^x328)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x329 = 134866062LLU;
	int8_t x331 = INT8_MAX;
	uint32_t x332 = UINT32_MAX;
	uint64_t t78 = 49LLU;

	t78 = (x329&(x330/(x331^x332)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = 3U;
	volatile uint8_t x334 = 112U;
	static uint32_t x335 = 144279U;
	int8_t x336 = -2;
	volatile uint32_t t79 = 50366679U;

	t79 = (x333&(x334/(x335^x336)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -8419882;
	int16_t x340 = INT16_MAX;

	t80 = (x337&(x338/(x339^x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x342 = 0U;
	int32_t x343 = -4;
	static int32_t t81 = 43978;

	t81 = (x341&(x342/(x343^x344)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x345 = 21331LL;
	int16_t x346 = INT16_MAX;
	int8_t x347 = -4;
	static uint32_t x348 = 1371U;
	int64_t t82 = -1LL;

	t82 = (x345&(x346/(x347^x348)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MIN;
	int64_t x350 = -10621LL;
	int16_t x352 = 1;
	int64_t t83 = -25184LL;

	t83 = (x349&(x350/(x351^x352)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = -74502;
	static uint16_t x354 = 15U;
	uint64_t x356 = 617855982904687414LLU;
	static uint64_t t84 = 574230909833551LLU;

	t84 = (x353&(x354/(x355^x356)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x358 = 25LL;
	volatile uint8_t x359 = UINT8_MAX;
	volatile int64_t t85 = -389LL;

	t85 = (x357&(x358/(x359^x360)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = INT64_MIN;
	uint64_t x363 = 49LLU;
	uint16_t x364 = 4587U;

	t86 = (x361&(x362/(x363^x364)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MIN;
	uint64_t x366 = 2062985569306244LLU;
	volatile int64_t x367 = 4259852LL;
	int32_t x368 = INT32_MAX;
	volatile uint64_t t87 = 115526157595LLU;

	t87 = (x365&(x366/(x367^x368)));

	if (t87 != 950272LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x370 = UINT32_MAX;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = 0;
	uint32_t t88 = 1954U;

	t88 = (x369&(x370/(x371^x372)));

	if (t88 != 65536U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x373 = 0;
	int16_t x374 = INT16_MAX;
	int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MAX;
	int64_t t89 = -78217513706LL;

	t89 = (x373&(x374/(x375^x376)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x378 = -1LL;
	int8_t x379 = -1;
	uint16_t x380 = UINT16_MAX;
	static volatile int64_t t90 = 38434758LL;

	t90 = (x377&(x378/(x379^x380)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = 1LL;
	static uint64_t x382 = 0LLU;
	int64_t x384 = INT64_MAX;

	t91 = (x381&(x382/(x383^x384)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x385 = UINT64_MAX;
	volatile int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MIN;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t92 = 79225595LLU;

	t92 = (x385&(x386/(x387^x388)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = -1LL;
	static uint8_t x390 = 38U;
	static int32_t x391 = INT32_MIN;
	int64_t t93 = 1701LL;

	t93 = (x389&(x390/(x391^x392)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x393 = 75U;
	uint16_t x394 = UINT16_MAX;
	volatile int32_t x395 = INT32_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t94 = 69U;

	t94 = (x393&(x394/(x395^x396)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = 27U;
	volatile int8_t x398 = INT8_MIN;
	int32_t x399 = INT32_MAX;
	static uint8_t x400 = 14U;
	uint32_t t95 = 15422234U;

	t95 = (x397&(x398/(x399^x400)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x401 = -7;
	volatile int8_t x402 = INT8_MIN;
	uint64_t x403 = 5744283LLU;
	volatile int32_t x404 = 47091;
	uint64_t t96 = 9LLU;

	t96 = (x401&(x402/(x403^x404)));

	if (t96 != 3232818013617LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x410 = 0;
	volatile int64_t x411 = -1LL;
	uint16_t x412 = 21U;

	t97 = (x409&(x410/(x411^x412)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -1;
	int16_t x414 = INT16_MIN;
	volatile int32_t x415 = -1;
	int32_t x416 = INT32_MIN;
	int32_t t98 = 0;

	t98 = (x413&(x414/(x415^x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x417 = -27;
	uint64_t x418 = 24760946341295619LLU;
	uint16_t x419 = 11395U;
	int32_t x420 = INT32_MAX;

	t99 = (x417&(x418/(x419^x420)));

	if (t99 != 11530273LLU) { NG(); } else { ; }
	
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
