#include "cpu.h"

typedef void (*ins_handler)(struct cpu *cpu);
static ins_handler handler[256];

static void test_instruction(struct cpu *cpu);


static void init()
{
	handler[0] = __and_mul;
}

static void __and_mul(struct cpu *cpu)
{
}
