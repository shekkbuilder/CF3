#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 1071199;
int32_t x10 = INT32_MIN;
int8_t x13 = -1;
volatile int32_t t3 = 10730839;
uint16_t x19 = 663U;
volatile int32_t t6 = -151;
volatile int32_t t7 = 74052;
volatile int8_t x34 = -1;
int64_t x35 = -1LL;
volatile uint32_t x36 = 837380U;
static volatile int32_t t9 = 1;
int32_t t10 = -169801082;
volatile int16_t x50 = -1;
static volatile int64_t x54 = INT64_MAX;
static uint32_t x58 = UINT32_MAX;
volatile int64_t x60 = INT64_MIN;
int16_t x64 = -1;
uint16_t x67 = UINT16_MAX;
static int16_t x72 = INT16_MAX;
static volatile int32_t x75 = INT32_MIN;
int32_t t18 = 26801341;
int32_t x79 = 109975;
volatile int32_t x91 = -1;
int32_t x93 = -26081491;
static volatile int32_t t23 = 3980612;
int16_t x97 = INT16_MIN;
int32_t t24 = 242861256;
int32_t x109 = 10;
static int16_t x114 = -193;
int16_t x116 = INT16_MIN;
volatile int32_t t28 = -47;
int8_t x119 = INT8_MAX;
static int8_t x126 = -10;
int16_t x139 = -52;
static int64_t x143 = 17LL;
int8_t x145 = -14;
static int64_t x151 = -1LL;
uint64_t x154 = 26075812023520874LLU;
static uint16_t x155 = 279U;
int16_t x157 = INT16_MIN;
volatile int16_t x162 = INT16_MAX;
volatile int32_t t40 = 1031892;
static uint64_t x180 = 34449837LLU;
uint64_t x181 = 1243517142139946765LLU;
static volatile uint16_t x183 = 6U;
int16_t x192 = -485;
volatile uint32_t x198 = 759729242U;
int64_t x209 = 628037021826351LL;
uint8_t x210 = 1U;
uint32_t x219 = 511871U;
static uint8_t x221 = UINT8_MAX;
int16_t x224 = -1788;
uint8_t x225 = UINT8_MAX;
static int32_t x231 = -1;
volatile int32_t t57 = 1090;
volatile int32_t t58 = -75745254;
uint64_t x248 = 2065912145LLU;
uint64_t x253 = UINT64_MAX;
int32_t x255 = INT32_MIN;
int8_t x261 = -7;
int32_t t65 = 2;
int8_t x268 = INT8_MIN;
volatile int32_t t68 = -222679778;
uint64_t x280 = 166544860LLU;
int64_t x287 = -1LL;
int32_t t71 = 230;
volatile int16_t x294 = -1;
int16_t x296 = INT16_MIN;
static int32_t t74 = -36;
int64_t x302 = INT64_MAX;
static uint8_t x303 = 22U;
int16_t x313 = INT16_MIN;
volatile int32_t x314 = -8350888;
static int32_t x318 = INT32_MIN;
volatile uint16_t x319 = UINT16_MAX;
uint16_t x325 = UINT16_MAX;
uint8_t x330 = 3U;
static volatile int64_t x331 = 1639238LL;
int8_t x332 = -38;
static volatile int32_t t82 = -6;
int64_t x339 = -1732225489342407487LL;
int8_t x347 = INT8_MIN;
int16_t x352 = INT16_MAX;
uint32_t x355 = UINT32_MAX;
uint8_t x356 = 0U;
static int16_t x357 = 12906;
uint64_t x360 = 2872577288604962LLU;
volatile int32_t t89 = 1;
int16_t x367 = 1828;
volatile int8_t x373 = INT8_MIN;
uint32_t x378 = 0U;
static volatile int32_t x381 = INT32_MIN;
int32_t t95 = -27;
static volatile int16_t x388 = INT16_MAX;
int16_t x391 = 190;
int32_t t97 = -9;
static int32_t x393 = INT32_MAX;
int16_t x394 = 38;


void f0(void) {
	int8_t x1 = -1;
	static volatile int8_t x2 = -1;
	int64_t x3 = -165932LL;
	int16_t x4 = INT16_MAX;

	t0 = (x1==(x2|(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int64_t x6 = -1LL;
	int16_t x7 = -1;
	int32_t x8 = -205822;
	int32_t t1 = -37457;

	t1 = (x5==(x6|(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int32_t x11 = -1;
	uint32_t x12 = 16919349U;
	volatile int32_t t2 = -973;

	t2 = (x9==(x10|(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -54;
	uint32_t x15 = UINT32_MAX;
	int32_t x16 = INT32_MAX;

	t3 = (x13==(x14|(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MIN;
	uint8_t x20 = 125U;
	static volatile int32_t t4 = 61351;

	t4 = (x17==(x18|(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1726U;
	int64_t x22 = 890LL;
	uint64_t x23 = 1526623557401506829LLU;
	static uint64_t x24 = 25860562103714508LLU;
	static int32_t t5 = 55823;

	t5 = (x21==(x22|(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = 2490;
	static uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MIN;
	volatile int32_t x28 = INT32_MIN;

	t6 = (x25==(x26|(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 236017131U;
	static uint16_t x30 = UINT16_MAX;
	uint8_t x31 = 0U;
	volatile int64_t x32 = INT64_MIN;

	t7 = (x29==(x30|(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	static int32_t t8 = -227558;

	t8 = (x33==(x34|(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint8_t x38 = 109U;
	uint32_t x39 = 221913U;
	static volatile uint32_t x40 = UINT32_MAX;

	t9 = (x37==(x38|(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -71431109170LL;
	uint16_t x42 = 11537U;
	int32_t x43 = -1;
	static volatile int64_t x44 = 150109021LL;

	t10 = (x41==(x42|(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	uint16_t x46 = 5U;
	volatile int64_t x47 = -1020117741444795016LL;
	static volatile int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -3;

	t11 = (x45==(x46|(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 47U;
	uint16_t x51 = UINT16_MAX;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -4101803;

	t12 = (x49==(x50|(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 57U;
	int16_t x55 = INT16_MAX;
	uint64_t x56 = 187995692LLU;
	int32_t t13 = 2;

	t13 = (x53==(x54|(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 0LLU;
	int8_t x59 = INT8_MIN;
	volatile int32_t t14 = -1;

	t14 = (x57==(x58|(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 294U;
	uint64_t x62 = 12382847515LLU;
	volatile uint32_t x63 = UINT32_MAX;
	volatile int32_t t15 = -6;

	t15 = (x61==(x62|(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 2025U;
	int64_t x66 = INT64_MAX;
	int64_t x68 = INT64_MIN;
	static volatile int32_t t16 = -16342033;

	t16 = (x65==(x66|(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	static int8_t x70 = 14;
	uint8_t x71 = 20U;
	volatile int32_t t17 = -36;

	t17 = (x69==(x70|(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 384U;
	int64_t x74 = 4LL;
	volatile int8_t x76 = INT8_MAX;

	t18 = (x73==(x74|(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 18U;
	static uint32_t x78 = UINT32_MAX;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 123849;

	t19 = (x77==(x78|(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -85443613146LL;
	uint16_t x82 = 473U;
	int32_t x83 = 749;
	int32_t x84 = INT32_MIN;
	int32_t t20 = 3787871;

	t20 = (x81==(x82|(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 77024264LLU;
	int32_t x86 = INT32_MAX;
	uint8_t x87 = 99U;
	int64_t x88 = -1LL;
	static int32_t t21 = 21;

	t21 = (x85==(x86|(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 8790U;
	int64_t x90 = -1LL;
	int16_t x92 = 4;
	int32_t t22 = 103121;

	t22 = (x89==(x90|(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = -1;
	int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MIN;

	t23 = (x93==(x94|(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 26756709206LLU;
	int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;

	t24 = (x97==(x98|(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 7520LL;
	uint32_t x102 = 11U;
	volatile int32_t x103 = INT32_MAX;
	int64_t x104 = 86588144080035204LL;
	volatile int32_t t25 = 1039080;

	t25 = (x101==(x102|(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MAX;
	volatile int16_t x106 = -1;
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 5760740056278562LLU;
	static volatile int32_t t26 = 620656;

	t26 = (x105==(x106|(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -1LL;
	int8_t x111 = INT8_MIN;
	static int32_t x112 = INT32_MIN;
	volatile int32_t t27 = -116768299;

	t27 = (x109==(x110|(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MIN;
	int32_t x115 = -1;

	t28 = (x113==(x114|(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 1;
	static int32_t x118 = -1;
	uint32_t x120 = UINT32_MAX;
	static volatile int32_t t29 = 0;

	t29 = (x117==(x118|(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = 4;
	static int32_t x122 = -1;
	volatile int8_t x123 = INT8_MIN;
	int16_t x124 = -12785;
	volatile int32_t t30 = 49;

	t30 = (x121==(x122|(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -2134513660LL;
	int8_t x127 = INT8_MIN;
	int8_t x128 = -1;
	volatile int32_t t31 = -34375475;

	t31 = (x125==(x126|(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 1U;
	uint16_t x130 = UINT16_MAX;
	int32_t x131 = -1;
	uint8_t x132 = 17U;
	static volatile int32_t t32 = -112989;

	t32 = (x129==(x130|(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 6981589855LLU;
	static int8_t x134 = INT8_MIN;
	uint32_t x135 = 345778U;
	static int64_t x136 = INT64_MIN;
	int32_t t33 = -1279;

	t33 = (x133==(x134|(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 234U;
	volatile int64_t x138 = -1LL;
	uint16_t x140 = UINT16_MAX;
	int32_t t34 = -13;

	t34 = (x137==(x138|(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x142 = -1;
	static int16_t x144 = 23;
	volatile int32_t t35 = -356374;

	t35 = (x141==(x142|(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = -125785353;
	uint64_t x147 = UINT64_MAX;
	uint16_t x148 = 5133U;
	int32_t t36 = -15832;

	t36 = (x145==(x146|(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	static volatile uint32_t x150 = 46U;
	int32_t x152 = -3438;
	volatile int32_t t37 = -5499;

	t37 = (x149==(x150|(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 17;
	uint8_t x156 = 7U;
	volatile int32_t t38 = 24;

	t38 = (x153==(x154|(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = 4;
	uint64_t x159 = UINT64_MAX;
	volatile int8_t x160 = -1;
	volatile int32_t t39 = 4524;

	t39 = (x157==(x158|(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 63114U;
	static int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MAX;

	t40 = (x161==(x162|(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint64_t x166 = 209LLU;
	volatile int64_t x167 = -1253151LL;
	uint16_t x168 = 638U;
	static volatile int32_t t41 = -3;

	t41 = (x165==(x166|(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	static uint16_t x170 = 6U;
	int64_t x171 = INT64_MIN;
	volatile int64_t x172 = 13LL;
	volatile int32_t t42 = 26;

	t42 = (x169==(x170|(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 522139478;
	int32_t x174 = -1;
	int64_t x175 = -1LL;
	volatile int16_t x176 = INT16_MIN;
	static int32_t t43 = -48403852;

	t43 = (x173==(x174|(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x177 = UINT64_MAX;
	static uint16_t x178 = 62U;
	static uint16_t x179 = UINT16_MAX;
	int32_t t44 = 3;

	t44 = (x177==(x178|(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x182 = 2U;
	int16_t x184 = INT16_MAX;
	static int32_t t45 = 937975187;

	t45 = (x181==(x182|(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = -1;
	int32_t x187 = INT32_MIN;
	volatile uint8_t x188 = 58U;
	int32_t t46 = 428;

	t46 = (x185==(x186|(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = 280188972201554235LLU;
	int16_t x190 = INT16_MAX;
	uint32_t x191 = UINT32_MAX;
	volatile int32_t t47 = 15;

	t47 = (x189==(x190|(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	static int64_t x194 = INT64_MAX;
	static int32_t x195 = 251134;
	int8_t x196 = INT8_MIN;
	static int32_t t48 = 2209792;

	t48 = (x193==(x194|(x195|x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = 109844909;
	int32_t x199 = -1;
	static int64_t x200 = INT64_MIN;
	volatile int32_t t49 = -3;

	t49 = (x197==(x198|(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = INT32_MAX;
	static volatile int16_t x202 = 294;
	volatile uint32_t x203 = 365559U;
	uint8_t x204 = 15U;
	volatile int32_t t50 = -5905084;

	t50 = (x201==(x202|(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MAX;
	int16_t x206 = INT16_MAX;
	uint64_t x207 = 3018344832LLU;
	uint32_t x208 = 249965436U;
	int32_t t51 = -485889;

	t51 = (x205==(x206|(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x211 = UINT32_MAX;
	uint32_t x212 = 12872U;
	volatile int32_t t52 = 25949435;

	t52 = (x209==(x210|(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = 3912LLU;
	int8_t x214 = INT8_MIN;
	uint8_t x215 = 25U;
	uint64_t x216 = UINT64_MAX;
	int32_t t53 = -326;

	t53 = (x213==(x214|(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 6U;
	static int8_t x218 = -1;
	static volatile uint64_t x220 = 4353565LLU;
	int32_t t54 = -119931749;

	t54 = (x217==(x218|(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x222 = INT16_MAX;
	int32_t x223 = 1372987;
	static volatile int32_t t55 = 972583435;

	t55 = (x221==(x222|(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = INT16_MIN;
	static int16_t x227 = INT16_MIN;
	uint16_t x228 = 81U;
	static volatile int32_t t56 = 1;

	t56 = (x225==(x226|(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	uint64_t x230 = 1126622LLU;
	uint64_t x232 = 293871LLU;

	t57 = (x229==(x230|(x231|x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = UINT16_MAX;
	volatile uint64_t x234 = 473645607240430381LLU;
	volatile int8_t x235 = INT8_MAX;
	int32_t x236 = 79244;

	t58 = (x233==(x234|(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MAX;
	static volatile int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 53640;

	t59 = (x237==(x238|(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MAX;
	volatile int8_t x243 = 1;
	int32_t x244 = INT32_MIN;
	static int32_t t60 = -8300398;

	t60 = (x241==(x242|(x243|x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	uint8_t x246 = 9U;
	int8_t x247 = INT8_MIN;
	volatile int32_t t61 = 3;

	t61 = (x245==(x246|(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	uint8_t x251 = UINT8_MAX;
	volatile int64_t x252 = -1LL;
	static volatile int32_t t62 = 11419;

	t62 = (x249==(x250|(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MAX;
	uint16_t x256 = 0U;
	int32_t t63 = 0;

	t63 = (x253==(x254|(x255|x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = UINT32_MAX;
	int8_t x259 = INT8_MAX;
	static int8_t x260 = 0;
	int32_t t64 = 39094;

	t64 = (x257==(x258|(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = UINT64_MAX;
	int32_t x263 = -119233355;
	static volatile int16_t x264 = -1;

	t65 = (x261==(x262|(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = 822152670355164LLU;
	volatile int16_t x267 = INT16_MAX;
	int32_t t66 = 469943;

	t66 = (x265==(x266|(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -23490;
	int8_t x270 = 31;
	int16_t x271 = INT16_MIN;
	int8_t x272 = 0;
	int32_t t67 = 15115;

	t67 = (x269==(x270|(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int16_t x274 = 2705;
	volatile int64_t x275 = INT64_MIN;
	uint16_t x276 = UINT16_MAX;

	t68 = (x273==(x274|(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	uint8_t x278 = 1U;
	int16_t x279 = -7179;
	volatile int32_t t69 = 0;

	t69 = (x277==(x278|(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = 2225;
	uint64_t x282 = 16825564LLU;
	int64_t x283 = -1794730244309165669LL;
	int8_t x284 = INT8_MIN;
	int32_t t70 = -157673;

	t70 = (x281==(x282|(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 10U;
	int16_t x286 = -31;
	static int64_t x288 = 18390282169LL;

	t71 = (x285==(x286|(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 7884713539148055LLU;
	static uint64_t x290 = UINT64_MAX;
	uint64_t x291 = 207LLU;
	uint8_t x292 = UINT8_MAX;
	static int32_t t72 = -10287;

	t72 = (x289==(x290|(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int8_t x295 = 0;
	int32_t t73 = -73;

	t73 = (x293==(x294|(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = 15009669U;
	uint64_t x298 = UINT64_MAX;
	int8_t x299 = INT8_MIN;
	static int8_t x300 = INT8_MIN;

	t74 = (x297==(x298|(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t75 = 17536;

	t75 = (x301==(x302|(x303|x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int16_t x306 = -1;
	uint32_t x307 = 592U;
	uint16_t x308 = 5U;
	int32_t t76 = 850450;

	t76 = (x305==(x306|(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	int8_t x310 = -1;
	volatile int16_t x311 = -1702;
	static int64_t x312 = INT64_MIN;
	static volatile int32_t t77 = 100973;

	t77 = (x309==(x310|(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x315 = -1LL;
	volatile int16_t x316 = INT16_MIN;
	int32_t t78 = 1;

	t78 = (x313==(x314|(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = 958380209;
	static int16_t x320 = 9991;
	static int32_t t79 = -1570;

	t79 = (x317==(x318|(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 1224U;
	int8_t x322 = INT8_MIN;
	int32_t x323 = INT32_MAX;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = 675299972;

	t80 = (x321==(x322|(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MAX;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = -1LL;
	int32_t t81 = -1;

	t81 = (x325==(x326|(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x329 = 4622;

	t82 = (x329==(x330|(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	int16_t x334 = INT16_MAX;
	int32_t x335 = 3435;
	volatile int64_t x336 = -1LL;
	volatile int32_t t83 = 173808526;

	t83 = (x333==(x334|(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	int32_t x338 = INT32_MIN;
	uint16_t x340 = 138U;
	int32_t t84 = 54249663;

	t84 = (x337==(x338|(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = UINT16_MAX;
	int16_t x342 = -1;
	uint64_t x343 = 138407932LLU;
	uint16_t x344 = UINT16_MAX;
	static int32_t t85 = 0;

	t85 = (x341==(x342|(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 63U;
	volatile uint64_t x346 = 643LLU;
	static int64_t x348 = INT64_MIN;
	volatile int32_t t86 = -442;

	t86 = (x345==(x346|(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int8_t x350 = INT8_MIN;
	volatile uint32_t x351 = UINT32_MAX;
	volatile int32_t t87 = 2357;

	t87 = (x349==(x350|(x351|x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	static int16_t x354 = INT16_MIN;
	int32_t t88 = -17;

	t88 = (x353==(x354|(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x358 = UINT8_MAX;
	int64_t x359 = INT64_MIN;

	t89 = (x357==(x358|(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	int8_t x363 = INT8_MAX;
	volatile uint64_t x364 = 801674259558LLU;
	static int32_t t90 = 922039;

	t90 = (x361==(x362|(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MIN;
	int16_t x368 = INT16_MAX;
	static int32_t t91 = 202997145;

	t91 = (x365==(x366|(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = -1LL;
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = INT64_MIN;
	int16_t x372 = -1;
	int32_t t92 = 704076358;

	t92 = (x369==(x370|(x371|x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = -8240;
	int16_t x375 = INT16_MAX;
	uint64_t x376 = 252LLU;
	volatile int32_t t93 = -1000081;

	t93 = (x373==(x374|(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -15113;
	static volatile int32_t t94 = 343915640;

	t94 = (x377==(x378|(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = UINT64_MAX;
	uint8_t x383 = UINT8_MAX;
	volatile int16_t x384 = INT16_MAX;

	t95 = (x381==(x382|(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x385 = -1;
	volatile int8_t x386 = INT8_MIN;
	volatile uint32_t x387 = 2U;
	static volatile int32_t t96 = 15;

	t96 = (x385==(x386|(x387|x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x389 = 46727761;
	volatile int16_t x390 = INT16_MAX;
	uint16_t x392 = UINT16_MAX;

	t97 = (x389==(x390|(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x395 = -1;
	int8_t x396 = 1;
	int32_t t98 = -209;

	t98 = (x393==(x394|(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = -1;
	int16_t x398 = INT16_MAX;
	static volatile int16_t x399 = INT16_MIN;
	static int64_t x400 = -1LL;
	volatile int32_t t99 = -696;

	t99 = (x397==(x398|(x399|x400)));

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
