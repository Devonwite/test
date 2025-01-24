#include <stdio.h>
int main(){
    int a=2;
    int b=8;
    int result;/*结果*/
    if(a>b){
        result = a-b;
        printf("a与b的差值为：%d\n",result);
    }
    else{
        result = b- a;
        printf("b与a的差值为：%d\n",result);
    }
}