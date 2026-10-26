/*
 * 18.c
 *
 *  Created on: Oct 26, 2026
 *      Author: josab
 */
/*Initialize the register: ctrl = 0x00 initializes an 8-bit control register with all bits cleared.



Set the bit position: pos = 3 specifies bit 3 as the initial target bit.



Call the macro: TOGGLE_BIT(ctrl, pos++) toggles a bit and then checks a bit using the macro definition.



Toggle the bit: The first expression uses pos = 3 and toggles bit 3 using XOR (^=). Since the bit was 0, it becomes 1, making ctrl = 0x08.



Check the bit: The second expression uses pos = 4 and checks bit 4 using AND (&). Since bit 4 is 0, the returned value is 0x00.



Observe the final values: ctrl = 0x08, pos = 5, and the macro returns 0x00. The position increments twice because pos++ appears twice in the macro.
macros in the code in 5 lines but short
#define TOGGLE_BIT(reg, n) defines a macro to toggle and check a specified bit.

(1 << n) creates a bit mask for bit position n.

(reg) ^= (1 << n) toggles the selected bit using XOR.

(reg) & (1 << n) checks whether that bit is set after toggling.

The comma operator executes both expressions in order and returns the second expression's result.*/

#include<stdio.h>
#include<stdint.h>
#define TOGGLE_BIT(reg, n)  ((reg) ^= (1 << (n)), (reg) & (1 << (n)))
void wait_for_user(void);
int main()
{
    uint8_t ctrl = 0x00;
    uint8_t pos = 3;

    uint8_t result = TOGGLE_BIT(ctrl, pos++);

    printf("ctrl = 0x%02X\n", (unsigned int)ctrl);
    printf("pos = %u\n", (unsigned int)pos);
    printf("result = 0x%02X\n", (unsigned int)result);
	return 0;
}
void wair_for_user(void)
{
	printf("Click On Enter Key To Exit The Program\n");
	while(getchar() != '\n')
	{
		//
	}
	getchar();
}
