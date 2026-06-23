#include<stdio.h>
#include<conio.h>
#include<string.h>
int sm(char text[],char patt[])
{
    int n,m,i,j;
    n=strlen(text);
    m=strlen(patt);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(patt[j]==text[i+j]&&j<m)
        {
            j++;
        }
        if(j==m)
        {
            return i;
        }
    }

    return -1;
}

void main()
{
    char t[50];
    char p[50];
    int r=0;
    printf("enter the text:");
    gets(t);
    printf("\n");
    printf("enter the pattren:");
    gets(p);
    r=sm(t,p);
    if(r==-1)
    {
        printf("pattren not found");
    }
    else
    {
        printf("string found at %d",r);
    }
}