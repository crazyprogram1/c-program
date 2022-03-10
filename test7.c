#define _CRT_SECURE_NO_WARNINGS 1
//函数学习
//库函数 自定义函数 函数参数 函数调用 函数嵌套调用和链式访问 函数声明和定义 函数递归
//程序一
//#include<stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}//自定义函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
// 程序二
//1. 库函数 1 io函数 字符串函数 内存操作函数 时间、日期函数 数学函数 其他库函数
//strcpy的使用
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy-string copy-i字符串拷贝
//	//strlen-string length-字符串长度有关
//	return 0;
//}
//memset的使用
//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
// 程序三
//自定义函数
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	max = get_max(300, 200);
//	printf("max=%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//void swap(int x, int y)//void 没有返回值
//{
//	int a = 0;
//	a = x;
//	x = y;
//	y = a;
//}//因为x y与num1 num2没有关系 程序不能交换
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("a=%d b=%d\n", num1, num2);
//	swap(num1, num2);
//	printf("a=%d b=%d\n", num1,num2);
//
//	return 0;
//}
//#include<stdio.h>
//void swap(int x, int y)//void 没有返回值
//{
//	int a = 0;
//	a = x;
//	x = y;
//	y = a;
//}//因为x y与num1 num2没有关系 程序不能交换
/*#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	*pa=20;
	printf("%d\n", a);
	return 0;
}*///由指针受到启发
//#include<stdio.h>
////void swap1(int x, int y)//void 没有返回值
////{
////	int a = 0;
////	a = x;
////	x = y;
////	y = a;
////}
//void swap2(int* pa, int* pb)
//{
//	int a = 0;
//	a = *pa;
//	*pa = *pb;
//	*pb = a;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("a=%d b=%d\n", num1, num2);
//
//	swap2(&num1, &num2);
//
//	printf("a=%d b=%d\n", num1,num2);
//
//	return 0;
//}
//程序四
//实际参数(实参) 常量 变量 表达式 函数
//形式参数(形参) 函数内部可以用 出去就被销毁
//#include<stdio.h>
//void swap1(int x, int y)//x y 是形参
//{
//	int a = 0;
//	a = x;
//	x = y;
//	y = a;
//}//当实参传给形参的时候
////形参其实是实参的一份临时拷贝
////对形参的修改是不会改变的 所以swap1 函数无法换值
//void swap2(int* pa, int* pb)
//{
//	int a = 0;
//	a = *pa;
//	*pa = *pb;
//	*pb = a;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("a=%d b=%d\n", num1, num2);
//	swap1(num1, num2);//num1 num2 是实参 
//	swap2(&num1, &num2);//&num1 num2是实参
//
//	printf("a=%d b=%d\n", num1,num2);
//
//	return 0;
//}
//函数调用: 传值调用 传址调用
//程序五求素数100到200
//#include<stdio.h>
//int is_prime(int n)
//{
//	//2->n-1
//
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//		
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d", i);
//	}
//	return 0;
//}
//求1000到2000的闰年
//#include<stdio.h>
//int is_leap_year(int y)
//{
//	if((y%4==0&&y%100!=0)||(y%400==0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//数组二分查找
//#include<stdio.h>
//int binary_search(int arr[], int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//传过去的是arr的地址
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//}
//每个加一
//#include<stdio.h>
//void add(int*p)
//{
//    (* p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//程序五函数的嵌套调用和链式访问
//#include<stdio.h>
////int main()
////{
////	int len = 0;
////	//1
////	len = strlen("abc");
////	printf("%d\n", len);
////	//2
////	printf("%d\n", strlen("abc"));
////	return 0;
////}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf返回值为字符个数 打印为4321
//	return 0;
//}
//函数声明和定义
//#include<stdio.h>
//int add(int x.int y);//函数声明要放在主函数前面 或者放在头文件
////自己创造头文件引用时include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = x + y;
//	return 0;
//}
