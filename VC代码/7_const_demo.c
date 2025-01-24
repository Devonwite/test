#include <stdio.h>
#include <math.h>
int main(){
    const float PI = 3.1415;
    float s;
    s = PI *pow(2,2);
    printf("s:%.2lf\n",s);
    s = PI *pow(8,2);
    printf("s:%.2f\n",s);
    return 0;
}