
#include <stdio.h>
#include <stdlib.h>

//数组与指针

int print_arr(int *p,int n){
    printf("%d\n",sizeof(p));
    printf("%d\n",n);
    for(int i = 0;i < n;i++){
        printf("%p ==> %d\n",p+i,*(p+i));
    }
}

// int print_arr2(int (*p)[4],int m,int n){ //通过*(*(p+i)+j) 取值 ，N表示这个指值指向的是多长的一个小一维数组  
int print_arr2(int p[][4],int m,int n){ //二维通过指针数组接收 p[i][j] 形式取值
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        }
    }
}

//a[2][3]为2个学生三门课的成绩，求第二个学生每一科成绩
//
//函数与字符数组

int main(){
    int arr[]={1,2,3,4,5,6};
    int arr2[2][4]={1,2,3,4,5,6,7,8};
    print_arr(arr,sizeof(arr)/sizeof(*arr));
    print_arr2(arr2,2,4);// 数组起始地址，行，列
}

