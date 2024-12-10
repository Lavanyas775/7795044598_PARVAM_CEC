//print tabels using do while//

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i=10;
    do
    {
    printf("%d x %d = %d\n",a,i,a*i);
    i--;
    }while(i>=1);
    return 0;
}