//program to print the sequence 1 2 4 7 11....n//
#include<stdio.h>
int main()
{
    int i,n=0,x=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("%d ",x);
    x=x+i;
    }
    return 0;
}