#define _CRT_SECURE_NO_WARNINGS 1
//程序一
//算术操作符
//#include<stdio.h>
//int main()
//{
//	int a = 5 / 2;//商2余1
//	double b = 5 / 2.0;
//	printf("a=%d\n", a);
//	printf("a=%lf\n", b);// %^只能是整型不能是浮点型
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	int c = -1;
//	//>>---右移操作符
//	// 移动的是二进制位
//	//000000000 00000000 00000000 00001000
//	int b = a >> 1;
//	int d = c >> 1;
//	printf("%d\n", b);
//	printf("%d\n",d);
//	return 0;
//}
//右移操作符1. 算术右移  右边丢弃，左边补原符号位 2.逻辑右移 右边丢弃，左边补0
//主要是算术移位
//主要是原码和反码补码问题 
//10000000 00000000 00000000 00000001 -  原码
//11111111 11111111 11111111 11111110 -  反码
//11111111 11111111 11111111 11111111 -  补码
//向右移动一位的话 
//11111111 11111111 11111111 111111111
//首位加回1为符号位所以-1还是-1
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = a << 1;//左移
//	//0000000 0000000 0000000 0000101
//	//左移操作符左边丢弃，右边补0
//	printf("%d\n", b);
//	return 0;
//}
//注意右移就行
//位操作符& | ^
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 00000101
//	//00000000 00000000 00000000 00000001
//	printf("%d\n", c);
//	int d = 3;
//	int e = 5;
//	int f = d | e;
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 00000101
//	//00000000 00000000 00000000 00000111
//	printf("%d\n",f);
//	int g = 3;
//	int h = 5;
//	int i = 3 ^ 5;
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 00000101
//	//00000000 00000000 00000000 00000110
//	//相同为0 不同位一
//	printf("%d\n", i);
//	return 0;
//}
//交换两个值，不能用临时变量
//程序二
//#include<stdio.h>
//int main()
//{
//	//法一可能会溢出
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	//法二
//	int c = 3;
//	int d = 5;
//	c = c ^ d;
//	d = c ^ d;
//	c = c ^ d;
//	printf("%d %d\n", c, d);
//	//011^101=110 110^101=011 011^110=101 
//}
//求一个数的补码二进制有多少个一
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}//有缺陷无法输入负数
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> 1) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//}
//赋值操作符 单目操作符 一个操作符 ！ &(取地址操作符) - + sizeof ~(对一个数二进制取反) -- ++ * （类型）
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	return 0;
//	//a = a + 2;
//	//a += 2;
//	//int b = 15;
//	//b = b >> 2;
//	//b >>= 2;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n",sizeof(a));//4
//	printf("%d\n",sizeof(int));//4
//	
//	printf("%d\n",sizeof(c));//1
//	printf("%d\n",sizeof(char));//1
//
//	printf("%d\n",sizeof(p));//4
//	printf("%d\n",sizeof(char*));//4
//
//	printf("%d\n",sizeof(arr));//40
//	printf("%d\n",sizeof(int[10]));//40
//	return 0;
//}




