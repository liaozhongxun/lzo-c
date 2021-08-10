
#include <stdio.h>
#include <stdlib.h>

//求斐波那契第n个值是多少

int func(int a){
    if(a < 0){
        return -1;
    }

    if(a == 1||a == 2){
        return 1;
    }

    return func(a-1) + func(a-2);
}

int main(){
    int i;
    int res = 0;
    scanf("%d",&i);
    res = func(i); 
    printf("%d\n",res);
}
