/*
 * 13.c
 *
 *  Created on: Oct 23, 2026
 *      Author: josab
 */
/*13. Macro-Based Register Config Helper
In embedded systems, registers are often configured by setting specific bits. To make the code cleaner and reusable, firmware developers use macros to set fields in a register.

You are given a 16-bit control register layout:

Field	Bits	Position (LSB-first)
ENABLE	1	Bit 0
MODE	2	Bits 1–2
SPEED	3	Bits 3–5
RESERVED	2	Bits 6–7 (must be 0)
Your task is to:

Write macros to:
Set the ENABLE bit
Set the MODE field
Set the SPEED field
Read ENABLE, MODE, SPEED from input
Use the macros to pack a final 16-bit register value
RESERVED bits (6–7) must be left 0

Example-1

Input: enable = 1, mode = 2, speed = 4
Output: 37
(Binary: 0000 0000 0010 0101)
Example-2

Input: enable = 0, mode = 1, speed = 3
Output: 26
(Binary: 0000 0000 0001 1010)
 * */

#include <stdio.h>
#include <stdint.h>

// Define macros here
#define MODE 1
#define SPEED 3

uint16_t build_register(uint8_t enable, uint8_t mode, uint8_t speed) {
    // Use macros to set fields
    uint16_t res = 0;
uint16_t par_res = enable | (mode << MODE) | (speed << SPEED);

res = par_res & (uint16_t)~((1U << 6) | (1U << 7));
return res;
    return 0;
}

int main() {
    uint8_t enable, mode, speed;
    scanf("%hhu %hhu %hhu", &enable, &mode, &speed);

    uint16_t reg = build_register(enable, mode, speed);
    printf("%u", reg);
    return 0;
}
