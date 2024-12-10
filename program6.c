//program to print tabels using for//

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=10;i>=1;i--)
    {
    printf("%d x %d = %d\n",a,i,a*i);
    }
    return 0;
}