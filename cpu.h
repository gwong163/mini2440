#ifndef _CPU_H_
#define _CPU_H_
#include "config.h"
struct cpu {
	unsigned int r_mode;/* running mode*/
	u32 cur_reg[16];           /* the current register file */
	u32 reg[7][16];       /* all the registers */                                                                                                                                                     
	u32 cpsr;
	u32 spsr[7];
};


#endif /* _CPU_H_ */
