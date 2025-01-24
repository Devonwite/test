#include <stdio.h>
#include <math.h>
int main(){
    int result_1/*结果*/ = 2+10/8.0*3;
    printf("result_1:%d\n",result_1);
    double result_2 =2+10/8.0*3;
    printf("result_2:%lf\n",result_2);
    //一元二次求根公式
    int a = 1;
    int b = 9;
    int c = 20;
    double x= 0;
    double y = 0;
    x = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
    y = (-b-sqrt(pow(b,2)-4*a*c))/2*a;
    printf("x=%lf\n y=%lf\n",x,y); 
    return 0;
}