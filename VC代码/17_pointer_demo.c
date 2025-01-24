#include <stdio.h>
int main(){
    char  ch = 'A';
    char* ptr = &ch;
    printf("变量ch修改前的值：%c\n",*ptr);
    *ptr = 'a';
    
    printf("变量ch修改后的值：%c\n",*ptr);
    return 0;
}