#include <stdio.h>
#include <stdlib.h>

#define N 10
// 冒泡排序,一个元素，依次与后面所有的两两对比，每次有个最大的，所以下一次就可以减1

static void sort1(void){
    int numbers[N] = {8,3,6,7,4,5,10,45,44,20};

    //升序
    int tmp;
    for(int i=0;i<N;i++){ //排长度-1次,排列次数
        for(int j=0;j<N-i-1;j++){ //每次排列两两对比的次数，长度减1，再减去排过的次数i
            if(numbers[j]<numbers[j+1]){
                tmp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = tmp;
            }
        }
    }

    for(int k=0;k<N;k++){
        printf("%d ",numbers[k]);
    }

    printf("\n");
}

static void sort2(){
    // 选择排序:排列长度减1次，把第一个当做最小的，从第二位开始遍历，如果后面遇到更小的，就用它的下标替换，记录成的最小数
    // 继续判断这次排列有没有被替换的的操作，如果有，说明后面有更小的，执行替换操作
    int numbers[N] = {8,3,6,7,4,5,10,45,44,20};

    //升序
    int tmp,k;
    for(int i=0;i<N;i++){ //排长度-1次,排列次数
        k=i;
        for(int j=i+1;j<N;j++){
            if(numbers[j]<numbers[k]){
                k=j;
            }
        }
        if(k!=i){
            tmp = numbers[i];
            numbers[i] = numbers[k];
            numbers[k] = tmp;
        }

    }

    for(int k1=0;k1<N;k1++){
        printf("%d ",numbers[k1]);
    }

    printf("\n");
}
int main(){
    sort1();
    sort2();
}
