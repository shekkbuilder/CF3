#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
uint16_t x7 = UINT16_MAX;
uint64_t x12 = 176414LLU;
static uint16_t x14 = 10781U;
int32_t x19 = INT32_MIN;
int16_t x21 = INT16_MIN;
volatile int16_t x24 = INT16_MIN;
int32_t t5 = -20275612;
volatile uint32_t x32 = 209029868U;
volatile int32_t t8 = 7;
int32_t x37 = -1;
int32_t x39 = INT32_MIN;
uint16_t x40 = UINT16_MAX;
volatile int32_t x41 = INT32_MIN;
int64_t x47 = INT64_MAX;
volatile int8_t x49 = -53;
static volatile uint32_t x52 = UINT32_MAX;
static int64_t x54 = -1LL;
static int32_t t13 = -1;
static volatile int8_t x63 = INT8_MAX;
volatile int32_t t17 = -3055666;
static int8_t x86 = INT8_MIN;
int16_t x87 = -187;
int32_t x91 = INT32_MIN;
uint64_t x95 = UINT64_MAX;
int8_t x109 = 33;
uint16_t x112 = UINT16_MAX;
int32_t t27 = 35432;
int32_t x114 = INT32_MIN;
int32_t t28 = -12;
static int32_t x126 = INT32_MAX;
static int32_t t31 = -8355;
static int64_t x129 = INT64_MIN;
int16_t x132 = INT16_MIN;
int32_t t32 = 18633;
int16_t x138 = -1784;
int64_t x140 = INT64_MAX;
int16_t x144 = -245;
int32_t t35 = 42169;
int32_t x146 = -21052;
volatile int32_t x148 = 0;
int64_t x156 = INT64_MIN;
int16_t x162 = INT16_MIN;
int64_t x165 = -51451879LL;
static int16_t x168 = -1;
static int16_t x181 = INT16_MIN;
int16_t x182 = INT16_MIN;
int32_t x186 = INT32_MIN;
int8_t x190 = INT8_MIN;
uint64_t x193 = UINT64_MAX;
static int32_t t49 = 131188;
volatile uint16_t x211 = 245U;
int32_t x213 = -1112769;
volatile int64_t x215 = 1016075LL;
int8_t x216 = -1;
int8_t x220 = INT8_MIN;
int16_t x227 = -1;
int64_t x228 = -130280LL;
static uint32_t x230 = 27324575U;
int64_t x239 = INT64_MIN;
int32_t t60 = 824;
uint32_t x263 = UINT32_MAX;
int32_t t66 = -58;
volatile int32_t x277 = INT32_MAX;
int32_t x278 = 456753;
volatile int32_t t69 = 19;
uint64_t x282 = UINT64_MAX;
volatile int32_t t70 = 3393;
int8_t x286 = INT8_MIN;
int8_t x289 = INT8_MAX;
int64_t x293 = 10LL;
volatile uint16_t x296 = UINT16_MAX;
volatile int8_t x303 = INT8_MAX;
int64_t x308 = -64208860LL;
int32_t t77 = -4695368;
volatile int64_t x315 = 1074077154LL;
int32_t t78 = 25;
uint64_t x320 = UINT64_MAX;
int64_t x328 = INT64_MIN;
uint16_t x337 = 21U;
uint64_t x347 = 676LLU;
int32_t t86 = -1894406;
volatile int64_t x351 = -350LL;
volatile int16_t x358 = 33;
int32_t t89 = 618790388;
int64_t x362 = INT64_MIN;
int8_t x366 = INT8_MIN;
int8_t x367 = INT8_MIN;
volatile uint32_t x368 = 31U;
uint64_t x370 = 460917633435LLU;
int64_t x376 = 152035418859029LL;
static int16_t x377 = INT16_MAX;
volatile int32_t t94 = 7;
int16_t x382 = 13;
uint16_t x383 = UINT16_MAX;
volatile int32_t t95 = -13;
uint16_t x386 = 89U;
volatile int32_t t96 = -538192010;
uint8_t x389 = 55U;
int64_t x391 = INT64_MIN;
static int32_t t97 = 188343;
volatile int8_t x393 = -3;
volatile uint16_t x395 = 1U;
volatile int32_t t98 = 7553373;
int32_t t99 = 26502;


void f0(void) {
	static int8_t x2 = INT8_MAX;
	int8_t x3 = -1;
	uint16_t x4 = 3306U;
	int32_t t0 = -221;

	t0 = (x1<(x2<=(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int32_t x6 = -1;
	static int16_t x8 = -1;
	static int32_t t1 = 26130680;

	t1 = (x5<(x6<=(x7&x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 4820LLU;
	uint64_t x10 = 0LLU;
	static int16_t x11 = INT16_MAX;
	volatile int32_t t2 = 49;

	t2 = (x9<(x10<=(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -969093;
	int16_t x15 = INT16_MIN;
	volatile int8_t x16 = 53;
	volatile int32_t t3 = 2820928;

	t3 = (x13<(x14<=(x15&x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 18U;
	uint64_t x18 = UINT64_MAX;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = -33391243;

	t4 = (x17<(x18<=(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = INT16_MAX;
	volatile int32_t x23 = INT32_MIN;

	t5 = (x21<(x22<=(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	static int64_t x26 = INT64_MIN;
	uint16_t x27 = 0U;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -191;

	t6 = (x25<(x26<=(x27&x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int16_t x30 = -1;
	uint16_t x31 = 1U;
	volatile int32_t t7 = 350594;

	t7 = (x29<(x30<=(x31&x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = -31;
	static volatile int16_t x35 = 3855;
	volatile uint8_t x36 = UINT8_MAX;

	t8 = (x33<(x34<=(x35&x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x38 = UINT32_MAX;
	volatile int32_t t9 = 11;

	t9 = (x37<(x38<=(x39&x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -1;
	int32_t x43 = -100183326;
	static int16_t x44 = INT16_MIN;
	int32_t t10 = 125080459;

	t10 = (x41<(x42<=(x43&x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -213428;

	t11 = (x45<(x46<=(x47&x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 268651LLU;
	uint32_t x51 = 79964U;
	static int32_t t12 = -4880976;

	t12 = (x49<(x50<=(x51&x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 0U;
	static int8_t x55 = INT8_MIN;
	int32_t x56 = -1;

	t13 = (x53<(x54<=(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 268888656LL;
	static int32_t x58 = -1;
	int64_t x59 = INT64_MIN;
	static uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -5166;

	t14 = (x57<(x58<=(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	volatile uint16_t x62 = UINT16_MAX;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -25;

	t15 = (x61<(x62<=(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = 82;
	int16_t x66 = -1;
	int8_t x67 = 31;
	int16_t x68 = INT16_MIN;
	int32_t t16 = -5724442;

	t16 = (x65<(x66<=(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 1006142829488LL;
	static int32_t x70 = INT32_MIN;
	uint8_t x71 = UINT8_MAX;
	uint32_t x72 = UINT32_MAX;

	t17 = (x69<(x70<=(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MIN;
	volatile int32_t x74 = INT32_MAX;
	volatile int8_t x75 = INT8_MAX;
	volatile int32_t x76 = 11;
	volatile int32_t t18 = 6175;

	t18 = (x73<(x74<=(x75&x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = -21;
	int16_t x78 = -1;
	uint8_t x79 = 63U;
	static int8_t x80 = -5;
	static volatile int32_t t19 = 41001436;

	t19 = (x77<(x78<=(x79&x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MIN;
	uint16_t x82 = 0U;
	uint32_t x83 = 203U;
	static volatile int8_t x84 = INT8_MIN;
	int32_t t20 = 937690;

	t20 = (x81<(x82<=(x83&x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 16U;
	int8_t x88 = 1;
	int32_t t21 = 3544450;

	t21 = (x85<(x86<=(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = 6;
	int32_t x90 = INT32_MIN;
	int8_t x92 = 10;
	int32_t t22 = 1;

	t22 = (x89<(x90<=(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x93 = INT32_MIN;
	volatile int16_t x94 = -1;
	volatile int64_t x96 = 2539687146LL;
	int32_t t23 = 0;

	t23 = (x93<(x94<=(x95&x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -51169;
	int32_t x98 = INT32_MIN;
	volatile int16_t x99 = -1;
	volatile int64_t x100 = INT64_MIN;
	int32_t t24 = -510050173;

	t24 = (x97<(x98<=(x99&x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	volatile int64_t x102 = -253LL;
	int8_t x103 = -1;
	static volatile uint32_t x104 = 2688U;
	int32_t t25 = 1134570;

	t25 = (x101<(x102<=(x103&x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MAX;
	static volatile int16_t x106 = 1;
	static int8_t x107 = -1;
	volatile int8_t x108 = -59;
	volatile int32_t t26 = -654373529;

	t26 = (x105<(x106<=(x107&x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 1110LLU;
	uint8_t x111 = 2U;

	t27 = (x109<(x110<=(x111&x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	volatile uint32_t x115 = UINT32_MAX;
	int64_t x116 = INT64_MIN;

	t28 = (x113<(x114<=(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int8_t x118 = 0;
	int16_t x119 = -115;
	static int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 541968513;

	t29 = (x117<(x118<=(x119&x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -3;
	uint64_t x122 = 19717612389813468LLU;
	static int32_t x123 = -1;
	static uint32_t x124 = 4108U;
	static volatile int32_t t30 = 1;

	t30 = (x121<(x122<=(x123&x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = 1;
	int32_t x127 = -76177;
	uint16_t x128 = 28972U;

	t31 = (x125<(x126<=(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	volatile int32_t x131 = 3070812;

	t32 = (x129<(x130<=(x131&x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	volatile uint64_t x134 = 17080515651LLU;
	static int8_t x135 = INT8_MIN;
	static uint64_t x136 = 1LLU;
	int32_t t33 = -2068095;

	t33 = (x133<(x134<=(x135&x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	uint8_t x139 = 15U;
	volatile int32_t t34 = -895;

	t34 = (x137<(x138<=(x139&x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -26;
	static uint64_t x142 = 997LLU;
	int64_t x143 = INT64_MIN;

	t35 = (x141<(x142<=(x143&x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -1;
	int16_t x147 = -1;
	int32_t t36 = 0;

	t36 = (x145<(x146<=(x147&x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile uint8_t x150 = 1U;
	int64_t x151 = INT64_MAX;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -1548297;

	t37 = (x149<(x150<=(x151&x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 8;
	int8_t x154 = INT8_MIN;
	int16_t x155 = 9;
	int32_t t38 = 3350588;

	t38 = (x153<(x154<=(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 11;
	volatile uint64_t x158 = UINT64_MAX;
	volatile uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = -131;

	t39 = (x157<(x158<=(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int8_t x163 = INT8_MIN;
	int64_t x164 = -442037842655876LL;
	volatile int32_t t40 = -240;

	t40 = (x161<(x162<=(x163&x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = INT64_MAX;
	static uint8_t x167 = UINT8_MAX;
	int32_t t41 = 13898;

	t41 = (x165<(x166<=(x167&x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -35465054427907031LL;
	uint64_t x170 = 75693LLU;
	int64_t x171 = INT64_MIN;
	int32_t x172 = -858965911;
	volatile int32_t t42 = 11;

	t42 = (x169<(x170<=(x171&x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x173 = 173;
	volatile int64_t x174 = INT64_MIN;
	uint8_t x175 = 1U;
	uint8_t x176 = 6U;
	int32_t t43 = -1343;

	t43 = (x173<(x174<=(x175&x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 223686706269LLU;
	int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MAX;
	int64_t x180 = 2862239LL;
	volatile int32_t t44 = -3144;

	t44 = (x177<(x178<=(x179&x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x183 = -1;
	int32_t x184 = -24;
	volatile int32_t t45 = -150031274;

	t45 = (x181<(x182<=(x183&x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 0;
	uint16_t x187 = 13U;
	static volatile int8_t x188 = INT8_MIN;
	volatile int32_t t46 = 166;

	t46 = (x185<(x186<=(x187&x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 10;
	int16_t x191 = 1;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = -181;

	t47 = (x189<(x190<=(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x194 = 376U;
	int16_t x195 = 43;
	uint16_t x196 = 49U;
	volatile int32_t t48 = 62;

	t48 = (x193<(x194<=(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	int8_t x198 = -1;
	int16_t x199 = 10;
	volatile int32_t x200 = -1;

	t49 = (x197<(x198<=(x199&x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	uint32_t x202 = 270596U;
	uint64_t x203 = 129782LLU;
	int32_t x204 = -1;
	static int32_t t50 = 1;

	t50 = (x201<(x202<=(x203&x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 21U;
	static uint64_t x206 = UINT64_MAX;
	static int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 0;

	t51 = (x205<(x206<=(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 25193U;
	static uint64_t x210 = 1259040880751773521LLU;
	static int8_t x212 = INT8_MAX;
	volatile int32_t t52 = -856003;

	t52 = (x209<(x210<=(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x214 = INT8_MIN;
	int32_t t53 = -2;

	t53 = (x213<(x214<=(x215&x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -440;
	uint32_t x218 = UINT32_MAX;
	uint16_t x219 = 6048U;
	volatile int32_t t54 = 41;

	t54 = (x217<(x218<=(x219&x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 14LL;
	int64_t x222 = -1LL;
	int8_t x223 = INT8_MIN;
	volatile int64_t x224 = 79023342177LL;
	int32_t t55 = -694;

	t55 = (x221<(x222<=(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 1826U;
	static uint32_t x226 = UINT32_MAX;
	volatile int32_t t56 = 0;

	t56 = (x225<(x226<=(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = 207244767;

	t57 = (x229<(x230<=(x231&x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = -1;
	static uint32_t x235 = 81U;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t58 = -2076823;

	t58 = (x233<(x234<=(x235&x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 12U;
	int16_t x238 = INT16_MIN;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = -102;

	t59 = (x237<(x238<=(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = 0;
	int32_t x243 = INT32_MAX;
	static int16_t x244 = INT16_MIN;

	t60 = (x241<(x242<=(x243&x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 0U;
	int16_t x246 = INT16_MIN;
	int8_t x247 = -42;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = -6041;

	t61 = (x245<(x246<=(x247&x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = -1;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t62 = -340397801;

	t62 = (x249<(x250<=(x251&x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 56U;
	int64_t x254 = -1902LL;
	volatile uint64_t x255 = UINT64_MAX;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = 4;

	t63 = (x253<(x254<=(x255&x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 1;
	volatile uint32_t x258 = 44560U;
	int8_t x259 = -5;
	uint32_t x260 = 333925U;
	int32_t t64 = 25954479;

	t64 = (x257<(x258<=(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	volatile int16_t x262 = INT16_MIN;
	int64_t x264 = INT64_MAX;
	static volatile int32_t t65 = -31406412;

	t65 = (x261<(x262<=(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = 3;
	int8_t x266 = 0;
	static int8_t x267 = 1;
	int8_t x268 = -1;

	t66 = (x265<(x266<=(x267&x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = 39;
	uint16_t x271 = UINT16_MAX;
	int8_t x272 = -1;
	int32_t t67 = -1042225;

	t67 = (x269<(x270<=(x271&x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	static int16_t x276 = -545;
	int32_t t68 = 1008;

	t68 = (x273<(x274<=(x275&x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x279 = 682865323110LLU;
	uint64_t x280 = 1349094412276858708LLU;

	t69 = (x277<(x278<=(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = 550U;
	volatile int32_t x283 = -1;
	uint32_t x284 = 37098U;

	t70 = (x281<(x282<=(x283&x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 898U;
	int64_t x287 = INT64_MAX;
	volatile int16_t x288 = -2289;
	int32_t t71 = 1;

	t71 = (x285<(x286<=(x287&x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x290 = 0LLU;
	volatile uint64_t x291 = UINT64_MAX;
	int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -79;

	t72 = (x289<(x290<=(x291&x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x294 = INT16_MAX;
	int8_t x295 = -1;
	volatile int32_t t73 = 42;

	t73 = (x293<(x294<=(x295&x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	static uint32_t x298 = 58550862U;
	volatile int16_t x299 = -1;
	volatile uint8_t x300 = 55U;
	volatile int32_t t74 = 121920;

	t74 = (x297<(x298<=(x299&x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MAX;
	int8_t x304 = INT8_MIN;
	int32_t t75 = 2;

	t75 = (x301<(x302<=(x303&x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	static uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MIN;
	volatile int32_t t76 = -923864796;

	t76 = (x305<(x306<=(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	static int64_t x310 = -1LL;
	uint32_t x311 = 2034982U;
	int32_t x312 = INT32_MAX;

	t77 = (x309<(x310<=(x311&x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MIN;
	int8_t x314 = -1;
	uint64_t x316 = 75LLU;

	t78 = (x313<(x314<=(x315&x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = INT64_MIN;
	volatile int32_t t79 = 15;

	t79 = (x317<(x318<=(x319&x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 1U;
	int16_t x322 = INT16_MAX;
	volatile uint64_t x323 = 5LLU;
	uint16_t x324 = 311U;
	int32_t t80 = -579763;

	t80 = (x321<(x322<=(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 7941293LLU;
	int32_t x326 = 39;
	uint8_t x327 = UINT8_MAX;
	static volatile int32_t t81 = -940438;

	t81 = (x325<(x326<=(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = 380U;
	volatile int16_t x330 = INT16_MAX;
	int64_t x331 = -13972LL;
	int32_t x332 = -236272800;
	static int32_t t82 = -1686789;

	t82 = (x329<(x330<=(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	volatile int64_t x334 = -1LL;
	int32_t x335 = INT32_MIN;
	volatile int64_t x336 = 44922604826483LL;
	volatile int32_t t83 = -2;

	t83 = (x333<(x334<=(x335&x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = INT8_MIN;
	int8_t x339 = INT8_MIN;
	uint32_t x340 = 114U;
	int32_t t84 = -301524;

	t84 = (x337<(x338<=(x339&x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = 24324744500110349LL;
	int8_t x342 = INT8_MAX;
	int32_t x343 = 210998;
	uint32_t x344 = UINT32_MAX;
	int32_t t85 = 0;

	t85 = (x341<(x342<=(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	int32_t x346 = -758698;
	volatile int32_t x348 = 49354189;

	t86 = (x345<(x346<=(x347&x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = -1LL;
	volatile uint16_t x350 = UINT16_MAX;
	int32_t x352 = -232024902;
	static volatile int32_t t87 = -5;

	t87 = (x349<(x350<=(x351&x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 15149644098LLU;
	static int32_t x354 = -1;
	int32_t x355 = INT32_MIN;
	static uint8_t x356 = 6U;
	int32_t t88 = -1497;

	t88 = (x353<(x354<=(x355&x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 382482620LLU;
	int64_t x359 = 584LL;
	uint16_t x360 = 6U;

	t89 = (x357<(x358<=(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int32_t x363 = -315;
	int32_t x364 = INT32_MIN;
	int32_t t90 = 814006;

	t90 = (x361<(x362<=(x363&x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = -1;
	int32_t t91 = 782;

	t91 = (x365<(x366<=(x367&x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 652;
	int32_t x371 = 11;
	uint8_t x372 = 81U;
	int32_t t92 = 18431018;

	t92 = (x369<(x370<=(x371&x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	int64_t x374 = INT64_MAX;
	int32_t x375 = 112;
	int32_t t93 = -1384;

	t93 = (x373<(x374<=(x375&x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x378 = UINT64_MAX;
	static uint32_t x379 = 5033057U;
	int16_t x380 = 1;

	t94 = (x377<(x378<=(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x381 = 233366U;
	volatile uint8_t x384 = 0U;

	t95 = (x381<(x382<=(x383&x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = UINT64_MAX;
	int64_t x387 = -13648501LL;
	int64_t x388 = -30459374465995421LL;

	t96 = (x385<(x386<=(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	int32_t x392 = INT32_MAX;

	t97 = (x389<(x390<=(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	int16_t x396 = -1987;

	t98 = (x393<(x394<=(x395&x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	uint16_t x398 = 34U;
	uint8_t x399 = 106U;
	volatile int8_t x400 = INT8_MIN;

	t99 = (x397<(x398<=(x399&x400)));

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
