//print summation of fibonacciseries using recursion//
#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("summation of %d is %d",n,fibonacci(n));
}
int fibonacci(int no)
{
    if(no<=0)
    return 0;
    if(no==1) return 1;
    return fibonacci(no-2)+fibonacci(no-1);
}
