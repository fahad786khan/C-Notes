#include <stdio.h>

/*Sorting algorithms is a method or a process used to rearrange elements in a list or an array in a certian order,whether it be ascending,descending,
or even based on some complex rules.
 */

/*Time Complexity
Best Case:O(n)
Average Case:O(n^2)
Worst case:O(n^2)
 */
//?Space complexity :O(1)

/*
Working of the Bubble sort
->It is a simple sorting algorithm that repeatedly steps through the array,element by element compairing the current element with the one after it,
swapping their values if the former is larger than the latter.
APPLICATION AND BENEFITS
*/
int main()
{
    int n, i, j, temp, a[100];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
