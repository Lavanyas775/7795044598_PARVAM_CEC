//progmra to print the poweres of 2 using while//

#include<stdio.h>
int main()
{
    int lim=0,result=2;
    scanf("%d",&lim);
    int i=0;
    while(i<=lim){
    result*=2;
    printf("%d ",result);
    i++;
    }
    return 0;

}