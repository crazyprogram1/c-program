#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int test1()
//{
//	int k = 7, x = 12;
//	x %= (k %= 5);
//	
//	printf("%d\n", x);
//	printf("%d\n", k);
//}
//int test2()
//{
//	int k = 7, x = 12;
//	x %= (k - k % 5);
//	printf("%d\n", x);
//	printf("%d\n", k);
//}
//int test3()
//{
//	int k = 7, x = 12;
//	x %= k - k % 5;
//	printf("%d\n", x);
//	printf("%d\n", k);
//}
//int test4()
//{
//	int k = 7, x = 12;
//	(x%= k) - (k %= 5);
//	printf("%d\n", x);
//	printf("%d\n", k);
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	test4();
//}
//#include<stdio.h>
//main()
//{
//    int i, n = 0;
//    for (i = 2; i < 5; i++)
//    {
//        do
//        {
//            if (i % 3)  continue;
//            n++;
//        } while (!i);
//        n++;
//    }
//    printf("n=%d\n", n);
//}
//#include<stdio.h>
//int main()
//{
//	int i, k = 0;
//	for (i = 1; i < 5; i++)
//	{
//		if (i % 3 != 0) 
//			continue;
//		k++;
//	}
//	printf("%d,%d\n", i, k);
//}
//#include <stdio.h>
//int func(int n)
//{
//	if (n == 1) return 10;
//	else return func(n - 1) + 5;
//}
//void main()
//{
//	printf("%d", func(4));
//}
//#include<stdio.h>
//void sub(int x, int y, int* z)
//{
//	*z = x - y;
//}
//void main()
//{
//	int a = 0;
//	sub(20, 10, &a);
//	printf("%d", a);
//}
//#include<stdio.h>
//int main()
//{
//	printf(" | % 8.5f | \n", 3461.45);
//}
//#include<stdio.h>
//int main()
//{
//    int k, g;
//    k = 017;  g = 14;
//    printf("%d,", ++k);
//    printf("%x", g++);
//
//}
//#include<stdio.h>
//int main()
//{
//	int  b[2][3] = { 1,2,3,4,5,6 }, (*p)[3];
//	p = b;
//	int i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d\n", (*(p + i))[j]);
//		}
//	}
//}
//#include<stdio.h>
//main()
//{
//	int a = 0, b = 0, c = 0;
//	if (a++ > 0 && b++ > 0)
//		++c;
//	printf("\na = % d, b = % d, c = % d", a, b, c);
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 5; i++)
//	{
//		if (i % 2)printf("*");
//		else continue;
//		printf("#");
//	}
//	printf("$\n");
//}
//#include<stdio.h>
//void main()
//{
//	int x = 2, y = -1, z = 2;
//	if (x < y)
//		if (y < 0)z = 0;
//		else z += 1;
//	printf("%d\n", z);
//}
//#include<stdio.h>
//void main()
//{
//	int x = 2, y = -1, z = 2;
//	if (x < y)
//		if (y < 0)z = 0;
//		else z += 1;
//	printf("%d\n", z);
//}
//#include <stdio.h>
//int fun(int value)
//{
//	if (value <= 0)return(-1);
//	else if (value == 1) return(1);
//	else return (2 + fun(value - 1));
//}
//void main()
//{
//	printf("%d", fun(4));
//}
