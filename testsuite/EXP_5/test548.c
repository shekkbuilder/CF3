#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 3899U;
int16_t x8 = INT16_MIN;
int64_t x14 = INT64_MIN;
int64_t t3 = 975860LL;
static volatile uint8_t x19 = 15U;
static int32_t x21 = -1;
int32_t x26 = -1;
int16_t x34 = 876;
volatile int32_t t8 = INT32_MAX;
static int64_t x37 = -40065633LL;
int16_t x42 = -1;
int16_t x43 = INT16_MAX;
volatile uint64_t x47 = UINT64_MAX;
int8_t x48 = INT8_MAX;
int64_t x49 = -1LL;
uint16_t x63 = 6687U;
static volatile uint32_t t14 = 198436U;
static uint64_t x76 = 544294039295274LLU;
int16_t x79 = -1;
static int64_t t17 = -162729LL;
uint64_t x86 = UINT64_MAX;
int32_t x91 = -1;
int64_t x100 = INT64_MAX;
uint64_t t21 = 11851591266844306LLU;
int32_t x103 = INT32_MIN;
int64_t t22 = -683LL;
int16_t x105 = INT16_MIN;
volatile int64_t x112 = INT64_MIN;
int64_t x116 = INT64_MIN;
static int16_t x137 = INT16_MAX;
uint32_t x139 = UINT32_MAX;
static volatile int8_t x140 = INT8_MIN;
volatile uint64_t t31 = 2441369851879LLU;
int32_t t33 = 1;
volatile int8_t x157 = -1;
static volatile int8_t x159 = INT8_MIN;
int32_t x162 = INT32_MIN;
int32_t x163 = -429;
int32_t x164 = INT32_MAX;
volatile int64_t x168 = -1LL;
static int8_t x169 = INT8_MIN;
int32_t x171 = 57314706;
static int32_t t38 = -332150;
static uint64_t t39 = 1768377269394LLU;
int64_t x183 = 833802LL;
int8_t x186 = INT8_MIN;
uint8_t x188 = 84U;
int64_t x191 = -1LL;
static uint8_t x193 = 38U;
uint64_t t44 = UINT64_MAX;
uint8_t x204 = UINT8_MAX;
int16_t x206 = INT16_MAX;
static int16_t x207 = INT16_MIN;
volatile uint64_t x209 = 66513704LLU;
static uint8_t x213 = 15U;
int32_t x216 = INT32_MIN;
static uint64_t t49 = UINT64_MAX;
static int64_t x222 = 234039LL;
static uint8_t x223 = 35U;
int32_t x227 = -31;
volatile uint64_t t51 = 7483227065LLU;
int32_t x236 = -2621273;
int32_t t52 = -2378755;
int16_t x237 = -1;
static int64_t x239 = INT64_MAX;
int64_t t53 = 383509173LL;
int64_t t54 = 78509494388LL;
volatile int64_t t55 = 197089782383944890LL;
uint8_t x256 = 57U;
int64_t x258 = -1907LL;
int8_t x260 = -1;
volatile uint16_t x263 = UINT16_MAX;
uint32_t t58 = UINT32_MAX;
static int32_t x274 = 7756240;
int64_t x280 = -257486500612LL;
static uint32_t x289 = UINT32_MAX;
static uint32_t x295 = 2937U;
volatile uint32_t t65 = 130135U;
uint8_t x301 = UINT8_MAX;
volatile uint32_t x304 = 2102050U;
int8_t x305 = INT8_MIN;
static int32_t x306 = -1;
uint16_t x318 = 23029U;
int32_t x332 = INT32_MIN;
uint64_t t73 = 80LLU;
static uint64_t x333 = UINT64_MAX;
int16_t x341 = -1;
int16_t x345 = -1;
int8_t x348 = -1;
int16_t x355 = INT16_MAX;
volatile int64_t t79 = 52450801LL;
static int8_t x362 = INT8_MIN;
static uint8_t x369 = 3U;
int64_t t84 = -2641101608901655608LL;
int8_t x381 = INT8_MAX;
int32_t x382 = -284236;
static volatile uint32_t t89 = 244782U;
volatile int32_t x414 = 511443082;
int8_t x419 = -1;
volatile int32_t t94 = 81694280;
int64_t x434 = -1982949LL;
int64_t t97 = -27LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile int32_t x2 = INT32_MIN;
	uint64_t x3 = 86402852LLU;
	volatile uint64_t t0 = 1415300618825403LLU;

	t0 = (x1-((x2/x3)/x4));

	if (t0 != 18446744073654860307LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 88758818623596268LLU;
	int16_t x6 = -464;
	int64_t x7 = INT64_MAX;
	volatile uint64_t t1 = 212221LLU;

	t1 = (x5-((x6/x7)/x8));

	if (t1 != 88758818623596268LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	volatile int32_t x10 = 77720;
	int64_t x11 = -2007976800LL;
	uint16_t x12 = 16U;
	int64_t t2 = 222642638761813178LL;

	t2 = (x9-((x10/x11)/x12));

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 23188U;
	int8_t x15 = INT8_MIN;
	static uint32_t x16 = UINT32_MAX;

	t3 = (x13-((x14/x15)/x16));

	if (t3 != -16754028LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -4;
	volatile int8_t x18 = -11;
	static int16_t x20 = -1;
	int32_t t4 = -1112338;

	t4 = (x17-((x18/x19)/x20));

	if (t4 != -4) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = 22LL;
	int32_t x23 = INT32_MAX;
	uint32_t x24 = UINT32_MAX;
	int64_t t5 = 240492LL;

	t5 = (x21-((x22/x23)/x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 2908;
	int8_t x27 = -1;
	volatile uint32_t x28 = 6U;
	volatile uint32_t t6 = 7U;

	t6 = (x25-((x26/x27)/x28));

	if (t6 != 2908U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	int8_t x30 = INT8_MAX;
	uint32_t x31 = 1772578912U;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 11775068021LLU;

	t7 = (x29-((x30/x31)/x32));

	if (t7 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	int16_t x35 = 9;
	int8_t x36 = INT8_MIN;

	t8 = (x33-((x34/x35)/x36));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x38 = INT8_MIN;
	static int64_t x39 = -3LL;
	volatile int64_t x40 = INT64_MIN;
	int64_t t9 = -7666322285439LL;

	t9 = (x37-((x38/x39)/x40));

	if (t9 != -40065633LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	int8_t x44 = 2;
	int32_t t10 = -694;

	t10 = (x41-((x42/x43)/x44));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -171;
	int8_t x46 = INT8_MIN;
	volatile uint64_t t11 = 3303260892998LLU;

	t11 = (x45-((x46/x47)/x48));

	if (t11 != 18446744073709551445LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = INT16_MIN;
	static int16_t x51 = 5;
	static volatile uint16_t x52 = 37U;
	volatile int64_t t12 = -1310323215918120LL;

	t12 = (x49-((x50/x51)/x52));

	if (t12 != 176LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1;
	static uint8_t x62 = 1U;
	uint32_t x64 = 51U;
	uint32_t t13 = UINT32_MAX;

	t13 = (x61-((x62/x63)/x64));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 61553271U;
	static uint32_t x70 = UINT32_MAX;
	volatile int32_t x71 = -1;
	int32_t x72 = INT32_MIN;

	t14 = (x69-((x70/x71)/x72));

	if (t14 != 61553271U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x73 = -1;
	int16_t x74 = -2011;
	int8_t x75 = 1;
	uint64_t t15 = 6349600038LLU;

	t15 = (x73-((x74/x75)/x76));

	if (t15 != 18446744073709517724LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MAX;
	static int64_t x78 = INT64_MAX;
	uint32_t x80 = 1522458403U;
	int64_t t16 = 146403LL;

	t16 = (x77-((x78/x79)/x80));

	if (t16 != 6058209677LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	static volatile int64_t x82 = INT64_MIN;
	static int16_t x83 = INT16_MAX;
	static int32_t x84 = INT32_MIN;

	t17 = (x81-((x82/x83)/x84));

	if (t17 != -163844LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 114U;
	int64_t x87 = 1377632685822LL;
	static int32_t x88 = -2340;
	static uint64_t t18 = 7286317816LLU;

	t18 = (x85-((x86/x87)/x88));

	if (t18 != 114LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	static uint16_t x90 = 34U;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (x89-((x90/x91)/x92));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x93 = INT8_MIN;
	int64_t x94 = INT64_MAX;
	static uint32_t x95 = 27537U;
	int32_t x96 = INT32_MAX;
	volatile int64_t t20 = -285057878944LL;

	t20 = (x93-((x94/x95)/x96));

	if (t20 != -156098LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -27338013;
	uint64_t x98 = UINT64_MAX;
	uint64_t x99 = 160414640LLU;

	t21 = (x97-((x98/x99)/x100));

	if (t21 != 18446744073682213603LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x101 = UINT8_MAX;
	int64_t x102 = INT64_MAX;
	int8_t x104 = -3;

	t22 = (x101-((x102/x103)/x104));

	if (t22 != -1431655510LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x106 = 3;
	int8_t x107 = INT8_MIN;
	static int16_t x108 = -4;
	volatile int32_t t23 = 3;

	t23 = (x105-((x106/x107)/x108));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1LL;
	static uint64_t x110 = UINT64_MAX;
	volatile int8_t x111 = INT8_MIN;
	uint64_t t24 = UINT64_MAX;

	t24 = (x109-((x110/x111)/x112));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x113 = 98LLU;
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = 206;
	volatile uint64_t t25 = 8838LLU;

	t25 = (x113-((x114/x115)/x116));

	if (t25 != 98LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = 1;
	static uint32_t x118 = UINT32_MAX;
	uint8_t x119 = 2U;
	volatile int16_t x120 = INT16_MAX;
	uint32_t t26 = 7721931U;

	t26 = (x117-((x118/x119)/x120));

	if (t26 != 4294901759U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MAX;
	uint64_t x126 = 2032682485LLU;
	static int64_t x127 = -1LL;
	uint32_t x128 = 1U;
	uint64_t t27 = 36LLU;

	t27 = (x125-((x126/x127)/x128));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x129 = -1LL;
	int16_t x130 = INT16_MIN;
	int8_t x131 = -1;
	volatile int32_t x132 = INT32_MIN;
	static int64_t t28 = 1225322477240257LL;

	t28 = (x129-((x130/x131)/x132));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 2U;
	volatile uint64_t x134 = UINT64_MAX;
	uint8_t x135 = 5U;
	static volatile uint8_t x136 = 8U;
	volatile uint64_t t29 = 3733953615218618LLU;

	t29 = (x133-((x134/x135)/x136));

	if (t29 != 17985575471866812828LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x138 = 245U;
	volatile uint32_t t30 = 416023U;

	t30 = (x137-((x138/x139)/x140));

	if (t30 != 32767U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x145 = 14050;
	static int32_t x146 = 12568192;
	volatile uint64_t x147 = 299LLU;
	int16_t x148 = INT16_MAX;

	t31 = (x145-((x146/x147)/x148));

	if (t31 != 14049LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MIN;
	volatile uint64_t x150 = 569747576480602LLU;
	int32_t x151 = INT32_MIN;
	volatile uint32_t x152 = 8395891U;
	volatile uint64_t t32 = 199450662528883962LLU;

	t32 = (x149-((x150/x151)/x152));

	if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int16_t x154 = INT16_MIN;
	static int32_t x155 = -6;
	static int8_t x156 = 43;

	t33 = (x153-((x154/x155)/x156));

	if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x158 = INT32_MAX;
	int16_t x160 = -24;
	volatile int32_t t34 = 269299;

	t34 = (x157-((x158/x159)/x160));

	if (t34 != -699051) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x161 = 0U;
	int32_t t35 = -179074;

	t35 = (x161-((x162/x163)/x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -497;
	int64_t x166 = INT64_MIN;
	uint32_t x167 = UINT32_MAX;
	volatile int64_t t36 = 3271811LL;

	t36 = (x165-((x166/x167)/x168));

	if (t36 != -2147484145LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x170 = 0;
	int16_t x172 = INT16_MIN;
	volatile int32_t t37 = 1;

	t37 = (x169-((x170/x171)/x172));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x173 = 1912;
	uint16_t x174 = UINT16_MAX;
	int16_t x175 = INT16_MAX;
	volatile int16_t x176 = 75;

	t38 = (x173-((x174/x175)/x176));

	if (t38 != 1912) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x177 = 9U;
	uint64_t x178 = 4019612593288LLU;
	int8_t x179 = -56;
	int64_t x180 = INT64_MAX;

	t39 = (x177-((x178/x179)/x180));

	if (t39 != 9LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x181 = UINT8_MAX;
	int16_t x182 = 1;
	uint32_t x184 = 1204U;
	int64_t t40 = -202943210302LL;

	t40 = (x181-((x182/x183)/x184));

	if (t40 != 255LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x185 = -1LL;
	uint32_t x187 = 246455778U;
	volatile int64_t t41 = 198LL;

	t41 = (x185-((x186/x187)/x188));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = 10;
	int64_t x190 = INT64_MAX;
	volatile uint16_t x192 = 1091U;
	volatile int64_t t42 = -25836589001296LL;

	t42 = (x189-((x190/x191)/x192));

	if (t42 != 8454053196017219LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x194 = 0;
	static uint64_t x195 = UINT64_MAX;
	uint8_t x196 = UINT8_MAX;
	volatile uint64_t t43 = 263255360958LLU;

	t43 = (x193-((x194/x195)/x196));

	if (t43 != 38LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x197 = -1;
	static uint32_t x198 = 14U;
	int64_t x199 = INT64_MIN;
	uint64_t x200 = 16560976LLU;

	t44 = (x197-((x198/x199)/x200));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	volatile int16_t x202 = -612;
	uint16_t x203 = UINT16_MAX;
	volatile int32_t t45 = -159968;

	t45 = (x201-((x202/x203)/x204));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x205 = 777379U;
	int16_t x208 = INT16_MIN;
	uint32_t t46 = 9035534U;

	t46 = (x205-((x206/x207)/x208));

	if (t46 != 777379U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x210 = 60808121787715LL;
	uint8_t x211 = 37U;
	uint8_t x212 = UINT8_MAX;
	uint64_t t47 = 220525034407786269LLU;

	t47 = (x209-((x210/x211)/x212));

	if (t47 != 18446744067331113356LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x214 = 34471810U;
	uint16_t x215 = UINT16_MAX;
	uint32_t t48 = 2U;

	t48 = (x213-((x214/x215)/x216));

	if (t48 != 15U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = UINT64_MAX;
	uint64_t x218 = 10996134942LLU;
	static int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;

	t49 = (x217-((x218/x219)/x220));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x221 = 0LL;
	int8_t x224 = INT8_MIN;
	int64_t t50 = 311432LL;

	t50 = (x221-((x222/x223)/x224));

	if (t50 != 52LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	static volatile uint64_t x228 = UINT64_MAX;

	t51 = (x225-((x226/x227)/x228));

	if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = -80510;
	int32_t x234 = INT32_MIN;
	uint8_t x235 = 9U;

	t52 = (x233-((x234/x235)/x236));

	if (t52 != -80601) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x238 = 14U;
	int64_t x240 = INT64_MIN;

	t53 = (x237-((x238/x239)/x240));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = 13U;
	int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MAX;
	volatile int32_t x244 = -1;

	t54 = (x241-((x242/x243)/x244));

	if (t54 != 13LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = UINT16_MAX;
	int8_t x246 = 0;
	static int64_t x247 = INT64_MAX;
	int8_t x248 = -23;

	t55 = (x245-((x246/x247)/x248));

	if (t55 != 65535LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = 1;
	int8_t x254 = -17;
	uint8_t x255 = UINT8_MAX;
	volatile int32_t t56 = -1691;

	t56 = (x253-((x254/x255)/x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MIN;
	int64_t x259 = INT64_MAX;
	int64_t t57 = -1474993728120377000LL;

	t57 = (x257-((x258/x259)/x260));

	if (t57 != -128LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = -1;
	uint32_t x262 = UINT32_MAX;
	int32_t x264 = INT32_MAX;

	t58 = (x261-((x262/x263)/x264));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = INT32_MAX;
	volatile int8_t x266 = -3;
	volatile int64_t x267 = -814051768649116097LL;
	uint64_t x268 = UINT64_MAX;
	uint64_t t59 = 34960557811LLU;

	t59 = (x265-((x266/x267)/x268));

	if (t59 != 2147483647LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x269 = -341627433LL;
	uint16_t x270 = UINT16_MAX;
	int32_t x271 = INT32_MAX;
	static int32_t x272 = -227206430;
	volatile int64_t t60 = 112113063LL;

	t60 = (x269-((x270/x271)/x272));

	if (t60 != -341627433LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x273 = INT8_MAX;
	uint8_t x275 = 13U;
	uint8_t x276 = UINT8_MAX;
	int32_t t61 = -8348461;

	t61 = (x273-((x274/x275)/x276));

	if (t61 != -2212) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x277 = 94U;
	static volatile uint8_t x278 = 49U;
	int64_t x279 = 486586900255584LL;
	volatile int64_t t62 = 0LL;

	t62 = (x277-((x278/x279)/x280));

	if (t62 != 94LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = -883;
	volatile int32_t x286 = 1023;
	static int64_t x287 = INT64_MIN;
	volatile int64_t x288 = INT64_MIN;
	static int64_t t63 = -562045813305620LL;

	t63 = (x285-((x286/x287)/x288));

	if (t63 != -883LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x290 = INT8_MIN;
	volatile int32_t x291 = INT32_MIN;
	uint32_t x292 = 447489U;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = (x289-((x290/x291)/x292));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x293 = INT8_MIN;
	static volatile int32_t x294 = 48068359;
	uint32_t x296 = 12149031U;

	t65 = (x293-((x294/x295)/x296));

	if (t65 != 4294967168U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = -206800LL;
	static uint64_t x299 = 30923LLU;
	uint32_t x300 = 478411U;
	uint64_t t66 = 3391576927080122LLU;

	t66 = (x297-((x298/x299)/x300));

	if (t66 != 18446744072462603573LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x302 = INT32_MIN;
	int64_t x303 = INT64_MAX;
	int64_t t67 = 430564946283285LL;

	t67 = (x301-((x302/x303)/x304));

	if (t67 != 255LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x307 = INT16_MAX;
	int64_t x308 = -1LL;
	volatile int64_t t68 = -1LL;

	t68 = (x305-((x306/x307)/x308));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = INT8_MIN;
	uint16_t x310 = 12U;
	uint32_t x311 = UINT32_MAX;
	int8_t x312 = INT8_MIN;
	uint32_t t69 = 54U;

	t69 = (x309-((x310/x311)/x312));

	if (t69 != 4294967168U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = 5;
	int32_t x314 = INT32_MIN;
	uint64_t x315 = 24178903LLU;
	uint32_t x316 = 31280690U;
	uint64_t t70 = 594553988LLU;

	t70 = (x313-((x314/x315)/x316));

	if (t70 != 18446744073709527232LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x317 = 18147137LLU;
	int32_t x319 = INT32_MIN;
	uint32_t x320 = UINT32_MAX;
	uint64_t t71 = 154517181868LLU;

	t71 = (x317-((x318/x319)/x320));

	if (t71 != 18147137LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = INT64_MAX;
	int32_t x322 = INT32_MIN;
	int64_t x323 = -60LL;
	int32_t x324 = INT32_MIN;
	static volatile int64_t t72 = INT64_MAX;

	t72 = (x321-((x322/x323)/x324));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x329 = 8448555491508250665LLU;
	volatile int64_t x330 = -1LL;
	int64_t x331 = -1LL;

	t73 = (x329-((x330/x331)/x332));

	if (t73 != 8448555491508250665LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x334 = -309;
	static int8_t x335 = INT8_MAX;
	int8_t x336 = INT8_MAX;
	uint64_t t74 = UINT64_MAX;

	t74 = (x333-((x334/x335)/x336));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x342 = UINT16_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	static uint64_t x344 = UINT64_MAX;
	uint64_t t75 = UINT64_MAX;

	t75 = (x341-((x342/x343)/x344));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x346 = INT32_MAX;
	volatile int8_t x347 = -1;
	volatile int32_t t76 = INT32_MIN;

	t76 = (x345-((x346/x347)/x348));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x349 = INT32_MIN;
	uint16_t x350 = UINT16_MAX;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = -1;
	uint32_t t77 = 294U;

	t77 = (x349-((x350/x351)/x352));

	if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = INT8_MAX;
	volatile int64_t x354 = INT64_MIN;
	int8_t x356 = INT8_MAX;
	int64_t t78 = 2847LL;

	t78 = (x353-((x354/x355)/x356));

	if (t78 != 2216406038767LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = INT32_MIN;
	uint8_t x358 = 1U;
	uint16_t x359 = 253U;
	int64_t x360 = INT64_MIN;

	t79 = (x357-((x358/x359)/x360));

	if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x361 = UINT64_MAX;
	int64_t x363 = -1LL;
	static volatile uint32_t x364 = 343332U;
	static volatile uint64_t t80 = UINT64_MAX;

	t80 = (x361-((x362/x363)/x364));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = INT8_MAX;
	static int16_t x366 = 1;
	int32_t x367 = INT32_MIN;
	int8_t x368 = -1;
	volatile int32_t t81 = 1493;

	t81 = (x365-((x366/x367)/x368));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x370 = INT32_MAX;
	int8_t x371 = -41;
	int32_t x372 = INT32_MAX;
	static volatile int32_t t82 = 568768;

	t82 = (x369-((x370/x371)/x372));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MAX;
	static uint64_t x375 = 30LLU;
	uint16_t x376 = 1046U;
	volatile uint64_t t83 = 3667460111513LLU;

	t83 = (x373-((x374/x375)/x376));

	if (t83 != 18446744071561999534LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x377 = -1LL;
	int8_t x378 = INT8_MIN;
	int16_t x379 = 367;
	int16_t x380 = INT16_MAX;

	t84 = (x377-((x378/x379)/x380));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x383 = -1LL;
	uint8_t x384 = 49U;
	int64_t t85 = 312922145684491LL;

	t85 = (x381-((x382/x383)/x384));

	if (t85 != -5673LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x385 = 6U;
	int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	int16_t x388 = -1;
	static int32_t t86 = 6203492;

	t86 = (x385-((x386/x387)/x388));

	if (t86 != 32774) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x389 = 236U;
	int64_t x390 = -1LL;
	static uint32_t x391 = 1U;
	uint64_t x392 = 7926530642LLU;
	volatile uint64_t t87 = 6977101611841775LLU;

	t87 = (x389-((x390/x391)/x392));

	if (t87 != 18446744071382336466LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x393 = 13U;
	static int32_t x394 = -1;
	int16_t x395 = -1;
	static int8_t x396 = -1;
	volatile int32_t t88 = 13601623;

	t88 = (x393-((x394/x395)/x396));

	if (t88 != 14) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = -2;
	volatile uint32_t x399 = 16092425U;
	uint32_t x400 = 621U;

	t89 = (x397-((x398/x399)/x400));

	if (t89 != 4294967168U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = INT64_MIN;
	int16_t x406 = -2;
	volatile int32_t x407 = 11806;
	uint32_t x408 = 237U;
	volatile int64_t t90 = INT64_MIN;

	t90 = (x405-((x406/x407)/x408));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x409 = UINT64_MAX;
	static int8_t x410 = INT8_MIN;
	int64_t x411 = -15395109338LL;
	int16_t x412 = -435;
	static volatile uint64_t t91 = UINT64_MAX;

	t91 = (x409-((x410/x411)/x412));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x413 = 55U;
	static uint64_t x415 = UINT64_MAX;
	volatile int32_t x416 = -1;
	uint64_t t92 = 61LLU;

	t92 = (x413-((x414/x415)/x416));

	if (t92 != 55LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x417 = INT64_MIN;
	uint16_t x418 = 114U;
	volatile uint16_t x420 = 2U;
	int64_t t93 = -12083299441400723LL;

	t93 = (x417-((x418/x419)/x420));

	if (t93 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = 17;
	uint8_t x430 = 1U;
	static int32_t x431 = 25120199;
	uint16_t x432 = UINT16_MAX;

	t94 = (x429-((x430/x431)/x432));

	if (t94 != 17) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x433 = 32350535501262LLU;
	static uint32_t x435 = UINT32_MAX;
	int16_t x436 = INT16_MIN;
	uint64_t t95 = 5LLU;

	t95 = (x433-((x434/x435)/x436));

	if (t95 != 32350535501262LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x437 = 6353U;
	int32_t x438 = -1;
	uint16_t x439 = 20U;
	uint16_t x440 = 25866U;
	int32_t t96 = -1;

	t96 = (x437-((x438/x439)/x440));

	if (t96 != 6353) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x441 = -56;
	uint16_t x442 = 10320U;
	int16_t x443 = -1;
	volatile int64_t x444 = 5349822841103578LL;

	t97 = (x441-((x442/x443)/x444));

	if (t97 != -56LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = -434627360580494LL;
	int16_t x446 = INT16_MAX;
	uint32_t x447 = UINT32_MAX;
	volatile uint32_t x448 = UINT32_MAX;
	volatile int64_t t98 = 183LL;

	t98 = (x445-((x446/x447)/x448));

	if (t98 != -434627360580494LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x449 = UINT64_MAX;
	uint8_t x450 = UINT8_MAX;
	int8_t x451 = 1;
	uint32_t x452 = 21U;
	uint64_t t99 = 6903929634315LLU;

	t99 = (x449-((x450/x451)/x452));

	if (t99 != 18446744073709551603LLU) { NG(); } else { ; }
	
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
