#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 131U;
int16_t x6 = -1;
int16_t x7 = -9271;
int16_t x11 = -1;
int64_t x13 = INT64_MIN;
int32_t t3 = 3106;
uint8_t x17 = UINT8_MAX;
int16_t x26 = -1;
static volatile int64_t x28 = -1LL;
int16_t x38 = INT16_MIN;
int32_t x41 = INT32_MAX;
uint32_t x46 = 1U;
uint8_t x49 = 104U;
int16_t x52 = 1;
uint32_t x57 = 635220159U;
static int64_t x61 = INT64_MIN;
static int8_t x62 = -1;
int32_t x63 = INT32_MIN;
int8_t x65 = INT8_MAX;
uint16_t x73 = 31475U;
uint8_t x76 = 0U;
int64_t x80 = -919271498029443686LL;
volatile int32_t t19 = -697;
uint64_t x82 = 256513032827122319LLU;
int8_t x86 = 50;
volatile int32_t t21 = -36995420;
int64_t x90 = -3228224132286365768LL;
int16_t x92 = INT16_MIN;
volatile uint8_t x95 = UINT8_MAX;
int32_t t24 = 3587;
volatile uint64_t x106 = UINT64_MAX;
volatile int32_t t27 = -43326;
int32_t t28 = 46;
static int32_t x117 = -1;
int32_t x122 = INT32_MIN;
volatile int8_t x134 = INT8_MAX;
uint64_t x137 = 7638705398552074233LLU;
static uint64_t x138 = UINT64_MAX;
static uint16_t x154 = UINT16_MAX;
static int16_t x157 = INT16_MIN;
static uint16_t x160 = 41U;
static volatile int32_t t40 = 1;
uint64_t x166 = 1076943427107098LLU;
int64_t x172 = -52609778596076LL;
static int32_t x177 = INT32_MIN;
int64_t x180 = INT64_MIN;
volatile uint16_t x181 = 3U;
int64_t x184 = -7348LL;
int8_t x186 = INT8_MIN;
int8_t x191 = INT8_MIN;
volatile int16_t x193 = INT16_MIN;
uint32_t x194 = 326646U;
uint8_t x195 = UINT8_MAX;
uint32_t x196 = 208445U;
static int32_t t48 = 253;
static int64_t x200 = INT64_MAX;
int32_t x201 = -1;
volatile int8_t x202 = -11;
uint32_t x205 = 492574U;
volatile int32_t x208 = -14;
volatile int32_t x219 = INT32_MIN;
volatile int32_t t55 = 153;
static int64_t x226 = INT64_MAX;
int32_t x232 = INT32_MAX;
uint8_t x234 = 7U;
volatile int32_t t58 = 2603;
int8_t x237 = INT8_MAX;
int8_t x243 = INT8_MAX;
uint64_t x250 = 3925448136356773LLU;
static int16_t x252 = INT16_MIN;
int32_t t62 = 818;
int64_t x253 = INT64_MIN;
int16_t x255 = INT16_MAX;
static uint64_t x264 = UINT64_MAX;
volatile int32_t t65 = 15426;
static int32_t x267 = INT32_MIN;
int64_t x277 = -1LL;
int32_t x278 = INT32_MAX;
int8_t x280 = INT8_MAX;
int16_t x291 = INT16_MIN;
volatile int64_t x296 = INT64_MIN;
static volatile int8_t x298 = 21;
static volatile int16_t x306 = INT16_MIN;
volatile int32_t t77 = -8052;
uint16_t x314 = UINT16_MAX;
volatile int32_t t79 = 66157421;
static int8_t x322 = INT8_MAX;
int32_t t80 = 2354698;
static int8_t x338 = INT8_MAX;
static uint16_t x340 = 9692U;
int32_t t85 = -966201;
static uint64_t x347 = UINT64_MAX;
int8_t x348 = INT8_MIN;
static int8_t x350 = -1;
int16_t x357 = -1;
static uint8_t x359 = 1U;
static int8_t x361 = 4;
volatile int64_t x365 = INT64_MIN;
int32_t x387 = INT32_MIN;
static volatile int8_t x391 = INT8_MAX;
uint32_t x395 = UINT32_MAX;
uint16_t x396 = 3U;
static volatile int32_t t99 = 6688;


void f0(void) {
	static int64_t x2 = -284300249459406LL;
	static uint32_t x3 = UINT32_MAX;
	static uint8_t x4 = UINT8_MAX;
	int32_t t0 = 42;

	t0 = ((x1==x2)+(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	volatile uint8_t x8 = 22U;
	int32_t t1 = -15;

	t1 = ((x5==x6)+(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 2;
	int64_t x10 = INT64_MIN;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = 4;

	t2 = ((x9==x10)+(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 3871564U;
	uint64_t x15 = 443933LLU;
	static volatile int8_t x16 = 5;

	t3 = ((x13==x14)+(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	uint16_t x19 = 1U;
	volatile int64_t x20 = 0LL;
	volatile int32_t t4 = 1;

	t4 = ((x17==x18)+(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -25311;

	t5 = ((x21==x22)+(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 7U;
	int32_t x27 = INT32_MIN;
	int32_t t6 = 49970593;

	t6 = ((x25==x26)+(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 117017U;
	uint32_t x30 = UINT32_MAX;
	static volatile int64_t x31 = 197066394280LL;
	uint32_t x32 = 29678714U;
	int32_t t7 = -1;

	t7 = ((x29==x30)+(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x33 = -3;
	int32_t x34 = -1;
	int64_t x35 = 78622405LL;
	volatile uint64_t x36 = 4614507936LLU;
	static volatile int32_t t8 = -168112;

	t8 = ((x33==x34)+(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int32_t x39 = -14;
	int32_t x40 = -1;
	volatile int32_t t9 = -843211;

	t9 = ((x37==x38)+(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = -1;
	static int8_t x43 = -1;
	int64_t x44 = INT64_MAX;
	int32_t t10 = 3623784;

	t10 = ((x41==x42)+(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static int32_t x47 = INT32_MAX;
	uint8_t x48 = 2U;
	int32_t t11 = 307;

	t11 = ((x45==x46)+(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x50 = UINT8_MAX;
	uint32_t x51 = 50291576U;
	volatile int32_t t12 = -74684;

	t12 = ((x49==x50)+(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	int16_t x54 = -1;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = UINT32_MAX;
	static volatile int32_t t13 = 138133;

	t13 = ((x53==x54)+(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x58 = -1LL;
	uint32_t x59 = 0U;
	static int8_t x60 = INT8_MAX;
	static volatile int32_t t14 = -199;

	t14 = ((x57==x58)+(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x64 = INT64_MIN;
	int32_t t15 = 52151631;

	t15 = ((x61==x62)+(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 12524305U;
	int16_t x67 = INT16_MIN;
	static int32_t x68 = INT32_MIN;
	int32_t t16 = -1;

	t16 = ((x65==x66)+(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = 106;
	static uint16_t x70 = 405U;
	uint8_t x71 = UINT8_MAX;
	int64_t x72 = 27036223LL;
	int32_t t17 = 7319302;

	t17 = ((x69==x70)+(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MAX;
	int32_t x75 = INT32_MAX;
	int32_t t18 = 12393;

	t18 = ((x73==x74)+(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	volatile int16_t x78 = -1;
	uint16_t x79 = UINT16_MAX;

	t19 = ((x77==x78)+(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static int16_t x83 = -1;
	uint64_t x84 = UINT64_MAX;
	int32_t t20 = -2;

	t20 = ((x81==x82)+(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	static uint16_t x87 = 9U;
	int64_t x88 = INT64_MIN;

	t21 = ((x85==x86)+(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 242U;
	volatile int16_t x91 = 7545;
	volatile int32_t t22 = 61913;

	t22 = ((x89==x90)+(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	static volatile int8_t x94 = -1;
	uint64_t x96 = 17LLU;
	int32_t t23 = 1;

	t23 = ((x93==x94)+(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	uint8_t x98 = 1U;
	static int8_t x99 = INT8_MIN;
	int16_t x100 = INT16_MIN;

	t24 = ((x97==x98)+(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	uint16_t x102 = 3U;
	int16_t x103 = -1;
	volatile int64_t x104 = INT64_MAX;
	volatile int32_t t25 = 21471;

	t25 = ((x101==x102)+(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 97U;
	uint64_t x107 = UINT64_MAX;
	int16_t x108 = -13149;
	volatile int32_t t26 = -32552854;

	t26 = ((x105==x106)+(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MAX;
	int16_t x110 = -18;
	uint8_t x111 = 0U;
	volatile int8_t x112 = INT8_MIN;

	t27 = ((x109==x110)+(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = UINT8_MAX;
	volatile int16_t x114 = -1;
	int32_t x115 = 3;
	uint64_t x116 = 17391190118172542LLU;

	t28 = ((x113==x114)+(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	int8_t x119 = 48;
	int16_t x120 = 2390;
	int32_t t29 = -109999836;

	t29 = ((x117==x118)+(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 25;
	static int32_t x123 = -1;
	int64_t x124 = -1LL;
	int32_t t30 = -6;

	t30 = ((x121==x122)+(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = UINT32_MAX;
	int16_t x126 = INT16_MIN;
	static volatile uint64_t x127 = 287986956907490460LLU;
	int8_t x128 = -1;
	volatile int32_t t31 = -3774;

	t31 = ((x125==x126)+(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int32_t x130 = -814440;
	int16_t x131 = -1;
	int32_t x132 = INT32_MAX;
	static int32_t t32 = -1;

	t32 = ((x129==x130)+(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int64_t x135 = -1LL;
	int32_t x136 = -1;
	int32_t t33 = -665172;

	t33 = ((x133==x134)+(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x139 = UINT8_MAX;
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t34 = -12036;

	t34 = ((x137==x138)+(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = -1;
	static volatile uint16_t x142 = UINT16_MAX;
	uint8_t x143 = 47U;
	int64_t x144 = -139LL;
	volatile int32_t t35 = 262667;

	t35 = ((x141==x142)+(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = -16332460879LL;
	static int64_t x146 = INT64_MIN;
	int64_t x147 = -11135927LL;
	static int64_t x148 = INT64_MIN;
	volatile int32_t t36 = -1;

	t36 = ((x145==x146)+(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 3;
	static int64_t x150 = -12759336LL;
	uint8_t x151 = UINT8_MAX;
	uint8_t x152 = 88U;
	static volatile int32_t t37 = 65;

	t37 = ((x149==x150)+(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	volatile int64_t x156 = INT64_MIN;
	int32_t t38 = 6658332;

	t38 = ((x153==x154)+(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = UINT32_MAX;
	volatile int64_t x159 = -3702141635808LL;
	int32_t t39 = 12959;

	t39 = ((x157==x158)+(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 15852941U;
	int64_t x162 = INT64_MIN;
	volatile int64_t x163 = -7LL;
	int16_t x164 = INT16_MIN;

	t40 = ((x161==x162)+(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	static int16_t x167 = -1;
	volatile int8_t x168 = INT8_MIN;
	int32_t t41 = 13484773;

	t41 = ((x165==x166)+(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = 268U;
	int16_t x170 = INT16_MIN;
	volatile int16_t x171 = 4;
	int32_t t42 = -26093433;

	t42 = ((x169==x170)+(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int16_t x174 = 2257;
	uint16_t x175 = 54U;
	static int32_t x176 = 3;
	volatile int32_t t43 = -3;

	t43 = ((x173==x174)+(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = 0;
	volatile int64_t x179 = INT64_MIN;
	volatile int32_t t44 = 40;

	t44 = ((x177==x178)+(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	static int32_t t45 = 18556648;

	t45 = ((x181==x182)+(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 10443;
	int16_t x187 = 1;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = 21612910;

	t46 = ((x185==x186)+(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = 285361LLU;
	uint32_t x190 = UINT32_MAX;
	int64_t x192 = INT64_MIN;
	int32_t t47 = 69186;

	t47 = ((x189==x190)+(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {


	t48 = ((x193==x194)+(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 18U;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MIN;
	volatile int32_t t49 = -884109745;

	t49 = ((x197==x198)+(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x203 = INT8_MIN;
	uint32_t x204 = 622641U;
	volatile int32_t t50 = -18373;

	t50 = ((x201==x202)+(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x206 = INT64_MAX;
	int16_t x207 = -1;
	int32_t t51 = 28;

	t51 = ((x205==x206)+(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MAX;
	static int16_t x211 = -1;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 42682030;

	t52 = ((x209==x210)+(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = -277;
	volatile uint8_t x214 = UINT8_MAX;
	int32_t x215 = INT32_MAX;
	static int16_t x216 = -1;
	static volatile int32_t t53 = -83777823;

	t53 = ((x213==x214)+(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MIN;
	static int32_t x220 = 738310109;
	int32_t t54 = 1629;

	t54 = ((x217==x218)+(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = -1;
	uint8_t x222 = 22U;
	int64_t x223 = INT64_MAX;
	static int16_t x224 = INT16_MIN;

	t55 = ((x221==x222)+(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -689;
	int16_t x227 = -1;
	uint16_t x228 = 0U;
	volatile int32_t t56 = 211065161;

	t56 = ((x225==x226)+(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = -1;
	uint16_t x230 = 234U;
	static int64_t x231 = 3426101427183990001LL;
	volatile int32_t t57 = -1434297;

	t57 = ((x229==x230)+(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MAX;
	int8_t x235 = -21;
	int32_t x236 = INT32_MIN;

	t58 = ((x233==x234)+(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	int8_t x239 = INT8_MAX;
	volatile int32_t x240 = 6496;
	int32_t t59 = -359852164;

	t59 = ((x237==x238)+(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 812U;
	int8_t x242 = 1;
	int8_t x244 = -1;
	int32_t t60 = -1787;

	t60 = ((x241==x242)+(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = -1;
	volatile int8_t x248 = INT8_MIN;
	static volatile int32_t t61 = -108;

	t61 = ((x245==x246)+(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = -443;
	static int8_t x251 = INT8_MIN;

	t62 = ((x249==x250)+(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MAX;
	uint16_t x256 = 0U;
	static volatile int32_t t63 = 76;

	t63 = ((x253==x254)+(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 182174043348291615LLU;
	static uint8_t x258 = UINT8_MAX;
	uint32_t x259 = UINT32_MAX;
	static volatile int16_t x260 = -1;
	int32_t t64 = 1964;

	t64 = ((x257==x258)+(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	volatile uint16_t x262 = UINT16_MAX;
	int64_t x263 = INT64_MIN;

	t65 = ((x261==x262)+(x263<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = INT8_MIN;
	static volatile int32_t x266 = 44;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 62603;

	t66 = ((x265==x266)+(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 29824998LLU;
	int32_t x271 = 95;
	static int8_t x272 = 1;
	volatile int32_t t67 = 41247;

	t67 = ((x269==x270)+(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 0;
	uint64_t x274 = 60789LLU;
	int16_t x275 = -1;
	volatile uint8_t x276 = 3U;
	static volatile int32_t t68 = -17;

	t68 = ((x273==x274)+(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x279 = 38762535394537LLU;
	int32_t t69 = -2;

	t69 = ((x277==x278)+(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -13;
	int64_t x282 = INT64_MIN;
	static uint64_t x283 = 679LLU;
	int32_t x284 = -54741;
	static int32_t t70 = -967;

	t70 = ((x281==x282)+(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	volatile int64_t x286 = -1LL;
	int64_t x287 = INT64_MAX;
	uint64_t x288 = 28200LLU;
	int32_t t71 = -13856286;

	t71 = ((x285==x286)+(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x289 = 127010LLU;
	int8_t x290 = 18;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = -646321999;

	t72 = ((x289==x290)+(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	static uint16_t x294 = 1956U;
	volatile int32_t x295 = INT32_MIN;
	volatile int32_t t73 = -5;

	t73 = ((x293==x294)+(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = 203;
	int32_t x299 = INT32_MAX;
	int16_t x300 = -1;
	int32_t t74 = 6410499;

	t74 = ((x297==x298)+(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = -119;
	volatile uint64_t x302 = 1675LLU;
	static int64_t x303 = INT64_MAX;
	volatile int64_t x304 = INT64_MIN;
	static volatile int32_t t75 = 22671932;

	t75 = ((x301==x302)+(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = INT8_MIN;
	int64_t x307 = -29505LL;
	int64_t x308 = INT64_MIN;
	static volatile int32_t t76 = -1;

	t76 = ((x305==x306)+(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 33U;
	static int64_t x310 = INT64_MAX;
	int16_t x311 = -2967;
	uint8_t x312 = 2U;

	t77 = ((x309==x310)+(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int16_t x315 = INT16_MAX;
	volatile int32_t x316 = 49792946;
	volatile int32_t t78 = 2040562;

	t78 = ((x313==x314)+(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 0U;
	int16_t x318 = -33;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;

	t79 = ((x317==x318)+(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 8;
	static volatile int32_t x323 = INT32_MAX;
	uint16_t x324 = UINT16_MAX;

	t80 = ((x321==x322)+(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = 29LL;
	volatile uint8_t x326 = 8U;
	int64_t x327 = INT64_MAX;
	int64_t x328 = -16613087055088444LL;
	int32_t t81 = 17623980;

	t81 = ((x325==x326)+(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -5;
	int32_t x330 = 12;
	static uint16_t x331 = 1U;
	int32_t x332 = -3783;
	int32_t t82 = 402813335;

	t82 = ((x329==x330)+(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = 396;
	int64_t x335 = INT64_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = -43429;

	t83 = ((x333==x334)+(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	int64_t x339 = INT64_MAX;
	int32_t t84 = -666252;

	t84 = ((x337==x338)+(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	uint64_t x342 = 118910954667305326LLU;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MAX;

	t85 = ((x341==x342)+(x343<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 91721303LLU;
	uint16_t x346 = 1661U;
	int32_t t86 = 787288926;

	t86 = ((x345==x346)+(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -7;
	int32_t x351 = -5769;
	int8_t x352 = -1;
	volatile int32_t t87 = 3;

	t87 = ((x349==x350)+(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MIN;
	int16_t x355 = 1;
	int8_t x356 = INT8_MAX;
	int32_t t88 = 0;

	t88 = ((x353==x354)+(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MIN;
	int64_t x360 = INT64_MAX;
	volatile int32_t t89 = 30;

	t89 = ((x357==x358)+(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = -1;
	uint8_t x363 = 117U;
	volatile int8_t x364 = INT8_MIN;
	int32_t t90 = -2839;

	t90 = ((x361==x362)+(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -1LL;
	uint32_t x367 = 2150U;
	volatile uint64_t x368 = 265812938410028LLU;
	volatile int32_t t91 = 367986;

	t91 = ((x365==x366)+(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -66011880;
	static int32_t x370 = 5;
	int32_t x371 = -1;
	uint16_t x372 = UINT16_MAX;
	static int32_t t92 = 2164864;

	t92 = ((x369==x370)+(x371<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 1779U;
	uint64_t x374 = UINT64_MAX;
	uint32_t x375 = UINT32_MAX;
	int32_t x376 = -1;
	static int32_t t93 = -141;

	t93 = ((x373==x374)+(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = -6906219446LL;
	int32_t x379 = 1086;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t94 = -1;

	t94 = ((x377==x378)+(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	uint64_t x382 = 17028307832LLU;
	volatile uint64_t x383 = 28977147999596857LLU;
	uint32_t x384 = UINT32_MAX;
	static int32_t t95 = 97442;

	t95 = ((x381==x382)+(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MIN;
	static uint32_t x388 = UINT32_MAX;
	int32_t t96 = 215;

	t96 = ((x385==x386)+(x387<=x388));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int32_t x390 = INT32_MIN;
	int64_t x392 = -1LL;
	static int32_t t97 = -4495;

	t97 = ((x389==x390)+(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MIN;
	volatile int8_t x394 = INT8_MIN;
	int32_t t98 = -1;

	t98 = ((x393==x394)+(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -40;
	int8_t x398 = INT8_MAX;
	int8_t x399 = 1;
	uint64_t x400 = 330564457805LLU;

	t99 = ((x397==x398)+(x399<=x400));

	if (t99 != 1) { NG(); } else { ; }
	
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
