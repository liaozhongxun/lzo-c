#include <stdio.h>
#include <stdlib.h>

//求一百到999的水仙花数目(各位的立方 + 十位的立方 + 百位的立方 = 他自身)
int main(){
    int i;
    int a,b,c;//储存个十百位的值
    for(i = 100; i < 1000; i++){ 
        a = i % 10;//个位
        b = i % 100 / 10; //十位，取余 再 去余
        c = i / 100; //百位 
        if(a*a*a + b*b*b + c*c*c == i){
            printf("%d\n",i);
        }

    }
}
