//pointer and arrays//

#include<stdio.h>
int main()
{
    int n=0,*p=&n;
    scanf("%d",p);
    printf("var n value %d adress is %x", n,&n);
    printf("\npointer p target valuue %d adress is %x pointer adress is %x", *p,p,&p);
    return 0;
}

