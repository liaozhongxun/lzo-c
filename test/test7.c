#include <stdio.h>
#include <stdlib.h>

// 输入十进制，和转到的进制，得出结果
int main(){
    int num,base;
    int item[128],i=0;

    printf("plase a number:");
    scanf("%d",&num);
    printf("plase a base:");
    scanf("%d",&base);

    printf("%d --- %d\n",num,base);
    do{
        item[i] = num%base;
        num = num/base;
        i++;
    }while(num != 0);  

    for(i--;i>=0;i--){ //上面i指向了最后一位加1
        if(item[i]>=10) //十六进制，10后面的要转abcdef
            printf("%c",item[i] - 10 +'A');
        else
            printf("%d",item[i]);
    }
    printf("\n");

}
