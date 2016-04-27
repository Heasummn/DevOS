#ifndef _IDT_H_
#define _IDT_H_

#include <stdint.h>

struct idt_entry
{
	uint16_t base_low;
	
	uint16_t sel;
	uint8_t zero;
	uint8_t flags;
	
	uint16_t base_high;
} __attribute__((packed));

struct idt_ptr
{
	uint16_t limit;
	uint32_t base;
} __attribute__((packed));


void init_idt();

#endif // _GDT_H_ 