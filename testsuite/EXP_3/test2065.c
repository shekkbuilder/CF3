#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MAX;
int32_t x8 = 14321;
uint32_t x9 = 933U;
volatile int32_t t4 = -3;
volatile int32_t t9 = 1862;
volatile int32_t x54 = INT32_MIN;
int32_t x55 = -63046533;
int64_t x88 = -1LL;
int64_t t13 = -7254852158LL;
uint32_t x94 = 4206919U;
int64_t x97 = -241038790LL;
int32_t x100 = -728;
int64_t t15 = -7744258434415862LL;
int16_t x106 = INT16_MIN;
static int8_t x110 = 0;
int64_t x115 = -2732378665830LL;
int16_t x116 = INT16_MAX;
int32_t x117 = INT32_MAX;
int32_t x118 = -1;
int8_t x123 = INT8_MAX;
volatile int64_t x124 = -1LL;
static int64_t t21 = 427562177031721LL;
static int32_t x132 = INT32_MAX;
volatile int32_t x140 = INT32_MIN;
uint8_t x144 = UINT8_MAX;
int64_t x147 = INT64_MIN;
int8_t x149 = -3;
int16_t x150 = INT16_MIN;
int64_t x154 = -1LL;
int64_t x159 = INT64_MIN;
int16_t x162 = -1;
int8_t x163 = -5;
int8_t x164 = 1;
int32_t x177 = 3387;
static uint8_t x178 = UINT8_MAX;
static volatile int32_t x180 = INT32_MIN;
volatile int8_t x185 = -1;
static int16_t x196 = INT16_MAX;
uint32_t x198 = 6U;
volatile int32_t x199 = -1;
volatile int64_t x203 = INT64_MIN;
int16_t x204 = INT16_MIN;
volatile int32_t x206 = -256466;
static volatile int32_t x211 = 216608;
int8_t x220 = -1;
uint32_t x234 = UINT32_MAX;
int8_t x250 = -11;
int32_t x251 = INT32_MAX;
volatile int32_t t46 = 3054814;
volatile uint64_t t47 = 109041964018187311LLU;
int32_t t48 = 55367;
int64_t x272 = INT64_MIN;
volatile int16_t x275 = 195;
uint32_t t51 = 1807792546U;
uint8_t x295 = 112U;
static int8_t x297 = -1;
int8_t x305 = INT8_MIN;
static uint16_t x346 = UINT16_MAX;
static int16_t x349 = INT16_MIN;
uint32_t x355 = 296U;
volatile uint32_t t62 = 382U;
volatile int64_t x375 = -1LL;
int64_t x377 = -1LL;
int64_t t65 = -66655888597510LL;
volatile uint8_t x383 = 25U;
static int32_t t66 = -462;
uint32_t x388 = UINT32_MAX;
volatile uint32_t t67 = 196U;
static int32_t x389 = INT32_MIN;
int8_t x392 = -1;
int8_t x395 = -3;
uint8_t x397 = 47U;
uint8_t x399 = UINT8_MAX;
int8_t x405 = -1;
uint32_t t73 = 2878738U;
int64_t x424 = -1LL;
static int32_t x431 = INT32_MIN;
int64_t x432 = INT64_MIN;
static uint16_t x433 = 31006U;
uint8_t x435 = UINT8_MAX;
uint32_t x467 = UINT32_MAX;
volatile uint32_t t79 = 200649U;
static int32_t x480 = INT32_MAX;
int32_t t80 = 40;
int16_t x482 = INT16_MIN;
static uint32_t x484 = 27U;
uint32_t x493 = UINT32_MAX;
static uint32_t x495 = 524603064U;
int64_t x496 = -1LL;
int32_t x497 = 1;
uint8_t x500 = UINT8_MAX;
uint64_t t85 = 986747455815188LLU;
static volatile uint32_t t87 = 60385962U;
uint32_t x520 = 908335U;
int64_t x522 = -672916176975LL;
int8_t x524 = -1;
int16_t x531 = INT16_MIN;
uint32_t x537 = 66753366U;
int16_t x543 = 1118;
int64_t x544 = -1LL;
volatile uint32_t x547 = UINT32_MAX;
uint16_t x548 = 166U;
int16_t x567 = INT16_MIN;
static uint32_t x568 = 8224148U;
uint32_t t97 = 5431865U;
int32_t x570 = -1;


void f0(void) {
	uint32_t x1 = 16689U;
	static volatile uint32_t x2 = 884779998U;
	static int64_t x3 = -1988016883058556815LL;
	int64_t t0 = -26007445351362LL;

	t0 = ((x1*x2)&(x3^x4));

	if (t0 != 4194304782LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	int32_t x6 = 10;
	int32_t x7 = INT32_MAX;
	int32_t t1 = 1071794;

	t1 = ((x5*x6)&(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = -1LL;
	uint16_t x11 = 24U;
	int64_t x12 = 165388683LL;
	int64_t t2 = -2LL;

	t2 = ((x9*x10)&(x11^x12));

	if (t2 != 165388307LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 980;
	int64_t x14 = 520315948LL;
	volatile int16_t x15 = 393;
	int32_t x16 = INT32_MIN;
	int64_t t3 = -543LL;

	t3 = ((x13*x14)&(x15^x16));

	if (t3 != 508953624576LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -30;
	volatile uint8_t x18 = UINT8_MAX;
	int8_t x19 = INT8_MAX;
	static int8_t x20 = INT8_MIN;

	t4 = ((x17*x18)&(x19^x20));

	if (t4 != -7650) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint64_t x22 = 38199666386477427LLU;
	volatile uint32_t x23 = 30577361U;
	volatile uint32_t x24 = 0U;
	uint64_t t5 = 763146LLU;

	t5 = ((x21*x22)&(x23^x24));

	if (t5 != 5411457LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static uint32_t x26 = UINT32_MAX;
	int64_t x27 = INT64_MAX;
	uint32_t x28 = 1078U;
	static int64_t t6 = -396LL;

	t6 = ((x25*x26)&(x27^x28));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 4432863;
	volatile uint32_t x30 = UINT32_MAX;
	int16_t x31 = -1;
	uint32_t x32 = UINT32_MAX;
	uint32_t t7 = 355565460U;

	t7 = ((x29*x30)&(x31^x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 24322648260221LLU;
	volatile uint8_t x46 = 3U;
	int32_t x47 = INT32_MIN;
	uint16_t x48 = 26101U;
	volatile uint64_t t8 = 1631817102839718447LLU;

	t8 = ((x45*x46)&(x47^x48));

	if (t8 != 72967199400309LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x49 = INT8_MAX;
	int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MIN;
	static int32_t x52 = INT32_MIN;

	t9 = ((x49*x50)&(x51^x52));

	if (t9 != 2147467392) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = UINT64_MAX;
	uint32_t x56 = UINT32_MAX;
	static uint64_t t10 = 56427483521044931LLU;

	t10 = ((x53*x54)&(x55^x56));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x65 = 2102LLU;
	int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MIN;
	int64_t x68 = 571139991885719LL;
	volatile uint64_t t11 = 1086600192LLU;

	t11 = ((x65*x66)&(x67^x68));

	if (t11 != 18446172933716967424LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x77 = 0;
	volatile int8_t x78 = -1;
	int64_t x79 = INT64_MIN;
	int32_t x80 = 242636;
	static volatile int64_t t12 = 4089LL;

	t12 = ((x77*x78)&(x79^x80));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x85 = 72U;
	uint16_t x86 = UINT16_MAX;
	uint32_t x87 = UINT32_MAX;

	t13 = ((x85*x86)&(x87^x88));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x93 = -1LL;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = -67868042072305916LL;
	static volatile uint64_t t14 = 177LLU;

	t14 = ((x93*x94)&(x95^x96));

	if (t14 != 67868042068099257LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x98 = 0U;
	int32_t x99 = INT32_MAX;

	t15 = ((x97*x98)&(x99^x100));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x105 = UINT64_MAX;
	uint64_t x107 = 8471662021528861LLU;
	static volatile int8_t x108 = INT8_MIN;
	volatile uint64_t t16 = 118LLU;

	t16 = ((x105*x106)&(x107^x108));

	if (t16 != 32768LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x109 = 151056836LLU;
	int32_t x111 = -1;
	uint64_t x112 = 8LLU;
	uint64_t t17 = 71179029168LLU;

	t17 = ((x109*x110)&(x111^x112));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = 1033353;
	uint8_t x114 = UINT8_MAX;
	volatile int64_t t18 = 228472875309854LL;

	t18 = ((x113*x114)&(x115^x116));

	if (t18 != 25165925LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x119 = -1LL;
	int64_t x120 = 48643477LL;
	int64_t t19 = -245LL;

	t19 = ((x117*x118)&(x119^x120));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x121 = 585215992103900942LLU;
	static int16_t x122 = -1;
	volatile uint64_t t20 = 969LLU;

	t20 = ((x121*x122)&(x123^x124));

	if (t20 != 17861528081605650560LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = INT8_MAX;
	uint8_t x126 = UINT8_MAX;
	int64_t x127 = 118463LL;
	static int8_t x128 = -1;

	t21 = ((x125*x126)&(x127^x128));

	if (t21 != 12288LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x129 = INT8_MIN;
	volatile int16_t x130 = INT16_MIN;
	static int64_t x131 = INT64_MIN;
	volatile int64_t t22 = -16006612LL;

	t22 = ((x129*x130)&(x131^x132));

	if (t22 != 4194304LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x133 = -1;
	int64_t x134 = 1933003LL;
	volatile int8_t x135 = INT8_MIN;
	static int32_t x136 = INT32_MAX;
	int64_t t23 = -15924618812LL;

	t23 = ((x133*x134)&(x135^x136));

	if (t23 != -2147483595LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x137 = UINT64_MAX;
	uint64_t x138 = UINT64_MAX;
	int64_t x139 = INT64_MIN;
	uint64_t t24 = 131334697687472008LLU;

	t24 = ((x137*x138)&(x139^x140));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x141 = 413066927469LLU;
	volatile uint64_t x142 = UINT64_MAX;
	int16_t x143 = INT16_MIN;
	uint64_t t25 = 227LLU;

	t25 = ((x141*x142)&(x143^x144));

	if (t25 != 18446743660642599059LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x145 = 161U;
	int64_t x146 = -1LL;
	uint8_t x148 = UINT8_MAX;
	volatile int64_t t26 = 0LL;

	t26 = ((x145*x146)&(x147^x148));

	if (t26 != -9223372036854775713LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x151 = -1;
	int64_t x152 = INT64_MAX;
	static int64_t t27 = -6806304484LL;

	t27 = ((x149*x150)&(x151^x152));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = INT8_MIN;
	static int64_t x155 = -1LL;
	volatile uint32_t x156 = 50101U;
	int64_t t28 = 4169939LL;

	t28 = ((x153*x154)&(x155^x156));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = 13070797268LL;
	uint16_t x160 = UINT16_MAX;
	int64_t t29 = INT64_MIN;

	t29 = ((x157*x158)&(x159^x160));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x161 = UINT64_MAX;
	volatile uint64_t t30 = 1065124811019LLU;

	t30 = ((x161*x162)&(x163^x164));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x169 = UINT64_MAX;
	int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	volatile uint16_t x172 = 28002U;
	volatile uint64_t t31 = 17580982844786404LLU;

	t31 = ((x169*x170)&(x171^x172));

	if (t31 != 2147483648LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x173 = UINT32_MAX;
	uint32_t x174 = UINT32_MAX;
	uint32_t x175 = UINT32_MAX;
	int8_t x176 = INT8_MIN;
	static volatile uint32_t t32 = 4U;

	t32 = ((x173*x174)&(x175^x176));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x179 = 212917U;
	uint32_t t33 = 103642U;

	t33 = ((x177*x178)&(x179^x180));

	if (t33 != 77189U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x181 = -44;
	int8_t x182 = -6;
	int32_t x183 = -24958;
	int64_t x184 = INT64_MIN;
	volatile int64_t t34 = 237072981522314LL;

	t34 = ((x181*x182)&(x183^x184));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x186 = 3U;
	int32_t x187 = -1;
	static int64_t x188 = -2982368708723LL;
	volatile int64_t t35 = 14LL;

	t35 = ((x185*x186)&(x187^x188));

	if (t35 != 2982368708720LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x193 = UINT8_MAX;
	uint64_t x194 = 1667436LLU;
	int8_t x195 = INT8_MIN;
	volatile uint64_t t36 = 608373632963LLU;

	t36 = ((x193*x194)&(x195^x196));

	if (t36 != 425164820LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x197 = -1;
	int64_t x200 = -3864221071784LL;
	volatile int64_t t37 = -61848462951LL;

	t37 = ((x197*x198)&(x199^x200));

	if (t37 != 3045472674LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x201 = 123622883169LL;
	volatile int16_t x202 = -1;
	static volatile int64_t t38 = -169705362806251LL;

	t38 = ((x201*x202)&(x203^x204));

	if (t38 != 9223371913231892480LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x205 = 549342719000035LLU;
	uint32_t x207 = 20U;
	uint64_t x208 = 6355978842775880LLU;
	volatile uint64_t t39 = 752881052053447585LLU;

	t39 = ((x205*x206)&(x207^x208));

	if (t39 != 585189832040520LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x209 = -31;
	int8_t x210 = INT8_MAX;
	volatile uint8_t x212 = 1U;
	volatile int32_t t40 = -1;

	t40 = ((x209*x210)&(x211^x212));

	if (t40 != 212993) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x217 = 17903419LLU;
	uint16_t x218 = 22901U;
	volatile int16_t x219 = -3;
	volatile uint64_t t41 = 1LLU;

	t41 = ((x217*x218)&(x219^x220));

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = -3510;
	int8_t x226 = INT8_MAX;
	volatile uint8_t x227 = 21U;
	uint32_t x228 = 580133U;
	uint32_t t42 = 32092289U;

	t42 = ((x225*x226)&(x227^x228));

	if (t42 != 528944U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x233 = -104724LL;
	int32_t x235 = INT32_MIN;
	int16_t x236 = INT16_MIN;
	int64_t t43 = 1043573535LL;

	t43 = ((x233*x234)&(x235^x236));

	if (t43 != 98304LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x241 = 355035LLU;
	int8_t x242 = 20;
	int32_t x243 = INT32_MIN;
	uint32_t x244 = 1U;
	static uint64_t t44 = 43882537912395774LLU;

	t44 = ((x241*x242)&(x243^x244));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x245 = 724141444U;
	static int8_t x246 = INT8_MIN;
	int16_t x247 = -1;
	int64_t x248 = -1LL;
	int64_t t45 = -3675563583844LL;

	t45 = ((x245*x246)&(x247^x248));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x249 = INT8_MAX;
	static uint16_t x252 = 12930U;

	t46 = ((x249*x250)&(x251^x252));

	if (t46 != 2147469321) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x253 = 784211695242655344LLU;
	int8_t x254 = -1;
	uint32_t x255 = 11455224U;
	int32_t x256 = -472;

	t47 = ((x253*x254)&(x255^x256));

	if (t47 != 1011875984LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x261 = -54;
	int8_t x262 = 11;
	int8_t x263 = -10;
	static volatile int16_t x264 = 84;

	t48 = ((x261*x262)&(x263^x264));

	if (t48 != -606) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	uint32_t x267 = UINT32_MAX;
	uint16_t x268 = 823U;
	uint32_t t49 = 190694U;

	t49 = ((x265*x266)&(x267^x268));

	if (t49 != 16384U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x269 = 851148U;
	int16_t x270 = 437;
	volatile uint64_t x271 = 367636148409LLU;
	uint64_t t50 = 14010848LLU;

	t50 = ((x269*x270)&(x271^x272));

	if (t50 != 268566584LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x273 = 30U;
	uint32_t x274 = UINT32_MAX;
	int8_t x276 = INT8_MIN;

	t51 = ((x273*x274)&(x275^x276));

	if (t51 != 4294967106U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x277 = -1;
	volatile uint64_t x278 = UINT64_MAX;
	volatile int16_t x279 = -505;
	volatile int8_t x280 = 57;
	uint64_t t52 = 76059860635471LLU;

	t52 = ((x277*x278)&(x279^x280));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x293 = 348461279564458472LLU;
	int8_t x294 = -3;
	int8_t x296 = INT8_MAX;
	uint64_t t53 = 120154816821282817LLU;

	t53 = ((x293*x294)&(x295^x296));

	if (t53 != 8LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x298 = INT64_MAX;
	int64_t x299 = INT64_MAX;
	static int64_t x300 = 248454537LL;
	int64_t t54 = -33LL;

	t54 = ((x297*x298)&(x299^x300));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x301 = -1;
	int32_t x302 = INT32_MAX;
	int8_t x303 = -1;
	int16_t x304 = -1;
	int32_t t55 = -56;

	t55 = ((x301*x302)&(x303^x304));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x306 = 416120206750989638LLU;
	static volatile int64_t x307 = INT64_MIN;
	volatile uint16_t x308 = 48U;
	uint64_t t56 = 124944751158243694LLU;

	t56 = ((x305*x306)&(x307^x308));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x309 = 3U;
	uint16_t x310 = UINT16_MAX;
	static int8_t x311 = INT8_MAX;
	int16_t x312 = -1;
	volatile int32_t t57 = 841907;

	t57 = ((x309*x310)&(x311^x312));

	if (t57 != 196480) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x329 = 6U;
	int64_t x330 = -1LL;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MIN;
	volatile uint64_t t58 = 7313315915920LLU;

	t58 = ((x329*x330)&(x331^x332));

	if (t58 != 122LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x337 = 1478;
	volatile int8_t x338 = 0;
	uint64_t x339 = 291704817LLU;
	uint16_t x340 = UINT16_MAX;
	volatile uint64_t t59 = 2018136198886015LLU;

	t59 = ((x337*x338)&(x339^x340));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x345 = UINT64_MAX;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = 202850LLU;
	volatile uint64_t t60 = 117473520919605415LLU;

	t60 = ((x345*x346)&(x347^x348));

	if (t60 != 9223372036854972416LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x350 = UINT8_MAX;
	volatile int32_t x351 = INT32_MAX;
	static uint32_t x352 = UINT32_MAX;
	uint32_t t61 = 293718U;

	t61 = ((x349*x350)&(x351^x352));

	if (t61 != 2147483648U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x353 = -1;
	static volatile int16_t x354 = INT16_MIN;
	int32_t x356 = 31073190;

	t62 = ((x353*x354)&(x355^x356));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x365 = 288446900002132549LL;
	int64_t x366 = -1LL;
	int32_t x367 = -1;
	volatile uint32_t x368 = 777342636U;
	int64_t t63 = -6364300518002LL;

	t63 = ((x365*x366)&(x367^x368));

	if (t63 != 2424971539LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x373 = 3U;
	int16_t x374 = -4;
	uint16_t x376 = UINT16_MAX;
	static volatile int64_t t64 = -9182839617LL;

	t64 = ((x373*x374)&(x375^x376));

	if (t64 != -65536LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	volatile int64_t x380 = INT64_MAX;

	t65 = ((x377*x378)&(x379^x380));

	if (t65 != 128LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	volatile int16_t x384 = INT16_MIN;

	t66 = ((x381*x382)&(x383^x384));

	if (t66 != 4194304) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x385 = INT16_MAX;
	volatile int32_t x386 = -1;
	static int8_t x387 = -1;

	t67 = ((x385*x386)&(x387^x388));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x390 = -6LL;
	volatile uint32_t x391 = 322029U;
	static volatile int64_t t68 = -513LL;

	t68 = ((x389*x390)&(x391^x392));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x393 = -3210;
	int8_t x394 = INT8_MIN;
	int32_t x396 = 57679;
	volatile int32_t t69 = 21521;

	t69 = ((x393*x394)&(x395^x396));

	if (t69 != 394240) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x398 = UINT64_MAX;
	uint64_t x400 = 644375LLU;
	static uint64_t t70 = 31867537158829085LLU;

	t70 = ((x397*x398)&(x399^x400));

	if (t70 != 644544LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x406 = INT16_MAX;
	uint16_t x407 = 1917U;
	int64_t x408 = -465626732LL;
	volatile int64_t t71 = 24816004413LL;

	t71 = ((x405*x406)&(x407^x408));

	if (t71 != -465633279LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x409 = UINT8_MAX;
	int8_t x410 = -19;
	static int64_t x411 = -1LL;
	int8_t x412 = INT8_MIN;
	volatile int64_t t72 = -123312099LL;

	t72 = ((x409*x410)&(x411^x412));

	if (t72 != 19LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x417 = UINT32_MAX;
	volatile int32_t x418 = -1;
	static int8_t x419 = -1;
	uint8_t x420 = 4U;

	t73 = ((x417*x418)&(x419^x420));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x421 = 591591240322007648LLU;
	int32_t x422 = INT32_MIN;
	volatile uint16_t x423 = 3U;
	uint64_t t74 = 17LLU;

	t74 = ((x421*x422)&(x423^x424));

	if (t74 != 6786888148405190656LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x425 = INT8_MAX;
	int8_t x426 = -1;
	static volatile uint16_t x427 = UINT16_MAX;
	int32_t x428 = INT32_MIN;
	int32_t t75 = 313;

	t75 = ((x425*x426)&(x427^x428));

	if (t75 != -2147418239) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x429 = INT8_MIN;
	volatile int8_t x430 = -1;
	int64_t t76 = -13192762491LL;

	t76 = ((x429*x430)&(x431^x432));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x434 = -1LL;
	int8_t x436 = 10;
	int64_t t77 = 6251LL;

	t77 = ((x433*x434)&(x435^x436));

	if (t77 != 224LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x449 = UINT16_MAX;
	int32_t x450 = -1;
	int16_t x451 = -1;
	static int8_t x452 = INT8_MAX;
	int32_t t78 = 761;

	t78 = ((x449*x450)&(x451^x452));

	if (t78 != -65536) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x465 = UINT32_MAX;
	uint16_t x466 = UINT16_MAX;
	int32_t x468 = INT32_MIN;

	t79 = ((x465*x466)&(x467^x468));

	if (t79 != 2147418113U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x477 = 6;
	int16_t x478 = 0;
	int8_t x479 = INT8_MIN;

	t80 = ((x477*x478)&(x479^x480));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x481 = 72U;
	uint64_t x483 = UINT64_MAX;
	volatile uint64_t t81 = 1777917527963141822LLU;

	t81 = ((x481*x482)&(x483^x484));

	if (t81 != 18446744073707192320LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x485 = -6;
	volatile int32_t x486 = 2;
	int32_t x487 = INT32_MIN;
	int32_t x488 = INT32_MIN;
	int32_t t82 = -337556339;

	t82 = ((x485*x486)&(x487^x488));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x494 = 5017LLU;
	uint64_t t83 = 167529800LLU;

	t83 = ((x493*x494)&(x495^x496));

	if (t83 != 21547326316615LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x498 = 22730U;
	volatile int8_t x499 = -22;
	int32_t t84 = 364247934;

	t84 = ((x497*x498)&(x499^x500));

	if (t84 != 22528) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x501 = UINT32_MAX;
	int8_t x502 = INT8_MIN;
	uint64_t x503 = UINT64_MAX;
	uint32_t x504 = 22585U;

	t85 = ((x501*x502)&(x503^x504));

	if (t85 != 128LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x505 = 204;
	int64_t x506 = -1LL;
	static volatile uint64_t x507 = UINT64_MAX;
	volatile uint32_t x508 = 185U;
	uint64_t t86 = 48780369819262LLU;

	t86 = ((x505*x506)&(x507^x508));

	if (t86 != 18446744073709551364LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x509 = 956U;
	volatile int8_t x510 = -15;
	uint16_t x511 = UINT16_MAX;
	int32_t x512 = -1;

	t87 = ((x509*x510)&(x511^x512));

	if (t87 != 4294901760U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x517 = -1;
	uint32_t x518 = 151U;
	static volatile uint32_t x519 = 1U;
	volatile uint32_t t88 = 453308U;

	t88 = ((x517*x518)&(x519^x520));

	if (t88 != 908328U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x521 = -1;
	static volatile int8_t x523 = -3;
	static volatile int64_t t89 = -14157LL;

	t89 = ((x521*x522)&(x523^x524));

	if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x525 = -1;
	int64_t x526 = -125915019351LL;
	int64_t x527 = 1714945635LL;
	static uint16_t x528 = 7244U;
	static volatile int64_t t90 = -1144578677LL;

	t90 = ((x525*x526)&(x527^x528));

	if (t90 != 1075224583LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x529 = -1;
	int8_t x530 = INT8_MAX;
	static volatile int16_t x532 = INT16_MIN;
	static int32_t t91 = -48280;

	t91 = ((x529*x530)&(x531^x532));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x538 = UINT64_MAX;
	static uint32_t x539 = UINT32_MAX;
	int64_t x540 = INT64_MIN;
	static uint64_t t92 = 1134LLU;

	t92 = ((x537*x538)&(x539^x540));

	if (t92 != 9223372041082989738LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x541 = 1U;
	volatile uint32_t x542 = UINT32_MAX;
	int64_t t93 = 1LL;

	t93 = ((x541*x542)&(x543^x544));

	if (t93 != 4294966177LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x545 = 1U;
	static int8_t x546 = INT8_MIN;
	uint32_t t94 = 93898513U;

	t94 = ((x545*x546)&(x547^x548));

	if (t94 != 4294967040U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x549 = INT16_MIN;
	uint64_t x550 = UINT64_MAX;
	int32_t x551 = -16159827;
	int32_t x552 = 55685;
	volatile uint64_t t95 = 626324LLU;

	t95 = ((x549*x550)&(x551^x552));

	if (t95 != 32768LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x561 = 19034LLU;
	volatile uint8_t x562 = 0U;
	int64_t x563 = INT64_MAX;
	int8_t x564 = 1;
	static volatile uint64_t t96 = 1045203367535LLU;

	t96 = ((x561*x562)&(x563^x564));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x565 = -14;
	volatile uint8_t x566 = UINT8_MAX;

	t97 = ((x565*x566)&(x567^x568));

	if (t97 != 4286771204U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x569 = UINT16_MAX;
	static int32_t x571 = INT32_MAX;
	int32_t x572 = INT32_MIN;
	volatile int32_t t98 = 20;

	t98 = ((x569*x570)&(x571^x572));

	if (t98 != -65535) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x573 = INT16_MIN;
	int16_t x574 = -1;
	static int8_t x575 = -18;
	int64_t x576 = -1LL;
	static volatile int64_t t99 = 5949812889LL;

	t99 = ((x573*x574)&(x575^x576));

	if (t99 != 0LL) { NG(); } else { ; }
	
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
