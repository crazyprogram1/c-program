#define _CRT_SECURE_NO_WARNINGS 1
//指针
//#include<stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//32 位等于1 62 位等于2
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char *pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";//把首地址赋予指针
//	//*p = 'w';//会报错这样写不行的 abdef 常量字符串是不能改的
//	//printf("s\n", p);
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "avcdef";
//	char* p = "abcdef";
//	char* p1 = "abcdef";
//	if (p == p1)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//}
//指针数组
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组=指针数组
//	char* ch[5];//存放字符指针的数组=指针数组
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int i = 0;
//	int* ch[4] = { &a,&b,&c,&d };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(ch[i]));
//	}
//	return 0;
//}
//指针数组正确用法
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6,};
//	int* parr[] = {arr1,arr2,arr3};//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//}
//数组指针 - 是指针
//#include<stdio.h>
//int main()
//{
//	int* p = NULL;//p是整型指针 - 指向整型的指针-可以存放整型的地址
//	char* pc = NULL;//pc是字符指针-指向字符的地址- 可以存放字符的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*parr)[10] = &arr;//数组指针-指向数组的指针-存放数组的地址
//	//parr就是数组指针
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;//char* 元素类型 
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;		
//}
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//}
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址
//	return 0;
//}//把arr当成一维数组

//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7} };
//	print2(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[5];          //arr是一个5个元素的整型数组
//	int* parr1[10];      //parr1 是一个数组，数组10个元素，每个元素的类型是int* ，parr1是指针数组
//	int(*parr2)[10];     //parr2 是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是in - parr2是数组指针
//	int(*parr3[10])[5]; //parr3 是个数组，该数组有10个元素，每个元素是一个数组指针 该元素指针指向数组有5个元素，每个元素是int
//
//}