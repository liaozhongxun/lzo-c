#include <stdio.h>
#include <stdlib.h>

//求阶层3：3*2*1，4：4*3*2*1，从自身开始乘到1

int factouial(int a){
    if(a < 0){
        return -1;
    }

    if(a == 0||a == 1){
        return 1;
    }

    return a*factouial(a-1); //a 乘以 a-1 阶层，factouial计算一个数的阶层
}

int main(){
    int i;
    int res = 0;
    scanf("%d",&i);
    res = factouial(i); //计算i的阶层
    printf("%d\n",res);
}
