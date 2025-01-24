#include <stdio.h>
int main(){
    float float_1,float_2;
    float_1 = 11.27;
    float_2 = 11.12345678910;
    printf("float_1:%f\n",float_1);
    printf("float_2:%f\n",float_2);
    double double_1 = 11.12345678910;
    printf("float_2:%.10f\n",float_2);
    printf("double_1:%.10lf\n",double_1);
    double a = 0.1;
    double b = 0.2;
    float A =0.1;
    float B = 0.2;
    printf("%07lf\n",a+b);
    printf("%.17f\n",A+B);
    return 0;
} 