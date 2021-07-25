#include <stdio.h>
#include <stdlib.h>

// 求一千以内的质数(只能被1和他自身整除的数，不包括1)
int main(){
    int i,j,mark;
    for(i = 2; i < 1000; i++){
        mark = 1;
        for(j = 2; j < i/2; j++){
            if(i%j==0){
                if(i!=j){//可省略，不可能相等
                    mark = 0;
                    break; //跳出第二个for
                }
            }
        }
        if(mark == 1)
            printf("%d\n",i);
    }
}
