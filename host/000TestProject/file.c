#include <stdio.h>

// 2. DECLARE the variable here using extern.
// This tells the compiler: "z exists in another file."
extern int z;

void a1()
{
    int y;

    // Now you can use 'z' just like a normal variable
    y = z + 2;

    printf("y=%d\t", y);
    printf("z=%d\n", z); // Fixed the label from 'x' to 'z'
}
