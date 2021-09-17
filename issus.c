#include <stdio.h>
#include <stdlib.h>

void fun(int *n){
    printf("%d",--(*n));
//    while((*n)--){
//        printf("%d",++(*n));
//    }
}
int main(){
    int a = 10;
    fun(&a);
    return 0;
}
