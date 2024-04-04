#include <stdio.h>

/*Time Complexity
Best Case:O(n^2)
Average Case:O(n^2)
Worst case:O(n^2)
 */
//?Space complexity :O(1)

/*Working of Selection sort
->
APPLICATION AND BENEFITS
*/
int main()
{
    int n, i, j, min_index, temp, a[100];

    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Selection sort algorithm
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }

    printf("\nArray elements after sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
