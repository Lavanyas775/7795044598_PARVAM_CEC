//program to find the sum of odd and even numbers in an aray//
#include<stdio.h>
int main()
{
    int n=0,a[100],evensum=0,oddsum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        if(a[i]%2==0)
          evensum+=a[i];
        else
          oddsum+=a[i];
    }
    printf("sum of even %d add sum%d",evensum,oddsum);
    return 0;
}