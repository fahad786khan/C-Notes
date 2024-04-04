#include <stdio.h>

/*Time Complexity
Best Case:O(nlogn)
Average Case:O(nlogn)
Worst case:O(n^2)
 */
//?Space complexity :O(logn)

/*Working of Quick sort
->
APPLICATION AND BENEFITS
*/
void swap(int arr[], int i, int j);
int partition(int arr[], int l, int r);
void quickSort(int arr[], int l, int r);

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    quickSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
