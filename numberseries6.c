//program to print the sequence 1 3 5 7 9...n//
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    if(i%2!=0)
    printf("%d ",i);
    return 0;
}