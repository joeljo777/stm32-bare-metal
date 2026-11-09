/*
 * 30.c
 *
 *  Created on: Nov 9, 2026
 *      Author: josab
 */
/*18. Set Multiple Bits in 8-bit Register
You are given an 8-bit register. Set all bits between position start and end (inclusive).

Use 0-based indexing and assume start <= end.


Example 1

Input: reg = 0b00000000, start = 1, end = 3
Output: 0b00001110
Example 2

Input: reg = 0b00001000, start = 0, end = 2
Output: 0b00001111
Example 3

Input: reg = 0b00000001, start = 3, end = 5
Output: 0b00111001*/


#include <stdio.h>
#include <stdint.h>

uint8_t set_range(uint8_t reg, uint8_t start, uint8_t end) {
    // Y_tour code here
    uint8_t len =0 ;
    for(int i=start;i<=end;i++)
    {
        len++;
    }
    uint8_t mask = ((1<<len)-1)<<start;
    reg |= mask;
    return reg;
    return 0;
}

int main() {
    uint8_t reg, start, end;
    scanf("%hhu %hhu %hhu", &reg, &start, &end);
    printf("%u", set_range(reg, start, end));
    return 0;
}
