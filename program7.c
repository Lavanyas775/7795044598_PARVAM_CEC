//program to print tabels using while loop//

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i=10;
    while(i>=1)
    {
    printf("%d x %d = %d\n",a,i,a*i);
    i--;
    }
    return 0;
}