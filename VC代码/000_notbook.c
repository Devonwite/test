
// int i = 10;
// int* i_ptr = &i;//pointer/*指针*/ -->ptr.
// int* i_ptr1 = NULL;
// *指针名---->解引用运用运算符（间接访问运算符）
// int main(){
//     int i = 10;
//     int* i_ptr =&i;
//     printf("修改前指针数值为:");
//     printf("%d\n", *i_ptr);//*i_ptr间接找到定义的10，通过int* i_ptr获取i,i获取10
//     printf("修后面指针数值为:");
//     *i_ptr = 20;
//     printf("%d\n", *i_ptr);
// }
/*3、编程从键盘输入一个小写字符，将其转换为大写字符显示并显示出它的十进制，十六进制的ASCII码。*/
// int main() {
		// int x;
		// scanf("%c", &x);
        // printf("%c\n",x); 
        // x = x + 32;  
        // printf("%c\n",x);  
        // // char ch;
        // // ch = x;
		//printf("%c\n", ch);
		// return 0;
        // char ch;
        // scanf("%c",&ch);
        // printf("%c\n",ch-32);
        // printf("%d\n",ch-32);
        // printf("%x\n",ch-32);
        // ch = ch + 35;
        // printf("%d\n",ch);        
        //8)设有定义“int k=0;"，以下选项的4个表达式中与其他3个表达式的值不相同的是(    )
//int k = 0;
//printf("%d\n",++k);
//printf("%d\n",k++);    
//printf("%d\n",k+1);
// int a,b,temp;
// temp =a; a=b; b= temp;
//         return 0;


//1//从键盘上输入两个实型数，求两数的和、差、积，输出结果时要求小数部分占两位
// #include <stdio.h>
// int main(){  
//     float a,b;
//     printf("hello!\n");
//     scanf("%f%f",&a,&b);
//     printf("%.2f\n",a+b);
//     printf("%.2f\n",a-b);
//     printf("%.2f\n",a*b);
//     printf("%.2f\n",a/b);
//     return 0;
// 	}
// #include <stdio.h>
// int main() {
// 	int year;
// 	scanf("%d", &year);
// 	if (((year % 4 == 0) ||(year % 400 == 0) && (year % 100 != 0)) )
// 		printf("%d是闰年\n", year);
// 	else
// 		printf("%d不是闰年\n", year);
// }

// #include <stdio.h>
// int main() {
// 	int x;
// 	scanf("%d", &x);
// 	switch (x)
// 	{
// 	    case 1:
// 	    case 2:
//     	case 3:
// 	    case 4:
// 	    case 5:
//             printf("今天是工作日");
//             break;
// 	case 6:printf("今天是周六");
		
// 	case 7:printf("今天是周日");
// 		break;
// 	}

// }
// #include<stdio.h>
// int main(){
//     int i = 0;
//     do{
//         printf("%d\n",i);
//     }while(i<=10);
// }
// #include <stdio.h> 
// main()
// {	int y = 10 ;
// 	while (y--); 
// 	printf( "y = %d\n" , y);
// }
//编程程序计算s=1+1/2+1/3+1/4+⋯前50项之和。
// #include<stdio.h>
// int main(){
//     float sn =0;
//     int n = 1;
//     for(;n<=50;n++){
//         sn =sn + 1/n;
//     }
//     printf("%f\n",sn);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {	int a = 123456, b;
// 	while (a)
// 	{	b = a%10;
// 		a /= 10;
// 		switch (b)
// 		{	default: printf("%d" , b ++ );
// 			case 1:
// 			case 2:printf( "%d" , b++ ); break;
// 			case 3: printf("%d" , b++ ); break; 
// 			case 4: printf("%d" , b++ );
// 		}
// 	}
// }
//1、编程程序计算s=1+1/2+1/3+1/4+⋯前50项之和。
// #include <stdio.h>
// int main(){
// 	float s=0;
// 	for(int i = 1;i <= 50;i++){
// 		s = s+1.0/i;

// 	}
// 	printf("%f\n",s);
// 	return 0;
// }
	//有一分数序列：s=1+2/1+3/2+5/3+8/5+⋯ 。求出这个数列的前20项s之和。
// #include <stdio.h>
// int main(){
// 	int i;
// 	float s,y=1.0,x=1.0,t;
// 	for(i=1;i<=20;i++){
// 		s = s + x/y;
// 		t = x;
// 		x= x+y;
// 		y = t;
// 	}
// 	printf("%f\n",s);
// 	return 0;
// }

//3、一个数如果恰好等于它的因子之和，这个数就称为完数。 例如，6的因子为1、2、3，而6=1+2+3，因此，6是完数。编程找出1000之内的所有完数。
// #include <stdio.h>
// int main(){
// 	int i,j,s;
// 	for(i = 1; i < 1000; i++){
// 		s = 0;
// 		for(j = 1; j < i; j++){
// 			if(i % j == 0){
// 				s= s + j;
// 			}
// 			if(s==i){
// 				printf("%d\n",j);
// 		}
		
// 	}
	
// }
// printf("%f\n",s);
// return 0;
// }
// #include <stdio.h>
// int main(){
// 	int i,j,s;
// 	for(i = 1;i < 1000; i++){
// 		s = 0;
// 		for (j= 1; j<=i;j++){
// 			if(i%j==0){
// 				s= s+ j;
// 			}
// 		}
		
// 		if(s ==i){
// 			printf("%d\n",i);
// }
// 	}

// }
// #include <stdio.h>
// int main(){
// 	printf("商品编号\t商品名称\t商品价格\n");
// 	printf("1001\t\t苹果\t\t3.5\n");
// 	printf("1002\t\t香蕉\t\t2.8\n");
// 	printf("1003\t\t葡萄\t\t5\t\n");
// 	return 0;
// }
// #include <stdio.h>
// int main(){
// 	printf("   *\n  ***\n *****\n*******\n");
// 	return 0;
// }









            // int             整数
            
            // float           小数

            // double          小数

            // chare           字符    'a'         ' $'       1       '1'        "ab"字符串





// #include <stdio.h>
// int mian()
// {
    
//     printf("hello world!");
//     return 0;
//  } 

//验证i++ and ++i
// #include <stdio.h>
// int main(){
//     int b, c, i = 1, j = 1;
//     b = i++;
//     printf("b = %d\n", b);
//     c = ++j;
//     printf("c = %d\n",c);
//     return 0 ;
// }
//不同类型不可垮类型赋值
// #include <stdio.h>
// int main(){
//     int a = 289;
//     char b ='a';
//     b = a;
//     printf("%d\n",b);
//     return 0;
// }

//打印函数输出类型通过格式字符控制如%d,%c,%f,%s
// #include <stdio.h>
// int main(){

//     char  ch = 'a';
//     printf("%c\n",ch);
//     int a = 97;
//     printf("%a\n",a);
// } 
//getchar() and putchar() 只有针对单个
// #include <stdio.h>
// int main(){
//     char a, b;
//     a = getchar();
//     b = getchar();
//     putchar(a);
//     putchar(b);
//     return 0;
// }

//打印3行4列*使用循环套嵌循环
// #include <stdio.h>
// int main(){
//     // int i,j;
//     // for(i = 1;i <= 12;i++){
//     //     printf("* ");     
//     //     if(i==3 || i==6 || i==9 || i==12)
//     //         printf("\n");
//     // }
//     for(int i = 1; i <= 3;i++){
//         for(int j = 1;j <= 4; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

