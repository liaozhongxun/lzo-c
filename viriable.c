#include <stdio.h>
#include <stdlib.h>

void funct()
{
    int x=0;
    x+=1;
    printf("%p->%d\n",&x,x);
}

int main()
{
    int x=10;
    auto int i;
    funct();
    funct();
    funct();

    printf("i=%d\n",i);
    printf("%010d\n",x);
    exit(0);
}
