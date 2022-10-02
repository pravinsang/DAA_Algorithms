#include<stdio.h>
#include"sorting.h"
#include"swap.h"
int main()
{
    int arr[]={4, 3, 2, 10, 12, 1, 5, 6};
    int n = sizeof(arr)/4;

    quick_sort(arr, 0, 7);
    for(int i=0; i<n; i++)
        printf("%d\t",arr[i]);

    return 0;
}
