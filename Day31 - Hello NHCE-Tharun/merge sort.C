#include <stdio.h>
void sort();
void merge();
int b[20];
void main()
{ 
    int n,a[50],i;
    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++) 
        scanf("%d",&a[i]);
    sort(a,0,n-1);
    printf("Sorted Array : \n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
void merge(int a[50],int low,int mid,int high)
{
    int i=low , j=mid+1 , k=low;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(i=low;i<=high;i++)
        a[i]=b[i];
}
void sort(int a[50],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        sort(a,low,mid);
        sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    else 
        return;
}
