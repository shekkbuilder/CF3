#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 268523888515LLU;
int8_t x10 = -1;
volatile int16_t x16 = INT16_MAX;
static volatile int32_t t3 = -16;
volatile uint64_t x18 = 22LLU;
uint8_t x23 = 70U;
int8_t x26 = INT8_MIN;
static volatile int64_t x27 = INT64_MIN;
int64_t x32 = INT64_MIN;
static volatile int8_t x40 = INT8_MAX;
volatile int32_t t9 = 892;
uint64_t x46 = UINT64_MAX;
int8_t x49 = -1;
static int8_t x52 = 45;
volatile int16_t x54 = INT16_MAX;
static int32_t x55 = INT32_MIN;
uint16_t x70 = 133U;
int16_t x73 = 13;
int16_t x80 = -1782;
volatile uint16_t x83 = 4353U;
int16_t x85 = 12;
volatile int64_t x88 = INT64_MAX;
int8_t x97 = INT8_MAX;
int32_t t24 = -1101976;
int32_t t25 = 142338;
int64_t x112 = INT64_MIN;
volatile int32_t t27 = -4;
volatile int32_t t31 = -682;
static int64_t x139 = INT64_MIN;
int8_t x149 = INT8_MIN;
volatile int32_t t37 = 116464773;
uint32_t x159 = 45544U;
volatile int16_t x169 = -1;
volatile int8_t x170 = -1;
volatile int32_t t42 = 50;
volatile int64_t x173 = -1LL;
int64_t x174 = INT64_MIN;
int32_t t43 = 3;
volatile int32_t t44 = 443;
volatile uint32_t x181 = 2522782U;
volatile int64_t x182 = -1LL;
int16_t x186 = 1;
static volatile int16_t x194 = -1;
int32_t x195 = -1;
static int32_t x199 = 94811622;
static int32_t t49 = -207556;
int32_t x215 = INT32_MIN;
static int16_t x216 = -1;
int64_t x217 = INT64_MIN;
int8_t x219 = 63;
volatile int32_t t55 = 989027;
uint64_t x234 = UINT64_MAX;
int8_t x237 = -1;
int64_t x239 = INT64_MIN;
uint64_t x240 = UINT64_MAX;
static int32_t t60 = -30608;
int64_t x251 = INT64_MAX;
int32_t x254 = -31107;
int32_t x256 = -1;
static int32_t x261 = 39;
int32_t x270 = INT32_MIN;
static uint8_t x273 = 64U;
volatile int16_t x278 = -1;
int8_t x284 = -21;
int32_t t70 = -1;
uint8_t x287 = 3U;
volatile int32_t x292 = -1;
static int32_t t72 = 881837947;
int64_t x296 = -7985912904089LL;
volatile int32_t x300 = INT32_MIN;
int32_t x303 = INT32_MIN;
volatile int32_t t75 = -87524523;
uint64_t x308 = 26LLU;
static volatile int8_t x313 = -16;
int64_t x320 = 928299LL;
volatile int64_t x321 = -1LL;
static uint64_t x323 = 80787661427409LLU;
uint64_t x326 = UINT64_MAX;
int32_t t83 = 6;
volatile uint32_t x342 = 181778U;
uint64_t x343 = UINT64_MAX;
int16_t x346 = INT16_MIN;
int64_t x347 = 1643465LL;
int32_t t87 = -3251069;
volatile int32_t t88 = 9620481;
volatile int8_t x359 = INT8_MIN;
volatile uint16_t x361 = 21U;
static int32_t t93 = 0;
int8_t x379 = 4;
uint8_t x380 = 7U;
static int8_t x384 = -29;
int32_t t95 = 932111;
int64_t x392 = 3LL;
int16_t x395 = INT16_MIN;
static int16_t x398 = -1;


void f0(void) {
	volatile int64_t x1 = -1LL;
	uint64_t x2 = 403LLU;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = -345;

	t0 = ((x1<=x2)<=(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	uint64_t x6 = 5390LLU;
	uint32_t x7 = 1317U;
	int8_t x8 = 24;
	static volatile int32_t t1 = 1;

	t1 = ((x5<=x6)<=(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static int32_t x11 = INT32_MAX;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = -1;

	t2 = ((x9<=x10)<=(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 15;
	uint16_t x14 = 28112U;
	uint64_t x15 = 93873769822LLU;

	t3 = ((x13<=x14)<=(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	volatile int16_t x19 = INT16_MIN;
	int32_t x20 = -1;
	static int32_t t4 = -1753;

	t4 = ((x17<=x18)<=(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int64_t x22 = -583162LL;
	uint64_t x24 = 3718LLU;
	volatile int32_t t5 = 735718;

	t5 = ((x21<=x22)<=(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x28 = -1;
	volatile int32_t t6 = 30357487;

	t6 = ((x25<=x26)<=(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = INT64_MAX;
	int8_t x30 = INT8_MIN;
	volatile int64_t x31 = -1LL;
	int32_t t7 = 99165;

	t7 = ((x29<=x30)<=(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	uint16_t x34 = 1242U;
	static uint8_t x35 = UINT8_MAX;
	int8_t x36 = -1;
	int32_t t8 = 104;

	t8 = ((x33<=x34)<=(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = UINT32_MAX;
	int16_t x38 = -1;
	static int64_t x39 = INT64_MAX;

	t9 = ((x37<=x38)<=(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -13;
	int16_t x42 = INT16_MAX;
	int64_t x43 = -1LL;
	uint8_t x44 = 0U;
	static int32_t t10 = -68;

	t10 = ((x41<=x42)<=(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = 38692022;
	volatile int32_t x47 = -1;
	int16_t x48 = 0;
	static volatile int32_t t11 = 109358358;

	t11 = ((x45<=x46)<=(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 29640615426984639LLU;
	uint64_t x51 = UINT64_MAX;
	int32_t t12 = -383414561;

	t12 = ((x49<=x50)<=(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -1;
	static int8_t x56 = INT8_MIN;
	int32_t t13 = -3;

	t13 = ((x53<=x54)<=(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -171573336;
	static volatile int16_t x58 = 51;
	int16_t x59 = INT16_MAX;
	static int8_t x60 = -1;
	int32_t t14 = -5848;

	t14 = ((x57<=x58)<=(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	uint64_t x62 = 31LLU;
	int16_t x63 = -1;
	int32_t x64 = -279580;
	volatile int32_t t15 = -87383;

	t15 = ((x61<=x62)<=(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x66 = 654130477392217LL;
	static volatile int8_t x67 = 3;
	volatile int64_t x68 = -2601940912869592437LL;
	static int32_t t16 = 201;

	t16 = ((x65<=x66)<=(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int64_t x71 = INT64_MIN;
	volatile int8_t x72 = -1;
	volatile int32_t t17 = 6343215;

	t17 = ((x69<=x70)<=(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x74 = INT64_MAX;
	volatile int16_t x75 = INT16_MIN;
	uint16_t x76 = 6335U;
	int32_t t18 = 116555;

	t18 = ((x73<=x74)<=(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = 30;
	int32_t x79 = INT32_MAX;
	volatile int32_t t19 = 54;

	t19 = ((x77<=x78)<=(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int64_t x82 = -1LL;
	uint16_t x84 = 7706U;
	static int32_t t20 = 16897151;

	t20 = ((x81<=x82)<=(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x86 = 3;
	static int16_t x87 = INT16_MIN;
	int32_t t21 = -559423;

	t21 = ((x85<=x86)<=(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = -1;
	static int16_t x91 = 0;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -7624717;

	t22 = ((x89<=x90)<=(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x94 = INT8_MAX;
	int8_t x95 = -1;
	int16_t x96 = INT16_MAX;
	volatile int32_t t23 = -1421968;

	t23 = ((x93<=x94)<=(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = UINT8_MAX;
	uint16_t x99 = UINT16_MAX;
	static uint32_t x100 = 50061291U;

	t24 = ((x97<=x98)<=(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	int16_t x102 = INT16_MAX;
	int8_t x103 = -1;
	int16_t x104 = -13844;

	t25 = ((x101<=x102)<=(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	uint8_t x106 = 2U;
	static int64_t x107 = INT64_MAX;
	static int32_t x108 = -434;
	volatile int32_t t26 = -831840;

	t26 = ((x105<=x106)<=(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 6U;
	int16_t x110 = INT16_MIN;
	static int16_t x111 = -1315;

	t27 = ((x109<=x110)<=(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	int32_t x114 = INT32_MAX;
	volatile uint32_t x115 = UINT32_MAX;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t28 = -119343393;

	t28 = ((x113<=x114)<=(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -59;
	volatile uint16_t x118 = 1U;
	int8_t x119 = INT8_MAX;
	int64_t x120 = -1LL;
	int32_t t29 = 8;

	t29 = ((x117<=x118)<=(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 2826;
	int16_t x122 = -1;
	static uint64_t x123 = 7440356555449014136LLU;
	volatile int32_t x124 = INT32_MIN;
	int32_t t30 = -2;

	t30 = ((x121<=x122)<=(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int32_t x126 = 387487;
	static int64_t x127 = INT64_MIN;
	static int32_t x128 = INT32_MAX;

	t31 = ((x125<=x126)<=(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x129 = -1;
	static volatile int64_t x130 = -1LL;
	int32_t x131 = -1;
	int32_t x132 = INT32_MIN;
	int32_t t32 = 1;

	t32 = ((x129<=x130)<=(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -132904894LL;
	int64_t x134 = -1LL;
	static volatile uint64_t x135 = 211750607LLU;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -13787028;

	t33 = ((x133<=x134)<=(x135<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile int32_t x138 = -1;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = -92644572;

	t34 = ((x137<=x138)<=(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int8_t x142 = 0;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 295961U;
	int32_t t35 = 5010;

	t35 = ((x141<=x142)<=(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 21U;
	int8_t x146 = 34;
	uint32_t x147 = UINT32_MAX;
	volatile int16_t x148 = INT16_MIN;
	volatile int32_t t36 = -4462;

	t36 = ((x145<=x146)<=(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	int32_t x151 = 0;
	uint16_t x152 = 1U;

	t37 = ((x149<=x150)<=(x151<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int64_t x154 = -3818792LL;
	int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MIN;
	int32_t t38 = 64647;

	t38 = ((x153<=x154)<=(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -135107022448736928LL;
	int64_t x158 = -1LL;
	int16_t x160 = -1;
	volatile int32_t t39 = -27;

	t39 = ((x157<=x158)<=(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 1297LLU;
	int32_t x162 = INT32_MIN;
	uint64_t x163 = 247052656039327784LLU;
	int8_t x164 = -1;
	volatile int32_t t40 = -7648;

	t40 = ((x161<=x162)<=(x163<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	volatile uint16_t x166 = 61U;
	static uint32_t x167 = 2991227U;
	volatile uint64_t x168 = UINT64_MAX;
	volatile int32_t t41 = -23147995;

	t41 = ((x165<=x166)<=(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x171 = INT8_MIN;
	static int64_t x172 = -1LL;

	t42 = ((x169<=x170)<=(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x175 = INT8_MAX;
	static uint64_t x176 = 1720617LLU;

	t43 = ((x173<=x174)<=(x175<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 0;
	int32_t x178 = 1;
	volatile uint32_t x179 = 537U;
	int8_t x180 = INT8_MIN;

	t44 = ((x177<=x178)<=(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x183 = -944;
	static int8_t x184 = -1;
	int32_t t45 = -16;

	t45 = ((x181<=x182)<=(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static int32_t x187 = 399;
	int8_t x188 = -3;
	static volatile int32_t t46 = -203;

	t46 = ((x185<=x186)<=(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 5U;
	static int64_t x190 = -1LL;
	int16_t x191 = INT16_MIN;
	static uint64_t x192 = 21LLU;
	static int32_t t47 = -450;

	t47 = ((x189<=x190)<=(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 0U;
	int16_t x196 = -1;
	static volatile int32_t t48 = 11939639;

	t48 = ((x193<=x194)<=(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MIN;
	int64_t x200 = INT64_MIN;

	t49 = ((x197<=x198)<=(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = UINT16_MAX;
	uint64_t x202 = 28202429LLU;
	uint32_t x203 = 12676358U;
	static uint64_t x204 = 3779307367172LLU;
	static int32_t t50 = 345;

	t50 = ((x201<=x202)<=(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 13549234U;
	int32_t x206 = INT32_MAX;
	uint32_t x207 = 42003U;
	uint64_t x208 = 143720102872839LLU;
	static volatile int32_t t51 = -78768;

	t51 = ((x205<=x206)<=(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	uint16_t x210 = 0U;
	uint16_t x211 = 2U;
	volatile uint8_t x212 = 62U;
	int32_t t52 = 43494;

	t52 = ((x209<=x210)<=(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MIN;
	int8_t x214 = -1;
	volatile int32_t t53 = -224823190;

	t53 = ((x213<=x214)<=(x215<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = UINT32_MAX;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t54 = -31671567;

	t54 = ((x217<=x218)<=(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int64_t x223 = 21002739783LL;
	static volatile int8_t x224 = 56;

	t55 = ((x221<=x222)<=(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	int16_t x226 = INT16_MIN;
	volatile int8_t x227 = -47;
	static uint64_t x228 = 141989LLU;
	static int32_t t56 = 1;

	t56 = ((x225<=x226)<=(x227<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x230 = INT32_MIN;
	volatile int8_t x231 = INT8_MAX;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t57 = -1914;

	t57 = ((x229<=x230)<=(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint64_t x235 = 5438780895146899LLU;
	int64_t x236 = -28373864LL;
	static volatile int32_t t58 = -9444454;

	t58 = ((x233<=x234)<=(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -41;
	volatile int32_t t59 = 0;

	t59 = ((x237<=x238)<=(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = 0;
	static int8_t x243 = -1;
	static uint32_t x244 = 29U;

	t60 = ((x241<=x242)<=(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MIN;
	uint32_t x246 = 18128U;
	uint8_t x247 = UINT8_MAX;
	static int64_t x248 = -1LL;
	int32_t t61 = 5516387;

	t61 = ((x245<=x246)<=(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 113U;
	static uint8_t x250 = UINT8_MAX;
	static int16_t x252 = -1;
	int32_t t62 = 119;

	t62 = ((x249<=x250)<=(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MAX;
	int64_t x255 = INT64_MIN;
	int32_t t63 = 3;

	t63 = ((x253<=x254)<=(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MAX;
	int8_t x258 = INT8_MAX;
	volatile int8_t x259 = INT8_MIN;
	static uint64_t x260 = UINT64_MAX;
	volatile int32_t t64 = 30052;

	t64 = ((x257<=x258)<=(x259<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MIN;
	uint64_t x263 = 38LLU;
	int32_t x264 = -1;
	volatile int32_t t65 = 3960;

	t65 = ((x261<=x262)<=(x263<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -103802164329782429LL;
	uint32_t x266 = UINT32_MAX;
	static int8_t x267 = -2;
	uint16_t x268 = 5231U;
	int32_t t66 = -37770702;

	t66 = ((x265<=x266)<=(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	int32_t x271 = -1;
	static volatile int16_t x272 = INT16_MAX;
	int32_t t67 = -54375;

	t67 = ((x269<=x270)<=(x271<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x274 = -87;
	int16_t x275 = -1;
	int16_t x276 = -178;
	static volatile int32_t t68 = -232;

	t68 = ((x273<=x274)<=(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x277 = INT64_MIN;
	static int64_t x279 = INT64_MIN;
	int16_t x280 = -17;
	int32_t t69 = 1;

	t69 = ((x277<=x278)<=(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 52025779905203LLU;
	uint32_t x282 = 4U;
	static uint64_t x283 = UINT64_MAX;

	t70 = ((x281<=x282)<=(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 50;
	static int16_t x286 = 1;
	static int32_t x288 = -3942998;
	int32_t t71 = 145968486;

	t71 = ((x285<=x286)<=(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 3U;
	int8_t x290 = 1;
	int32_t x291 = INT32_MIN;

	t72 = ((x289<=x290)<=(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 1LLU;
	int32_t x294 = INT32_MIN;
	static int16_t x295 = INT16_MIN;
	int32_t t73 = -499;

	t73 = ((x293<=x294)<=(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	static int16_t x298 = INT16_MIN;
	uint8_t x299 = 21U;
	volatile int32_t t74 = -152938063;

	t74 = ((x297<=x298)<=(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = -1LL;
	volatile int64_t x302 = 138889160314LL;
	int64_t x304 = INT64_MIN;

	t75 = ((x301<=x302)<=(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static int32_t x306 = INT32_MIN;
	uint32_t x307 = UINT32_MAX;
	volatile int32_t t76 = 61;

	t76 = ((x305<=x306)<=(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 26205U;
	static int8_t x310 = -22;
	static int64_t x311 = 7284LL;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t77 = 9;

	t77 = ((x309<=x310)<=(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = INT8_MIN;
	int8_t x315 = -1;
	int32_t x316 = 15186;
	volatile int32_t t78 = -102;

	t78 = ((x313<=x314)<=(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -1;
	int8_t x318 = INT8_MIN;
	int32_t x319 = -1;
	volatile int32_t t79 = 161;

	t79 = ((x317<=x318)<=(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = INT32_MIN;
	int64_t x324 = INT64_MAX;
	volatile int32_t t80 = -88635934;

	t80 = ((x321<=x322)<=(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	static int8_t x327 = -1;
	int64_t x328 = INT64_MIN;
	static int32_t t81 = -1952888;

	t81 = ((x325<=x326)<=(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MAX;
	int32_t x330 = INT32_MIN;
	uint32_t x331 = 35815460U;
	volatile int64_t x332 = 2182970654981LL;
	volatile int32_t t82 = 6662881;

	t82 = ((x329<=x330)<=(x331<x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 11257;
	int32_t x334 = INT32_MAX;
	volatile int64_t x335 = INT64_MAX;
	int8_t x336 = -4;

	t83 = ((x333<=x334)<=(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	static volatile int64_t x338 = -1123248745050814LL;
	static int16_t x339 = INT16_MIN;
	static uint16_t x340 = 7U;
	volatile int32_t t84 = -104031;

	t84 = ((x337<=x338)<=(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -704;
	uint16_t x344 = UINT16_MAX;
	int32_t t85 = 469188677;

	t85 = ((x341<=x342)<=(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int32_t x348 = -1;
	volatile int32_t t86 = 38562849;

	t86 = ((x345<=x346)<=(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 260U;
	int32_t x350 = -720;
	uint32_t x351 = UINT32_MAX;
	uint8_t x352 = 1U;

	t87 = ((x349<=x350)<=(x351<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = -2333;
	volatile int8_t x354 = 7;
	volatile int16_t x355 = 352;
	int64_t x356 = -1LL;

	t88 = ((x353<=x354)<=(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -33264;
	volatile uint16_t x358 = 1U;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 388140;

	t89 = ((x357<=x358)<=(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = -1;
	volatile uint64_t x363 = 26626906253021351LLU;
	volatile int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 29;

	t90 = ((x361<=x362)<=(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 742781832143909494LLU;
	int64_t x366 = -736150LL;
	int16_t x367 = INT16_MIN;
	volatile int8_t x368 = INT8_MIN;
	volatile int32_t t91 = -18;

	t91 = ((x365<=x366)<=(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	volatile uint16_t x370 = 3028U;
	volatile int32_t x371 = INT32_MIN;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = 1;

	t92 = ((x369<=x370)<=(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = 5798U;
	uint32_t x374 = 379U;
	static int32_t x375 = INT32_MIN;
	static int16_t x376 = -1;

	t93 = ((x373<=x374)<=(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -28254273744561LL;
	volatile int8_t x378 = INT8_MIN;
	volatile int32_t t94 = 1021;

	t94 = ((x377<=x378)<=(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	int32_t x382 = -933;
	int8_t x383 = INT8_MAX;

	t95 = ((x381<=x382)<=(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = 1;
	static volatile int16_t x386 = 6;
	uint64_t x387 = 4411695174707563086LLU;
	int64_t x388 = INT64_MIN;
	volatile int32_t t96 = 1;

	t96 = ((x385<=x386)<=(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = -7866LL;
	int32_t t97 = -383;

	t97 = ((x389<=x390)<=(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 116U;
	uint32_t x394 = 42688506U;
	static uint16_t x396 = 65U;
	static int32_t t98 = -254888;

	t98 = ((x393<=x394)<=(x395<x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = 3U;
	uint16_t x399 = 8U;
	int16_t x400 = INT16_MIN;
	int32_t t99 = -2;

	t99 = ((x397<=x398)<=(x399<x400));

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
