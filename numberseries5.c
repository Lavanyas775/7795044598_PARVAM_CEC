//program to print sequence 1 4 7 12 23....N
#include<stdio.h>
int main()
{
  int f1=1,f2=4,f3=7,n=0;
  scanf("%d",&n);
  while(f1<=n)
  {
    printf("%d ",f1);
    int f4=f1+f2+f3;
    f1=f2;
    f2=f3;
    f3=f4;
  }
  return 0;
}
