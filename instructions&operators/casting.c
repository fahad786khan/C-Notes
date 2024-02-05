#include <stdio.h>

//?casting -->when we explicitly want to convert a larger data type to smaller or vice verse
//?it doesn't round off but remove the decimals and it's values

int main()
{
    int a = (int)1.9999; //*casting
    printf("%d \n", a);
    return 0;
}