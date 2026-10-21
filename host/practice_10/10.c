/*
 * 10.c
 *
 *  Created on: Oct 21, 2026
 *      Author: josab
 */
/*10. Bit Operations using Macros
In embedded systems, modifying specific bits of control or status registers is a frequent task. You’re given an 8-bit register (uint8_t) and must perform the following bit operations on it:

Set bits 2 and 7
Clear bit 3
Toggle bit 5
Your task is to implement a function that:

Accepts a uint8_t reg as input
Applies all the above operations in the given order
Returns the updated register value
Use proper bitwise macros for maintainability.



Example-1

Input: 0
Output: 164
(00000000 → 10100100)

Example-2

Input: 255
Output: 215
(11111111 → Set 2 & 7 → already set, Clear 3 → unset bit 3, Toggle 5 → flip bit 5 → becomes 0)

Example-3

Input: 36
Output: 132
(00100100 → Toggle 5 → cleared, Clear 3 → already clear, Set 2 and 7 → becomes 10000100)*/
#include <stdio.h>
#include <stdint.h>

// Define bitwise macros here
#define set_1 2
#define set_2 7
#define clear 3
#define toggle 5

uint8_t modify_register(uint8_t reg) {
    // Apply operations in order
    uint8_t r1 = (1<<set_1)| (1<<set_2);
    uint8_t r2 = ~(1<<clear);
    reg = reg | r1 ;
    reg &= r2;
    reg ^= (1<<toggle);
    return reg;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", modify_register(reg));
    return 0;
}

