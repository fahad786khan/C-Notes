#include <stdio.h>
#include <stdlib.h> //remember to include this library

/*  malloc()~memory allocation
takes number of bytes to be allocated & returns a pointer
to type void
ptr = (int*)malloc(5*sizeof(int));
*/

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 7;
    ptr[3] = 23;
    ptr[4] = 40;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}