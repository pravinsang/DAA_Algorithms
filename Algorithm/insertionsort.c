void insertion_sort(int arr[], int n)
{
    int i, j , key;
    printf("Insertion Sort\n");
    for(i=1; i<=n-1; i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        for(int k=0; k<n; k++)
            printf("%d\t",arr[k]);
        printf("\n");
    }
}
