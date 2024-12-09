//program to print the divisible of 5 using while//

#include<stdio.h>
int main()
{
    int ll,ul,n=5;
    scanf("%d%d",&ll,&ul);
    int i=ll;
    while(i<=ul){
    if(i%5==0)
    printf("%d,",i);
    i++;
    }
    return 0;    
}
