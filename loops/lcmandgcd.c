#include <stdio.h>
// both lcm and gcd using loop
int main()
{
    int num1, num2, gcd, lcm, count = 1, small;
    printf("enter 2 integers number");
    scanf("%d%d", &num1, &num2);

    small = (num1 < num2) ? num1 : num2;
    while (count <= small)
    {

        if (num1 % count == 0 && num2 % count == 0)
        {
            gcd = count;
        }
        count++;
    }

    lcm = (num1 * num2) / gcd;
    printf("GCD = %d\nLCM = %d\n", gcd, lcm);
    return 0;
}