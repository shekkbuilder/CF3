#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int64_t x3 = -1LL;
volatile int64_t x4 = 26428955663LL;
int32_t x7 = -3035;
int8_t x16 = INT8_MAX;
volatile int32_t t3 = 120460;
uint8_t x18 = 20U;
int32_t x19 = INT32_MAX;
uint8_t x21 = UINT8_MAX;
int16_t x22 = -1;
int64_t x25 = INT64_MIN;
volatile int64_t x32 = 13096LL;
int32_t t8 = -254495;
int16_t x38 = -1;
static int64_t x41 = INT64_MIN;
int8_t x42 = INT8_MIN;
volatile int8_t x56 = -4;
int32_t t13 = 117;
int32_t x61 = 3894969;
static uint8_t x67 = 3U;
int16_t x69 = INT16_MAX;
volatile int32_t t17 = 3979190;
volatile uint32_t x77 = UINT32_MAX;
volatile int32_t x84 = 1;
volatile uint8_t x89 = 119U;
volatile int8_t x91 = INT8_MAX;
static uint64_t t22 = 6859658LLU;
int32_t x95 = 1;
int32_t x97 = -111095;
int8_t x98 = -1;
static volatile int32_t x103 = INT32_MAX;
int32_t x110 = INT32_MIN;
volatile int8_t x111 = -1;
static int64_t x126 = INT64_MIN;
int8_t x127 = 3;
int32_t x131 = -1;
uint16_t x146 = UINT16_MAX;
uint8_t x147 = UINT8_MAX;
static volatile int64_t t37 = -883629LL;
static uint32_t x157 = 75U;
static int8_t x158 = INT8_MIN;
volatile uint32_t x159 = 439U;
volatile int32_t t39 = -21193876;
volatile int32_t x165 = 1;
uint16_t x166 = 362U;
static volatile int64_t x170 = -95927689100LL;
int64_t x175 = -4069687LL;
int32_t x187 = -1;
uint8_t x195 = UINT8_MAX;
int64_t x198 = -1LL;
uint8_t x200 = 0U;
int32_t t50 = 7397326;
static uint64_t t51 = 8734576930LLU;
uint8_t x213 = 3U;
volatile int64_t t54 = -16521142LL;
static volatile int16_t x227 = INT16_MAX;
int32_t x233 = -3953;
int16_t x234 = 189;
volatile uint16_t x242 = 1740U;
static int32_t x252 = -1;
static uint8_t x256 = 1U;
uint32_t x268 = 5692U;
volatile int32_t t66 = 43837;
int32_t t67 = 9159984;
int64_t x280 = INT64_MIN;
volatile int32_t t69 = INT32_MAX;
int32_t x290 = INT32_MIN;
int64_t x292 = INT64_MAX;
int32_t x294 = INT32_MIN;
static int64_t x296 = 18664023447366406LL;
uint64_t x302 = 187288951461052LLU;
static uint32_t t74 = 2969U;
int8_t x317 = 5;
volatile uint64_t t77 = 207784339939044690LLU;
volatile int16_t x321 = 2724;
int8_t x324 = INT8_MIN;
int64_t x325 = INT64_MIN;
int64_t x327 = INT64_MAX;
static int64_t x329 = INT64_MIN;
int32_t t80 = -1;
uint16_t x334 = 13020U;
static int32_t t81 = INT32_MAX;
int16_t x337 = INT16_MAX;
int32_t x346 = -107;
uint64_t x351 = 143958363150955211LLU;
int32_t x352 = -1;
int32_t t87 = -1071690;
static int32_t t88 = 7639;
uint16_t x373 = 2926U;
static int32_t x375 = INT32_MAX;
volatile uint32_t t90 = 5512U;
int8_t x379 = INT8_MAX;
int8_t x381 = INT8_MIN;
uint64_t x384 = 12253213453LLU;
uint64_t t92 = 61666607072092LLU;
static int16_t x393 = INT16_MIN;
static volatile int16_t x400 = -1;
static int16_t x402 = 11;
static volatile uint64_t t97 = 1787LLU;
int32_t x411 = 4;


void f0(void) {
	volatile int32_t x2 = INT32_MIN;
	volatile int64_t t0 = -1639994874026631806LL;

	t0 = ((x1<=(x2%x3))*x4);

	if (t0 != 26428955663LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int64_t x6 = 5416831254385LL;
	volatile int32_t x8 = -170066;
	int32_t t1 = -5320;

	t1 = ((x5<=(x6%x7))*x8);

	if (t1 != -170066) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 2160LLU;
	static volatile int64_t x10 = INT64_MIN;
	int64_t x11 = -105851214LL;
	static int8_t x12 = INT8_MIN;
	static int32_t t2 = -8;

	t2 = ((x9<=(x10%x11))*x12);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	static int64_t x14 = 1028355767460LL;
	volatile int8_t x15 = 14;

	t3 = ((x13<=(x14%x15))*x16);

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = -8040535LL;

	t4 = ((x17<=(x18%x19))*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x23 = 2LL;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -185253;

	t5 = ((x21<=(x22%x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	uint64_t x27 = 1558LLU;
	int16_t x28 = -1;
	volatile int32_t t6 = -2;

	t6 = ((x25<=(x26%x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1344U;
	volatile uint8_t x30 = UINT8_MAX;
	int16_t x31 = -1;
	int64_t t7 = 7542869LL;

	t7 = ((x29<=(x30%x31))*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 410789400LLU;
	uint8_t x34 = UINT8_MAX;
	int64_t x35 = -1LL;
	int16_t x36 = 8;

	t8 = ((x33<=(x34%x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile int8_t x39 = INT8_MIN;
	int16_t x40 = -1;
	static volatile int32_t t9 = 3240;

	t9 = ((x37<=(x38%x39))*x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x43 = 365585U;
	int64_t x44 = -1LL;
	static volatile int64_t t10 = -165066751747691LL;

	t10 = ((x41<=(x42%x43))*x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 122U;
	uint32_t x46 = 52793117U;
	int64_t x47 = INT64_MIN;
	static int64_t x48 = INT64_MAX;
	static volatile int64_t t11 = INT64_MAX;

	t11 = ((x45<=(x46%x47))*x48);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static uint32_t x50 = UINT32_MAX;
	volatile int8_t x51 = INT8_MIN;
	static int64_t x52 = INT64_MIN;
	volatile int64_t t12 = -239467792114022764LL;

	t12 = ((x49<=(x50%x51))*x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 292;
	volatile int32_t x54 = -317291489;
	int64_t x55 = 6532757675521002LL;

	t13 = ((x53<=(x54%x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 3U;
	int8_t x58 = INT8_MAX;
	int8_t x59 = -3;
	int8_t x60 = -1;
	int32_t t14 = 26879;

	t14 = ((x57<=(x58%x59))*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MIN;
	static int32_t x63 = INT32_MIN;
	volatile uint32_t x64 = 30U;
	uint32_t t15 = 121178U;

	t15 = ((x61<=(x62%x63))*x64);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x65 = UINT16_MAX;
	int16_t x66 = 12;
	int32_t x68 = 5;
	static volatile int32_t t16 = 1801087;

	t16 = ((x65<=(x66%x67))*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MAX;
	uint8_t x72 = 8U;

	t17 = ((x69<=(x70%x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 20670421220255244LL;
	volatile int16_t x74 = 670;
	int16_t x75 = -1;
	uint8_t x76 = 7U;
	int32_t t18 = -52232492;

	t18 = ((x73<=(x74%x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x78 = UINT32_MAX;
	int8_t x79 = INT8_MIN;
	static volatile int32_t x80 = -1;
	volatile int32_t t19 = -23088358;

	t19 = ((x77<=(x78%x79))*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MIN;
	int16_t x82 = -1;
	int32_t x83 = INT32_MIN;
	int32_t t20 = -705838;

	t20 = ((x81<=(x82%x83))*x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 6851U;
	volatile int32_t x86 = -216;
	volatile int64_t x87 = -2219LL;
	uint64_t x88 = 170563957478154545LLU;
	static volatile uint64_t t21 = 84662614321LLU;

	t21 = ((x85<=(x86%x87))*x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = 135;
	uint64_t x92 = 6177311183LLU;

	t22 = ((x89<=(x90%x91))*x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x94 = UINT16_MAX;
	int64_t x96 = 1005004843650LL;
	volatile int64_t t23 = -2164943955156398969LL;

	t23 = ((x93<=(x94%x95))*x96);

	if (t23 != 1005004843650LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x99 = 4999377;
	volatile int8_t x100 = 11;
	static volatile int32_t t24 = -2;

	t24 = ((x97<=(x98%x99))*x100);

	if (t24 != 11) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 7219U;
	volatile uint32_t x102 = UINT32_MAX;
	static int8_t x104 = -6;
	int32_t t25 = 594001;

	t25 = ((x101<=(x102%x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	uint32_t x106 = 641U;
	int32_t x107 = -232805847;
	int8_t x108 = -1;
	volatile int32_t t26 = 1818;

	t26 = ((x105<=(x106%x107))*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	int32_t x112 = -1;
	int32_t t27 = 0;

	t27 = ((x109<=(x110%x111))*x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	static volatile int64_t x114 = INT64_MAX;
	static volatile uint8_t x115 = 8U;
	static uint32_t x116 = 1570U;
	uint32_t t28 = 3728U;

	t28 = ((x113<=(x114%x115))*x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 1155U;
	uint16_t x118 = UINT16_MAX;
	static int32_t x119 = INT32_MIN;
	uint16_t x120 = 911U;
	volatile int32_t t29 = 43260;

	t29 = ((x117<=(x118%x119))*x120);

	if (t29 != 911) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	int32_t x122 = -767;
	static volatile int32_t x123 = -1;
	int64_t x124 = -1LL;
	int64_t t30 = -3LL;

	t30 = ((x121<=(x122%x123))*x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -58141426021825LL;
	static uint8_t x128 = UINT8_MAX;
	int32_t t31 = -343;

	t31 = ((x125<=(x126%x127))*x128);

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = UINT8_MAX;
	int16_t x130 = INT16_MIN;
	int64_t x132 = -1LL;
	static int64_t t32 = -468574361060547207LL;

	t32 = ((x129<=(x130%x131))*x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 18164052584553LLU;
	int16_t x134 = 7063;
	static int32_t x135 = -1;
	int32_t x136 = -3896;
	int32_t t33 = -240;

	t33 = ((x133<=(x134%x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	volatile int32_t x138 = -185831064;
	static int64_t x139 = -3226LL;
	static int16_t x140 = -1;
	static volatile int32_t t34 = -1;

	t34 = ((x137<=(x138%x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x141 = INT8_MIN;
	uint16_t x142 = 101U;
	int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	static int64_t t35 = INT64_MIN;

	t35 = ((x141<=(x142%x143))*x144);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	uint32_t x148 = 12109500U;
	uint32_t t36 = 412879U;

	t36 = ((x145<=(x146%x147))*x148);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 9773626LL;
	static volatile int8_t x150 = 3;
	static int16_t x151 = -1;
	int64_t x152 = 38477446731917741LL;

	t37 = ((x149<=(x150%x151))*x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x160 = UINT32_MAX;
	static volatile uint32_t t38 = UINT32_MAX;

	t38 = ((x157<=(x158%x159))*x160);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x161 = UINT64_MAX;
	uint32_t x162 = 2875U;
	int16_t x163 = INT16_MAX;
	static volatile uint8_t x164 = 14U;

	t39 = ((x161<=(x162%x163))*x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x167 = -1;
	int8_t x168 = INT8_MIN;
	volatile int32_t t40 = 449;

	t40 = ((x165<=(x166%x167))*x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MAX;
	int32_t x171 = -6;
	volatile uint8_t x172 = 21U;
	static int32_t t41 = 3854;

	t41 = ((x169<=(x170%x171))*x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 8796704002183682LLU;
	volatile int64_t x174 = -1LL;
	int32_t x176 = -157260;
	volatile int32_t t42 = 0;

	t42 = ((x173<=(x174%x175))*x176);

	if (t42 != -157260) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -7362308598722041LL;
	int16_t x178 = INT16_MAX;
	volatile uint32_t x179 = 557358337U;
	int16_t x180 = INT16_MIN;
	static volatile int32_t t43 = 6;

	t43 = ((x177<=(x178%x179))*x180);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = 0;
	int8_t x182 = -3;
	static uint64_t x183 = UINT64_MAX;
	int32_t x184 = -1;
	volatile int32_t t44 = -2;

	t44 = ((x181<=(x182%x183))*x184);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -3923262LL;
	int8_t x186 = 0;
	static uint16_t x188 = 105U;
	int32_t t45 = 623545;

	t45 = ((x185<=(x186%x187))*x188);

	if (t45 != 105) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = 365;
	volatile int32_t x190 = 13;
	uint16_t x191 = 3U;
	int64_t x192 = INT64_MAX;
	volatile int64_t t46 = -1771971652LL;

	t46 = ((x189<=(x190%x191))*x192);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = 65062LL;
	int8_t x194 = INT8_MAX;
	int32_t x196 = -1;
	int32_t t47 = 19;

	t47 = ((x193<=(x194%x195))*x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x199 = INT32_MIN;
	int32_t t48 = 727871;

	t48 = ((x197<=(x198%x199))*x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = -3;
	int64_t x202 = 88293356114LL;
	int64_t x203 = -1LL;
	uint32_t x204 = 6247145U;
	static volatile uint32_t t49 = 17578134U;

	t49 = ((x201<=(x202%x203))*x204);

	if (t49 != 6247145U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MAX;
	volatile int64_t x206 = -245061221227LL;
	int8_t x207 = INT8_MIN;
	int8_t x208 = INT8_MIN;

	t50 = ((x205<=(x206%x207))*x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MIN;
	int16_t x211 = INT16_MIN;
	uint64_t x212 = 39431590LLU;

	t51 = ((x209<=(x210%x211))*x212);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x214 = -4695940;
	int64_t x215 = INT64_MAX;
	volatile int16_t x216 = -1;
	volatile int32_t t52 = -1604646;

	t52 = ((x213<=(x214%x215))*x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x217 = 7897307576395LLU;
	int32_t x218 = INT32_MAX;
	int16_t x219 = -1;
	uint64_t x220 = 41650836773905773LLU;
	volatile uint64_t t53 = 34LLU;

	t53 = ((x217<=(x218%x219))*x220);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x221 = INT32_MAX;
	int16_t x222 = INT16_MAX;
	uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MIN;

	t54 = ((x221<=(x222%x223))*x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = -1LL;
	static uint16_t x226 = 14748U;
	static int64_t x228 = INT64_MAX;
	int64_t t55 = INT64_MAX;

	t55 = ((x225<=(x226%x227))*x228);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = -1;
	int64_t x230 = INT64_MAX;
	uint64_t x231 = 252446072670LLU;
	volatile int32_t x232 = INT32_MAX;
	volatile int32_t t56 = -113;

	t56 = ((x229<=(x230%x231))*x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x235 = INT16_MAX;
	static volatile uint8_t x236 = 77U;
	static volatile int32_t t57 = 0;

	t57 = ((x233<=(x234%x235))*x236);

	if (t57 != 77) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = -58;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MIN;
	static int32_t t58 = INT32_MIN;

	t58 = ((x237<=(x238%x239))*x240);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = INT64_MAX;
	uint16_t x243 = 306U;
	int16_t x244 = 5792;
	static int32_t t59 = -14073;

	t59 = ((x241<=(x242%x243))*x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MIN;
	static uint8_t x246 = UINT8_MAX;
	uint64_t x247 = UINT64_MAX;
	int64_t x248 = 23627344406LL;
	volatile int64_t t60 = -759LL;

	t60 = ((x245<=(x246%x247))*x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = 791U;
	int8_t x250 = -1;
	int64_t x251 = INT64_MAX;
	int32_t t61 = -51779;

	t61 = ((x249<=(x250%x251))*x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = -50819275029864LL;
	static int8_t x254 = -1;
	int8_t x255 = INT8_MIN;
	int32_t t62 = -84457;

	t62 = ((x253<=(x254%x255))*x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x257 = 758U;
	static volatile int64_t x258 = INT64_MIN;
	volatile int32_t x259 = -1;
	static int64_t x260 = 904513689711LL;
	static int64_t t63 = 1282772LL;

	t63 = ((x257<=(x258%x259))*x260);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	volatile uint64_t x262 = UINT64_MAX;
	volatile uint32_t x263 = 489737U;
	int16_t x264 = 93;
	int32_t t64 = -49;

	t64 = ((x261<=(x262%x263))*x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = UINT8_MAX;
	static uint8_t x266 = 3U;
	static uint8_t x267 = UINT8_MAX;
	volatile uint32_t t65 = 53930U;

	t65 = ((x265<=(x266%x267))*x268);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x269 = UINT8_MAX;
	static int8_t x270 = INT8_MIN;
	uint32_t x271 = UINT32_MAX;
	int8_t x272 = 3;

	t66 = ((x269<=(x270%x271))*x272);

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = -1LL;
	int8_t x275 = INT8_MAX;
	int8_t x276 = INT8_MIN;

	t67 = ((x273<=(x274%x275))*x276);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x277 = INT8_MIN;
	static volatile uint8_t x278 = UINT8_MAX;
	uint32_t x279 = UINT32_MAX;
	volatile int64_t t68 = 6923300936679LL;

	t68 = ((x277<=(x278%x279))*x280);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x281 = 254U;
	int64_t x282 = 1022206090284599246LL;
	int16_t x283 = INT16_MAX;
	int32_t x284 = INT32_MAX;

	t69 = ((x281<=(x282%x283))*x284);

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = -3;
	int16_t x286 = INT16_MIN;
	int16_t x287 = 320;
	static int8_t x288 = -3;
	volatile int32_t t70 = -2542;

	t70 = ((x285<=(x286%x287))*x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x289 = UINT32_MAX;
	int64_t x291 = -20703431277144127LL;
	volatile int64_t t71 = 68548999717258LL;

	t71 = ((x289<=(x290%x291))*x292);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = -258659LL;
	volatile uint8_t x295 = UINT8_MAX;
	int64_t t72 = -906LL;

	t72 = ((x293<=(x294%x295))*x296);

	if (t72 != 18664023447366406LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = -1;
	int64_t x298 = INT64_MIN;
	int64_t x299 = -958533014LL;
	static int32_t x300 = -1;
	volatile int32_t t73 = 7150937;

	t73 = ((x297<=(x298%x299))*x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = -1;
	int64_t x303 = 2169379777156898LL;
	volatile uint32_t x304 = 5U;

	t74 = ((x301<=(x302%x303))*x304);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = -1;
	uint32_t x306 = 948805U;
	volatile int64_t x307 = 61606699LL;
	volatile int16_t x308 = INT16_MAX;
	static volatile int32_t t75 = -5077120;

	t75 = ((x305<=(x306%x307))*x308);

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = UINT64_MAX;
	uint8_t x314 = 40U;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MIN;
	volatile int64_t t76 = 183643519LL;

	t76 = ((x313<=(x314%x315))*x316);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x318 = INT64_MIN;
	volatile int32_t x319 = -1;
	uint64_t x320 = 11LLU;

	t77 = ((x317<=(x318%x319))*x320);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x322 = INT32_MIN;
	static int16_t x323 = INT16_MAX;
	volatile int32_t t78 = -3523;

	t78 = ((x321<=(x322%x323))*x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x326 = UINT32_MAX;
	static int16_t x328 = INT16_MAX;
	volatile int32_t t79 = -240567647;

	t79 = ((x325<=(x326%x327))*x328);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x330 = UINT64_MAX;
	static uint32_t x331 = 145153672U;
	int32_t x332 = -1;

	t80 = ((x329<=(x330%x331))*x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = INT32_MIN;
	int16_t x335 = INT16_MIN;
	int32_t x336 = INT32_MAX;

	t81 = ((x333<=(x334%x335))*x336);

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x338 = UINT16_MAX;
	static int16_t x339 = 46;
	static uint64_t x340 = 300896640509065830LLU;
	static uint64_t t82 = 27032LLU;

	t82 = ((x337<=(x338%x339))*x340);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x341 = -284839513289878741LL;
	volatile uint16_t x342 = 70U;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = 6LLU;
	volatile uint64_t t83 = 286033367540LLU;

	t83 = ((x341<=(x342%x343))*x344);

	if (t83 != 6LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = 14042;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MAX;
	volatile int32_t t84 = 1;

	t84 = ((x345<=(x346%x347))*x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x349 = -1;
	uint32_t x350 = 151562170U;
	int32_t t85 = -97;

	t85 = ((x349<=(x350%x351))*x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = UINT8_MAX;
	int16_t x354 = -10;
	volatile int64_t x355 = -104534402827692133LL;
	volatile uint16_t x356 = UINT16_MAX;
	static int32_t t86 = -170;

	t86 = ((x353<=(x354%x355))*x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x357 = 14U;
	volatile uint64_t x358 = 935LLU;
	static uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MIN;

	t87 = ((x357<=(x358%x359))*x360);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = 29241;
	uint32_t x366 = 4131964U;
	int16_t x367 = INT16_MAX;
	int8_t x368 = -1;

	t88 = ((x365<=(x366%x367))*x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x369 = UINT16_MAX;
	int16_t x370 = -1;
	int32_t x371 = INT32_MAX;
	static int16_t x372 = INT16_MIN;
	static int32_t t89 = 44;

	t89 = ((x369<=(x370%x371))*x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x374 = INT64_MAX;
	static volatile uint32_t x376 = 3458U;

	t90 = ((x373<=(x374%x375))*x376);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x377 = -1;
	int16_t x378 = INT16_MAX;
	volatile int32_t x380 = INT32_MIN;
	int32_t t91 = INT32_MIN;

	t91 = ((x377<=(x378%x379))*x380);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x382 = 612U;
	uint32_t x383 = 1103U;

	t92 = ((x381<=(x382%x383))*x384);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MIN;
	int32_t x386 = INT32_MAX;
	volatile int64_t x387 = INT64_MIN;
	static uint8_t x388 = UINT8_MAX;
	int32_t t93 = 29811;

	t93 = ((x385<=(x386%x387))*x388);

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MIN;
	volatile uint32_t x390 = 96875U;
	int16_t x391 = -1;
	static int16_t x392 = INT16_MIN;
	volatile int32_t t94 = 135;

	t94 = ((x389<=(x390%x391))*x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x394 = UINT16_MAX;
	uint32_t x395 = 23723749U;
	static int32_t x396 = -1;
	volatile int32_t t95 = 12923600;

	t95 = ((x393<=(x394%x395))*x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = UINT8_MAX;
	volatile int32_t x398 = 41040871;
	int16_t x399 = 2;
	volatile int32_t t96 = -447035390;

	t96 = ((x397<=(x398%x399))*x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x401 = -1;
	uint64_t x403 = 229656296998292154LLU;
	volatile uint64_t x404 = 47554829370318LLU;

	t97 = ((x401<=(x402%x403))*x404);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	uint16_t x406 = 11U;
	int8_t x407 = -1;
	volatile int8_t x408 = -1;
	volatile int32_t t98 = 1430;

	t98 = ((x405<=(x406%x407))*x408);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x409 = 1846U;
	int8_t x410 = 0;
	volatile uint8_t x412 = UINT8_MAX;
	int32_t t99 = -350826;

	t99 = ((x409<=(x410%x411))*x412);

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
