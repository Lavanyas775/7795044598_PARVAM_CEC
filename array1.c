//program to print the array ...ask user to enter the size and array elements//
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int array[]={1,2,3,4,5};
    for(int i=0;i<n;scanf("%d",&array[i++]));
    
    for(int i=0;i<n;printf("%d ",array[i++]));
    return 0;
}


