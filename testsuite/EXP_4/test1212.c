#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = -1;
uint32_t x3 = 3186U;
volatile int16_t x13 = -878;
uint16_t x17 = UINT16_MAX;
volatile int32_t t8 = -818456515;
static uint8_t x40 = UINT8_MAX;
int8_t x43 = INT8_MIN;
int64_t x54 = INT64_MIN;
int32_t x71 = INT32_MAX;
int32_t x72 = INT32_MAX;
volatile int64_t x76 = INT64_MIN;
int16_t x77 = 94;
uint64_t x78 = 4867448325753964561LLU;
static uint16_t x80 = UINT16_MAX;
int32_t x81 = -1;
volatile int8_t x91 = -49;
int16_t x95 = -1;
int16_t x96 = -4;
volatile uint32_t x100 = 399930362U;
volatile int64_t t24 = 2266645210159LL;
uint64_t x101 = UINT64_MAX;
int16_t x112 = INT16_MIN;
volatile uint64_t t27 = 3346788439034318471LLU;
volatile uint64_t x116 = 633656934824LLU;
volatile int64_t t29 = 308565814982559883LL;
volatile int32_t x132 = INT32_MIN;
uint32_t t32 = 1441646U;
int32_t t35 = 51;
int32_t x150 = -1;
uint16_t x155 = 7285U;
volatile uint64_t t39 = 11855956LLU;
int16_t x163 = -1803;
uint64_t x166 = 151LLU;
static int8_t x167 = INT8_MAX;
int16_t x175 = -1;
static int16_t x176 = 2568;
int32_t x178 = INT32_MAX;
uint64_t t47 = 7751LLU;
int16_t x200 = -4;
int16_t x209 = INT16_MAX;
int8_t x210 = INT8_MIN;
int32_t t52 = -11803;
uint64_t x221 = 1LLU;
volatile uint16_t x222 = 894U;
uint16_t x224 = UINT16_MAX;
volatile uint32_t t56 = 1U;
volatile int64_t x229 = 58920382305815LL;
uint64_t x237 = UINT64_MAX;
static int8_t x238 = INT8_MIN;
uint8_t x246 = 6U;
int32_t x257 = -713670;
uint8_t x266 = UINT8_MAX;
int64_t x267 = INT64_MAX;
static int64_t x270 = 2474647LL;
volatile int32_t x274 = 1552;
int8_t x275 = -1;
static volatile int32_t t68 = 838;
static int32_t x280 = 565;
volatile uint64_t t69 = 6929382625361434LLU;
volatile uint16_t x282 = 111U;
int16_t x286 = -734;
static uint8_t x291 = UINT8_MAX;
int64_t x292 = INT64_MIN;
static uint64_t t72 = 71590284929883263LLU;
static volatile int32_t x296 = 300;
static uint64_t t73 = 11915679194663344LLU;
int32_t x304 = INT32_MAX;
volatile uint64_t t76 = 20984145776974718LLU;
static volatile uint32_t x310 = 172U;
static int8_t x318 = INT8_MIN;
int64_t x319 = -1LL;
static int32_t t79 = -24;
static int32_t x328 = INT32_MIN;
uint32_t x329 = UINT32_MAX;
uint16_t x330 = 1U;
int64_t x333 = -1LL;
static int16_t x337 = INT16_MAX;
int16_t x339 = INT16_MIN;
int16_t x342 = INT16_MAX;
uint64_t x343 = UINT64_MAX;
static volatile uint32_t t85 = 5442U;
uint8_t x347 = 25U;
static volatile uint32_t x352 = UINT32_MAX;
static volatile int32_t x360 = -13804899;
uint64_t x361 = 3940LLU;
int32_t x365 = 287;
uint8_t x371 = 25U;
uint8_t x372 = 1U;
uint32_t x374 = UINT32_MAX;
static volatile uint32_t t92 = 1729716U;
int64_t x381 = INT64_MIN;
int16_t x382 = INT16_MAX;
static uint64_t x385 = 169122421881LLU;
int32_t t97 = 48;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	static int8_t x4 = -2;
	volatile int64_t t0 = -2LL;

	t0 = (x1*(x2*(x3==x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint32_t x6 = 536889040U;
	int16_t x7 = -1;
	int32_t x8 = 6;
	int64_t t1 = 699586369LL;

	t1 = (x5*(x6*(x7==x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static volatile int16_t x10 = -1;
	int64_t x11 = 7165948LL;
	uint16_t x12 = 515U;
	static volatile int32_t t2 = 702877;

	t2 = (x9*(x10*(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	volatile uint8_t x15 = 18U;
	uint8_t x16 = UINT8_MAX;
	int64_t t3 = 0LL;

	t3 = (x13*(x14*(x15==x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	int32_t x19 = -5;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = 96934079866278LL;

	t4 = (x17*(x18*(x19==x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = 20;
	uint8_t x22 = 5U;
	uint64_t x23 = UINT64_MAX;
	uint64_t x24 = 18890839088543619LLU;
	volatile int32_t t5 = 508;

	t5 = (x21*(x22*(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int8_t x26 = -29;
	uint8_t x27 = 80U;
	uint16_t x28 = 0U;
	int32_t t6 = 348;

	t6 = (x25*(x26*(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	static volatile uint64_t x30 = 120046098941485LLU;
	volatile int32_t x31 = -139;
	volatile int32_t x32 = 33142163;
	uint64_t t7 = 661347709LLU;

	t7 = (x29*(x30*(x31==x32)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MAX;
	int32_t x34 = INT32_MAX;
	volatile int32_t x35 = INT32_MAX;
	volatile int16_t x36 = INT16_MIN;

	t8 = (x33*(x34*(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -4008686043723429LL;
	int32_t x38 = INT32_MAX;
	volatile int16_t x39 = -1;
	static int64_t t9 = -204517627456689320LL;

	t9 = (x37*(x38*(x39==x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 4623U;
	static int16_t x42 = 46;
	uint32_t x44 = UINT32_MAX;
	uint32_t t10 = 11839U;

	t10 = (x41*(x42*(x43==x44)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 8U;
	static int32_t x46 = -1;
	uint16_t x47 = 56U;
	int64_t x48 = INT64_MIN;
	int32_t t11 = 20;

	t11 = (x45*(x46*(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = 580;
	int32_t x50 = -4;
	int16_t x51 = INT16_MIN;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t12 = -189;

	t12 = (x49*(x50*(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = 71LLU;
	volatile uint64_t t13 = 1702585LLU;

	t13 = (x53*(x54*(x55==x56)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	static uint64_t x58 = 256124272922689038LLU;
	uint64_t x59 = UINT64_MAX;
	uint64_t x60 = 221735686891918013LLU;
	uint64_t t14 = 120LLU;

	t14 = (x57*(x58*(x59==x60)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 1;
	int32_t x62 = 194;
	uint64_t x63 = UINT64_MAX;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 33347888;

	t15 = (x61*(x62*(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MIN;
	int32_t x67 = INT32_MIN;
	static int8_t x68 = INT8_MIN;
	int32_t t16 = -6286;

	t16 = (x65*(x66*(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1;
	static uint16_t x70 = UINT16_MAX;
	int32_t t17 = 436763;

	t17 = (x69*(x70*(x71==x72)));

	if (t17 != -65535) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	int8_t x74 = -1;
	int32_t x75 = -15489425;
	volatile int32_t t18 = -58938739;

	t18 = (x73*(x74*(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x79 = 3782;
	static uint64_t t19 = 2331187818895LLU;

	t19 = (x77*(x78*(x79==x80)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 9253U;
	static int64_t x83 = -1LL;
	uint32_t x84 = 74924748U;
	volatile uint32_t t20 = 1519U;

	t20 = (x81*(x82*(x83==x84)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static int32_t x86 = -1;
	int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MIN;
	volatile int64_t t21 = 44708LL;

	t21 = (x85*(x86*(x87==x88)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	volatile int16_t x90 = -1;
	int32_t x92 = INT32_MAX;
	volatile int32_t t22 = 5;

	t22 = (x89*(x90*(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint64_t x94 = UINT64_MAX;
	volatile uint64_t t23 = 873914LLU;

	t23 = (x93*(x94*(x95==x96)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MAX;

	t24 = (x97*(x98*(x99==x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x102 = 343556672783316LLU;
	int32_t x103 = INT32_MIN;
	static int64_t x104 = INT64_MIN;
	volatile uint64_t t25 = 344LLU;

	t25 = (x101*(x102*(x103==x104)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int16_t x106 = -1;
	volatile int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MAX;
	int32_t t26 = 84218;

	t26 = (x105*(x106*(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 233312499359789LLU;
	int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MAX;

	t27 = (x109*(x110*(x111==x112)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	int8_t x114 = INT8_MIN;
	volatile uint16_t x115 = 116U;
	int32_t t28 = -3309573;

	t28 = (x113*(x114*(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int64_t x118 = -1LL;
	int8_t x119 = -1;
	uint16_t x120 = UINT16_MAX;

	t29 = (x117*(x118*(x119==x120)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 405104U;
	uint16_t x122 = 1210U;
	int64_t x123 = INT64_MIN;
	int8_t x124 = -1;
	volatile uint32_t t30 = 13910508U;

	t30 = (x121*(x122*(x123==x124)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 66075504310486765LL;
	int64_t x126 = -1LL;
	volatile int8_t x127 = -1;
	int32_t x128 = INT32_MIN;
	static int64_t t31 = 11LL;

	t31 = (x125*(x126*(x127==x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 4748074U;
	int8_t x130 = INT8_MIN;
	int32_t x131 = 76921;

	t32 = (x129*(x130*(x131==x132)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	volatile int64_t x134 = 7951LL;
	volatile uint32_t x135 = 4U;
	uint16_t x136 = 2044U;
	int64_t t33 = 21988334153653LL;

	t33 = (x133*(x134*(x135==x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int32_t x138 = -31464;
	int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MAX;
	volatile int64_t t34 = -22LL;

	t34 = (x137*(x138*(x139==x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	static volatile int32_t x142 = INT32_MIN;
	int8_t x143 = 17;
	int64_t x144 = INT64_MAX;

	t35 = (x141*(x142*(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = 30;
	static int8_t x146 = INT8_MIN;
	int8_t x147 = 0;
	uint64_t x148 = UINT64_MAX;
	static int32_t t36 = -11;

	t36 = (x145*(x146*(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 14480063669638LLU;
	static int8_t x151 = INT8_MIN;
	uint64_t x152 = 11043869955LLU;
	volatile uint64_t t37 = 1822LLU;

	t37 = (x149*(x150*(x151==x152)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MIN;
	uint32_t x154 = 41150U;
	volatile int16_t x156 = -68;
	static volatile uint32_t t38 = 2301U;

	t38 = (x153*(x154*(x155==x156)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 10318791829900061LLU;
	static int64_t x158 = INT64_MIN;
	static uint32_t x159 = UINT32_MAX;
	uint16_t x160 = UINT16_MAX;

	t39 = (x157*(x158*(x159==x160)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	static int64_t x162 = 5204326236605718LL;
	int8_t x164 = -1;
	int64_t t40 = -6LL;

	t40 = (x161*(x162*(x163==x164)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int64_t x168 = INT64_MIN;
	static volatile uint64_t t41 = 394193LLU;

	t41 = (x165*(x166*(x167==x168)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 61U;
	static int8_t x170 = INT8_MIN;
	static int64_t x171 = INT64_MAX;
	static uint8_t x172 = 1U;
	int32_t t42 = -15799;

	t42 = (x169*(x170*(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 1428071600464LLU;
	uint32_t x174 = 2358681U;
	volatile uint64_t t43 = 58707471702LLU;

	t43 = (x173*(x174*(x175==x176)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	static int16_t x179 = INT16_MIN;
	volatile int16_t x180 = INT16_MIN;
	volatile uint64_t t44 = 203034803661308LLU;

	t44 = (x177*(x178*(x179==x180)));

	if (t44 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MAX;
	uint16_t x182 = 3972U;
	int32_t x183 = 793176617;
	volatile uint64_t x184 = 45733491LLU;
	volatile int32_t t45 = -19407670;

	t45 = (x181*(x182*(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x185 = -180;
	uint8_t x186 = UINT8_MAX;
	int32_t x187 = INT32_MAX;
	static int8_t x188 = 29;
	volatile int32_t t46 = -85094;

	t46 = (x185*(x186*(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	static int32_t x190 = INT32_MIN;
	int64_t x191 = 26459LL;
	uint64_t x192 = 2852415889471362636LLU;

	t47 = (x189*(x190*(x191==x192)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -12823;
	uint64_t x194 = 78153630242LLU;
	int32_t x195 = -1;
	int8_t x196 = INT8_MIN;
	static uint64_t t48 = 71LLU;

	t48 = (x193*(x194*(x195==x196)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = 1;
	int64_t x198 = -4211479323LL;
	uint32_t x199 = UINT32_MAX;
	volatile int64_t t49 = 5LL;

	t49 = (x197*(x198*(x199==x200)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = INT64_MIN;
	uint32_t x202 = UINT32_MAX;
	int8_t x203 = 1;
	int64_t x204 = INT64_MAX;
	static int64_t t50 = -3876730969238659985LL;

	t50 = (x201*(x202*(x203==x204)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 121U;
	int32_t x206 = INT32_MIN;
	int8_t x207 = INT8_MIN;
	int8_t x208 = 0;
	int32_t t51 = 145;

	t51 = (x205*(x206*(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x211 = 7323U;
	int8_t x212 = 9;

	t52 = (x209*(x210*(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = UINT16_MAX;
	uint64_t x214 = 92973775488218638LLU;
	int8_t x215 = 1;
	volatile int8_t x216 = INT8_MIN;
	volatile uint64_t t53 = 3932122363418LLU;

	t53 = (x213*(x214*(x215==x216)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	static int8_t x218 = INT8_MAX;
	static int8_t x219 = INT8_MIN;
	int64_t x220 = 156LL;
	int32_t t54 = 504;

	t54 = (x217*(x218*(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x223 = INT16_MIN;
	volatile uint64_t t55 = 224556366365551LLU;

	t55 = (x221*(x222*(x223==x224)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	uint16_t x226 = UINT16_MAX;
	int16_t x227 = INT16_MAX;
	volatile int8_t x228 = -8;

	t56 = (x225*(x226*(x227==x228)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x230 = -1;
	volatile int64_t x231 = INT64_MIN;
	uint8_t x232 = 102U;
	int64_t t57 = -4090133281LL;

	t57 = (x229*(x230*(x231==x232)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	volatile int16_t x234 = -457;
	uint8_t x235 = 1U;
	static volatile int8_t x236 = INT8_MIN;
	int64_t t58 = 117LL;

	t58 = (x233*(x234*(x235==x236)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x239 = UINT64_MAX;
	static int32_t x240 = -3;
	uint64_t t59 = 498LLU;

	t59 = (x237*(x238*(x239==x240)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	static int64_t x242 = INT64_MIN;
	uint16_t x243 = UINT16_MAX;
	static int64_t x244 = INT64_MIN;
	int64_t t60 = 21186474758083985LL;

	t60 = (x241*(x242*(x243==x244)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MAX;
	int64_t x247 = INT64_MAX;
	int64_t x248 = INT64_MIN;
	volatile int64_t t61 = 17339LL;

	t61 = (x245*(x246*(x247==x248)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = INT16_MAX;
	volatile int64_t x251 = -647232577LL;
	static int32_t x252 = -31;
	int64_t t62 = 465725LL;

	t62 = (x249*(x250*(x251==x252)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = 3264572516616LLU;
	int16_t x254 = INT16_MIN;
	volatile int64_t x255 = INT64_MIN;
	uint16_t x256 = UINT16_MAX;
	static volatile uint64_t t63 = 1LLU;

	t63 = (x253*(x254*(x255==x256)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x258 = UINT64_MAX;
	int64_t x259 = INT64_MIN;
	int16_t x260 = -7072;
	uint64_t t64 = 11463049LLU;

	t64 = (x257*(x258*(x259==x260)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	volatile int16_t x262 = 11334;
	int64_t x263 = INT64_MIN;
	int8_t x264 = -1;
	int32_t t65 = 15;

	t65 = (x261*(x262*(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 7U;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 0;

	t66 = (x265*(x266*(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 0U;
	int16_t x271 = 6840;
	volatile uint16_t x272 = UINT16_MAX;
	volatile int64_t t67 = 1050LL;

	t67 = (x269*(x270*(x271==x272)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = UINT8_MAX;
	static volatile uint8_t x276 = 65U;

	t68 = (x273*(x274*(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 162398502275141LLU;
	int16_t x278 = INT16_MIN;
	int16_t x279 = 24;

	t69 = (x277*(x278*(x279==x280)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	static int16_t x283 = -431;
	static int64_t x284 = 1925311LL;
	volatile int32_t t70 = 1;

	t70 = (x281*(x282*(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x287 = INT32_MIN;
	volatile int32_t x288 = -6502112;
	volatile int32_t t71 = 1059837355;

	t71 = (x285*(x286*(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 14540581148279569LLU;
	int32_t x290 = INT32_MAX;

	t72 = (x289*(x290*(x291==x292)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 4105032480126LL;
	uint64_t x294 = 612LLU;
	int8_t x295 = -1;

	t73 = (x293*(x294*(x295==x296)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	volatile uint64_t x298 = UINT64_MAX;
	volatile int64_t x299 = INT64_MAX;
	int64_t x300 = -438542488856674384LL;
	volatile uint64_t t74 = 243748290789643897LLU;

	t74 = (x297*(x298*(x299==x300)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = INT8_MAX;
	int16_t x302 = INT16_MIN;
	uint64_t x303 = 3500LLU;
	static int32_t t75 = -199570;

	t75 = (x301*(x302*(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	uint64_t x306 = UINT64_MAX;
	int16_t x307 = INT16_MIN;
	int8_t x308 = -1;

	t76 = (x305*(x306*(x307==x308)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 19;
	uint32_t x311 = UINT32_MAX;
	uint8_t x312 = 17U;
	uint32_t t77 = 525329U;

	t77 = (x309*(x310*(x311==x312)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	volatile int16_t x314 = INT16_MAX;
	static int16_t x315 = INT16_MAX;
	volatile uint64_t x316 = UINT64_MAX;
	volatile int32_t t78 = 542451923;

	t78 = (x313*(x314*(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 12189;
	int32_t x320 = 985237;

	t79 = (x317*(x318*(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 22;
	int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	uint64_t x324 = 16372325582234714LLU;
	static int32_t t80 = 18091322;

	t80 = (x321*(x322*(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = UINT64_MAX;
	static volatile int8_t x326 = INT8_MIN;
	static int32_t x327 = INT32_MIN;
	uint64_t t81 = 57217716772106139LLU;

	t81 = (x325*(x326*(x327==x328)));

	if (t81 != 128LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x331 = INT16_MIN;
	uint64_t x332 = UINT64_MAX;
	uint32_t t82 = 954872U;

	t82 = (x329*(x330*(x331==x332)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x334 = INT64_MIN;
	static int8_t x335 = -1;
	int32_t x336 = 110949;
	int64_t t83 = -472370637423LL;

	t83 = (x333*(x334*(x335==x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x338 = 118594U;
	uint64_t x340 = 9271145LLU;
	volatile uint32_t t84 = 2U;

	t84 = (x337*(x338*(x339==x340)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	static int32_t x344 = INT32_MIN;

	t85 = (x341*(x342*(x343==x344)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = INT16_MAX;
	int64_t x346 = INT64_MIN;
	uint16_t x348 = 6U;
	static volatile int64_t t86 = -413931159461LL;

	t86 = (x345*(x346*(x347==x348)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -961LL;
	int64_t x350 = INT64_MAX;
	int64_t x351 = -1LL;
	static int64_t t87 = -11696959846LL;

	t87 = (x349*(x350*(x351==x352)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = 52U;
	int8_t x358 = INT8_MIN;
	int64_t x359 = -1LL;
	volatile int32_t t88 = 15258;

	t88 = (x357*(x358*(x359==x360)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x362 = -4457482976958161328LL;
	static int16_t x363 = -1726;
	uint32_t x364 = UINT32_MAX;
	uint64_t t89 = 16LLU;

	t89 = (x361*(x362*(x363==x364)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x366 = INT16_MIN;
	volatile int16_t x367 = 1;
	int32_t x368 = -1;
	int32_t t90 = 1;

	t90 = (x365*(x366*(x367==x368)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x369 = INT32_MAX;
	volatile int32_t x370 = INT32_MIN;
	int32_t t91 = 990902;

	t91 = (x369*(x370*(x371==x372)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = INT32_MAX;
	volatile int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;

	t92 = (x373*(x374*(x375==x376)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = 339630978172LLU;
	volatile int16_t x378 = INT16_MIN;
	volatile int32_t x379 = INT32_MIN;
	uint8_t x380 = 2U;
	uint64_t t93 = 2180414708174401LLU;

	t93 = (x377*(x378*(x379==x380)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x383 = 1;
	uint8_t x384 = 42U;
	int64_t t94 = 8LL;

	t94 = (x381*(x382*(x383==x384)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x386 = -25;
	static int8_t x387 = -1;
	int32_t x388 = INT32_MIN;
	uint64_t t95 = 12217122331LLU;

	t95 = (x385*(x386*(x387==x388)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = INT8_MIN;
	uint8_t x390 = UINT8_MAX;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = INT16_MIN;
	volatile int32_t t96 = -7457;

	t96 = (x389*(x390*(x391==x392)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = INT8_MIN;
	static int8_t x394 = INT8_MIN;
	static int32_t x395 = INT32_MAX;
	int32_t x396 = 1;

	t97 = (x393*(x394*(x395==x396)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x397 = -263228314153LL;
	volatile int16_t x398 = 4781;
	volatile int16_t x399 = 6;
	uint64_t x400 = 916072207288LLU;
	volatile int64_t t98 = -4LL;

	t98 = (x397*(x398*(x399==x400)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = -1;
	volatile uint8_t x402 = 0U;
	uint16_t x403 = 1498U;
	int8_t x404 = 0;
	int32_t t99 = 17704763;

	t99 = (x401*(x402*(x403==x404)));

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
