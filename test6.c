#define _CRT_SECURE_NO_WARNINGS 1
////求一元二次方程ax^2+bx+c=0的根(实根或虚根)，a，b，c人工输入
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c,disc,x1,x2,realpart,imagpart;
//	printf("请输入三个系数");
//	scanf("%f,%f,%f", &a, &b, &c);
//	printf("the equation");
//	if (fabs(a) <= 1e-6)
//		printf("is not a quadratic\n");
//	else
//	{
//		disc = b * b - a * a * c;
//		if (fabs(disc) <= 1e-6)
//			printf("has two equal roots:%8.4f\n", -b / (2 * a));
//		else
//			if (disc > 1e-6)
//			{
//				x1 = (-b + sqrt(disc)) / (2 * a);
//				x2 = (-b - sqrt(disc)) / (2 * a);
//				printf("has ditinct real root:%8.4f and %8.4f\n", x1, x2);
//			}
//			else
//			{
//				realpart = -b / (2 * a);
//				imagpart = sqrt(-disc) / (2 * a);
//				printf("has complex roots:\n");
//				printf("%8.4f+%8.4f\n", realpart, imagpart);
//				printf("%8.4f-%8.4f\n", realpart, imagpart);
//			}
//	}
//
//}
//给你一个不多于5位的正整数，要求;
//1.求出它是几位数；
//2.分别输入每个数；
//3.按逆序输出各位数字。
//#include<stdio.h>
//#include<math.h>
//void main(void)
//{
//	long int num;
//	int indiv, ten, hundred, thousand, ten_thousand, place;
//	printf("请输入一个整数(0-99999):");
//	scanf("%ld", &num);
//	if (num > 9999)
//		place = 5;
//	else if (num > 999)
//		place = 4;
//	else if (num > 99)
//		place = 3;
//	else if (num > 9)
//		place = 2;
//	else place = 1;
//	printf("位数=%d\n", place);
//	printf("每个数字为: ");
//	ten_thousand = num / 10000;
//	thousand = (int)(num - ten_thousand * 10000) / 1000;
//	hundred = (int)(num - ten_thousand * 10000 - thousand * 1000) / 100;
//	ten = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
//	indiv = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10);
//	switch (place)
//	{
//	case 5:
//		printf("%d,%d,%d,%d,%d", ten_thousand, thousand, hundred, ten, indiv);
//		printf("\n反序数字为：");
//		printf("%d%d%d%d%d\n", indiv, ten, hundred, thousand, ten_thousand);
//		break;
//	case 4:
//		printf("%d,%d,%d,%d", thousand, hundred, ten, indiv);
//		printf("\n反序数字为：");
//		printf("%d%d%d%d\n", indiv, ten, hundred, thousand);
//		break;
//	case 3:
//		printf("%d,%d,%d", hundred, ten, indiv);
//		printf("\n反序数字为：");
//		printf("%d%d%d\n", indiv, ten, hundred);
//		break;
//	case 2:
//		printf("%d,%d,%d", ten, indiv);
//		printf("\n反序数字为：");
//		printf("%d%d%d\n", indiv, ten);
//		break;
//	case 1:
//		printf("%d,%d,%d", indiv);
//		printf("\n反序数字为：");
//		printf("%d%d%d\n", indiv);
//		break;
//	}
//}
//输出一等比数列的前十项，并求和。(输入首项和公比公比)
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long int a,q,i,sum=0;
//loop:printf("请输入等比数列的首项a=");
//	scanf("%ld", &a);
//	printf("请输入等比数列的公比q=");
//	scanf("%ld", &q);
//	if (q == 0)
//	{
//		printf("数据输入错误，等比数列的公比不能为0，请重新输入\n");
//		goto loop;
//	}
//	else
//	{
//		printf("等比数列前十项为：");
//		for (i = 0; i < 10; i++)
//		{
//			a = a * q;
//			sum = sum + a / q;
//			printf("%ld ", a / q);
//		}
//		printf("\n数列和sum=%ld\n", sum);
//	}
//}