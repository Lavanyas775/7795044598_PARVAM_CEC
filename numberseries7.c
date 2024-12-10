//program to print the sequence 4 16 36 64...n//
#include<stdio.h>
int main()
{
    int n=0,x=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        x=i*i;
        if(x%2!=0)
        {
        continue;
        }
        printf("%d ",x);
    }
        return 0;
}