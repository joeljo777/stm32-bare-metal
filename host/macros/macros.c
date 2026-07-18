/*
 * string.c
 *
 *  Created on: Jul 17, 2026
 *      Author: josab
 */
#include <stdio.h>
#include <stdint.h>
//#define PI  3.142
//#undef PI  //un-defines a MACRO
void wait_for_user_input(void);

int main(void)
{
	/* do not use semicolon
	 * do not use =
	 */
/*#if 0
    printf("MACROS = %0.4f\n",PI); // this block is excluded during pre-processing time
    fewiohewfuewufhw  it wont show any error as this block is not qat all compiled
	nested #if is allowed
#else
	printf("hello\n");
#endif*/
/*
#if ! defined (PI) && ! defined (CI)
	#error "GOMMA DA " terminates the code
    //printf("PI is defined = %0.3f\n", PI);
#endif
*/
#if ! defined (PI) && ! defined (CI)
	#warning "GOMMA DA "
    //printf("PI is defined = %0.3f\n", PI);
#endif
    wait_for_user_input();

    return 0;
}




void wait_for_user_input(void)
{
    printf("Please Click on Enter Key to EXIT the program\n");

    while(getchar() != '\n')
    {

    }

    getchar();
}

