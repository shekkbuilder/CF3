#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 47U;
int64_t x12 = INT64_MIN;
uint32_t x14 = 259265U;
int16_t x18 = -3354;
volatile int32_t t4 = 288194;
uint32_t x29 = 4U;
volatile int32_t t8 = -263;
int8_t x42 = -1;
static int32_t x43 = INT32_MIN;
volatile int64_t t10 = INT64_MIN;
static int32_t x53 = INT32_MIN;
int16_t x55 = -46;
int64_t x57 = -1LL;
volatile int32_t x61 = INT32_MIN;
int8_t x66 = -25;
volatile int32_t x83 = INT32_MIN;
volatile int32_t x95 = -1;
volatile int32_t t23 = -50760303;
int64_t x100 = 7826230LL;
int8_t x105 = INT8_MIN;
int64_t x109 = INT64_MIN;
static volatile int64_t x110 = INT64_MAX;
volatile uint64_t x113 = UINT64_MAX;
volatile int32_t x116 = 111204;
static int16_t x119 = 110;
uint32_t x125 = UINT32_MAX;
volatile uint32_t t31 = UINT32_MAX;
int16_t x135 = -1;
static int32_t t33 = -12;
uint64_t x144 = 779243LLU;
uint64_t x152 = 124126093LLU;
static int32_t x153 = -1;
int32_t x155 = -1;
int32_t t38 = -267786;
int16_t x157 = INT16_MAX;
int16_t x158 = 60;
volatile int8_t x161 = -1;
volatile uint64_t x171 = 53LLU;
uint32_t t46 = 7U;
uint32_t t47 = UINT32_MAX;
int32_t x195 = INT32_MIN;
static int8_t x199 = 1;
int8_t x200 = -1;
int16_t x203 = INT16_MAX;
static uint16_t x205 = UINT16_MAX;
volatile uint16_t x208 = 798U;
uint8_t x210 = 1U;
uint16_t x211 = 315U;
uint64_t x214 = 378153835LLU;
volatile uint64_t x215 = 125581517218LLU;
int32_t t53 = -33212;
static int16_t x220 = -1;
static volatile int64_t t54 = -13640321209138LL;
int8_t x224 = INT8_MIN;
uint32_t x228 = 151722U;
volatile int32_t t56 = -194178;
int16_t x231 = -1114;
int64_t x236 = -1824221310852LL;
int64_t x243 = -241420088865149LL;
int32_t t61 = 1818780;
uint8_t x250 = 2U;
uint32_t x252 = 858U;
int16_t x253 = INT16_MIN;
uint64_t x259 = UINT64_MAX;
volatile int32_t x264 = INT32_MIN;
volatile int32_t t65 = -542130;
int32_t x265 = -12;
uint32_t x274 = UINT32_MAX;
int64_t x275 = INT64_MAX;
int32_t x277 = INT32_MAX;
int16_t x278 = INT16_MIN;
int32_t x279 = 57;
uint8_t x296 = UINT8_MAX;
int8_t x298 = 4;
volatile int64_t x299 = 21LL;
volatile int32_t x302 = 14917620;
volatile int8_t x303 = -1;
volatile int32_t t75 = -2;
static int64_t x306 = INT64_MIN;
int8_t x310 = -1;
int16_t x311 = INT16_MIN;
static uint64_t x312 = 2LLU;
int16_t x313 = INT16_MIN;
int32_t t79 = -275;
int32_t x324 = INT32_MIN;
uint32_t x329 = UINT32_MAX;
int16_t x335 = INT16_MIN;
int64_t t84 = -54611209069928240LL;
volatile uint32_t x342 = 86U;
uint64_t x343 = 7121297472LLU;
uint16_t x345 = UINT16_MAX;
uint32_t x347 = 44189926U;
volatile int16_t x355 = -1;
int16_t x362 = INT16_MIN;
int8_t x366 = -1;
int32_t x372 = 4;
int16_t x377 = 2;
int64_t x379 = INT64_MIN;
int32_t t95 = 1170054;
static int16_t x388 = INT16_MIN;
uint32_t x393 = 1336U;
int16_t x395 = INT16_MIN;
int8_t x398 = INT8_MIN;
static int8_t x400 = INT8_MAX;


void f0(void) {
	static int16_t x1 = -1;
	int32_t x2 = 71641854;
	uint64_t x3 = 11741LLU;
	volatile int16_t x4 = -1;
	volatile int32_t t0 = 104519417;

	t0 = (x1|((x2^x3)<x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint32_t x6 = UINT32_MAX;
	int16_t x8 = INT16_MAX;
	uint32_t t1 = UINT32_MAX;

	t1 = (x5|((x6^x7)<x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = INT16_MIN;
	uint16_t x10 = 376U;
	static uint8_t x11 = UINT8_MAX;
	static int32_t t2 = -30867652;

	t2 = (x9|((x10^x11)<x12));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int8_t x15 = -1;
	int64_t x16 = -1LL;
	static int32_t t3 = 7658767;

	t3 = (x13|((x14^x15)<x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x19 = -273958368039305LL;
	int16_t x20 = INT16_MIN;

	t4 = (x17|((x18^x19)<x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x22 = 0U;
	int16_t x23 = -1;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 3289;

	t5 = (x21|((x22^x23)<x24));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	uint32_t x26 = UINT32_MAX;
	volatile int8_t x27 = INT8_MIN;
	static int32_t x28 = INT32_MAX;
	static volatile int32_t t6 = -5045;

	t6 = (x25|((x26^x27)<x28));

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MAX;
	int8_t x31 = -12;
	uint32_t x32 = UINT32_MAX;
	uint32_t t7 = 26U;

	t7 = (x29|((x30^x31)<x32));

	if (t7 != 5U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 340U;
	int32_t x34 = INT32_MAX;
	int16_t x35 = 1;
	static int32_t x36 = -54;

	t8 = (x33|((x34^x35)<x36));

	if (t8 != 340) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = 3;
	uint64_t x38 = 198LLU;
	int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MIN;
	static volatile int32_t t9 = 21405;

	t9 = (x37|((x38^x39)<x40));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static int64_t x44 = INT64_MIN;

	t10 = (x41|((x42^x43)<x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 16U;
	uint32_t x46 = 24U;
	volatile int64_t x47 = INT64_MIN;
	uint16_t x48 = 1U;
	static volatile int32_t t11 = 1008751677;

	t11 = (x45|((x46^x47)<x48));

	if (t11 != 17) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static int32_t x50 = INT32_MIN;
	volatile int64_t x51 = INT64_MAX;
	volatile int8_t x52 = -11;
	static volatile int32_t t12 = -584802;

	t12 = (x49|((x50^x51)<x52));

	if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x54 = INT64_MIN;
	int32_t x56 = INT32_MAX;
	int32_t t13 = INT32_MIN;

	t13 = (x53|((x54^x55)<x56));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 0;
	int32_t x59 = 3021;
	uint64_t x60 = 30LLU;
	volatile int64_t t14 = 71143221797550074LL;

	t14 = (x57|((x58^x59)<x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x62 = 2343LL;
	static int64_t x63 = INT64_MAX;
	static int32_t x64 = -81355;
	int32_t t15 = INT32_MIN;

	t15 = (x61|((x62^x63)<x64));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static int64_t x67 = -3184486744209520LL;
	int16_t x68 = -2;
	int64_t t16 = INT64_MIN;

	t16 = (x65|((x66^x67)<x68));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = -26;
	int64_t x71 = INT64_MIN;
	volatile int16_t x72 = -7418;
	volatile int32_t t17 = 50978;

	t17 = (x69|((x70^x71)<x72));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -1;
	static uint16_t x74 = 8914U;
	int64_t x75 = 4046359195LL;
	static uint32_t x76 = 143373U;
	static int32_t t18 = -875881;

	t18 = (x73|((x74^x75)<x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	uint64_t x78 = UINT64_MAX;
	int16_t x79 = INT16_MIN;
	static volatile int32_t x80 = INT32_MIN;
	volatile int64_t t19 = -6121600607078277LL;

	t19 = (x77|((x78^x79)<x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int32_t x82 = 29116;
	int32_t x84 = -77;
	int32_t t20 = -524139;

	t20 = (x81|((x82^x83)<x84));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 1;
	int32_t x86 = INT32_MIN;
	uint64_t x87 = 2601157093754758LLU;
	volatile int32_t x88 = -1;
	int32_t t21 = -553;

	t21 = (x85|((x86^x87)<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MIN;
	uint32_t x91 = 187U;
	int16_t x92 = INT16_MAX;
	int32_t t22 = -25624;

	t22 = (x89|((x90^x91)<x92));

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 265U;
	int8_t x94 = INT8_MIN;
	int16_t x96 = 4067;

	t23 = (x93|((x94^x95)<x96));

	if (t23 != 265) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int8_t x98 = -1;
	uint16_t x99 = 18518U;
	int32_t t24 = -8;

	t24 = (x97|((x98^x99)<x100));

	if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 30224939U;
	uint64_t x102 = 59026417790LLU;
	static volatile uint8_t x103 = 0U;
	static volatile int16_t x104 = -14987;
	uint32_t t25 = 937U;

	t25 = (x101|((x102^x103)<x104));

	if (t25 != 30224939U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -1;
	int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MIN;
	static volatile int32_t t26 = 9548;

	t26 = (x105|((x106^x107)<x108));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x111 = -1;
	static uint8_t x112 = 3U;
	int64_t t27 = -17027156742092167LL;

	t27 = (x109|((x110^x111)<x112));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = 64;
	volatile int64_t x115 = INT64_MIN;
	uint64_t t28 = UINT64_MAX;

	t28 = (x113|((x114^x115)<x116));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	int8_t x118 = INT8_MIN;
	static volatile int16_t x120 = INT16_MIN;
	int32_t t29 = INT32_MAX;

	t29 = (x117|((x118^x119)<x120));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	uint32_t x122 = 3U;
	static uint8_t x123 = 1U;
	int32_t x124 = 252447;
	static volatile uint32_t t30 = UINT32_MAX;

	t30 = (x121|((x122^x123)<x124));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = 0;
	static uint8_t x127 = UINT8_MAX;
	static uint8_t x128 = 0U;

	t31 = (x125|((x126^x127)<x128));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	int64_t x130 = INT64_MIN;
	volatile uint16_t x131 = UINT16_MAX;
	int16_t x132 = INT16_MIN;
	int32_t t32 = -236637341;

	t32 = (x129|((x130^x131)<x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = -503;
	uint16_t x134 = 5U;
	int32_t x136 = -1;

	t33 = (x133|((x134^x135)<x136));

	if (t33 != -503) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int64_t x138 = -1552LL;
	int8_t x139 = -12;
	static uint32_t x140 = UINT32_MAX;
	volatile int32_t t34 = 23371404;

	t34 = (x137|((x138^x139)<x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MIN;
	static int64_t x142 = 1706681904490LL;
	uint32_t x143 = 6U;
	int64_t t35 = INT64_MIN;

	t35 = (x141|((x142^x143)<x144));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 376563076U;
	static uint64_t x146 = 2751004111LLU;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = INT8_MIN;
	volatile uint32_t t36 = 1207735855U;

	t36 = (x145|((x146^x147)<x148));

	if (t36 != 376563077U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	static int32_t x150 = 53009;
	volatile int8_t x151 = 7;
	int32_t t37 = -4;

	t37 = (x149|((x150^x151)<x152));

	if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 2U;
	int8_t x156 = INT8_MIN;

	t38 = (x153|((x154^x155)<x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x159 = UINT64_MAX;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 753;

	t39 = (x157|((x158^x159)<x160));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x162 = INT16_MIN;
	uint16_t x163 = 10417U;
	static int8_t x164 = INT8_MAX;
	static int32_t t40 = -11781950;

	t40 = (x161|((x162^x163)<x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = 47;
	int64_t x166 = 117983154729448266LL;
	uint32_t x167 = 23866815U;
	static volatile int32_t x168 = 14105;
	volatile int32_t t41 = -14;

	t41 = (x165|((x166^x167)<x168));

	if (t41 != 47) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	int64_t x172 = INT64_MIN;
	int32_t t42 = INT32_MIN;

	t42 = (x169|((x170^x171)<x172));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x174 = 176U;
	static int8_t x175 = INT8_MAX;
	static int8_t x176 = INT8_MIN;
	static int64_t t43 = 1853LL;

	t43 = (x173|((x174^x175)<x176));

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -7;
	int32_t x178 = INT32_MAX;
	int32_t x179 = -8612535;
	uint64_t x180 = UINT64_MAX;
	static int32_t t44 = 21347663;

	t44 = (x177|((x178^x179)<x180));

	if (t44 != -7) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = INT8_MAX;
	static int64_t x182 = 9006742313LL;
	int16_t x183 = INT16_MAX;
	uint32_t x184 = 974301148U;
	static int32_t t45 = 2728222;

	t45 = (x181|((x182^x183)<x184));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 113U;
	int8_t x186 = 13;
	uint32_t x187 = 12494U;
	static int16_t x188 = 3;

	t46 = (x185|((x186^x187)<x188));

	if (t46 != 113U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = INT16_MIN;
	uint16_t x191 = 8030U;
	static int16_t x192 = -254;

	t47 = (x189|((x190^x191)<x192));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MAX;
	uint32_t x194 = UINT32_MAX;
	static uint8_t x196 = UINT8_MAX;
	volatile int32_t t48 = 486891;

	t48 = (x193|((x194^x195)<x196));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x197 = 312U;
	uint16_t x198 = 454U;
	volatile int32_t t49 = -157480;

	t49 = (x197|((x198^x199)<x200));

	if (t49 != 312) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int64_t x202 = -7738524768426LL;
	int32_t x204 = -1;
	static volatile uint32_t t50 = UINT32_MAX;

	t50 = (x201|((x202^x203)<x204));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MAX;
	static volatile int8_t x207 = INT8_MAX;
	int32_t t51 = 941974;

	t51 = (x205|((x206^x207)<x208));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = -8580997397921LL;
	uint32_t x212 = 3455U;
	int64_t t52 = 1LL;

	t52 = (x209|((x210^x211)<x212));

	if (t52 != -8580997397921LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int32_t x216 = INT32_MAX;

	t53 = (x213|((x214^x215)<x216));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 1841251LL;
	uint64_t x218 = UINT64_MAX;
	static int16_t x219 = -1;

	t54 = (x217|((x218^x219)<x220));

	if (t54 != 1841251LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = -1;
	static uint64_t x223 = 1402325LLU;
	int32_t t55 = 4357109;

	t55 = (x221|((x222^x223)<x224));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	uint64_t x226 = 36005LLU;
	static uint16_t x227 = UINT16_MAX;

	t56 = (x225|((x226^x227)<x228));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = 2193071;
	int32_t x230 = INT32_MIN;
	static int32_t x232 = INT32_MAX;
	volatile int32_t t57 = -388;

	t57 = (x229|((x230^x231)<x232));

	if (t57 != 2193071) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	volatile uint16_t x235 = 315U;
	static int32_t t58 = -1;

	t58 = (x233|((x234^x235)<x236));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = UINT64_MAX;
	int64_t x238 = INT64_MAX;
	int16_t x239 = -1;
	uint16_t x240 = 6U;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x237|((x238^x239)<x240));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 224763928727LLU;
	uint16_t x242 = 217U;
	volatile int16_t x244 = -20;
	volatile uint64_t t60 = 171992913723557LLU;

	t60 = (x241|((x242^x243)<x244));

	if (t60 != 224763928727LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = 57522876;
	int32_t x247 = INT32_MAX;
	int16_t x248 = 1655;

	t61 = (x245|((x246^x247)<x248));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	static uint16_t x251 = UINT16_MAX;
	int32_t t62 = INT32_MIN;

	t62 = (x249|((x250^x251)<x252));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x254 = UINT16_MAX;
	int16_t x255 = 149;
	int32_t x256 = -1884;
	volatile int32_t t63 = 6487909;

	t63 = (x253|((x254^x255)<x256));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = 814U;
	int8_t x260 = 0;
	volatile int32_t t64 = INT32_MIN;

	t64 = (x257|((x258^x259)<x260));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MAX;
	int16_t x262 = INT16_MIN;
	static uint8_t x263 = UINT8_MAX;

	t65 = (x261|((x262^x263)<x264));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	int32_t x267 = -1;
	uint32_t x268 = UINT32_MAX;
	int32_t t66 = 11;

	t66 = (x265|((x266^x267)<x268));

	if (t66 != -11) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 75570;
	int8_t x270 = INT8_MAX;
	static int16_t x271 = 2;
	int32_t x272 = -1;
	static volatile int32_t t67 = 3857;

	t67 = (x269|((x270^x271)<x272));

	if (t67 != 75570) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -2;
	int16_t x276 = -1;
	volatile int32_t t68 = -33149764;

	t68 = (x273|((x274^x275)<x276));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x280 = -9;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x277|((x278^x279)<x280));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x281 = -1;
	volatile int8_t x282 = INT8_MIN;
	int64_t x283 = INT64_MIN;
	static uint32_t x284 = UINT32_MAX;
	int32_t t70 = 600512;

	t70 = (x281|((x282^x283)<x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	volatile uint64_t x286 = 2529562570430094LLU;
	volatile int32_t x287 = INT32_MAX;
	int32_t x288 = INT32_MAX;
	int64_t t71 = INT64_MIN;

	t71 = (x285|((x286^x287)<x288));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 98842U;
	int32_t x290 = -1;
	static int32_t x291 = INT32_MAX;
	static int64_t x292 = -7178068622826LL;
	volatile uint32_t t72 = 83415U;

	t72 = (x289|((x290^x291)<x292));

	if (t72 != 98842U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = 106LLU;
	static uint32_t x294 = UINT32_MAX;
	int32_t x295 = INT32_MIN;
	uint64_t t73 = 0LLU;

	t73 = (x293|((x294^x295)<x296));

	if (t73 != 106LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = UINT64_MAX;
	int32_t x300 = 80;
	uint64_t t74 = UINT64_MAX;

	t74 = (x297|((x298^x299)<x300));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x304 = 1U;

	t75 = (x301|((x302^x303)<x304));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 2;
	static volatile int32_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 5922;

	t76 = (x305|((x306^x307)<x308));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	int64_t t77 = 150719717993LL;

	t77 = (x309|((x310^x311)<x312));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = 3;
	int16_t x315 = 1;
	volatile int64_t x316 = INT64_MIN;
	int32_t t78 = -913648;

	t78 = (x313|((x314^x315)<x316));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	uint32_t x318 = 109U;
	uint32_t x319 = UINT32_MAX;
	static int64_t x320 = INT64_MIN;

	t79 = (x317|((x318^x319)<x320));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -43;
	static int8_t x322 = INT8_MIN;
	static int8_t x323 = 4;
	static volatile int32_t t80 = 268194;

	t80 = (x321|((x322^x323)<x324));

	if (t80 != -43) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 29U;
	static volatile int16_t x326 = INT16_MIN;
	uint16_t x327 = 3U;
	int32_t x328 = -1;
	int32_t t81 = 103972;

	t81 = (x325|((x326^x327)<x328));

	if (t81 != 29) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MIN;
	static int16_t x331 = 983;
	uint16_t x332 = UINT16_MAX;
	uint32_t t82 = UINT32_MAX;

	t82 = (x329|((x330^x331)<x332));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -60794752;
	static uint8_t x334 = UINT8_MAX;
	int8_t x336 = INT8_MAX;
	volatile int32_t t83 = -43226;

	t83 = (x333|((x334^x335)<x336));

	if (t83 != -60794751) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = -962LL;
	static int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MAX;
	static volatile int32_t x340 = INT32_MIN;

	t84 = (x337|((x338^x339)<x340));

	if (t84 != -962LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x341 = INT32_MIN;
	volatile int8_t x344 = 46;
	volatile int32_t t85 = INT32_MIN;

	t85 = (x341|((x342^x343)<x344));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = INT32_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 7213;

	t86 = (x345|((x346^x347)<x348));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	int64_t x350 = -1065400216361528LL;
	static int8_t x351 = -1;
	uint32_t x352 = 78062U;
	volatile int64_t t87 = INT64_MIN;

	t87 = (x349|((x350^x351)<x352));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = -1;
	volatile int64_t x354 = INT64_MIN;
	uint32_t x356 = 3940294U;
	static volatile int32_t t88 = 1412514;

	t88 = (x353|((x354^x355)<x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x357 = UINT8_MAX;
	volatile int16_t x358 = -1;
	uint32_t x359 = 2110770367U;
	volatile int16_t x360 = INT16_MIN;
	int32_t t89 = 542544;

	t89 = (x357|((x358^x359)<x360));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int16_t x363 = INT16_MAX;
	static int64_t x364 = INT64_MAX;
	static int32_t t90 = -109088346;

	t90 = (x361|((x362^x363)<x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	int8_t x367 = INT8_MAX;
	uint64_t x368 = 144026363900LLU;
	static int32_t t91 = INT32_MIN;

	t91 = (x365|((x366^x367)<x368));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	int32_t x370 = INT32_MAX;
	int16_t x371 = INT16_MAX;
	volatile int32_t t92 = 25697;

	t92 = (x369|((x370^x371)<x372));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -1LL;
	volatile int64_t x374 = -150716081LL;
	volatile int32_t x375 = INT32_MAX;
	static volatile int8_t x376 = INT8_MAX;
	static int64_t t93 = 1LL;

	t93 = (x373|((x374^x375)<x376));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MIN;
	uint8_t x380 = 1U;
	volatile int32_t t94 = 114;

	t94 = (x377|((x378^x379)<x380));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = 153;
	static volatile uint16_t x382 = 1734U;
	int16_t x383 = INT16_MIN;
	volatile int16_t x384 = -3487;

	t95 = (x381|((x382^x383)<x384));

	if (t95 != 153) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MIN;
	int32_t t96 = 1437853;

	t96 = (x385|((x386^x387)<x388));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = INT8_MAX;
	int64_t x392 = -1LL;
	int32_t t97 = -86181;

	t97 = (x389|((x390^x391)<x392));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MAX;
	volatile int8_t x396 = INT8_MIN;
	uint32_t t98 = 792U;

	t98 = (x393|((x394^x395)<x396));

	if (t98 != 1337U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	static uint64_t x399 = 1LLU;
	volatile int32_t t99 = 392091618;

	t99 = (x397|((x398^x399)<x400));

	if (t99 != -1) { NG(); } else { ; }
	
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
