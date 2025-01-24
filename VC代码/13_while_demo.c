#include <stdio.h>
int main(){
    int num = 1;
    int sum1 = 0;
    int sum2 = 0;
    //用while写1到100内偶数和
    while(num <= 100){
        if(num % 2 == 0){
            sum1 = sum1 + num;
        }
    num = num + 1;
    }
    printf("一到一百中所有偶数的和为： %d\n",sum1);
    num = 1;
    do{
        if( num % 2 == 0){
            sum2 = sum2 + num;
        }
    num = num + 1;
    }while(num <= 100);

    printf("一到一百中所有偶数的和为： %d\n",sum2);
}