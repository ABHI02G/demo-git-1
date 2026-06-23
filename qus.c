#include<stdio.h>
#include<stdlib.h>
int parttion(int a[],int low,int hig)
{
    int i=low,j=hig+1,temp=0;
    int p=a[low];
    
    while(p>=a[i]&&i<=hig)
    {
        i++;
    }
    
    while(p<a[j]&&j>=low)
    {
        j--;
    }

    if(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    else
    {
        temp=a[low];
        a[low]=a[j];
        a[j]=temp;
    }

    return j;
}

void Quicksort(int A[],int l,int h)
{
    if(l<h)
    {
        int k = parttion(A,l,h);
        Quicksort(A,l,k-1);
        Quicksort(A,k+1,h);
    }
}

void main()
{
    int b[50];
    int n,g;
    
    printf("enter the size of array:\n");
    scanf("%d",&n);
    
    for(g=0;g<=n;g++)
    {
        b[g]=rand()%100;
    }
    
    printf("unsorted array of size %d\n",n);
    for(g=0;g<=n;g++)
    {
        printf("%d\t",b[g]);
    }
    
    printf("\n");

    Quicksort(b,0,n);

    printf("\n");
    
    printf("sorted array of size %d\n",n);
    for(g=0;g<=n;g++)
    {
        printf("%d\t",b[g]);
    }

    printf("\n");

}
