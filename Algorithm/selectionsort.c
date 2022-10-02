void selection_sort(int arr[],int n)
{
    int min_idx, i, j;
    for(i=0;i<=n-2;i++)
    {
        min_idx = i;
        for(j=i+1; j<=n-1;j++)
        {
            if(arr[j]<arr[min_idx])
                min_idx = j;
        }
        swap(&arr[i],&arr[min_idx]);
    }
}
