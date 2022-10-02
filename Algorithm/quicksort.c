int partition(int arr[], int p, int r)
{
    int x, i, j;
    x = arr[r];
    i = p-1;
    for(j = p; j <= r-1; j++)
    {
        if(arr[j] <= x)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}
void quick_sort(int arr[],int p, int r)
{
    int q;
    if(p < r)
    {
        q = partition(arr,p,r);
        quick_sort(arr,p,q-1);
        quick_sort(arr,q+1,r);
    }
}
