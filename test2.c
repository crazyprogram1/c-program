#define _CRT_SECURE_NO_WARNINGS 1
//ָ��������������.
#include<stdio.h>
//����������Ԫ�صĵ�ַ
//1.sizeof����������-��������ʾ��������
//2.&������-��������ʾ��������
//
//һ������
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));// 16 ���������ܴ�С
//	printf("%d\n", sizeof(a + 0));// 4/8 - �����������ʾ��Ԫ�ص�ֵ��a+0 ������Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a));//4  ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof��*a)����4
//	printf("%d\n", sizeof(a + 1));//4  �ڶ���Ԫ�ص�ַ
//	printf("%d\n", sizeof(a[1]));//4 - �ڶ���Ԫ�صĴ�С 
//	printf("%d\n", sizeof(&a));//4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8
//	printf("%d\n", sizeof(*&a));//16 &a����ĵ�ַ���ý����÷��� ������ ������������С��λ���ֽ�
//	printf("%d\n", sizeof(&a+1));//4/8 &a+1 �������������ַ ���ǵ�ַ
//	printf("%d\n", sizeof(&a[0]));//4/8   //��һ��Ԫ�ص�ַ 
//	printf("%d\n", sizeof(&a[0]+1));//4/8 //�ڶ���Ԫ�ص�ַ
//
//}
//int main()
//{
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n", sizeof(arr));// 6*1=6
//	printf("%d\n", sizeof(arr+ 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
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
//	printf("%d\n", strlen(arr));  //���ֵ
//	printf("%d\n", strlen(arr+0));//���ֵ
//	//printf("%d\n", strlen(*arr));//д������ 'a'��97��һֱ�� �������� �������
//	//printf("%d\n", strlen(arr[1]));//д������
//	printf("%d\n", strlen(&arr));//���ֵ����֪��ʲôʱ������\0
//	printf("%d\n", strlen(&arr+1));//���ֵ����һ����6
//	printf("%d\n", strlen(&arr[0]+1));//�ڶ���Ԫ�ؿ�ʼ�� ���ֵ ��1
//}
// ��������
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


