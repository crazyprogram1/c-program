#define _CRT_SECURE_NO_WARNINGS 1
////��һԪ���η���ax^2+bx+c=0�ĸ�(ʵ�������)��a��b��c�˹�����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c,disc,x1,x2,realpart,imagpart;
//	printf("����������ϵ��");
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
//����һ��������5λ����������Ҫ��;
//1.������Ǽ�λ����
//2.�ֱ�����ÿ������
//3.�����������λ���֡�
//#include<stdio.h>
//#include<math.h>
//void main(void)
//{
//	long int num;
//	int indiv, ten, hundred, thousand, ten_thousand, place;
//	printf("������һ������(0-99999):");
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
//	printf("λ��=%d\n", place);
//	printf("ÿ������Ϊ: ");
//	ten_thousand = num / 10000;
//	thousand = (int)(num - ten_thousand * 10000) / 1000;
//	hundred = (int)(num - ten_thousand * 10000 - thousand * 1000) / 100;
//	ten = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
//	indiv = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10);
//	switch (place)
//	{
//	case 5:
//		printf("%d,%d,%d,%d,%d", ten_thousand, thousand, hundred, ten, indiv);
//		printf("\n��������Ϊ��");
//		printf("%d%d%d%d%d\n", indiv, ten, hundred, thousand, ten_thousand);
//		break;
//	case 4:
//		printf("%d,%d,%d,%d", thousand, hundred, ten, indiv);
//		printf("\n��������Ϊ��");
//		printf("%d%d%d%d\n", indiv, ten, hundred, thousand);
//		break;
//	case 3:
//		printf("%d,%d,%d", hundred, ten, indiv);
//		printf("\n��������Ϊ��");
//		printf("%d%d%d\n", indiv, ten, hundred);
//		break;
//	case 2:
//		printf("%d,%d,%d", ten, indiv);
//		printf("\n��������Ϊ��");
//		printf("%d%d%d\n", indiv, ten);
//		break;
//	case 1:
//		printf("%d,%d,%d", indiv);
//		printf("\n��������Ϊ��");
//		printf("%d%d%d\n", indiv);
//		break;
//	}
//}
//���һ�ȱ����е�ǰʮ�����͡�(��������͹��ȹ���)
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long int a,q,i,sum=0;
//loop:printf("������ȱ����е�����a=");
//	scanf("%ld", &a);
//	printf("������ȱ����еĹ���q=");
//	scanf("%ld", &q);
//	if (q == 0)
//	{
//		printf("����������󣬵ȱ����еĹ��Ȳ���Ϊ0������������\n");
//		goto loop;
//	}
//	else
//	{
//		printf("�ȱ�����ǰʮ��Ϊ��");
//		for (i = 0; i < 10; i++)
//		{
//			a = a * q;
//			sum = sum + a / q;
//			printf("%ld ", a / q);
//		}
//		printf("\n���к�sum=%ld\n", sum);
//	}
//}