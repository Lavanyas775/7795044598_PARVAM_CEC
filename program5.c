//write a program which takes input of three integers and if the first integer value lies in between second and third//
#include<stdio.h>
int main()
{
    int a=0,b=0,c=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a<c)
    printf("in between");
    else if(a<b)
    printf("left");
    else
    printf("right");
    return 0;
}


    