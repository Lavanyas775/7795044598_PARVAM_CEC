//program to print the divisibles of 5 using if//

#include<stdio.h>
int main()
{
    int ll,ul,n=5;
    scanf("%d%d",&ll,&ul);
    for(int i=ll;i<=ul;i++){
    if(i%5==0)
    printf("%d,",i);
    }
    return 0;    
}
