#include <stdio.h>
int main(){
//     //一个实现群发打招呼功能
    int n;
    printf("输入你想要打招呼的总人数：\n");
    scanf("%d",&n);
    char name[20];
    printf("输入他们的中文名：\n");
    for (int i = 0;i<n;i++){
    scanf("%15s",name);
    printf("%s，你好\n",name);
    }    
    printf("你已经打完所有招呼！\n");
    return 0;
}
//     char str[9]={'s','e','e',' ','y','o','u','!','\0'};
//     for (int i = 0; i<9; i++){
//         printf("%c",str[i]);
//     }
//     char str1[] = "see you!";
//     printf("%s",str1);
// }
