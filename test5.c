#define _CRT_SECURE_NO_WARNINGS 1
//������֮��
//#include<stdio.h>
//int main()
//{
//	int a=10, b=20,sum=0;
//	sum = a + b;
//	printf("%d ", sum);
//}
//
//������������һ��
//#include<stdio.h>
//int max(int* pa, int* pb)
//{
//	if (pa > pb)
//		printf("%d", *pa);
//	else
//		printf("%d", *pb);
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int* pa,*pb;
//	pa = &a;
//	pb = &b;
//	max(pa,pb);
//	
//}
//��һԪ���η��̵ĸ�
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c,disc,x1,x2,p,q;
//	printf("������a,b,c��ֵ:");
//	scanf("%d %d %d", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	p = -b / (2 * a);
//	q = sqrt(disc) / (2 * a);
//	x1 = p + q;
//	x2 = p - q;
//	printf("x1=%5.2f\nx2=%5.2f\n", x1, x2);
//}
//��Բ�뾶r=1.5��Բ����h=3����Բ�ܳ���Բ�����Բ��������Բ�������Բ�������
//#include<stdio.h>
//int main()
//{
//	float h, r, l, s, sq, vq, vz;
//	float pi = 3.1415926;
//	printf("������Բ�İ뾶r:");
//	scanf("%f", &r);
//	printf("������Բ����h:");
//	scanf("%f", &h);
//	l = 2 * pi * r;
//	s = pi * r * r;
//	sq = 4 * pi * r * r;
//	vq = 3.0 / 4.0 * pi * r * r * r;
//	vz = pi * r * r * h;
//	printf("Բ���ܳ�Ϊ%6.2f ", l);
//	printf("Բ�����Ϊ%6.2f ", s);
//	printf("Բ�ı����%6.2f ", sq);
//	printf("Բ������Ϊ%6.2f ", vq);
//	printf("Բ�������Ϊ%6.2f ", vz);
//}
//����һ�������¶ȣ�Ҫ����������¶ȡ���ʽΪC=5/9��F��32��
//#include<stdio.h>
//int main()
//{
//	float c, f;
//	printf("������һ�������¶�:");
//	scanf("%f", &f);
//	c = (5.0/ 9.0)*(f - 32);
//	printf("�����¶�Ϊ:%5.2f\n", c);
//}
//ѡ��ṹ	4���������򣨽��򣩣�
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, t;
//	printf("�������ĸ���:");
//	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (a < d)
//	{
//		t = a; a = d; d = t;
//	}
//	if (b < c)
//	{
//		t = b; b = d; d = t;
//	}
//	if (b < d)
//	{
//		t = b;
//		b = d;
//		d = t;
//
//	}
//	if (c < d)
//	{
//		t = c;
//		c = d;
//		d = t;
//	}
//	printf("%d %d %d %d\n", a, b, c, d);
//}
//��������һ���ַ������ж�����ĸ�����ֻ��������ַ�
//#include<stdio.h>
//int main()
//{
//	char a;
//	printf("����������һ���ַ�:");
//	scanf("%c", &a);
//	if (a >= 48 && a <= 57)
//		printf("����һ�����֣�\n");
//	else if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
//		printf("������ĸ��\n");
//	else
//		printf("���������ַ���\n");
//}
//��������10�����������ֵ����Сֵ��ƽ��ֵ��
//#include<stdio.h>
//int main()
//{
//   int i, j, m, a[10], max, min;
//   float sum = 0;
//   for (i = 0; i < 10; i++)
//   {
//	   printf("�����%d������",i+1);
//	   scanf("%d", &a[i]);
//	   sum = sum + a[i];
//   }
//   min = a[0];
//   max = a[0];
//   for (m = 0; m < 10; m++)
//   {
//	   max = max > a[m + 1] ? max : a[m + 1];
//   }
//   for (j = 0; j < 10; m++)
//   {
//	   min = min < a[j + 1] ? min : a[j + 1];
//   }
//   printf("max=%d\nmin=%d\naverage=%0.2f\n", max, min, sum / 10);
//}
//����20�����������д���60���������
//#include<stdio.h>
//int main()
//{
//	int a[20];
//	int i, j;
//	for (i = 0; i < 20; i++)
//	{
//		printf("�������%d����:", i + 1);
//		scanf("%d", &a[i]);
//	}
//	for(j=0;j<20;j++)
//	{
//		if (a[j] > 60)
//			printf("%d ", a[j]);
//	}
//	printf("\n");
//}
