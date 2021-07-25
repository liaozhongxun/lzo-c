#include <stdio.h>
#include <stdlib.h>

// 斐波那契数列前10项(从第三位起，每个数都有前面两个相加)
// 反转数组

int main(){
    int arr[10] = {1,1},i;

    for(i = 2; i <=9; i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    for(int j=0;j<=9;j++)
        printf("%d ",arr[j]);
    printf("\n");

    //反转
    int l = 0; //拿到起始下标
    int r = 9; //拿到最后一个元素下标
    int tmp;
    while(l<r){
        tmp = arr[l];            
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
    }
    for(int j=0;j<=9;j++)
        printf("%d ",arr[j]);
    printf("\n");
}
