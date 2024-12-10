/*program to print the following pattern
        1
      2 1
    3 2 1
  4 3 2 1 
5 4 3 2 1 */
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n-i;j++)
    {
      printf("  ");
    }  
      for(int j=i;j>=1;j--)
    {  
      printf("%d ",j);
    }
    printf("\n");
    }
    return 0;
}