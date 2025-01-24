#include <stdio.h>
int main(){
    int user_type=2;/*用户_类型*/
    int price=180;/*价格*/
    double pay;
    if(user_type == 1){
        if(price>100){
            pay = price*0.95;
        }
        else{
            pay = price;
        }
    }
    else if(user_type == 2){
        if(price>200){
            pay = price*0.09;
        }
        else{
            pay = price*0.97;
        }
    }
    else{
        printf("无效！\n");
    }
    printf("最终支付金额为：%.2lf\n",pay);
}
//         if (price>100){
//             printf("打95折\n");
//         }
//         else{
//             printf("无折扣\n");
//         }
//     }
//     else if(user_type == 2){
//         if(price >200){
//             printf("打9折\n");
//         }
//         else{
//             printf("打97折\n");
//         }
//     }
// }