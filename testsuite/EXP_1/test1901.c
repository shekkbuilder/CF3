#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 18392U;
static int32_t x7 = INT32_MIN;
int64_t x8 = 210LL;
uint64_t x9 = 3242078815992LLU;
volatile int16_t x14 = INT16_MIN;
uint8_t x15 = UINT8_MAX;
int8_t x16 = -1;
volatile int32_t x24 = -1;
volatile int64_t t4 = -87206355LL;
volatile int16_t x33 = 38;
volatile int8_t x35 = -1;
static int16_t x37 = INT16_MIN;
static int64_t x38 = INT64_MAX;
volatile int64_t x41 = -3763006LL;
volatile uint64_t t9 = 80715650LLU;
int64_t x49 = INT64_MIN;
volatile uint64_t x51 = 99934572LLU;
volatile int32_t x55 = INT32_MIN;
volatile uint64_t t12 = 103733806842LLU;
volatile int64_t x63 = INT64_MIN;
static int32_t x72 = INT32_MIN;
static uint64_t x81 = 33817815949829525LLU;
volatile uint64_t t19 = 203079LLU;
volatile int16_t x90 = -89;
int32_t x91 = -25795;
static volatile uint64_t x97 = 95936LLU;
volatile int16_t x99 = 1334;
volatile int64_t x103 = -6507070LL;
int16_t x110 = -3756;
int32_t x118 = INT32_MIN;
static int8_t x119 = INT8_MAX;
int8_t x120 = -1;
int32_t x122 = INT32_MIN;
int16_t x123 = INT16_MIN;
int32_t x128 = 48;
int64_t x130 = INT64_MAX;
uint64_t x138 = UINT64_MAX;
volatile uint64_t t32 = UINT64_MAX;
volatile uint32_t x141 = 787U;
uint8_t x144 = UINT8_MAX;
volatile uint32_t t33 = 1U;
uint32_t x147 = 243205693U;
static int16_t x150 = -71;
static int8_t x157 = -1;
volatile int16_t x167 = 1324;
uint16_t x175 = 9321U;
static int64_t x178 = -1LL;
int64_t x179 = INT64_MIN;
uint64_t x181 = 5LLU;
static volatile int64_t t44 = -34126105712LL;
uint8_t x192 = 95U;
volatile int64_t t46 = 452481136222437427LL;
int32_t x205 = -1;
uint8_t x212 = UINT8_MAX;
int32_t x214 = -15949950;
static int64_t t51 = -113LL;
int32_t x232 = 1155;
static uint8_t x234 = 10U;
uint8_t x237 = UINT8_MAX;
static uint32_t x239 = 25979729U;
int8_t x248 = -1;
uint8_t x268 = 48U;
int8_t x279 = INT8_MIN;
uint32_t x280 = 73U;
int64_t x285 = -1LL;
volatile int64_t t64 = 6776020870215231LL;
int64_t x299 = INT64_MAX;
int8_t x302 = -1;
int16_t x303 = 1888;
static int64_t x305 = 784963LL;
uint8_t x308 = 30U;
int64_t t69 = -4LL;
volatile int64_t x319 = INT64_MAX;
int8_t x324 = -11;
static volatile int32_t t73 = 531727040;
static uint32_t x329 = 504640U;
int32_t x341 = -442211;
volatile int64_t x352 = -434094725LL;
volatile int8_t x356 = INT8_MIN;
int32_t x361 = 5249;
static int8_t x364 = 1;
int64_t t82 = 174789LL;
uint64_t t84 = 7461525065LLU;
int8_t x373 = INT8_MIN;
uint8_t x376 = 60U;
volatile int8_t x386 = -31;
int64_t x388 = -1LL;
volatile int64_t t87 = -1806847LL;
static uint64_t x390 = UINT64_MAX;
uint64_t t92 = 6LLU;
uint16_t x415 = 83U;
int8_t x416 = -36;
static uint32_t x417 = UINT32_MAX;
int8_t x418 = INT8_MIN;


void f0(void) {
	int8_t x5 = -1;
	volatile int64_t t0 = -33504083714298LL;

	t0 = (((x5|x6)/x7)*x8);

	if (t0 != 210LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x10 = -1LL;
	int64_t x11 = -105803270566LL;
	int16_t x12 = INT16_MAX;
	uint64_t t1 = 15175433LLU;

	t1 = (((x9|x10)/x11)*x12);

	if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 406U;
	uint32_t t2 = 150U;

	t2 = (((x13|x14)/x15)*x16);

	if (t2 != 4278124414U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 81358966;
	int8_t x18 = -7;
	uint32_t x19 = 320304U;
	int16_t x20 = INT16_MAX;
	uint32_t t3 = 19832U;

	t3 = (((x17|x18)/x19)*x20);

	if (t3 != 439372703U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = 49;
	volatile int64_t x22 = -1LL;
	static uint32_t x23 = UINT32_MAX;

	t4 = (((x21|x22)/x23)*x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = 42;
	volatile uint8_t x27 = 8U;
	uint32_t x28 = UINT32_MAX;
	uint32_t t5 = 12363879U;

	t5 = (((x25|x26)/x27)*x28);

	if (t5 != 268435450U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 1U;
	uint16_t x30 = UINT16_MAX;
	static volatile int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t6 = 202984;

	t6 = (((x29|x30)/x31)*x32);

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = -43;
	int32_t x36 = -1;
	static int32_t t7 = -8;

	t7 = (((x33|x34)/x35)*x36);

	if (t7 != -9) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x39 = INT32_MIN;
	uint32_t x40 = 29U;
	volatile int64_t t8 = 41091630775LL;

	t8 = (((x37|x38)/x39)*x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = 1;
	int64_t x43 = -329597LL;
	uint64_t x44 = UINT64_MAX;

	t9 = (((x41|x42)/x43)*x44);

	if (t9 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 298276337LLU;
	uint64_t x46 = 150462552795123713LLU;
	volatile uint16_t x47 = 127U;
	static uint8_t x48 = 78U;
	volatile uint64_t t10 = 6LLU;

	t10 = (((x45|x46)/x47)*x48);

	if (t10 != 92410071965660436LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = 0;
	volatile uint8_t x52 = UINT8_MAX;
	static volatile uint64_t t11 = 1485472LLU;

	t11 = (((x49|x50)/x51)*x52);

	if (t11 != 23534997171780LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MAX;
	int64_t x54 = -339434LL;
	uint64_t x56 = 13LLU;

	t12 = (((x53|x54)/x55)*x56);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 3834606393LLU;
	int64_t x58 = 1LL;
	static int64_t x59 = 5410465539298445LL;
	int64_t x60 = INT64_MIN;
	static volatile uint64_t t13 = 202720075LLU;

	t13 = (((x57|x58)/x59)*x60);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -459789LL;
	int64_t x62 = INT64_MIN;
	int16_t x64 = INT16_MIN;
	volatile int64_t t14 = -264769190494756LL;

	t14 = (((x61|x62)/x63)*x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = 0;
	volatile int16_t x67 = INT16_MAX;
	uint8_t x68 = 9U;
	int32_t t15 = -6457449;

	t15 = (((x65|x66)/x67)*x68);

	if (t15 != -9) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	uint32_t x70 = 1U;
	int64_t x71 = 264132418757263483LL;
	static volatile int64_t t16 = 179280LL;

	t16 = (((x69|x70)/x71)*x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	volatile int64_t x74 = -520015LL;
	uint64_t x75 = 86127014015601730LLU;
	volatile int32_t x76 = INT32_MAX;
	uint64_t t17 = 3LLU;

	t17 = (((x73|x74)/x75)*x76);

	if (t17 != 459561500458LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MAX;
	int64_t x79 = -1LL;
	int32_t x80 = INT32_MIN;
	volatile int64_t t18 = -491193025398812LL;

	t18 = (((x77|x78)/x79)*x80);

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x82 = 13;
	volatile int8_t x83 = INT8_MAX;
	static uint8_t x84 = UINT8_MAX;

	t19 = (((x81|x82)/x83)*x84);

	if (t19 != 67901913915011940LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 22138181LLU;
	uint64_t x86 = 2LLU;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = 13902;
	uint64_t t20 = 3786706481355714LLU;

	t20 = (((x85|x86)/x87)*x88);

	if (t20 != 1206916032LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = 12;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t21 = 35;

	t21 = (((x89|x90)/x91)*x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = -1;
	uint16_t x94 = UINT16_MAX;
	static int16_t x95 = INT16_MAX;
	int16_t x96 = -8682;
	volatile int32_t t22 = 22;

	t22 = (((x93|x94)/x95)*x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x98 = 1;
	int8_t x100 = INT8_MIN;
	uint64_t t23 = 1LLU;

	t23 = (((x97|x98)/x99)*x100);

	if (t23 != 18446744073709542528LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	volatile int32_t x102 = -99410941;
	int32_t x104 = INT32_MIN;
	static volatile int64_t t24 = -111LL;

	t24 = (((x101|x102)/x103)*x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = -3231263446511304LL;
	static uint64_t x106 = UINT64_MAX;
	uint8_t x107 = UINT8_MAX;
	uint16_t x108 = 11602U;
	volatile uint64_t t25 = 2319092956095005LLU;

	t25 = (((x105|x106)/x107)*x108);

	if (t25 != 9187201950435737426LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	static int16_t x111 = -1;
	int32_t x112 = INT32_MAX;
	volatile int64_t t26 = 374LL;

	t26 = (((x109|x110)/x111)*x112);

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	volatile int16_t x114 = 7718;
	int64_t x115 = -1LL;
	uint64_t x116 = 21LLU;
	static volatile uint64_t t27 = 0LLU;

	t27 = (((x113|x114)/x115)*x116);

	if (t27 != 18446744073708175381LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 977904222649976LL;
	volatile int64_t t28 = 443250LL;

	t28 = (((x117|x118)/x119)*x120);

	if (t28 != 14555832LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = INT8_MIN;
	int64_t x124 = INT64_MIN;
	int64_t t29 = 6563669824692787LL;

	t29 = (((x121|x122)/x123)*x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x125 = -1;
	int16_t x126 = INT16_MIN;
	static volatile int16_t x127 = 4780;
	int32_t t30 = 1064825520;

	t30 = (((x125|x126)/x127)*x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -45741380;
	static volatile int32_t x131 = INT32_MIN;
	uint64_t x132 = 3091LLU;
	volatile uint64_t t31 = 345987042LLU;

	t31 = (((x129|x130)/x131)*x132);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = UINT64_MAX;

	t32 = (((x137|x138)/x139)*x140);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x142 = 453U;
	int32_t x143 = INT32_MAX;

	t33 = (((x141|x142)/x143)*x144);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x145 = -3792;
	static int32_t x146 = INT32_MAX;
	uint32_t x148 = UINT32_MAX;
	static uint32_t t34 = 27874562U;

	t34 = (((x145|x146)/x147)*x148);

	if (t34 != 4294967279U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = 13268740602LL;
	static int16_t x151 = -2835;
	int8_t x152 = 1;
	int64_t t35 = -6LL;

	t35 = (((x149|x150)/x151)*x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x153 = 3U;
	volatile int64_t x154 = -23LL;
	int16_t x155 = INT16_MAX;
	uint32_t x156 = UINT32_MAX;
	static volatile int64_t t36 = -13328761506704LL;

	t36 = (((x153|x154)/x155)*x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x158 = INT32_MIN;
	static uint8_t x159 = UINT8_MAX;
	uint16_t x160 = 12U;
	volatile int32_t t37 = -16;

	t37 = (((x157|x158)/x159)*x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 9225613568947691LLU;
	volatile int8_t x162 = INT8_MIN;
	uint32_t x163 = 24U;
	volatile uint32_t x164 = UINT32_MAX;
	volatile uint64_t t38 = 62968798119041LLU;

	t38 = (((x161|x162)/x163)*x164);

	if (t38 != 11529215038910190935LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x165 = 0U;
	int8_t x166 = INT8_MIN;
	static uint32_t x168 = UINT32_MAX;
	uint32_t t39 = 1834773U;

	t39 = (((x165|x166)/x167)*x168);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = -1;
	int16_t x170 = 0;
	uint16_t x171 = 1017U;
	static int32_t x172 = -721195;
	int32_t t40 = -3;

	t40 = (((x169|x170)/x171)*x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = 1161801U;
	static int16_t x174 = INT16_MIN;
	uint8_t x176 = UINT8_MAX;
	uint32_t t41 = 15178U;

	t41 = (((x173|x174)/x175)*x176);

	if (t41 != 117499410U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x177 = 493;
	static int32_t x180 = INT32_MAX;
	static volatile int64_t t42 = 301751443670241LL;

	t42 = (((x177|x178)/x179)*x180);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x182 = -19;
	static volatile int8_t x183 = INT8_MIN;
	int8_t x184 = -1;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (((x181|x182)/x183)*x184);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -827;
	int8_t x186 = -3;
	int8_t x187 = INT8_MIN;
	static int64_t x188 = INT64_MIN;

	t44 = (((x185|x186)/x187)*x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 88262637368LL;
	volatile uint64_t x190 = 14390080682801027LLU;
	int16_t x191 = -9;
	volatile uint64_t t45 = 1694249029918LLU;

	t45 = (((x189|x190)/x191)*x192);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MIN;
	volatile int8_t x198 = -2;
	static uint32_t x199 = UINT32_MAX;
	int8_t x200 = -1;

	t46 = (((x197|x198)/x199)*x200);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MIN;
	uint16_t x202 = 1U;
	volatile int64_t x203 = INT64_MIN;
	int16_t x204 = 8;
	static volatile int64_t t47 = 21716306LL;

	t47 = (((x201|x202)/x203)*x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x206 = INT16_MIN;
	volatile int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MIN;
	int64_t t48 = -3570935055LL;

	t48 = (((x205|x206)/x207)*x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x209 = 387551281U;
	int64_t x210 = INT64_MAX;
	int64_t x211 = -67793249LL;
	static volatile int64_t t49 = -42212539094LL;

	t49 = (((x209|x210)/x211)*x212);

	if (t49 != -34693128063255LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = 8097435U;
	uint32_t x215 = 146500761U;
	static uint64_t x216 = UINT64_MAX;
	volatile uint64_t t50 = 596170599118782226LLU;

	t50 = (((x213|x214)/x215)*x216);

	if (t50 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = 27LL;
	static int64_t x218 = INT64_MAX;
	volatile uint16_t x219 = 318U;
	uint16_t x220 = 0U;

	t51 = (((x217|x218)/x219)*x220);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x225 = UINT32_MAX;
	int16_t x226 = INT16_MIN;
	int32_t x227 = 3065;
	volatile uint64_t x228 = 49323646LLU;
	volatile uint64_t t52 = 30LLU;

	t52 = (((x225|x226)/x227)*x228);

	if (t52 != 69116929197924LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MIN;
	uint8_t x231 = 46U;
	int32_t t53 = 9;

	t53 = (((x229|x230)/x231)*x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = INT16_MAX;
	uint8_t x235 = UINT8_MAX;
	int16_t x236 = INT16_MAX;
	int32_t t54 = -3933751;

	t54 = (((x233|x234)/x235)*x236);

	if (t54 != 4194176) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x238 = INT8_MAX;
	static int8_t x240 = INT8_MIN;
	static volatile uint32_t t55 = 144U;

	t55 = (((x237|x238)/x239)*x240);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x241 = 13U;
	int16_t x242 = INT16_MIN;
	static int32_t x243 = -1;
	int8_t x244 = -1;
	volatile uint32_t t56 = 995229699U;

	t56 = (((x241|x242)/x243)*x244);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x245 = 393;
	static int32_t x246 = INT32_MIN;
	volatile uint32_t x247 = UINT32_MAX;
	uint32_t t57 = 13U;

	t57 = (((x245|x246)/x247)*x248);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = INT32_MAX;
	int64_t x250 = -1685242660747785LL;
	static int8_t x251 = INT8_MIN;
	static uint64_t x252 = 83LLU;
	uint64_t t58 = 58495LLU;

	t58 = (((x249|x250)/x251)*x252);

	if (t58 != 1092774166265856LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = INT32_MIN;
	uint16_t x266 = 6566U;
	uint64_t x267 = 266448883377940LLU;
	volatile uint64_t t59 = 10067LLU;

	t59 = (((x265|x266)/x267)*x268);

	if (t59 != 3323088LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x269 = 118052;
	static int8_t x270 = -34;
	int8_t x271 = -5;
	volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t60 = 30923842278851191LLU;

	t60 = (((x269|x270)/x271)*x272);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x273 = -1LL;
	uint8_t x274 = 0U;
	volatile int16_t x275 = -1;
	int16_t x276 = INT16_MAX;
	int64_t t61 = -147825708104260302LL;

	t61 = (((x273|x274)/x275)*x276);

	if (t61 != 32767LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x277 = 1LLU;
	volatile uint8_t x278 = UINT8_MAX;
	uint64_t t62 = 125LLU;

	t62 = (((x277|x278)/x279)*x280);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x281 = -1;
	static uint64_t x282 = 33276302306747695LLU;
	int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MIN;
	volatile uint64_t t63 = 1670597325LLU;

	t63 = (((x281|x282)/x283)*x284);

	if (t63 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x286 = 5;
	int32_t x287 = -1;
	int16_t x288 = INT16_MAX;

	t64 = (((x285|x286)/x287)*x288);

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = 0;
	static uint64_t x290 = 262958598LLU;
	uint16_t x291 = 40U;
	static uint8_t x292 = 12U;
	uint64_t t65 = 5664655268264443964LLU;

	t65 = (((x289|x290)/x291)*x292);

	if (t65 != 78887568LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x293 = 21U;
	int32_t x294 = INT32_MAX;
	int64_t x295 = -1LL;
	int8_t x296 = INT8_MIN;
	volatile int64_t t66 = 15258215962LL;

	t66 = (((x293|x294)/x295)*x296);

	if (t66 != 274877906816LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = INT32_MIN;
	uint8_t x298 = 19U;
	static int8_t x300 = INT8_MIN;
	int64_t t67 = 2612269220511LL;

	t67 = (((x297|x298)/x299)*x300);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x301 = 5986;
	int16_t x304 = INT16_MIN;
	volatile int32_t t68 = -1394;

	t68 = (((x301|x302)/x303)*x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x306 = INT64_MIN;
	uint16_t x307 = UINT16_MAX;

	t69 = (((x305|x306)/x307)*x308);

	if (t69 != -4222189076151960LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x309 = 144U;
	int32_t x310 = INT32_MIN;
	static volatile int64_t x311 = INT64_MIN;
	uint8_t x312 = 2U;
	int64_t t70 = -3035LL;

	t70 = (((x309|x310)/x311)*x312);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x313 = -1LL;
	volatile int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MIN;
	int64_t x316 = -1LL;
	int64_t t71 = -1140895083247381561LL;

	t71 = (((x313|x314)/x315)*x316);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MIN;
	static int32_t x318 = -78087;
	uint32_t x320 = 75511458U;
	volatile int64_t t72 = -465022590839147LL;

	t72 = (((x317|x318)/x319)*x320);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x321 = INT8_MAX;
	static int8_t x322 = INT8_MAX;
	int32_t x323 = 9136;

	t73 = (((x321|x322)/x323)*x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x325 = -1268864LL;
	int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MAX;
	volatile int64_t t74 = 118939511311LL;

	t74 = (((x325|x326)/x327)*x328);

	if (t74 != 4826LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x330 = UINT32_MAX;
	uint32_t x331 = 1046103U;
	uint8_t x332 = UINT8_MAX;
	volatile uint32_t t75 = 1005865U;

	t75 = (((x329|x330)/x331)*x332);

	if (t75 != 1046775U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MIN;
	static uint64_t x335 = UINT64_MAX;
	static int32_t x336 = -1080992;
	volatile uint64_t t76 = 182162076777LLU;

	t76 = (((x333|x334)/x335)*x336);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x337 = INT32_MIN;
	static int64_t x338 = -173970386474035LL;
	static int32_t x339 = INT32_MAX;
	int32_t x340 = -31;
	volatile int64_t t77 = -10617871008033855LL;

	t77 = (((x337|x338)/x339)*x340);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x342 = 11664034190811362LLU;
	volatile int16_t x343 = -455;
	int16_t x344 = -122;
	uint64_t t78 = 6946681LLU;

	t78 = (((x341|x342)/x343)*x344);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MIN;
	volatile int64_t x347 = INT64_MAX;
	int8_t x348 = 1;
	int64_t t79 = 31291598LL;

	t79 = (((x345|x346)/x347)*x348);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x349 = 499;
	int32_t x350 = INT32_MAX;
	int8_t x351 = INT8_MAX;
	static int64_t t80 = 125448138432529LL;

	t80 = (((x349|x350)/x351)*x352);

	if (t80 != -7340246615337000LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x353 = UINT64_MAX;
	static uint32_t x354 = 1771754U;
	int64_t x355 = -135207835521LL;
	volatile uint64_t t81 = 6LLU;

	t81 = (((x353|x354)/x355)*x356);

	if (t81 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x362 = 5;
	static volatile int64_t x363 = 37199LL;

	t82 = (((x361|x362)/x363)*x364);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = INT32_MAX;
	uint16_t x366 = 999U;
	int16_t x367 = INT16_MIN;
	int8_t x368 = -1;
	static int32_t t83 = 4136237;

	t83 = (((x365|x366)/x367)*x368);

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = 72403LLU;
	static uint32_t x370 = 1520496340U;
	int16_t x371 = 10827;
	int8_t x372 = -1;

	t84 = (((x369|x370)/x371)*x372);

	if (t84 != 18446744073709411174LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x374 = 1;
	int32_t x375 = -75;
	int32_t t85 = 231960;

	t85 = (((x373|x374)/x375)*x376);

	if (t85 != 60) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x377 = 85U;
	int64_t x378 = INT64_MAX;
	uint64_t x379 = 216025LLU;
	static int16_t x380 = INT16_MIN;
	uint64_t t86 = 6323LLU;

	t86 = (((x377|x378)/x379)*x380);

	if (t86 != 17047686303064227840LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x385 = INT8_MIN;
	int16_t x387 = -1;

	t87 = (((x385|x386)/x387)*x388);

	if (t87 != -31LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x389 = 10;
	uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MIN;
	static volatile uint64_t t88 = 245941745LLU;

	t88 = (((x389|x390)/x391)*x392);

	if (t88 != 9223231297218904064LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x393 = 76562U;
	int8_t x394 = -1;
	int64_t x395 = -1LL;
	uint16_t x396 = 513U;
	volatile int64_t t89 = 7868LL;

	t89 = (((x393|x394)/x395)*x396);

	if (t89 != -2203318222335LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x397 = -558;
	uint8_t x398 = 0U;
	static uint8_t x399 = 1U;
	volatile int32_t x400 = -5916;
	volatile int32_t t90 = 2;

	t90 = (((x397|x398)/x399)*x400);

	if (t90 != 3301128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = 51;
	int64_t x402 = INT64_MIN;
	int32_t x403 = 1262119;
	int8_t x404 = INT8_MAX;
	volatile int64_t t91 = -393422LL;

	t91 = (((x401|x402)/x403)*x404);

	if (t91 != -928096517587098LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x405 = UINT64_MAX;
	static int8_t x406 = INT8_MIN;
	volatile int64_t x407 = -1LL;
	volatile int32_t x408 = -39;

	t92 = (((x405|x406)/x407)*x408);

	if (t92 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x409 = 0;
	uint8_t x410 = 15U;
	static int16_t x411 = -27;
	volatile int8_t x412 = -44;
	volatile int32_t t93 = -652436606;

	t93 = (((x409|x410)/x411)*x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = INT8_MAX;
	uint8_t x414 = UINT8_MAX;
	int32_t t94 = 5109;

	t94 = (((x413|x414)/x415)*x416);

	if (t94 != -108) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MAX;
	volatile uint32_t t95 = 8080936U;

	t95 = (((x417|x418)/x419)*x420);

	if (t95 != 127U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x429 = INT16_MIN;
	int32_t x430 = 1083;
	volatile int64_t x431 = -1LL;
	int64_t x432 = 1067374884LL;
	volatile int64_t t96 = -400LL;

	t96 = (((x429|x430)/x431)*x432);

	if (t96 != 33819773199540LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x433 = -1;
	uint8_t x434 = 5U;
	static int32_t x435 = INT32_MIN;
	int8_t x436 = -1;
	volatile int32_t t97 = -13172375;

	t97 = (((x433|x434)/x435)*x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x437 = 5999927796690798693LLU;
	int32_t x438 = INT32_MIN;
	int64_t x439 = 11411809144893LL;
	int16_t x440 = INT16_MIN;
	static volatile uint64_t t98 = 273946075836537LLU;

	t98 = (((x437|x438)/x439)*x440);

	if (t98 != 18446744020741390336LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x441 = UINT16_MAX;
	uint32_t x442 = 6395601U;
	int8_t x443 = INT8_MIN;
	volatile int8_t x444 = INT8_MIN;
	volatile uint32_t t99 = 21U;

	t99 = (((x441|x442)/x443)*x444);

	if (t99 != 0U) { NG(); } else { ; }
	
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
