#define _CRT_SECURE_NO_WARNINGS 1
//计算器的实现
//#include<stdio.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("****  1.add     2.sub ****\n");
//	printf("****  3.mul     4.div ****\n");
//	printf("****       0.exit     ****\n");
//	printf("**************************\n");
//}
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
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		printf("请输入两个操作数:>");
//		scanf("%d%d", &x,&y);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", add(x, y));
//				break;
//		case 2:
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//    
//	} while (input);
//}
//计算器的实现
//用指针数组来实现
//#include<stdio.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("****  1.add     2.sub ****\n");
//	printf("****  3.mul     4.div ****\n");
//	printf("****  5.xpr     0.exit****\n");
//	printf("**************************\n");
//}
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
//int xor (int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfarr[])(int, int)={0,add,sub,mul,div,xor};
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//}//代码更简练 方便改动
//回调函数
//#include<stdio.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("****  1.add     2.sub ****\n");
//	printf("****  3.mul     4.div ****\n");
//	printf("****       0.exit     ****\n");
//	printf("**************************\n");
//}
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
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}//回调函数
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			calc(add);
//				break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);;
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//    
//	} while (input);
//}
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10]= & arr;
//	int(*pfarr[4])(int, int);
//	//ppfarr是一个指向函数指针数组的指针
//	int(*(*ppfarr)[4])(int, int) = &pfarr;//ppfarr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
//	//
//	return 0;
//}
//#include<stdio.h>
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");//把指针内容bit 传过去给str
//}
//int main()
//{
//	test(print);
//	return 0;
//}