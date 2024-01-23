#include<stdio.h>
#include<conio.h>
  void sort();
  void merge();
  int b[20];
  void main()
{
    int n,i,a[20];
    clrscr();
    printf("enter array size");
    scanf("%d",&n);
    printf("enter the array elems");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,0,n-1);
    printf("print the sorted array elements");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    getch();
}
    void merge(int a[],int low,int mid,int high)
    {
        int i=low,j=mid+1,k=low;
        while(i<=mid && j<=high)
    {
        if( a[i]<a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
            else
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }
        while(i<=mid)
        {
            b[k]=a[i];
            k++;
            i++;
        }
            while(j<=high)
            {
                b[k]=a[j];
                k++;
                j++;
            }
                for(i=low;i<=high;i++)
                a[i]=b[i];
    }

            void sort(int a[],int low,int high)
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


  