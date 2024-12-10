//program to print sequence 1 4 9 25 36 49 81...n
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      if(i%4==0)
      {
       continue;
      }
      else
      {
       int x=i*i;
       printf("%d\n",x);
      }
    }
    return 0;
}