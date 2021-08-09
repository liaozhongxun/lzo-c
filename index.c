#include <stdio.h>
#define HELLO "hello"


int print_value(int *a,int *b){
    /*
     * 定义一个指针变量a，和指针变量b，分别存放&i和&j这两个具有指向作用的地址(指针)
     * *a:获取a指针变量储存指针指向的值
     * *a = *b:指针变量b存储指针指向的值，赋值给a储存指针指向的空间
     *
     * */
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    int i = 3,j = 5;
    printf("argc=%d\n",argc);
    for(int ar=0;ar<argc;ar++)
        puts(argv[ar]);
    print_value(&i,&j);

    printf("i=%d,b=%d\n",i,j);

	printf(HELLO);
	return 0;
}
