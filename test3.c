#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int x = 0, s = 0;
//	while (!x != 0) s += ++x;
//	printf("%d", s);
//
//}
//#include<stdio.h>
//void  fun(int* a, int* b)
//{
//	int* k;
//	k = a; a = b; b = k;
//}
//main()
//{
//	int a = 2004, b = 9, * x = &a, * y = &b;
//	fun(x, y);
//	printf("% d, % d", a, b);
//}
//#include<stdio.h>
//struct  STU
//{
//	char num[10]; float score[3];
//};
//main()
//{
//	struct STU s[3] = {
//		{"20021", 90, 95, 85},
//		{"20022", 95, 80, 75},
//		{"20023", 100,95, 90}
//	}, * p = s;
//	int  i = 0; 
//	float sum = 0;
//	for (i = 0; i < 3; i++)
//		sum = sum + p->score[i];
//	printf(" % 6.2f\n", sum);
//}
//#include<stdio.h>
//void fun(char* a, char* b)
//{
//	while (*a == '*') 
//		a++;
//	while ((*b = *a)!=0)
//	{
//		b++; a++;
//	}
//}
//
//main()
//{
//	char* s = " *****a*b****", t[80];
//	fun(s, t); puts(t);
//}
//#include <stdio.h>
//main()
//{
//	int x = 8;
//	for (; x > 0; x--)
//	{
//		if (x % 3) {
//			printf("%d,", x--);
//			continue;
//		}
//		printf("%d,", --x);
//	}
//
//}
//#include <stdio.h>
//int f(int x)
//{
//	int y;
//	if (x==0||x==1) return(3);
//	y = x * x - f(x - 2);
//	return y;
//}
//main()
//{
//	int z;
//	z = f(3); printf("%d\n", z);
//}
//#include<stdio.h>
//	main()
//	{
//		int i, j, row, column, m;
//		static int array[3][3] = {
//			{100, 200, 300},
//			{28 ,72, -30},
//			{-850, 2, 6}
//		};
//		m = array[0][0];
//		for (i = 0; i < 3; i++)
//			for (j = 0; j < 3; j++)
//				if (array[i][j] < m)
//				{
//					m = array[i][j]; column = j; row = i;
//				}
//		printf(" % d, % d, % d", m, row, column);
//	}
//#include<stdio.h>
//int main()
//{
//	int x = 6;
//	x += x -= x * x;
//	printf("%d", x);
//}
//#include<stdio.h>
//int main()
//{
//	int p[8] = { 11,12,13,14,15,16,17,18 }, i = 0, j = 0;
//	while (i++ < 7)
//		if (p[i] % 2)
//			j += p[i];
//	printf("%d\n", j);
//}
//#include<stdio.h>
//main()
//{
//	int i, s = 0;
//	for (i = 1; i < 10; i += 2)  
//		s += i + 1;
//	printf(" % d\n", s);
//}
//#include<stdio.h>
//void sum(int* a)
//{
//	a[0] = a[1];
//}
//main()
//{
//	int aa[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;
//	for (i = 2; i >= 0; i--)   
//		sum(&aa[i]);
//	printf(" % d\n", aa[0]);
//}
//#include<stdio.h>
//int main()
//{
//	int n; float s;
//	s = 1.0;
//	for (n = 10; n > 1; n--)
//		s = s + 1.0 / n;
//	printf("%6.4f\n", s);
//}
//#include<stdio.h>
//void fun(char* a, char* b)
//{
//	a = b; (*a)++;
//}
//main()
//{
//	char c1 = 'A', c2 = 'a', * p1, * p2;
//	p1 = &c1; p2 = &c2; fun(p1, p2);
//	printf("%c%c\n", c1, c2);
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i < 5; i++)
//		for (j = 2; j <= i; j++) 
//			putchar('#');
//
//}
//#include<stdio.h>
//fun(int x)
//{
//	if (x / 2 > 0) 
//		fun(x / 2);
//	printf("%d ", x);
//}
//main()
//{
//	fun(6);
//}

