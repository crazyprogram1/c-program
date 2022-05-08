#define _CRT_SECURE_NO_WARNINGS 1
//指针数组笔试题解析.
#include<stdio.h>
//数组名是首元素的地址
//1.sizeof（数组名）-数组名表示整个数组
//2.&数组名-数组名表示整个数组
//
//一堆数组
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));// 16 计算数组总大小
//	printf("%d\n", sizeof(a + 0));// 4/8 - 数组名这里表示首元素的值，a+0 还是首元素地址
//	printf("%d\n", sizeof(*a));//4  数组名表示首元素地址，*a就是首元素，sizeof（*a)就是4
//	printf("%d\n", sizeof(a + 1));//4  第二个元素地址
//	printf("%d\n", sizeof(a[1]));//4 - 第二个元素的大小 
//	printf("%d\n", sizeof(&a));//4/8 &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8
//	printf("%d\n", sizeof(*&a));//16 &a数组的地址，用解引用访问 抵消了 计算的是数组大小单位是字节
//	printf("%d\n", sizeof(&a+1));//4/8 &a+1 跳过整个数组地址 还是地址
//	printf("%d\n", sizeof(&a[0]));//4/8   //第一个元素地址 
//	printf("%d\n", sizeof(&a[0]+1));//4/8 //第二个元素地址
//
//}
//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n", sizeof(arr));// 6*1=6
//	printf("%d\n", sizeof(arr+ 0));//4/8 arr是首元素的地址，arr+0还是首元素的地址 地址的大小是4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr + 1));//4/8 第二个元素的地址
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(*&arr));//6
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0]));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));  //随机值
//	printf("%d\n", strlen(arr+0));//随机值
//	//printf("%d\n", strlen(*arr));//写法错误 'a'是97会一直算 读不出来 错误代码
//	//printf("%d\n", strlen(arr[1]));//写法错误
//	printf("%d\n", strlen(&arr));//随机值，不知道什么时候遇到\0
//	printf("%d\n", strlen(&arr+1));//随机值和上一个差6
//	printf("%d\n", strlen(&arr[0]+1));//第二个元素开始算 随机值 差1
//}
// 广大程序题
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 5; i++)
//	{
//		if (i % 2)
//			putchar('<');
//		else
//			continue;
//		putchar('>');
//	}
//	putchar('#');
//}
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char s[6];
//	int n;
//	gets(s);
//	if (*s == '-')
//		n = -chnum(s + 1);
//	else n = chnum(s);
//	printf("%d\n", n);
//}
//chnum(char* p)
//{
//	int num = 0, k, len, j;
//	len = strlen(p);
//	for (; *p != '\0'; p++)
//	{
//		k = *p - 48;
//		j = (--len);
//		while (j--)
//		{
//			k = k * 10;
//		}
//		num = num + k;
//	}
//	return(num);
//}
//#include<stdio.h>
//main()
//{
//    int k;
//    for (k = 1; k < 5; k++) {
//        if (k % 2)  printf("*");
//        else continue;
//        printf("#");
//    }
//}
//#include<stdio.h>
//main()
//{
//	static int a[] = { 5,3,7,2,1,5,4,10 };
//	int s = 0, k;
//	for (k = 0; k < 8; k += 2)
//		s += *(a + k);
//
//}
//# include <stdio.h>
//int f(int x)
//{
//	static y = 1;
//	y++;
//	x += y;
//	return x;
//}
//void main()
//{
//	int k;
//	k = f(3);
//	printf("%d  %d\n", k, f(k));
//
////}
//#include<stdio.h>
//int main()
//{
//	int  k; char* s = "ABC";
//	for (k = 10; k != 0; k--);
//	printf("%d", k);
//	while (*s++)  putchar(*s);
//
//}
//#include <stdio.h>
//#define DOUBLE(r)   r*r
//main()
//{
//	int x = 9, y = 6, t;
//	t = DOUBLE(x + y);
//	printf("%d\n" , t);
//}
//#include<stdio.h>
//struct
//{
//    int x;
//    char* y;
//} tab[2] = { {1,"ab"},{2,"cd"}}, * p = tab;
//int main()
//{
//    printf("%c\n", (*p->y));
//}
//#include <stdio.h>
//void sub(int x, int y, int* z)
//{
//	*z = x - y;
//}
//void main()
//{
//	int a = 0, x = 5, y = 10;
//	sub(y, x, &a);
//	printf("%d\n", a);
//}
//#include <stdio.h>
//void main()
//{
//	int a[5] = { 10,20,30,40,50 };
//	int* p = &a[2];
//	printf("%d,", *p++);
//	printf("%d", *p);
//}
//#include <stdio.h>
//typedef struct date {
//	int cat;
//	long L;
//	char c[10];
//} TOO;
//main()
//{
//	printf("%d\n", sizeof(TOO));
//	printf("%d\n", sizeof(long));
//}
//#include <stdio.h>
//fun2(int a, int b)
//{
//	int c;
//	c = a * b % 3;
//	return c;
//}
//fun1(int a, int b)
//{
//	int c;
//	a += a; b += b;
//	c = fun2(a, b);
//	return c * c;
//}
//main()
//{
//	int x = 11, y = 19;
//	printf("%d\n", fun1(x, y));
//}


