#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x3 = 13004682671LLU;
int64_t x9 = 775759748378616LL;
int16_t x10 = -45;
int64_t t2 = 202103194005318LL;
static int32_t x17 = INT32_MIN;
int64_t x20 = INT64_MIN;
static uint16_t x23 = 2725U;
int16_t x28 = 157;
int64_t t8 = 1543LL;
uint64_t x39 = UINT64_MAX;
int64_t x40 = INT64_MIN;
uint16_t x42 = 31U;
int8_t x43 = -1;
int16_t x48 = INT16_MIN;
int32_t x53 = 63;
int64_t t13 = 0LL;
int64_t t14 = 5314077085192182LL;
volatile int8_t x62 = 1;
uint64_t x63 = 3241615607LLU;
int8_t x72 = INT8_MIN;
int32_t x73 = -1;
volatile int64_t x74 = INT64_MIN;
static volatile int8_t x75 = -5;
uint8_t x82 = UINT8_MAX;
static int16_t x84 = INT16_MIN;
int32_t x91 = INT32_MIN;
static volatile int32_t x100 = 683;
volatile int32_t x107 = INT32_MAX;
static int8_t x109 = INT8_MIN;
int32_t x111 = INT32_MAX;
uint32_t x119 = UINT32_MAX;
int8_t x128 = INT8_MIN;
int8_t x130 = 7;
static int64_t x131 = INT64_MAX;
int8_t x133 = -2;
int64_t x137 = INT64_MIN;
static volatile int16_t x141 = 1952;
int8_t x143 = INT8_MIN;
volatile int32_t t35 = -14808;
int32_t x146 = -1;
volatile int32_t t37 = 351;
volatile int64_t x160 = -1LL;
uint32_t x168 = 1705067341U;
static uint8_t x174 = 2U;
int64_t x175 = -1LL;
static volatile int16_t x176 = INT16_MAX;
int8_t x182 = INT8_MIN;
int32_t t45 = -710;
static volatile uint8_t x186 = UINT8_MAX;
volatile int32_t x188 = 161347163;
static int32_t t46 = -306297725;
int8_t x192 = INT8_MAX;
int32_t t47 = 16980;
int32_t t48 = -754567;
uint32_t x205 = 570538451U;
uint64_t x208 = 656LLU;
int16_t x210 = -900;
volatile int32_t x211 = INT32_MIN;
int16_t x219 = INT16_MIN;
int16_t x224 = -1;
static int64_t x225 = -180956LL;
int32_t x229 = -1;
volatile uint32_t x231 = 0U;
static int32_t x236 = 3960922;
uint16_t x239 = UINT16_MAX;
int32_t x240 = INT32_MAX;
static volatile int64_t x246 = -1LL;
volatile int64_t x252 = INT64_MIN;
volatile int64_t x257 = INT64_MIN;
volatile int64_t t64 = -1LL;
static volatile int16_t x261 = INT16_MIN;
volatile uint16_t x265 = 84U;
uint32_t x267 = 14096U;
int8_t x269 = INT8_MIN;
uint8_t x280 = 5U;
int32_t t69 = 157230;
volatile int32_t t72 = -33;
uint32_t x294 = 15U;
uint64_t x298 = 22582959207937892LLU;
uint8_t x299 = UINT8_MAX;
uint8_t x309 = 59U;
static volatile int32_t t77 = -1666;
int64_t x316 = INT64_MAX;
volatile int32_t x318 = INT32_MIN;
uint32_t x323 = UINT32_MAX;
int32_t t82 = 106;
int32_t x334 = -1;
int32_t x335 = 2;
volatile int64_t x340 = INT64_MAX;
int32_t x343 = INT32_MIN;
volatile int64_t t85 = -998LL;
int16_t x346 = -1;
static int32_t t86 = 13210;
volatile int16_t x357 = -1;
static int64_t x359 = -1LL;
volatile int32_t x360 = -72135;
int16_t x364 = INT16_MIN;
volatile int32_t t90 = -51;
uint64_t x368 = 116574945126773535LLU;
uint8_t x374 = UINT8_MAX;
int64_t t93 = -111218737778LL;
int64_t x382 = INT64_MIN;
int64_t x384 = -1LL;
uint32_t t96 = 2U;
uint16_t x390 = 2872U;
int64_t x396 = INT64_MIN;
int16_t x397 = INT16_MIN;


void f0(void) {
	uint8_t x1 = 28U;
	static uint32_t x2 = UINT32_MAX;
	int64_t x4 = 112022536LL;
	int64_t t0 = -2LL;

	t0 = (x1*((x2==x3)*x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 67;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MAX;
	uint32_t x8 = UINT32_MAX;
	static volatile uint32_t t1 = 20066397U;

	t1 = (x5*((x6==x7)*x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MIN;

	t2 = (x9*((x10==x11)*x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static uint32_t x14 = 1451003901U;
	static int64_t x15 = INT64_MIN;
	uint8_t x16 = 75U;
	int64_t t3 = -67667342LL;

	t3 = (x13*((x14==x15)*x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MIN;
	volatile int64_t t4 = -21LL;

	t4 = (x17*((x18==x19)*x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 373356U;
	int64_t x22 = INT64_MAX;
	uint8_t x24 = UINT8_MAX;
	uint32_t t5 = 36835063U;

	t5 = (x21*((x22==x23)*x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	static int32_t x26 = INT32_MIN;
	volatile uint64_t x27 = 493LLU;
	int32_t t6 = 84092;

	t6 = (x25*((x26==x27)*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 342306576U;
	volatile int32_t x30 = INT32_MAX;
	static int8_t x31 = -1;
	uint8_t x32 = 3U;
	uint32_t t7 = 1414401U;

	t7 = (x29*((x30==x31)*x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 30;
	uint32_t x34 = 0U;
	uint32_t x35 = UINT32_MAX;
	int64_t x36 = 1915LL;

	t8 = (x33*((x34==x35)*x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile uint32_t x38 = UINT32_MAX;
	int64_t t9 = 453810818LL;

	t9 = (x37*((x38==x39)*x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	int8_t x44 = -1;
	volatile int32_t t10 = -2013;

	t10 = (x41*((x42==x43)*x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -4700;
	uint32_t x46 = 116U;
	int32_t x47 = INT32_MIN;
	volatile int32_t t11 = 5110832;

	t11 = (x45*((x46==x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = UINT64_MAX;
	static int32_t x50 = 519469;
	volatile uint64_t x51 = UINT64_MAX;
	volatile int16_t x52 = INT16_MIN;
	volatile uint64_t t12 = 12323068463LLU;

	t12 = (x49*((x50==x51)*x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = UINT8_MAX;
	static uint16_t x55 = UINT16_MAX;
	static int64_t x56 = -1LL;

	t13 = (x53*((x54==x55)*x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int16_t x58 = INT16_MIN;
	static int64_t x59 = -1LL;
	int32_t x60 = -1;

	t14 = (x57*((x58==x59)*x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 18980028133LLU;
	volatile int32_t x64 = 56396;
	volatile uint64_t t15 = 158415228LLU;

	t15 = (x61*((x62==x63)*x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	int64_t x66 = 197LL;
	int16_t x67 = 1;
	int64_t x68 = INT64_MIN;
	static int64_t t16 = -17589744019307322LL;

	t16 = (x65*((x66==x67)*x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int8_t x70 = -61;
	int64_t x71 = -4160204438960447LL;
	int32_t t17 = 1014781;

	t17 = (x69*((x70==x71)*x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 1016591;

	t18 = (x73*((x74==x75)*x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MAX;
	static int16_t x78 = INT16_MAX;
	uint32_t x79 = 294394853U;
	int8_t x80 = 1;
	static volatile int32_t t19 = 410141452;

	t19 = (x77*((x78==x79)*x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int16_t x83 = INT16_MAX;
	static int32_t t20 = -419;

	t20 = (x81*((x82==x83)*x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = 60U;
	static uint16_t x88 = 14U;
	uint32_t t21 = 665952U;

	t21 = (x85*((x86==x87)*x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = UINT8_MAX;
	int64_t x90 = -1LL;
	int64_t x92 = INT64_MIN;
	static volatile int64_t t22 = -224440095842LL;

	t22 = (x89*((x90==x91)*x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = 4801U;
	volatile int64_t x94 = INT64_MIN;
	int8_t x95 = 8;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = -8423;

	t23 = (x93*((x94==x95)*x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 47771;
	static int8_t x98 = -11;
	int32_t x99 = -1;
	int32_t t24 = -431589305;

	t24 = (x97*((x98==x99)*x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 1;
	uint32_t x102 = 92U;
	volatile uint16_t x103 = 0U;
	int64_t x104 = INT64_MIN;
	static int64_t t25 = 37198638LL;

	t25 = (x101*((x102==x103)*x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MIN;
	volatile int64_t x106 = INT64_MIN;
	int32_t x108 = -1;
	volatile int32_t t26 = 75504;

	t26 = (x105*((x106==x107)*x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x110 = UINT8_MAX;
	int16_t x112 = INT16_MIN;
	static volatile int32_t t27 = -341155889;

	t27 = (x109*((x110==x111)*x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = 619;
	uint32_t x115 = UINT32_MAX;
	volatile int16_t x116 = INT16_MAX;
	volatile int32_t t28 = -1;

	t28 = (x113*((x114==x115)*x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -3472;
	uint16_t x118 = 442U;
	int32_t x120 = INT32_MAX;
	static volatile int32_t t29 = 8398793;

	t29 = (x117*((x118==x119)*x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 122414283U;
	static int32_t x122 = INT32_MIN;
	uint64_t x123 = UINT64_MAX;
	int64_t x124 = -31898LL;
	int64_t t30 = -166872411122LL;

	t30 = (x121*((x122==x123)*x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MAX;
	int16_t x126 = -1;
	static int16_t x127 = 544;
	int64_t t31 = 506950724531420751LL;

	t31 = (x125*((x126==x127)*x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 182358LLU;
	static uint64_t x132 = 3143470867LLU;
	uint64_t t32 = 4LLU;

	t32 = (x129*((x130==x131)*x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x134 = -1LL;
	int8_t x135 = -8;
	uint64_t x136 = UINT64_MAX;
	uint64_t t33 = 58029045703LLU;

	t33 = (x133*((x134==x135)*x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MIN;
	static int64_t x139 = INT64_MAX;
	static volatile int8_t x140 = 4;
	int64_t t34 = -957268108886426877LL;

	t34 = (x137*((x138==x139)*x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	volatile int16_t x144 = INT16_MIN;

	t35 = (x141*((x142==x143)*x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	static uint8_t x147 = 23U;
	int16_t x148 = -1;
	static int64_t t36 = -5233860415LL;

	t36 = (x145*((x146==x147)*x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = -21;
	int64_t x151 = -32754981971452977LL;
	int32_t x152 = 21;

	t37 = (x149*((x150==x151)*x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = -1;
	int8_t x154 = INT8_MAX;
	volatile int16_t x155 = INT16_MIN;
	int16_t x156 = 56;
	int32_t t38 = 571234863;

	t38 = (x153*((x154==x155)*x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = -1066687666626835820LL;
	int64_t x159 = -1LL;
	volatile int64_t t39 = -8538057524LL;

	t39 = (x157*((x158==x159)*x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = -1LL;
	uint64_t x162 = 1820978066LLU;
	uint16_t x163 = 0U;
	int64_t x164 = 0LL;
	int64_t t40 = 222046LL;

	t40 = (x161*((x162==x163)*x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x166 = INT32_MAX;
	static int16_t x167 = 0;
	volatile uint32_t t41 = 1201U;

	t41 = (x165*((x166==x167)*x168));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 0U;
	int16_t x170 = INT16_MIN;
	static uint64_t x171 = UINT64_MAX;
	static uint32_t x172 = 8U;
	static volatile uint32_t t42 = 145793U;

	t42 = (x169*((x170==x171)*x172));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 397227797220819LLU;
	volatile uint64_t t43 = 2042559993LLU;

	t43 = (x173*((x174==x175)*x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	int32_t x178 = INT32_MAX;
	int16_t x179 = 12179;
	volatile int64_t x180 = 35802593254764LL;
	volatile int64_t t44 = 624447LL;

	t44 = (x177*((x178==x179)*x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = 160610242;
	int8_t x183 = 7;
	int32_t x184 = INT32_MIN;

	t45 = (x181*((x182==x183)*x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int16_t x187 = INT16_MIN;

	t46 = (x185*((x186==x187)*x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static volatile int32_t x190 = INT32_MIN;
	uint16_t x191 = 1U;

	t47 = (x189*((x190==x191)*x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	int32_t x194 = INT32_MIN;
	volatile int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MIN;

	t48 = (x193*((x194==x195)*x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int32_t x198 = INT32_MIN;
	volatile int64_t x199 = -1563918532706LL;
	int8_t x200 = -20;
	volatile int32_t t49 = 15804;

	t49 = (x197*((x198==x199)*x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -1;
	static volatile uint32_t x202 = 470805U;
	uint32_t x203 = 1170U;
	uint64_t x204 = 181364346749814623LLU;
	volatile uint64_t t50 = 32488728LLU;

	t50 = (x201*((x202==x203)*x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x206 = 1437982U;
	uint8_t x207 = 14U;
	volatile uint64_t t51 = 2LLU;

	t51 = (x205*((x206==x207)*x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -1;
	int64_t x212 = 2277172483LL;
	int64_t t52 = -8006299337803LL;

	t52 = (x209*((x210==x211)*x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	volatile int64_t x214 = INT64_MIN;
	uint16_t x215 = UINT16_MAX;
	int16_t x216 = 18;
	int32_t t53 = -2;

	t53 = (x213*((x214==x215)*x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	volatile uint16_t x218 = UINT16_MAX;
	int64_t x220 = INT64_MIN;
	volatile int64_t t54 = -2LL;

	t54 = (x217*((x218==x219)*x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 33;
	int32_t x222 = 12;
	uint16_t x223 = 7U;
	volatile int32_t t55 = 13305192;

	t55 = (x221*((x222==x223)*x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x226 = -1;
	volatile int8_t x227 = INT8_MIN;
	static int16_t x228 = INT16_MIN;
	int64_t t56 = 18LL;

	t56 = (x225*((x226==x227)*x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = 17;
	int8_t x232 = INT8_MIN;
	int32_t t57 = -14;

	t57 = (x229*((x230==x231)*x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MAX;
	int32_t x234 = INT32_MIN;
	volatile int64_t x235 = INT64_MAX;
	int32_t t58 = 6237567;

	t58 = (x233*((x234==x235)*x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = UINT32_MAX;
	int64_t x238 = -1LL;
	volatile uint32_t t59 = 58079402U;

	t59 = (x237*((x238==x239)*x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	uint8_t x242 = 56U;
	int16_t x243 = INT16_MAX;
	volatile uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = 5;

	t60 = (x241*((x242==x243)*x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 9U;
	uint8_t x247 = 46U;
	static int64_t x248 = -1LL;
	volatile int64_t t61 = 1LL;

	t61 = (x245*((x246==x247)*x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 7U;
	int8_t x250 = 0;
	uint64_t x251 = 73805219LLU;
	int64_t t62 = -522143779229247LL;

	t62 = (x249*((x250==x251)*x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	volatile uint32_t x254 = 1689648759U;
	static volatile int64_t x255 = INT64_MIN;
	static int8_t x256 = INT8_MAX;
	int32_t t63 = -30416474;

	t63 = (x253*((x254==x255)*x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x258 = 17530173303496LLU;
	static volatile int32_t x259 = INT32_MIN;
	static int16_t x260 = INT16_MIN;

	t64 = (x257*((x258==x259)*x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MIN;
	volatile int32_t x263 = INT32_MAX;
	uint64_t x264 = UINT64_MAX;
	uint64_t t65 = 767796368304296124LLU;

	t65 = (x261*((x262==x263)*x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x266 = -1LL;
	uint16_t x268 = 12474U;
	int32_t t66 = -10409470;

	t66 = (x265*((x266==x267)*x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = UINT64_MAX;
	uint64_t x271 = UINT64_MAX;
	uint8_t x272 = 0U;
	int32_t t67 = 8537537;

	t67 = (x269*((x270==x271)*x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 1;
	int32_t x274 = -108546;
	int64_t x275 = INT64_MIN;
	int32_t x276 = -14;
	volatile int32_t t68 = 1366;

	t68 = (x273*((x274==x275)*x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = 60247784;
	static int64_t x278 = INT64_MIN;
	int32_t x279 = -1;

	t69 = (x277*((x278==x279)*x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 4313088155774763LL;
	int8_t x282 = 60;
	volatile uint64_t x283 = 17LLU;
	int16_t x284 = 1;
	volatile int64_t t70 = -1977085015645890LL;

	t70 = (x281*((x282==x283)*x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 2405602U;
	int16_t x286 = 731;
	int64_t x287 = INT64_MIN;
	int16_t x288 = -1;
	volatile uint32_t t71 = 3U;

	t71 = (x285*((x286==x287)*x288));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	static uint8_t x290 = 7U;
	uint16_t x291 = UINT16_MAX;
	uint16_t x292 = 1U;

	t72 = (x289*((x290==x291)*x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 24U;
	uint8_t x295 = 1U;
	static uint64_t x296 = 6645340660504318747LLU;
	volatile uint64_t t73 = 6519415LLU;

	t73 = (x293*((x294==x295)*x296));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	int8_t x300 = INT8_MIN;
	static int32_t t74 = 189521925;

	t74 = (x297*((x298==x299)*x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 0U;
	static int64_t x302 = INT64_MIN;
	static int16_t x303 = 41;
	uint16_t x304 = 391U;
	uint32_t t75 = 4168156U;

	t75 = (x301*((x302==x303)*x304));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	static uint16_t x306 = 3981U;
	volatile int16_t x307 = INT16_MAX;
	int32_t x308 = 556;
	volatile int64_t t76 = -59115621726LL;

	t76 = (x305*((x306==x307)*x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = INT8_MIN;
	uint8_t x311 = UINT8_MAX;
	int32_t x312 = 98568;

	t77 = (x309*((x310==x311)*x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MIN;
	volatile uint8_t x314 = 57U;
	int16_t x315 = INT16_MIN;
	volatile int64_t t78 = 34773468702872LL;

	t78 = (x313*((x314==x315)*x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 1U;
	int64_t x319 = -1LL;
	int32_t x320 = 2;
	volatile int32_t t79 = -542412;

	t79 = (x317*((x318==x319)*x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x321 = INT16_MIN;
	volatile uint64_t x322 = 35440790147LLU;
	volatile int16_t x324 = INT16_MIN;
	int32_t t80 = 3093;

	t80 = (x321*((x322==x323)*x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 72611256U;
	static int16_t x326 = -1353;
	static uint8_t x327 = UINT8_MAX;
	volatile int64_t x328 = 16112609038LL;
	volatile int64_t t81 = 5535382679516LL;

	t81 = (x325*((x326==x327)*x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 2U;
	volatile int64_t x330 = 1826837705934LL;
	int16_t x331 = -1;
	int8_t x332 = INT8_MIN;

	t82 = (x329*((x330==x331)*x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = UINT8_MAX;
	int32_t x336 = INT32_MAX;
	int32_t t83 = -1;

	t83 = (x333*((x334==x335)*x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 125U;
	uint16_t x338 = 23U;
	uint16_t x339 = 10400U;
	static int64_t t84 = 85071LL;

	t84 = (x337*((x338==x339)*x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	static int32_t x342 = -509;
	static int64_t x344 = -3LL;

	t85 = (x341*((x342==x343)*x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int16_t x347 = 0;
	uint16_t x348 = UINT16_MAX;

	t86 = (x345*((x346==x347)*x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = INT16_MIN;
	static uint8_t x351 = 20U;
	int64_t x352 = -1964756139LL;
	volatile int64_t t87 = 9237681956LL;

	t87 = (x349*((x350==x351)*x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 24U;
	uint32_t x354 = UINT32_MAX;
	static int8_t x355 = -1;
	static uint32_t x356 = 73802U;
	volatile uint32_t t88 = 42310U;

	t88 = (x353*((x354==x355)*x356));

	if (t88 != 1771248U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = 221U;
	volatile int32_t t89 = -2133;

	t89 = (x357*((x358==x359)*x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 19;
	int64_t x362 = INT64_MIN;
	volatile int16_t x363 = -1;

	t90 = (x361*((x362==x363)*x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = UINT8_MAX;
	uint32_t x366 = 404697U;
	int64_t x367 = INT64_MAX;
	volatile uint64_t t91 = 253751018953825130LLU;

	t91 = (x365*((x366==x367)*x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 33432;
	uint64_t x370 = 74370630LLU;
	uint8_t x371 = 8U;
	int64_t x372 = 7LL;
	static int64_t t92 = 4301026739099512LL;

	t92 = (x369*((x370==x371)*x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	volatile uint16_t x375 = 9U;
	uint32_t x376 = UINT32_MAX;

	t93 = (x373*((x374==x375)*x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 1U;
	static int32_t x378 = 227220206;
	uint16_t x379 = UINT16_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t94 = -864192;

	t94 = (x377*((x378==x379)*x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 1107666744U;
	volatile int16_t x383 = 382;
	volatile int64_t t95 = -436LL;

	t95 = (x381*((x382==x383)*x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MIN;
	static int64_t x386 = 72825162165803LL;
	int64_t x387 = INT64_MIN;
	volatile uint32_t x388 = 0U;

	t96 = (x385*((x386==x387)*x388));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 62547779U;
	static uint64_t x391 = 13172260LLU;
	int32_t x392 = 24;
	volatile uint32_t t97 = 132744262U;

	t97 = (x389*((x390==x391)*x392));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 20U;
	volatile int8_t x394 = INT8_MAX;
	volatile int32_t x395 = -11174779;
	int64_t t98 = -145791931LL;

	t98 = (x393*((x394==x395)*x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x398 = 49U;
	uint8_t x399 = UINT8_MAX;
	static uint16_t x400 = 39U;
	int32_t t99 = -1;

	t99 = (x397*((x398==x399)*x400));

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
