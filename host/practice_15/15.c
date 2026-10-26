/*
 * 15.c
 *
 *  Created on: Oct 26, 2026
 *      Author: josab
 */

/*A developer checks if bit 3 is set in a status register. The register currently holds 0x0E. He writes:
	Will this code produce the correct result?*/

#include<stdio.h>
#include<stdint.h>
void wait_for_user(void);
int main()
{
	uint8_t status = 0x0E;
	if (status & 1 << 3) {
	   printf("Set");
	} else {
	   printf("Clear");
	}
	/*Correct Answer: Yes — but only by coincidence

<< has higher precedence than &.

So the expression evaluates as status & (1 << 3) = 0x0E & 0x08 = 0x08.

 Since 0x08 is non-zero, it correctly prints "Set".

Yes, it works because << has higher precedence than &, but it is risky style and should use parentheses.

Adding another operator — say status & 1 << 3 == 0x08 — would break because == binds tighter than &, completely changing the logic.

Learning:

Always use explicit parentheses in bitwise expressions: if (status & (1 << 3)).

Relying on precedence is a ticking time bomb — it works until someone extends the expression.*/
	return 0;
}

void wait_for_user(void)
{
	printf("Please Click On Enter Key To Exit The Program");
	while(getchar() != '\n')
	{
		//
	}
	getchar();
}
