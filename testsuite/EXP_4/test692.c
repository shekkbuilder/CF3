#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = -1;
uint64_t t1 = 137985441507LLU;
int64_t x20 = INT64_MAX;
uint64_t x26 = UINT64_MAX;
int32_t x31 = -2746;
static int64_t t6 = 18604316887720684LL;
volatile int64_t x35 = INT64_MIN;
uint32_t x39 = 3248U;
static int8_t x40 = -31;
int8_t x41 = INT8_MIN;
int16_t x47 = -1;
int32_t x62 = INT32_MIN;
volatile uint32_t x69 = 13U;
int8_t x74 = INT8_MIN;
int64_t t18 = 31LL;
static int32_t x85 = INT32_MIN;
volatile int8_t x90 = 0;
int64_t t20 = 151546143LL;
int16_t x119 = 616;
uint32_t x132 = 615913530U;
int16_t x138 = INT16_MIN;
uint32_t x141 = 111266312U;
static volatile int8_t x153 = -1;
int16_t x157 = -1;
int16_t x166 = INT16_MIN;
volatile int32_t t35 = 10329;
static uint16_t x177 = 30U;
int64_t x188 = -1LL;
volatile int16_t x195 = 11736;
int64_t x196 = 35306644973699208LL;
volatile int64_t t40 = -3748665565177LL;
uint32_t x199 = UINT32_MAX;
volatile uint64_t t41 = 9369801LLU;
int64_t t42 = 123LL;
static volatile int16_t x206 = INT16_MIN;
static volatile uint64_t t44 = 23402196005LLU;
int16_t x219 = INT16_MIN;
static volatile uint64_t x225 = 105468715368901983LLU;
int64_t x229 = -10LL;
static int32_t x230 = 29793;
static int64_t x231 = 15LL;
static volatile int64_t t47 = 1436270008759363236LL;
int8_t x233 = INT8_MAX;
volatile int32_t x235 = -1;
int32_t x242 = INT32_MIN;
static volatile int32_t x247 = -22;
volatile int8_t x253 = INT8_MIN;
volatile int16_t x254 = -60;
int8_t x255 = -4;
static volatile uint16_t x256 = 142U;
volatile int64_t x259 = -33503LL;
volatile int64_t t52 = -4778559629LL;
int16_t x264 = 1;
uint32_t t55 = 1394371U;
static int64_t x288 = 5394918616538918LL;
int8_t x293 = INT8_MAX;
int8_t x295 = INT8_MIN;
uint8_t x313 = 21U;
volatile uint32_t x317 = 1721U;
uint8_t x319 = 59U;
volatile uint32_t t63 = 982U;
static uint64_t x327 = 98132873LLU;
int32_t x339 = -1;
uint8_t x341 = UINT8_MAX;
static volatile int32_t x346 = -4;
uint16_t x350 = 30U;
int8_t x354 = -1;
int32_t t71 = 475;
int16_t x370 = -1;
int8_t x373 = -13;
int16_t x385 = 0;
volatile uint32_t x386 = 394U;
int32_t x389 = -796426204;
static int16_t x393 = INT16_MAX;
uint64_t x394 = UINT64_MAX;
volatile uint64_t t78 = 31318688703465LLU;
static int32_t x397 = INT32_MIN;
static volatile uint64_t t80 = 2439LLU;
volatile int32_t x406 = INT32_MIN;
uint16_t x412 = 1864U;
static int8_t x413 = -1;
int64_t t83 = 532847349491408LL;
int32_t x418 = INT32_MIN;
int64_t t84 = -2676211LL;
uint64_t x421 = 11916466945LLU;
int16_t x424 = INT16_MIN;
int8_t x428 = INT8_MAX;
uint64_t x452 = UINT64_MAX;
volatile uint64_t t90 = 178076014152308LLU;
uint16_t x454 = 6721U;
int16_t x457 = INT16_MAX;
int32_t t95 = 520980;
int64_t x489 = -13277371LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile uint32_t x2 = 16541U;
	static uint32_t x3 = 9573736U;
	volatile uint32_t t0 = 4795U;

	t0 = (x1*(x2-(x3%x4)));

	if (t0 != 2147483648U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	volatile uint32_t x6 = UINT32_MAX;
	static volatile uint8_t x7 = 14U;
	uint64_t x8 = 9756023LLU;

	t1 = (x5*(x6-(x7%x8)));

	if (t1 != 18446744069414584335LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint32_t x10 = UINT32_MAX;
	int32_t x11 = INT32_MAX;
	int16_t x12 = -1;
	volatile uint32_t t2 = 9285U;

	t2 = (x9*(x10-(x11%x12)));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x17 = INT8_MIN;
	volatile int8_t x18 = -51;
	static uint64_t x19 = 3251229LLU;
	uint64_t t3 = 1808202772771418838LLU;

	t3 = (x17*(x18-(x19%x20)));

	if (t3 != 416163840LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 3505900551953376LLU;
	static int8_t x22 = -3;
	volatile int8_t x23 = INT8_MIN;
	int8_t x24 = -1;
	volatile uint64_t t4 = 83316118561070902LLU;

	t4 = (x21*(x22-(x23%x24)));

	if (t4 != 18436226372053691488LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	int16_t x27 = -1;
	int16_t x28 = INT16_MIN;
	volatile uint64_t t5 = 807LLU;

	t5 = (x25*(x26-(x27%x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	int32_t x30 = -1;
	int64_t x32 = INT64_MAX;

	t6 = (x29*(x30-(x31%x32)));

	if (t6 != 179893575LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	uint16_t x34 = 29U;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t7 = 3LLU;

	t7 = (x33*(x34-(x35%x36)));

	if (t7 != 9223372161408827363LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	static int16_t x38 = -9;
	volatile uint32_t t8 = 13503260U;

	t8 = (x37*(x38-(x39%x40)));

	if (t8 != 3257U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x42 = UINT64_MAX;
	uint16_t x43 = 1605U;
	int32_t x44 = 12825;
	volatile uint64_t t9 = 755LLU;

	t9 = (x41*(x42-(x43%x44)));

	if (t9 != 205568LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 547;
	static uint32_t x46 = 2879680U;
	volatile int8_t x48 = -1;
	uint32_t t10 = 5856U;

	t10 = (x45*(x46-(x47%x48)));

	if (t10 != 1575184960U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	static uint64_t x50 = 1232935345979505LLU;
	int32_t x51 = -1;
	uint64_t x52 = 1LLU;
	uint64_t t11 = 17290125554741064LLU;

	t11 = (x49*(x50-(x51%x52)));

	if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	static int64_t x54 = INT64_MAX;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = 854722LLU;
	static volatile uint64_t t12 = 11112806662191816LLU;

	t12 = (x53*(x54-(x55%x56)));

	if (t12 != 1198048914964480LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = UINT8_MAX;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = INT64_MIN;
	volatile int64_t x60 = INT64_MIN;
	volatile int64_t t13 = -7351769240LL;

	t13 = (x57*(x58-(x59%x60)));

	if (t13 != 1095216660225LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	int64_t x63 = INT64_MIN;
	volatile int16_t x64 = -1;
	volatile int64_t t14 = 420167LL;

	t14 = (x61*(x62-(x63%x64)));

	if (t14 != 2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 58U;
	uint16_t x66 = UINT16_MAX;
	static uint64_t x67 = 2938LLU;
	int16_t x68 = -76;
	volatile uint64_t t15 = 4282332697025826LLU;

	t15 = (x65*(x66-(x67%x68)));

	if (t15 != 3630626LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x70 = -3915497;
	int32_t x71 = INT32_MAX;
	static uint32_t x72 = 730287U;
	static uint32_t t16 = 159U;

	t16 = (x69*(x70-(x71%x72)));

	if (t16 != 4238347564U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = 2U;
	static uint64_t x75 = 416168LLU;
	uint8_t x76 = 3U;
	uint64_t t17 = 22686193699813073LLU;

	t17 = (x73*(x74-(x75%x76)));

	if (t17 != 18446744073709551356LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -1;
	volatile int32_t x82 = -15;
	int8_t x83 = INT8_MAX;
	int64_t x84 = -14063345LL;

	t18 = (x81*(x82-(x83%x84)));

	if (t18 != 142LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x86 = -244022062LL;
	volatile uint32_t x87 = 190708572U;
	static int16_t x88 = INT16_MIN;
	int64_t t19 = -4106749794517441LL;

	t19 = (x85*(x86-(x87%x88)));

	if (t19 != 933576927799672832LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x89 = 0U;
	uint8_t x91 = 0U;
	int64_t x92 = -32782179067348112LL;

	t20 = (x89*(x90-(x91%x92)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 0LLU;
	volatile uint16_t x94 = 1396U;
	static int16_t x95 = INT16_MIN;
	volatile uint64_t x96 = 4466342962678564333LLU;
	uint64_t t21 = 3308LLU;

	t21 = (x93*(x94-(x95%x96)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MIN;
	static int64_t x98 = -72686582776407LL;
	uint8_t x99 = 70U;
	int32_t x100 = -1;
	volatile int64_t t22 = -7659048583LL;

	t22 = (x97*(x98-(x99%x100)));

	if (t22 != 9303882595380096LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MIN;
	static int32_t x106 = -11;
	static int32_t x107 = -1;
	uint8_t x108 = 8U;
	int32_t t23 = 5;

	t23 = (x105*(x106-(x107%x108)));

	if (t23 != 1280) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = -1;
	static int32_t x114 = -1;
	volatile int32_t x115 = -594232850;
	static int32_t x116 = INT32_MIN;
	int32_t t24 = 69;

	t24 = (x113*(x114-(x115%x116)));

	if (t24 != -594232849) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MAX;
	uint8_t x118 = UINT8_MAX;
	int8_t x120 = -25;
	static int32_t t25 = 0;

	t25 = (x117*(x118-(x119%x120)));

	if (t25 != 30353) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = UINT64_MAX;
	int64_t x122 = INT64_MAX;
	int32_t x123 = 215088;
	int16_t x124 = INT16_MIN;
	static volatile uint64_t t26 = 192407852LLU;

	t26 = (x121*(x122-(x123%x124)));

	if (t26 != 9223372036854794289LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = UINT64_MAX;
	int8_t x126 = INT8_MIN;
	int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MAX;
	volatile uint64_t t27 = 130479978104303LLU;

	t27 = (x125*(x126-(x127%x128)));

	if (t27 != 126LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	volatile int16_t x130 = -319;
	uint16_t x131 = 1880U;
	uint32_t t28 = 1249385773U;

	t28 = (x129*(x130-(x131%x132)));

	if (t28 != 72056832U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = UINT8_MAX;
	volatile int64_t x134 = 4176354LL;
	int32_t x135 = INT32_MAX;
	volatile int32_t x136 = INT32_MAX;
	int64_t t29 = -2LL;

	t29 = (x133*(x134-(x135%x136)));

	if (t29 != 1064970270LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 31324513109277LLU;
	volatile int32_t x139 = INT32_MAX;
	int16_t x140 = INT16_MIN;
	uint64_t t30 = 12451LLU;

	t30 = (x137*(x138-(x139%x140)));

	if (t30 != 16393892107093083421LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x142 = INT8_MAX;
	volatile uint8_t x143 = 6U;
	uint8_t x144 = 10U;
	volatile uint32_t t31 = 116U;

	t31 = (x141*(x142-(x143%x144)));

	if (t31 != 578321864U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = 671730076499059153LLU;
	volatile int16_t x152 = -1;
	uint64_t t32 = 616649660993LLU;

	t32 = (x149*(x150-(x151%x152)));

	if (t32 != 1324168542003339729LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x154 = 17;
	int32_t x155 = INT32_MIN;
	static int32_t x156 = 47;
	int32_t t33 = -10810072;

	t33 = (x153*(x154-(x155%x156)));

	if (t33 != -38) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x158 = 0U;
	uint16_t x159 = 2393U;
	volatile int16_t x160 = INT16_MIN;
	volatile int32_t t34 = 116;

	t34 = (x157*(x158-(x159%x160)));

	if (t34 != 2393) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = UINT8_MAX;
	volatile uint16_t x167 = 1U;
	uint16_t x168 = 13991U;

	t35 = (x165*(x166-(x167%x168)));

	if (t35 != -8356095) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	uint64_t x180 = 2LLU;
	uint64_t t36 = 1250127LLU;

	t36 = (x177*(x178-(x179%x180)));

	if (t36 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x181 = 1677LLU;
	uint32_t x182 = 11U;
	uint64_t x183 = UINT64_MAX;
	uint16_t x184 = 25U;
	static uint64_t t37 = 117642102LLU;

	t37 = (x181*(x182-(x183%x184)));

	if (t37 != 18446744073709544908LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = 739153;
	uint32_t x186 = 6401U;
	volatile uint16_t x187 = UINT16_MAX;
	volatile int64_t t38 = -145LL;

	t38 = (x185*(x186-(x187%x188)));

	if (t38 != 4731318353LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x189 = UINT8_MAX;
	int32_t x190 = -1037893;
	int8_t x191 = INT8_MIN;
	static int64_t x192 = INT64_MAX;
	volatile int64_t t39 = -1LL;

	t39 = (x189*(x190-(x191%x192)));

	if (t39 != -264630075LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = INT16_MIN;
	uint32_t x194 = 3245735U;

	t40 = (x193*(x194-(x195%x196)));

	if (t40 != -105971679232LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 406222918252LLU;
	volatile int64_t x198 = 0LL;
	uint8_t x200 = 44U;

	t41 = (x197*(x198-(x199%x200)));

	if (t41 != 18446742855040796860LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x201 = 28LL;
	static volatile uint16_t x202 = 9U;
	int8_t x203 = INT8_MIN;
	uint16_t x204 = 483U;

	t42 = (x201*(x202-(x203%x204)));

	if (t42 != 3836LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = 1;
	uint64_t x207 = UINT64_MAX;
	uint32_t x208 = 1777552850U;
	uint64_t t43 = 1694252930798373861LLU;

	t43 = (x205*(x206-(x207%x208)));

	if (t43 != 18446744072467841983LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x209 = UINT64_MAX;
	static int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	static uint64_t x212 = 3753422214360LLU;

	t44 = (x209*(x210-(x211%x212)));

	if (t44 != 1300797017656LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x217 = 1LL;
	int16_t x218 = INT16_MAX;
	volatile int16_t x220 = 15064;
	volatile int64_t t45 = -63540LL;

	t45 = (x217*(x218-(x219%x220)));

	if (t45 != 35407LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x226 = 58065LLU;
	uint8_t x227 = 52U;
	static volatile int32_t x228 = -1;
	volatile uint64_t t46 = 8LLU;

	t46 = (x225*(x226-(x227%x228)));

	if (t46 != 18168669497432057999LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x232 = 2733;

	t47 = (x229*(x230-(x231%x232)));

	if (t47 != -297780LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x234 = -1;
	int32_t x236 = INT32_MIN;
	int32_t t48 = -1;

	t48 = (x233*(x234-(x235%x236)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x241 = 1112U;
	uint8_t x243 = 23U;
	static volatile int64_t x244 = INT64_MIN;
	int64_t t49 = -47LL;

	t49 = (x241*(x242-(x243%x244)));

	if (t49 != -2388001842152LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x245 = 24;
	static uint8_t x246 = 60U;
	int16_t x248 = INT16_MIN;
	volatile int32_t t50 = -1;

	t50 = (x245*(x246-(x247%x248)));

	if (t50 != 1968) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t t51 = 126032;

	t51 = (x253*(x254-(x255%x256)));

	if (t51 != 7168) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x257 = 1;
	static uint32_t x258 = 81592U;
	volatile uint8_t x260 = 60U;

	t52 = (x257*(x258-(x259%x260)));

	if (t52 != 81615LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = INT64_MIN;
	volatile uint64_t x262 = 215947498LLU;
	volatile int8_t x263 = 15;
	volatile uint64_t t53 = 14LLU;

	t53 = (x261*(x262-(x263%x264)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x265 = 9U;
	int8_t x266 = -31;
	static uint64_t x267 = UINT64_MAX;
	static int32_t x268 = -1;
	volatile uint64_t t54 = 13LLU;

	t54 = (x265*(x266-(x267%x268)));

	if (t54 != 18446744073709551337LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x273 = 688U;
	int8_t x274 = 1;
	volatile int32_t x275 = -183;
	volatile int32_t x276 = INT32_MIN;

	t55 = (x273*(x274-(x275%x276)));

	if (t55 != 126592U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x277 = 1278;
	volatile int64_t x278 = 124LL;
	static int32_t x279 = -1789073;
	static volatile int16_t x280 = INT16_MIN;
	volatile int64_t t56 = -29LL;

	t56 = (x277*(x278-(x279%x280)));

	if (t56 != 25208550LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x285 = 1749U;
	volatile int64_t x286 = 3710281LL;
	int32_t x287 = -1;
	volatile int64_t t57 = 888053801646331LL;

	t57 = (x285*(x286-(x287%x288)));

	if (t57 != 6489283218LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x289 = -1;
	int16_t x290 = 227;
	int8_t x291 = 17;
	int16_t x292 = -1;
	static int32_t t58 = 46609268;

	t58 = (x289*(x290-(x291%x292)));

	if (t58 != -227) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x294 = INT16_MAX;
	static volatile uint8_t x296 = 2U;
	int32_t t59 = 1111123;

	t59 = (x293*(x294-(x295%x296)));

	if (t59 != 4161409) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = -1;
	int64_t x298 = 74955847224369701LL;
	int16_t x299 = INT16_MIN;
	uint8_t x300 = 15U;
	volatile int64_t t60 = 1888307125785058LL;

	t60 = (x297*(x298-(x299%x300)));

	if (t60 != -74955847224369709LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x301 = INT8_MIN;
	static int64_t x302 = -1LL;
	volatile int32_t x303 = -286028597;
	volatile uint8_t x304 = UINT8_MAX;
	int64_t t61 = 14037549688463LL;

	t61 = (x301*(x302-(x303%x304)));

	if (t61 != -25088LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x314 = INT16_MAX;
	volatile int32_t x315 = INT32_MIN;
	int8_t x316 = 41;
	volatile int32_t t62 = 30548809;

	t62 = (x313*(x314-(x315%x316)));

	if (t62 != 688926) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x318 = 317662274U;
	uint32_t x320 = UINT32_MAX;

	t63 = (x317*(x318-(x319%x320)));

	if (t63 != 1235825423U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x325 = INT32_MIN;
	static int32_t x326 = INT32_MIN;
	uint8_t x328 = 41U;
	static volatile uint64_t t64 = 113121920LLU;

	t64 = (x325*(x326-(x327%x328)));

	if (t64 != 4611686080704413696LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x333 = INT64_MIN;
	int32_t x334 = 943111910;
	uint64_t x335 = UINT64_MAX;
	static int32_t x336 = INT32_MIN;
	uint64_t t65 = 506607832LLU;

	t65 = (x333*(x334-(x335%x336)));

	if (t65 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x337 = 1U;
	uint16_t x338 = UINT16_MAX;
	static uint8_t x340 = UINT8_MAX;
	int32_t t66 = -58434086;

	t66 = (x337*(x338-(x339%x340)));

	if (t66 != 65536) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x342 = UINT64_MAX;
	static int8_t x343 = -16;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t67 = 72869570332383LLU;

	t67 = (x341*(x342-(x343%x344)));

	if (t67 != 3825LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x345 = 227439012916863164LLU;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	volatile uint64_t t68 = 2LLU;

	t68 = (x345*(x346-(x347%x348)));

	if (t68 != 17536988022042098960LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x349 = INT16_MIN;
	int8_t x351 = INT8_MAX;
	static volatile uint64_t x352 = 439210166LLU;
	volatile uint64_t t69 = 1764122LLU;

	t69 = (x349*(x350-(x351%x352)));

	if (t69 != 3178496LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x353 = INT16_MIN;
	int32_t x355 = INT32_MAX;
	int64_t x356 = -1LL;
	int64_t t70 = 74LL;

	t70 = (x353*(x354-(x355%x356)));

	if (t70 != 32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x361 = -57;
	int32_t x362 = 3964;
	int32_t x363 = INT32_MIN;
	static int32_t x364 = INT32_MIN;

	t71 = (x361*(x362-(x363%x364)));

	if (t71 != -225948) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x365 = INT16_MIN;
	int32_t x366 = -1;
	int8_t x367 = -13;
	volatile int32_t x368 = -10452958;
	volatile int32_t t72 = -899063219;

	t72 = (x365*(x366-(x367%x368)));

	if (t72 != -393216) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x369 = -311229;
	int32_t x371 = INT32_MAX;
	static volatile uint8_t x372 = 30U;
	static int32_t t73 = 59808;

	t73 = (x369*(x370-(x371%x372)));

	if (t73 != 2489832) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x374 = UINT64_MAX;
	uint32_t x375 = 5347U;
	int16_t x376 = -1;
	static uint64_t t74 = 62LLU;

	t74 = (x373*(x374-(x375%x376)));

	if (t74 != 69524LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x381 = UINT16_MAX;
	uint64_t x382 = 2645056LLU;
	uint16_t x383 = 104U;
	int16_t x384 = INT16_MIN;
	uint64_t t75 = 6601752945932842LLU;

	t75 = (x381*(x382-(x383%x384)));

	if (t75 != 173336929320LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x387 = INT8_MIN;
	int64_t x388 = 2LL;
	int64_t t76 = -12700LL;

	t76 = (x385*(x386-(x387%x388)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x390 = INT32_MAX;
	volatile int64_t x391 = 7918930250969444LL;
	int8_t x392 = INT8_MIN;
	int64_t t77 = 71624949652970LL;

	t77 = (x389*(x390-(x391%x392)));

	if (t77 != -1710312169489665588LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x395 = UINT16_MAX;
	volatile int32_t x396 = 2756045;

	t78 = (x393*(x394-(x395%x396)));

	if (t78 != 18446744071562133504LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x398 = -13567;
	volatile int32_t x399 = -46;
	static uint32_t x400 = UINT32_MAX;
	static volatile uint32_t t79 = 12881U;

	t79 = (x397*(x398-(x399%x400)));

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x401 = 4U;
	uint32_t x402 = 9874746U;
	volatile uint64_t x403 = 15461LLU;
	volatile int16_t x404 = INT16_MAX;

	t80 = (x401*(x402-(x403%x404)));

	if (t80 != 39437140LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x405 = -1930LL;
	int16_t x407 = -2;
	int8_t x408 = -1;
	int64_t t81 = -558774004677135364LL;

	t81 = (x405*(x406-(x407%x408)));

	if (t81 != 4144643440640LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x409 = 1LL;
	static uint16_t x410 = 7823U;
	int64_t x411 = INT64_MAX;
	volatile int64_t t82 = 1256536793550336LL;

	t82 = (x409*(x410-(x411%x412)));

	if (t82 != 7792LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x414 = 0U;
	static uint32_t x415 = UINT32_MAX;
	int64_t x416 = INT64_MAX;

	t83 = (x413*(x414-(x415%x416)));

	if (t83 != 4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x417 = 23U;
	uint16_t x419 = 4U;
	int64_t x420 = INT64_MIN;

	t84 = (x417*(x418-(x419%x420)));

	if (t84 != -49392123996LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x422 = 388197254;
	static volatile uint8_t x423 = 6U;
	uint64_t t85 = 12757696LLU;

	t85 = (x421*(x422-(x423%x424)));

	if (t85 != 4625939673931967360LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x425 = INT16_MIN;
	int8_t x426 = INT8_MIN;
	int16_t x427 = 3365;
	int32_t t86 = 57235658;

	t86 = (x425*(x426-(x427%x428)));

	if (t86 != 6258688) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x433 = INT8_MAX;
	uint16_t x434 = UINT16_MAX;
	static volatile int64_t x435 = 7614848163392702LL;
	volatile uint32_t x436 = UINT32_MAX;
	int64_t t87 = 109998689LL;

	t87 = (x433*(x434-(x435%x436)));

	if (t87 != -545246345624LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x441 = -60;
	int8_t x442 = INT8_MAX;
	volatile uint64_t x443 = UINT64_MAX;
	volatile int16_t x444 = INT16_MIN;
	volatile uint64_t t88 = 1130242915186951LLU;

	t88 = (x441*(x442-(x443%x444)));

	if (t88 != 1958400LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x445 = UINT8_MAX;
	static int32_t x446 = 8;
	int64_t x447 = INT64_MIN;
	static uint16_t x448 = 911U;
	volatile int64_t t89 = 14732130598LL;

	t89 = (x445*(x446-(x447%x448)));

	if (t89 != 150195LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x449 = 267393802211LL;
	static int64_t x450 = INT64_MIN;
	static int32_t x451 = -1;

	t90 = (x449*(x450-(x451%x452)));

	if (t90 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x453 = -1LL;
	int16_t x455 = -1;
	static volatile int16_t x456 = INT16_MIN;
	static volatile int64_t t91 = 462433428064LL;

	t91 = (x453*(x454-(x455%x456)));

	if (t91 != -6722LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x458 = INT8_MAX;
	int32_t x459 = -1;
	int64_t x460 = -1LL;
	volatile int64_t t92 = -3700483346502920119LL;

	t92 = (x457*(x458-(x459%x460)));

	if (t92 != 4161409LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x465 = INT16_MIN;
	int8_t x466 = INT8_MIN;
	int16_t x467 = 97;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t93 = 56627127222LLU;

	t93 = (x465*(x466-(x467%x468)));

	if (t93 != 7372800LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x469 = -28614;
	uint32_t x470 = 8576U;
	uint8_t x471 = 1U;
	uint32_t x472 = 2868U;
	uint32_t t94 = 101U;

	t94 = (x469*(x470-(x471%x472)));

	if (t94 != 4049602246U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x473 = 104390;
	uint16_t x474 = 1U;
	int32_t x475 = INT32_MIN;
	int32_t x476 = -1;

	t95 = (x473*(x474-(x475%x476)));

	if (t95 != 104390) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x477 = 0U;
	int16_t x478 = -1;
	int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MIN;
	volatile int32_t t96 = -14;

	t96 = (x477*(x478-(x479%x480)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x481 = UINT16_MAX;
	int64_t x482 = 7810893917LL;
	int16_t x483 = INT16_MIN;
	uint32_t x484 = 210U;
	static volatile int64_t t97 = 7LL;

	t97 = (x481*(x482-(x483%x484)));

	if (t97 != 511886930360265LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x485 = INT32_MIN;
	int32_t x486 = -1951172;
	int8_t x487 = INT8_MIN;
	uint32_t x488 = UINT32_MAX;
	uint32_t t98 = 160017U;

	t98 = (x485*(x486-(x487%x488)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x490 = 542U;
	int64_t x491 = 9LL;
	int16_t x492 = -1;
	int64_t t99 = 32063422135017LL;

	t99 = (x489*(x490-(x491%x492)));

	if (t99 != -7196335082LL) { NG(); } else { ; }
	
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
