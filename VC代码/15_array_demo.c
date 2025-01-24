#include <stdio.h>
int main(){
    //遍历
    int crr[5];
    printf("please enter a number:\n");
    for (int i = 0; i < 5;i++){
        scanf(" %d",&crr[i]);
    }
    printf("Input completed\n");
    for (int i = 0; i < 5; i++){
        printf("qqqq %d\n",crr[i]);
    }
}