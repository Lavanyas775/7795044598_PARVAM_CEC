//to print the sequence 1 -4 9 -16 25 ...n

#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     int x=i*i;
      if(x%2==0){
        printf("-%d\n",x);
      }
      else  
     printf("%d\n",x);
    }
    return 0;
}