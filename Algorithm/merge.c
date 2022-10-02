#include<limits.h>
void merge(int arr[], int p, int q, int r)
{
    int n1,n2,i,j,k;
    n1 = q-p+1;
    n2 = r-q;
    int L[n1+1];
    int R[n2+1];
    for(i=0; i<n1; i++)
        L[i] = arr[p+i];
    for(j=0; j<n2; j++)
        R[j] = arr[q+j+1];
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    i=0;
    j=0;
    for(k=p; k<=r; k++)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
    }
}
void merge_sort(int arr[], int p, int r)
{
    int q;
    if(p < r)
    {
        q = (p + r)/2;
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}
