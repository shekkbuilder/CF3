#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
volatile uint64_t x4 = UINT64_MAX;
volatile int64_t x8 = INT64_MAX;
uint64_t x12 = UINT64_MAX;
uint16_t x16 = 98U;
volatile int8_t x24 = INT8_MAX;
int32_t x26 = -1;
volatile uint64_t x39 = 528511LLU;
int32_t x42 = 2342;
int16_t x46 = INT16_MIN;
int32_t x48 = INT32_MIN;
uint16_t x50 = 95U;
volatile int32_t t12 = 271928022;
int64_t x56 = 2778907781869LL;
int16_t x64 = INT16_MAX;
volatile uint64_t x65 = 944134LLU;
static int64_t x72 = INT64_MAX;
uint16_t x73 = 36U;
int16_t x74 = 104;
int64_t x78 = -25190863LL;
static int64_t x79 = INT64_MIN;
volatile int64_t t19 = -391013LL;
int16_t x82 = INT16_MIN;
uint64_t t20 = 13283LLU;
static volatile int32_t t22 = 27345856;
volatile int8_t x93 = 10;
volatile uint8_t x100 = UINT8_MAX;
int32_t x103 = INT32_MAX;
volatile uint16_t x104 = UINT16_MAX;
int64_t x105 = INT64_MAX;
int64_t x107 = INT64_MIN;
int64_t x108 = 44712528596600LL;
int32_t t27 = 0;
int16_t x115 = INT16_MAX;
volatile int32_t t28 = 418757;
static int32_t x123 = INT32_MIN;
volatile int16_t x124 = INT16_MIN;
int16_t x126 = 718;
int32_t x143 = 59841826;
int32_t x144 = INT32_MIN;
volatile int32_t t33 = 118704316;
int8_t x167 = INT8_MIN;
int32_t t39 = -1503;
uint16_t x177 = 1569U;
int8_t x184 = INT8_MAX;
uint32_t x186 = UINT32_MAX;
static int64_t x188 = INT64_MIN;
int32_t x191 = -1;
static int64_t x194 = -103987LL;
static uint64_t t45 = 1031LLU;
int16_t x201 = -9294;
int16_t x203 = INT16_MIN;
int32_t x204 = 6094688;
static volatile int8_t x205 = -1;
static volatile uint16_t x208 = UINT16_MAX;
int32_t t48 = 0;
uint16_t x209 = 249U;
int32_t x218 = INT32_MIN;
static int32_t t51 = -50572;
static int32_t t53 = -5;
volatile int64_t t56 = 4001569557792399LL;
int8_t x241 = INT8_MIN;
static int64_t x249 = INT64_MIN;
volatile int64_t x255 = 635977LL;
static volatile int32_t t60 = -42;
uint32_t x258 = UINT32_MAX;
int8_t x263 = -1;
int32_t t62 = -115612;
int8_t x268 = -2;
static int32_t x278 = INT32_MIN;
int64_t x281 = 36262943283LL;
static uint8_t x284 = UINT8_MAX;
int16_t x285 = 988;
int32_t x295 = INT32_MIN;
volatile int8_t x297 = INT8_MIN;
int64_t x310 = INT64_MIN;
volatile uint8_t x313 = UINT8_MAX;
uint16_t x315 = 2446U;
uint16_t x316 = 13U;
int32_t x319 = 0;
int64_t x321 = INT64_MIN;
volatile uint64_t x324 = 1360399LLU;
int32_t x328 = INT32_MIN;
int64_t x333 = -1LL;
int32_t x339 = INT32_MAX;
uint16_t x346 = 19092U;
int8_t x350 = INT8_MAX;
static uint32_t x353 = UINT32_MAX;
int32_t x357 = INT32_MIN;
static int16_t x358 = 12847;
int64_t t86 = -1101939009606881051LL;
uint32_t x361 = 130U;
static int32_t t87 = -34;
uint64_t x368 = 3533LLU;
static uint64_t x371 = UINT64_MAX;
int8_t x375 = INT8_MIN;
int8_t x383 = INT8_MAX;
int64_t x386 = INT64_MIN;
int8_t x396 = INT8_MIN;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	uint16_t x3 = 80U;
	uint64_t t0 = 4820525312LLU;

	t0 = (((x1|x2)<=x3)%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint16_t x6 = 14259U;
	int8_t x7 = INT8_MIN;
	volatile int64_t t1 = -208LL;

	t1 = (((x5|x6)<=x7)%x8);

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1749;
	uint16_t x10 = UINT16_MAX;
	static uint8_t x11 = 1U;
	static volatile uint64_t t2 = 869LLU;

	t2 = (((x9|x10)<=x11)%x12);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MAX;
	volatile int32_t t3 = -13250520;

	t3 = (((x13|x14)<=x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = -1;
	int8_t x18 = INT8_MAX;
	int32_t x19 = INT32_MIN;
	volatile int64_t x20 = INT64_MIN;
	int64_t t4 = -20140595LL;

	t4 = (((x17|x18)<=x19)%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MIN;
	static volatile int64_t x23 = INT64_MIN;
	volatile int32_t t5 = 1;

	t5 = (((x21|x22)<=x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -875675LL;
	static volatile int64_t x27 = INT64_MIN;
	uint32_t x28 = 2U;
	static volatile uint32_t t6 = 103420079U;

	t6 = (((x25|x26)<=x27)%x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 2U;
	int32_t x30 = INT32_MIN;
	int8_t x31 = -51;
	int16_t x32 = -1;
	volatile int32_t t7 = 497096062;

	t7 = (((x29|x30)<=x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	static uint64_t x34 = UINT64_MAX;
	uint32_t x35 = 8518765U;
	int8_t x36 = INT8_MIN;
	static volatile int32_t t8 = 4951;

	t8 = (((x33|x34)<=x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 33983455989LLU;
	uint16_t x38 = 28U;
	static int8_t x40 = -1;
	int32_t t9 = -75588;

	t9 = (((x37|x38)<=x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 97020;
	volatile uint64_t x43 = UINT64_MAX;
	uint16_t x44 = 693U;
	volatile int32_t t10 = -75986;

	t10 = (((x41|x42)<=x43)%x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int8_t x47 = INT8_MIN;
	static int32_t t11 = 1074919;

	t11 = (((x45|x46)<=x47)%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 264590692;
	int16_t x51 = INT16_MAX;
	uint8_t x52 = UINT8_MAX;

	t12 = (((x49|x50)<=x51)%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static volatile uint32_t x54 = 2469177U;
	uint16_t x55 = 281U;
	int64_t t13 = -24279228860LL;

	t13 = (((x53|x54)<=x55)%x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -3034265058484LL;
	volatile uint64_t x58 = UINT64_MAX;
	uint64_t x59 = UINT64_MAX;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -2072621;

	t14 = (((x57|x58)<=x59)%x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	uint8_t x62 = 2U;
	volatile int16_t x63 = INT16_MIN;
	int32_t t15 = 1;

	t15 = (((x61|x62)<=x63)%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x66 = 3U;
	uint16_t x67 = UINT16_MAX;
	volatile uint64_t x68 = 1045308449164781781LLU;
	volatile uint64_t t16 = 338819LLU;

	t16 = (((x65|x66)<=x67)%x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = 1;
	int16_t x70 = -15;
	int8_t x71 = 7;
	int64_t t17 = -2980122840755LL;

	t17 = (((x69|x70)<=x71)%x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x75 = -1;
	int32_t x76 = 2;
	int32_t t18 = 492895;

	t18 = (((x73|x74)<=x75)%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int64_t x80 = -1LL;

	t19 = (((x77|x78)<=x79)%x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	int64_t x83 = INT64_MIN;
	volatile uint64_t x84 = 9791311325989399LLU;

	t20 = (((x81|x82)<=x83)%x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	uint32_t x86 = 73U;
	int64_t x87 = 0LL;
	uint16_t x88 = 8U;
	static volatile int32_t t21 = -84455117;

	t21 = (((x85|x86)<=x87)%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 941464LLU;
	int64_t x90 = 7717480392832353LL;
	static uint8_t x91 = 1U;
	volatile uint16_t x92 = UINT16_MAX;

	t22 = (((x89|x90)<=x91)%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = 335186012;
	uint32_t x95 = 398U;
	uint32_t x96 = 6U;
	volatile uint32_t t23 = 419791691U;

	t23 = (((x93|x94)<=x95)%x96);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 1764U;
	int64_t x98 = -1LL;
	uint8_t x99 = 35U;
	volatile int32_t t24 = 14947;

	t24 = (((x97|x98)<=x99)%x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	int8_t x102 = INT8_MAX;
	int32_t t25 = 507;

	t25 = (((x101|x102)<=x103)%x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = 3601;
	volatile int64_t t26 = 1912765254656439LL;

	t26 = (((x105|x106)<=x107)%x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 86738842347976LLU;
	int64_t x110 = -2LL;
	static int8_t x111 = -1;
	int8_t x112 = INT8_MAX;

	t27 = (((x109|x110)<=x111)%x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MIN;
	uint16_t x114 = UINT16_MAX;
	static int16_t x116 = INT16_MIN;

	t28 = (((x113|x114)<=x115)%x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x121 = 20U;
	uint8_t x122 = 28U;
	int32_t t29 = -2553108;

	t29 = (((x121|x122)<=x123)%x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	static int16_t x127 = -5884;
	volatile int16_t x128 = -1;
	volatile int32_t t30 = 21;

	t30 = (((x125|x126)<=x127)%x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = UINT16_MAX;
	static int16_t x130 = -1;
	static uint8_t x131 = 2U;
	int16_t x132 = INT16_MIN;
	volatile int32_t t31 = -6331;

	t31 = (((x129|x130)<=x131)%x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 1118U;
	int64_t x134 = -4601658180433LL;
	static int8_t x135 = 0;
	static uint64_t x136 = 40651992550LLU;
	volatile uint64_t t32 = 11LLU;

	t32 = (((x133|x134)<=x135)%x136);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = -179555LL;
	int32_t x142 = INT32_MIN;

	t33 = (((x141|x142)<=x143)%x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	static int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MIN;
	int64_t x148 = 2LL;
	volatile int64_t t34 = -5763966917887588LL;

	t34 = (((x145|x146)<=x147)%x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x149 = INT64_MIN;
	uint32_t x150 = 53259400U;
	uint8_t x151 = 43U;
	uint32_t x152 = 62U;
	uint32_t t35 = 924313U;

	t35 = (((x149|x150)<=x151)%x152);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MAX;
	uint32_t x154 = 3U;
	int16_t x155 = INT16_MAX;
	static volatile int64_t x156 = -1LL;
	int64_t t36 = 9LL;

	t36 = (((x153|x154)<=x155)%x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -246330;
	int16_t x158 = INT16_MIN;
	volatile uint8_t x159 = UINT8_MAX;
	uint32_t x160 = 5U;
	static uint32_t t37 = 4U;

	t37 = (((x157|x158)<=x159)%x160);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x161 = -16622636;
	int16_t x162 = 0;
	int8_t x163 = INT8_MAX;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t38 = -7745;

	t38 = (((x161|x162)<=x163)%x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -2;
	int8_t x166 = INT8_MIN;
	int32_t x168 = 367;

	t39 = (((x165|x166)<=x167)%x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x169 = 21U;
	volatile int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	static int32_t x172 = -264444880;
	volatile int32_t t40 = 0;

	t40 = (((x169|x170)<=x171)%x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x178 = -1LL;
	int64_t x179 = INT64_MIN;
	static int16_t x180 = INT16_MIN;
	static int32_t t41 = -879429;

	t41 = (((x177|x178)<=x179)%x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 3U;
	volatile int8_t x182 = INT8_MAX;
	volatile int64_t x183 = -129425LL;
	int32_t t42 = 0;

	t42 = (((x181|x182)<=x183)%x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = 95;
	int32_t x187 = 1174607;
	int64_t t43 = -95791459LL;

	t43 = (((x185|x186)<=x187)%x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x189 = 6636LLU;
	uint64_t x190 = 21116965148LLU;
	int8_t x192 = INT8_MAX;
	volatile int32_t t44 = 1072809;

	t44 = (((x189|x190)<=x191)%x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	int32_t x195 = INT32_MAX;
	uint64_t x196 = 4998480960602343LLU;

	t45 = (((x193|x194)<=x195)%x196);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MIN;
	volatile uint16_t x198 = 0U;
	volatile uint8_t x199 = 60U;
	int16_t x200 = INT16_MAX;
	int32_t t46 = -473039417;

	t46 = (((x197|x198)<=x199)%x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x202 = -1;
	volatile int32_t t47 = 223058778;

	t47 = (((x201|x202)<=x203)%x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x206 = -13317;
	int16_t x207 = -12528;

	t48 = (((x205|x206)<=x207)%x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x210 = INT32_MAX;
	volatile int8_t x211 = INT8_MIN;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t49 = -503910;

	t49 = (((x209|x210)<=x211)%x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x213 = 8908U;
	int8_t x214 = INT8_MIN;
	uint16_t x215 = 27828U;
	uint64_t x216 = UINT64_MAX;
	static uint64_t t50 = 27107373000LLU;

	t50 = (((x213|x214)<=x215)%x216);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = UINT64_MAX;
	int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;

	t51 = (((x217|x218)<=x219)%x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -1LL;
	int64_t x222 = -60LL;
	int16_t x223 = 3;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t52 = 4104;

	t52 = (((x221|x222)<=x223)%x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = 13U;
	int64_t x226 = -392LL;
	int16_t x227 = 524;
	static uint8_t x228 = 25U;

	t53 = (((x225|x226)<=x227)%x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x229 = 802851913555474LLU;
	int64_t x230 = INT64_MAX;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MAX;
	static volatile int32_t t54 = -342302808;

	t54 = (((x229|x230)<=x231)%x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MAX;
	uint8_t x234 = 1U;
	int32_t x235 = INT32_MAX;
	int64_t x236 = INT64_MAX;
	int64_t t55 = 103070670089815LL;

	t55 = (((x233|x234)<=x235)%x236);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = INT16_MIN;
	int16_t x238 = -100;
	int16_t x239 = INT16_MIN;
	static volatile int64_t x240 = INT64_MAX;

	t56 = (((x237|x238)<=x239)%x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x242 = -1;
	int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MIN;
	int64_t t57 = 48LL;

	t57 = (((x241|x242)<=x243)%x244);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = 369;
	volatile int32_t x246 = INT32_MAX;
	uint64_t x247 = 1LLU;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t58 = 2728084;

	t58 = (((x245|x246)<=x247)%x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x250 = 58U;
	int32_t x251 = INT32_MAX;
	int8_t x252 = -1;
	int32_t t59 = -125;

	t59 = (((x249|x250)<=x251)%x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = -1LL;
	uint64_t x254 = UINT64_MAX;
	static uint8_t x256 = 79U;

	t60 = (((x253|x254)<=x255)%x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	static int64_t x259 = INT64_MAX;
	int8_t x260 = -10;
	volatile int32_t t61 = -820;

	t61 = (((x257|x258)<=x259)%x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 19;
	int64_t x262 = -1LL;
	int32_t x264 = -1;

	t62 = (((x261|x262)<=x263)%x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x265 = INT64_MAX;
	int8_t x266 = 1;
	volatile int32_t x267 = INT32_MIN;
	int32_t t63 = -2;

	t63 = (((x265|x266)<=x267)%x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int16_t x270 = -1;
	int8_t x271 = INT8_MIN;
	volatile int16_t x272 = -1;
	volatile int32_t t64 = 127418;

	t64 = (((x269|x270)<=x271)%x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x273 = INT16_MIN;
	static uint32_t x274 = UINT32_MAX;
	int64_t x275 = -1LL;
	int64_t x276 = -1LL;
	static volatile int64_t t65 = -3253208695112LL;

	t65 = (((x273|x274)<=x275)%x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x277 = INT64_MIN;
	int16_t x279 = INT16_MAX;
	uint32_t x280 = 124U;
	uint32_t t66 = 379506315U;

	t66 = (((x277|x278)<=x279)%x280);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x282 = 33990051110728LLU;
	int16_t x283 = INT16_MIN;
	static volatile int32_t t67 = -907;

	t67 = (((x281|x282)<=x283)%x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x286 = INT8_MIN;
	int32_t x287 = 803672074;
	uint64_t x288 = 12438LLU;
	volatile uint64_t t68 = 119228260348LLU;

	t68 = (((x285|x286)<=x287)%x288);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x289 = 32LL;
	int8_t x290 = INT8_MAX;
	uint32_t x291 = UINT32_MAX;
	static int8_t x292 = INT8_MIN;
	static volatile int32_t t69 = -6417;

	t69 = (((x289|x290)<=x291)%x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = -1LL;
	int32_t x294 = -1;
	static int16_t x296 = INT16_MIN;
	int32_t t70 = 11823;

	t70 = (((x293|x294)<=x295)%x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x298 = 3693559959588965LLU;
	int8_t x299 = INT8_MAX;
	static uint32_t x300 = 17598U;
	static volatile uint32_t t71 = 11222519U;

	t71 = (((x297|x298)<=x299)%x300);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = 165;
	volatile int16_t x302 = INT16_MAX;
	uint32_t x303 = 15U;
	uint16_t x304 = 1696U;
	volatile int32_t t72 = -4544864;

	t72 = (((x301|x302)<=x303)%x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = 39U;
	volatile int8_t x306 = INT8_MIN;
	static int8_t x307 = INT8_MAX;
	uint8_t x308 = UINT8_MAX;
	int32_t t73 = 1;

	t73 = (((x305|x306)<=x307)%x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x309 = -3930;
	static int8_t x311 = INT8_MAX;
	volatile int16_t x312 = -8760;
	int32_t t74 = 1592338;

	t74 = (((x309|x310)<=x311)%x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x314 = INT32_MIN;
	static int32_t t75 = 13270;

	t75 = (((x313|x314)<=x315)%x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x317 = INT32_MIN;
	volatile uint64_t x318 = UINT64_MAX;
	int8_t x320 = INT8_MIN;
	volatile int32_t t76 = 11518499;

	t76 = (((x317|x318)<=x319)%x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x322 = UINT64_MAX;
	volatile int32_t x323 = INT32_MIN;
	static volatile uint64_t t77 = 566525077LLU;

	t77 = (((x321|x322)<=x323)%x324);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x325 = INT16_MIN;
	int16_t x326 = 3;
	uint64_t x327 = 350LLU;
	int32_t t78 = 5;

	t78 = (((x325|x326)<=x327)%x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = 3530U;
	static int64_t x330 = 67374LL;
	static volatile uint8_t x331 = 6U;
	uint16_t x332 = 50U;
	int32_t t79 = -32040425;

	t79 = (((x329|x330)<=x331)%x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = -2960605;
	int32_t x336 = INT32_MIN;
	int32_t t80 = -312443300;

	t80 = (((x333|x334)<=x335)%x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = INT16_MAX;
	static int64_t x338 = INT64_MIN;
	volatile int32_t x340 = -739219;
	int32_t t81 = -990915;

	t81 = (((x337|x338)<=x339)%x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x341 = -1;
	static uint16_t x342 = UINT16_MAX;
	volatile uint32_t x343 = 58U;
	uint64_t x344 = 441218LLU;
	uint64_t t82 = 271058388LLU;

	t82 = (((x341|x342)<=x343)%x344);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = 3500663644LLU;
	uint8_t x347 = 44U;
	uint32_t x348 = 24U;
	volatile uint32_t t83 = 11762570U;

	t83 = (((x345|x346)<=x347)%x348);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = 234U;
	volatile uint32_t t84 = 115U;

	t84 = (((x349|x350)<=x351)%x352);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x354 = UINT32_MAX;
	volatile int16_t x355 = INT16_MIN;
	int16_t x356 = -1;
	volatile int32_t t85 = 516737;

	t85 = (((x353|x354)<=x355)%x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x359 = -230707378612LL;
	int64_t x360 = -1054387008884294LL;

	t86 = (((x357|x358)<=x359)%x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x362 = 4631283192LLU;
	int64_t x363 = -1046895210438LL;
	int16_t x364 = -3022;

	t87 = (((x361|x362)<=x363)%x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = INT8_MIN;
	volatile int64_t x366 = -4540636907814297752LL;
	int64_t x367 = INT64_MAX;
	uint64_t t88 = 1571766560515LLU;

	t88 = (((x365|x366)<=x367)%x368);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x369 = 137;
	int32_t x370 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	int32_t t89 = -100;

	t89 = (((x369|x370)<=x371)%x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = 829824044709156299LL;
	uint32_t x376 = 109307U;
	uint32_t t90 = 1524909U;

	t90 = (((x373|x374)<=x375)%x376);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = 1;
	int32_t x378 = -1;
	static volatile int64_t x379 = 1706614892942675LL;
	static int8_t x380 = INT8_MIN;
	int32_t t91 = -31487;

	t91 = (((x377|x378)<=x379)%x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MIN;
	static int64_t x382 = -1LL;
	int8_t x384 = -25;
	volatile int32_t t92 = 388;

	t92 = (((x381|x382)<=x383)%x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x387 = 52152813U;
	uint64_t x388 = 12526066143646255LLU;
	volatile uint64_t t93 = 3LLU;

	t93 = (((x385|x386)<=x387)%x388);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x389 = 111U;
	static uint32_t x390 = 508398U;
	static int32_t x391 = 34632;
	int8_t x392 = 1;
	volatile int32_t t94 = 91;

	t94 = (((x389|x390)<=x391)%x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = 1;
	static uint32_t x394 = UINT32_MAX;
	volatile int64_t x395 = 4LL;
	static int32_t t95 = -118;

	t95 = (((x393|x394)<=x395)%x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = -1448585;
	uint8_t x398 = 0U;
	int32_t x399 = INT32_MIN;
	uint16_t x400 = 20103U;
	int32_t t96 = 15;

	t96 = (((x397|x398)<=x399)%x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = INT64_MIN;
	volatile uint32_t x402 = 27U;
	uint8_t x403 = 2U;
	static int64_t x404 = INT64_MAX;
	int64_t t97 = 16530637853448613LL;

	t97 = (((x401|x402)<=x403)%x404);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = 5U;
	int32_t x406 = INT32_MIN;
	int32_t x407 = -117;
	int32_t x408 = INT32_MAX;
	int32_t t98 = 1348395;

	t98 = (((x405|x406)<=x407)%x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x409 = 5132U;
	int32_t x410 = INT32_MIN;
	int16_t x411 = INT16_MIN;
	volatile int32_t x412 = -1;
	int32_t t99 = 1003292;

	t99 = (((x409|x410)<=x411)%x412);

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
