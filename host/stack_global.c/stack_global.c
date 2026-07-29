/*
 * stack_global.c
 *
 *  Created on: Jul 29, 2026
 *      Author: josab
 */


/*
 ******************************************************************************
 * @file           : stack_frame_demo.c
 * @author         : Joel Jo
 * @brief          : Demonstrates function calls, stack frames, and global
 *                   variable usage in C.
 *
 * Program Flow:
 *
 *          main()
 *             |
 *             |  Calls SquareOfSum(a,b)
 *             |
 *             V
 *      SquareOfSum()
 *             |
 *             |  Calls Square(x+y)
 *             |
 *             V
 *         Square()
 *             |
 *             |  Returns x*x
 *             |
 *             V
 *      SquareOfSum()
 *             |
 *             |  Returns z
 *             |
 *             V
 *          main()
 *             |
 *             |  Prints the result
 *             |
 *             V
 *          Program Ends
 *
 ******************************************************************************
 */

#include <stdio.h>

/*---------------------------------------------------------------------------
 * Global Variable
 *---------------------------------------------------------------------------
 * Global variables are stored in the Static/Global Memory section.
 * They exist for the entire lifetime of the program and are not stored
 * inside any stack frame.
 */
int total;


/*---------------------------------------------------------------------------
 * Function : Square()
 *
 * Description:
 * Computes the square of a given number.
 *
 * Stack Frame Created:
 * --------------------
 * Local Variables :
 *      x
 *
 * Return Address:
 *      Stored automatically so that after returning, execution resumes
 *      inside SquareOfSum().
 *--------------------------------------------------------------------------*/
int Square(int x)
{
    return x * x;          // Returns x²
}


/*---------------------------------------------------------------------------
 * Function : SquareOfSum()
 *
 * Description:
 * Adds two numbers and calls Square() to calculate (x+y)².
 *
 * Stack Frame Created:
 * --------------------
 * Parameters :
 *      x
 *      y
 *
 * Local Variables :
 *      z
 *
 * Return Address:
 *      Stored automatically so that after returning, execution resumes
 *      inside main().
 *--------------------------------------------------------------------------*/
int SquareOfSum(int x, int y)
{
    // Function call
    // A new stack frame for Square() is created.
    int z = Square(x + y);

    // Square() returns here after its stack frame is removed.
    return z;
}


/*---------------------------------------------------------------------------
 * Function : main()
 *
 * Description:
 * Entry point of the program.
 *
 * Stack Frame Created:
 * --------------------
 * Local Variables :
 *      a
 *      b
 *
 * Return Address:
 *      Stored by the startup code before entering main().
 *--------------------------------------------------------------------------*/
int main(void)
{
    int a = 4;
    int b = 8;

    /*
     * Execution reaches this statement.
     *
     * Current Stack:
     *
     * ----------------------
     * |      main()        |
     * |--------------------|
     * | a = 4              |
     * | b = 8              |
     * ----------------------
     *
     * Calling SquareOfSum() creates a NEW stack frame above main().
     */
    total = SquareOfSum(a, b);

    /*
     * After SquareOfSum() returns, its stack frame has been destroyed.
     *
     * Stack becomes:
     *
     * ----------------------
     * |      main()        |
     * |--------------------|
     * | a = 4              |
     * | b = 8              |
     * ----------------------
     */
    printf("Output = %d\n", total);
    wait_for_usr();
    return 0;
}

void wait_for_usr(void)
{
	printf("Click On Enter to Exit the PROGRAM\n");
	while(getchar()!= '\n')
	{

	}
	getchar();
}
