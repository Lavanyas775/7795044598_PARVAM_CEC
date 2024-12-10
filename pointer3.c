//program to print the largest number in The given array using pointer//

#include<stdio.h>
int main()
{
     int n=0,i,a[100],*large=a;
    scanf("%d",&n);
    for(i=0;i<n;scanf("%d",a+i++));
    for(i=0;i<n;printf("%d ",large[i]),i++){
    if(*large<a[i])
    large=&a[i];
    }
    printf("\n%d",*large);
    return 0;
}