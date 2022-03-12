#define _CRT_SECURE_NO_WARNINGS 1
//函数递归 调用自身的编程技巧 把大事化小
//内存分三个区存储-栈区 - 局部变量 函数形参  堆区 - 动态开辟 内存 malloc calloc  静态区- 全局变量 static修饰的变量  静态区
/*#include<stdio.h>
int main()
{
	printf("hhhh\n");
	main();
	return 0;
}*///会一直打印hhhh 直到栈区溢出
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}//函数的递归使用
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12)34
//	//print(1)234
//	return 0;
//}//递归使用要加入条件不然会一直输出到溢出
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//用递归方法计算数组长度
//int my_strlen(char* str)
//{
//	if (* str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	/*int len = strlen(arr);
//	printf("len=%d\n", len);*/
//	int len =my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//递归加迭代求n的阶层
//#include<stdio.h>
//int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}//普通写法
//int fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//描述n个斐波那契数列的数字
#include<stdio.h>
//int fib(int n)
//{
//
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}迭代法
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
