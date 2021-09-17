#include <stdio.h>
#include <stdlib.h>

//实现变长数组
int main(){
    int *p;
    int num = 2;

    p = (int *)malloc(sizeof(int)*num);
    for(int i=0;i<num;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<num;i++){
        printf("%d",p[i]);
    }
    printf("\n");
    printf("%p-->%x\n",&p,*p);
    exit(0);
}
