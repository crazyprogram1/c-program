//第一个程序
/*#include <stdio.h>//包含一个叫stdio，h的文件
//std-标准 standard input output
int main()//主函数有且只有一个
{
	printf("hello world\n");
	return 0;

}*/
//第二个程序字符类型
//#include<stdio.h>
//int main()
//{
//	char ch = 'A';
//	printf("%c\n", ch);
//	return 0;
//
//}
//%d - 打印整型
//%c - 打印字符
//%f - 打印浮点数字-打小数
//%p - 以地址的形式打印
//%x - 打印16进制数字
//%o - ....
//%lf - 双精度浮点型
//char 字符数据类型 short 短整型 int 整型 long 长整型 
//long long 更长整型 float 单精度浮点型 double 双精度浮点型
//为什么会有这些东西呢？ 字节大小不同 用sizeof(char)来显示字节
//第三个程序
//#include<stdio.h>
//int main()
//{
//	printf("%d/n,", sizeof(char));//1字节 2^8-1
//	printf("%d/n,", sizeof(short));//2字节 2^16-1
//	printf("%d/n,", sizeof(int));//4字节 2^32-1
//	printf("%d/n,", sizeof(long));//4/8字节 2^32-1>=int看平台
//	printf("%d/n,", sizeof(long long));//8字节 2^64-1
//	printf("%d/n,", sizeof(float));//4字节
//	printf("%d/n,", sizeof(double));//8字节
//	return 0;
//}
//bit - 比特位  存储一个1或0
//byte - 字节=8个比特位大小
//bit -8-byte -1024- kb-1024- mb -1024- gb-1024- tb -1024- pb 
//第四个程序
//#include<stdio.h>
//int main()
//{
//	short age = 20;//向内存申请2个字节，存放20
//	float weight = 95.6f;//向内存申请4个字节，存放小数
//	printf("%d/n,",age);
//	printf("%f/n,",weight);
//	return 0;
//}
//第五个程序
//#include<stdio.h>
//int num2 = 20;//全局变量-定义在代码块{}之外的变量
//int mian()
//{
//	int num1 = 10;//局部变量-定义在代码块{}里面的变量
//	return 0;
//}//全局变量与局部变量尽量不能同名，若同名局部变量优先
//#include<stdio.h>
//int num2 = 20;
//int main()
//{
//	int num2 = 10;
//	printf("%d/n", num2);
//}
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);//输入数据输入函数scanf，取地址符号&
//	int sum = 0;//c语言语法规定，变量要定义在当前代码前面
//	sum = num1 + num2;
//	printf(sum = "%d/n", sum);
//	return 0;
//}
//修改后
//#include<stdio.h>//加法器
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);//输入数据输入函数scanf，取地址符号&
//	sum = num1 + num2;
//	printf("sum = % d / n", sum);
//	return 0;
//}
//微软软件只认函数scanf_s 或者加#define _CRT_SECURE_NO_WARNINGS 
//全局变量作用大，多个函数可以使用，范围为整个工程
// 局部变量生命周期只有{}里面全局变量的生命周期为整个程序
//不安全的函数有 scanf strcpy sscanf fopen ....