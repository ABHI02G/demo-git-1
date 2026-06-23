#include<stdio.h>
#include<stdlib.h>
void simple_merge(int a[],int low,int mid,int hig)
{
    int c[50];
    int i=low,j=mid+1,k=low;
    while(i<=mid&&j<=hig)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=a[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
       c[k]=a[i];
       i++;
       k++; 
    }

    while(j<=hig)
    {
        c[k]=a[j];
        j++;
        k++;
    }

    for(i=0;i<=hig;i++)
    {
        a[i]=c[i];
    }

}

void merge(int A[],int l,int h)
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        merge(A,l,m);
        merge(A,m+1,h);
        simple_merge(A,l,m,h);
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

    merge(b,0,n);

    printf("\n");
    
    printf("sorted array of size %d\n",n);
    for(g=0;g<=n;g++)
    {
        printf("%d\t",b[g]);
    }

    printf("\n");

}