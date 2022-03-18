#define _CRT_SECURE_NO_WARNINGS 1
//程序一
//整型提升以int为存储方式
//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	//00000000 0000000 00000000 00000011
//	//00000011 -  a
//	char b = 127;
//	//00000000 00000000 0000000 01111111
//	//01111111 - b
//	char c = a + b;
//	//00000011
//	//+
//	//01111111
//	// =
//	//10000010 - c
//	//10000010 ->
//	//11111111 11111111 11111111 10000010 - 补码// char 有字符有符号的 高位为符号位 10000010 1为符号位 补码全补1
//	//11111111 11111111 11111111 10000001 - 反码
//	//10000000 00000000 00000000 01111110 - 原码 - -126
//	printf("%d\n", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	    printf("a\n");//发生整型提升，
//	printf("%d\n", a);
//	//a - 10110110 - 11111111 11111111 11111111 10110110
//	//11111111 11111111 11111111 10110110
//	//11111111 11111111 11111111 10110101
//	//10000000 00000000 00000000 01001010 - -74
//	//不相等
//	if (b == 0xb600)
//		printf("b\n");//短整型也会整型提升
//	if (c == 0x6000000)
//		printf("c\n");
//}
//只要参与运输就会发生整型提升
//#include<stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//}
//程序二
//操作符的优先级性
//#include<stdio.h>
//int fun()
//{
//static int count = 1;
//return ++count;
//}
//int main()
//{
//	int answer;
//		answer = fun() - fun() * fun();
//		printf("%d\n", answer);
//		return 0;
//}//问题代码
//表达式太复杂有时会出错，在不同编译器会有不同结果
//指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}
//指针就是一个变量，里面存着地址
//#include<stdio.h>
//int main()
//{
//int a = 0x11223344;
//int* pa = &a;
//char* pc = &a;
//printf("%p\n", pa);//4
//printf("%p\n", pc);//4
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//int a = 0x11223344;
//int* pa = &a;
//*pa = 0;//解应用时int*p可以访问4个字节 把内存中11 22 33 44 都改0
//int b = 0x11223344;
//int* pb = &b;
//*pb = 0;//解应用时可以访问2个字节 把内存中改为00 22 33 44 
//}//double*p *p可以访问8个字节
//指针类型决定走一步走多远(指针的步长)
//int*p;p+1 -->4 走4个字节
//char*p;p+1-->1 走1个字节
//double*p;p+1 --> 8 走八个字节
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//取第一个地址
//	int i = 0;//假如改为char*p 则改不了只能改3个
//	for (i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;
//	}
//	//把数组中所以元素 0改为1
//	return 0;
//}//所以以后动内存要注意内存类型
//程序三
//野指针 指的位置不可知的
// 1
//#include<stdio.h>
//int main()
//{
//	int *p;//不知道指什么空间的内存就是野指针
//	*p = 20;
//	return 0;
//}
// 2
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)//超过范围也是野指针
//	{
//		*(p + 1) = 1;
//	}
//	return 0;
//}
// 3
//#include<stdio.h>
//int *test()
//{
//	int a = 10;
//	return &a;
//}//空间已经被释放 会产生野指针
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//如何避免野指针
//1.指针要初始化 int*p=&a 或 int *p=NULL 2.小心指针越界 3.指针指向空间释放即使置NULL pa=NULL 
//4.指针使用之前检查有效性 
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa != NULL)
//	{
//
//	}
//	return 0;
//}//指针可是释放内存
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}//指针减指针是元素个数 不同类型的不能相减
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}//指针求数组元素的方法
//int main()
//{
//	char arr[] = "bit";
//	int len= my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//
//}//指针减指针是元素个数
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//首个元素地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//首个元素的地址
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//整个数组地址
//	printf("%p\n", &arr+1);
//	//1.&arr-&数组名-数组名不是首个元素地址-数组名表示整个数组-&数组名 取出的是整个数组的地址
//	//2.sizeof(arr)-sizeof(数组名)-数组名表示的整个数组-sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}
//二级指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;                             
//	int*** pppa = &ppa;
//	printf("%d\n",* * *pppa);
//}