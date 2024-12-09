//program to print sequence 1 4 9 16 

#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    int x=i*i;
    printf("\n%d",x);
    }
    return 0;
}