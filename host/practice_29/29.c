/*
 * 29.c
 *
 *  Created on: Nov 2, 2026
 *      Author: josab
 */


#include <stdio.h>
void wait_for_user(void);
unsigned char extractNibble(unsigned char reg, int pos) {
    // Write your code here
    if(pos==0)
    {
        reg &= 0X0F;
    }
    else
    {
        reg= (reg & 0XF0)>>4;
    }
    return reg;

}

int main() {
    unsigned char reg;
    int pos;
    scanf("%hhu %d", &reg, &pos);
    printf("%d", extractNibble(reg, pos));
    wait_for_user();
    return 0;
}

void wait_for_user(void)
{
	while(getchar() != '\n')
	{
		//
	}
	getchar();
}
