// program to print the variable value using pointer//

#include<stdio.h>
int main()
{
  int n=0,*p=&n;
  *p=10;
  printf("variable value %d ",n);
  return 0;
}