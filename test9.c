#define _CRT_SECURE_NO_WARNINGS 1
//��������ʵ��
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		printf("����������������:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//    
//	} while (input);
//}
//��������ʵ��
//��ָ��������ʵ��
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//}//��������� ����Ķ�
//�ص�����
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
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}//�ص�����
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	//ppfarr��һ��ָ����ָ�������ָ��
//	int(*(*ppfarr)[4])(int, int) = &pfarr;//ppfarr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
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
//	p("bit");//��ָ������bit ����ȥ��str
//}
//int main()
//{
//	test(print);
//	return 0;
//}