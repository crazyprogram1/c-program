#define _CRT_SECURE_NO_WARNINGS 1
//指针二
//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2="abcdef";
//	//指针数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//	return 0;
//
//}//回顾内容
//传参
//一维数组传参
/*#include<stdio.h>
void test(int arr[])
{}
void test(int arr[10])
{}
void test(int* arr)
{}
void test2(int *arr[20])
{}
void test2(int**arr)
{}
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}*///以上写法都可以
//二维数组传参
//#include<stdio.h>
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[3][])
////{}//错误写法 列不能省略
////void test3(int *arr)
////{}err
////void test4(int **arr)
////{}err
//void test5(int (*arr)[5])
//{}//正确的写法 指向第一行元素的地址
//int main()
//{
//  int arr[3][5] = { 0 };
//  test(arr);//二维数组传参
//  test1(arr);
//  //test2(arr);
//  //test3(arr);
//  //test4(arr);
//  test5(arr);
//  return 0;
//}
//一级指针传参
//#include<stdio.h>
//void test1(int* p)
//{}
//void test2(char*p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = "w";
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}
//二级指针传参
//#include<stdio.h>
//void test(int** p)
//{
//	printf("num=%d\n", **p);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//}
//#include<stdio.h>
//void test(int **p)
//{}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);//可以传地址
//	test(pp);//传指针
//	int* arr[10];
//	test(arr);//传指针数组
//	return 0;
//
//}
//数组指针-是指向数组的指针
//函数指针-是指向函数的指针
////#include<stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int arr[10] = { 0 };
//	//int (*p)[10] = &arr;
//	//printf("%p\n,", &add);
//	int(*pa)(int, int) = add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}//函数指针存放函数地址

//void print(char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hello bit");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	(*(void(*)())0)(); //void(*)() -函数指针类型 /把0 强制类型转换为：void(*)()函数指针类型 - 0就是一个函数地址
//	                   //调用0的地址处的该函数
//	void (*   signal(int, void(*)(int))      )(int);//signal函数声明 有两个参数，第一个是函数指针，该函数指针指向的函数参数是int，返回类型是viod
//	//等同于
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//}
//函数指针数组
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//
//	int (*parr[4])(int, int) = {add, sub, mul, div};//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}
//练习
//#include<stdio.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	
//}
//int main()
//{
//	char*(*pf)(char*, const char*) = my_strcpy;
//	char* (*pfarr[4])(char*, const char*);
//}



