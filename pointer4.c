//program to print the smallest number in The given array using pointer//

#include<stdio.h>
int main()
{
     int n=0,i,a[100],*small=a;
    scanf("%d",&n);
    for(i=0;i<n;scanf("%d",a+i++));
    for(i=0;i<n;printf("%d ",small[i]),i++){
    if(*small>a[i])
    small=&a[i];
    }
    printf("\n%d",*small);
    return 0;
}