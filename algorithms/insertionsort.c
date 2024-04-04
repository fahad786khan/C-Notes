#include <stdio.h>

/*Time Complexity
Best Case:O(n)
Average Case:O(n^2)
Worst case:O(n^2)
 */
//?Space complexity :O(1)

/*
Working of the Insertion Sort
->It is a simple sorting algorithm that builds the final sorted array onr element at a time

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
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("\nArray elements after sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
