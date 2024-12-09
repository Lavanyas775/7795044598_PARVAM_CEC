//program to print the sum of array elements//
#include<stdio.h>
int main()
{
    int n=0,a[100],i,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    for(int i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    sum+=a[i];
    }
    printf("SUM=%d",sum);
    return 0;
}