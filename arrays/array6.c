#include<stdio.h>

/*Arrays as Function Argument
//Function Declaration
void printNumbers(int arr[],int n)
                or
void printNumbers(int *arr,int n)

//Function Call
printNumbers(arr,n);*/

void printNumbers(int arr[], int n);

int main(){
    int arr[]= {1,2,3,4,5,6};
    printNumbers(arr, 6);

    return 0;
}

void printNumbers(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);// \t put tab spaces between elements
        }
        printf("\n");
}