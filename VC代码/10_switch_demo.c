#include <stdio.h>
int main(){
    int category =2;/*类别*/
    float price =299.9;/*价格*/
    // price = 299.9;
    // printf("%d\n",price);
    switch(category){
        case 1:
        if(price<500){
            printf("电子产品价格较低，无优惠");
        }
        else if(price>=500 && price<=1000){
            printf("电子产品可享受5%%的优惠");
        }
        else if(price>1000){
            printf("电子产品可享受10%%的优惠");
        }
        break;
        case 2:
        if(price<200){
            printf("服装价格较低，无优惠");
        }
        else if(price>=200 && price<=500){
            printf("服装可享受8%%的优惠");
        } 
        else if(price>500){
            printf("服装可享受15%%的优惠");
        }
        break;
        default:
        printf("超出可选类别！");
    }
    /*if(category ==1){
        if(price<500){
            printf("电子产品价格较低，无优惠");
        }
        else if(price>=500 && price<=1000){
            printf("电子产品可享受5%的优惠");
        }
        else if(price>1000){
            printf("电子产品可享受10%的优惠");
        }
    }
    else if(category ==2){
        if(price<200){
            printf("服装价格较低，无优惠");
        }
        else if(price>=200 && price<=500){
            printf("服装可享受8%的优惠");
        }
        else if(price>500){
            printf("服装可享受15%的优惠");
        }
    }
    else{
        printf("超出可选类别！");
    }*/
}