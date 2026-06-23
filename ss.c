#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,min,n,temp=0;
    int a[50];
    printf("\nthe size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }

    printf("\nunsorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }  
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    printf("\nsorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);    
    }
}