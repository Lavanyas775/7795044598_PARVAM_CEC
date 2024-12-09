//program to read two integers m and n and swap their values//
#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the values for m and n\n");
    scanf("%d%d",&m,&n);
    printf("number before swapping:m=%d,n=%d",m,n);
    m=m+n;
    n=m-n;
    m=m-n;
    printf("after swapping:m=%d,n=%d",m,n);
    return 0;

}