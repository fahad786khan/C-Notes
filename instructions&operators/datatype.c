#include <stdio.h>

/*
| Data Type              | Size (bytes) |              Range              | Format Specifier |
| ---------------------- | ------------ |:-------------------------------:| ---------------- |
| short int              | 2            |        -32,768 to 32,767        | %hd              |
| unsigned short int     | 2            |           0 to 65,535           | %hu              |
| unsigned int           | 4            |       0 to 4,294,967,295        | %u               |
| int                    | 4            | -2,147,483,648 to 2,147,483,647 | %d               |
| long int               | 4            | -2,147,483,648 to 2,147,483,647 | %ld              |
| unsigned long int      | 4            |       0 to 4,294,967,295        | %lu              |
| long long int          | 8            |       -(2^63) to (2^63)-1       | %lld             |
| unsigned long long int | 8            | 0 to 18,446,744,073,709,551,615 | %llu             |
| signed char            | 1            |           -128 to 127           | %c               |
| unsigned char          | 1            |            0 to 255             | %c               |
| float                  | 4            |       1.2E-38 to 3.4E+38        | %f               |
| double                 | 8            |      1.7E-308 to 1.7E+308       | %lf              |
| long double            | 16           |     3.4E-4932 to 1.1E+4932      | %Lf              |
*/

int main()
{
    int size_of_int = sizeof(int);
    int size_of_char = sizeof(char);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(double);

    printf("The size of int data type : %d\n", size_of_int);
    printf("The size of char data type : %d\n", size_of_char);
    printf("The size of float data type : %d\n", size_of_float);
    printf("The size of double data type : %d", size_of_double);

    return 0;
}