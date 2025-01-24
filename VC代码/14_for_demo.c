#include <stdio.h>
int main(){
    int i = 1;
    for(i;i <= 50;i++){
        if (i % 2 !=0){
            continue;
        }
        if (i % 3 ==0){
            continue;
        }
        if (i > 40){
            break;
        }
        printf(" %d\n",i);
        // if(i % 2 == 0){
        //     printf(" %d\n",i);
        //     if(i >=40){
        //         break;
        //     }
        // }
        // else if(i % 3 == 0){
        //     continue;      
        // }
    }
}