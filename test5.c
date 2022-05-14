#define _CRT_SECURE_NO_WARNINGS 1
//求两数之和
//#include<stdio.h>
//int main()
//{
//	int a=10, b=20,sum=0;
//	sum = a + b;
//	printf("%d ", sum);
//}
//
//求两数中最大的一个
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
//求一元二次方程的根
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a, b, c,disc,x1,x2,p,q;
//	printf("请输入a,b,c的值:");
//	scanf("%d %d %d", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	p = -b / (2 * a);
//	q = sqrt(disc) / (2 * a);
//	x1 = p + q;
//	x2 = p - q;
//	printf("x1=%5.2f\nx2=%5.2f\n", x1, x2);
//}
//设圆半径r=1.5，圆柱高h=3，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。
//#include<stdio.h>
//int main()
//{
//	float h, r, l, s, sq, vq, vz;
//	float pi = 3.1415926;
//	printf("请输入圆的半径r:");
//	scanf("%f", &r);
//	printf("请输入圆柱高h:");
//	scanf("%f", &h);
//	l = 2 * pi * r;
//	s = pi * r * r;
//	sq = 4 * pi * r * r;
//	vq = 3.0 / 4.0 * pi * r * r * r;
//	vz = pi * r * r * h;
//	printf("圆的周长为%6.2f ", l);
//	printf("圆的面积为%6.2f ", s);
//	printf("圆的表面积%6.2f ", sq);
//	printf("圆球的体积为%6.2f ", vq);
//	printf("圆柱的体积为%6.2f ", vz);
//}
//输入一个华氏温度，要求输出摄氏温度。公式为C=5/9（F—32）
//#include<stdio.h>
//int main()
//{
//	float c, f;
//	printf("请输入一个华氏温度:");
//	scanf("%f", &f);
//	c = (5.0/ 9.0)*(f - 32);
//	printf("摄氏温度为:%5.2f\n", c);
//}
//选择结构	4个数的排序（降序）；
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, t;
//	printf("请输入四个数:");
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
//任意输入一个字符，请判断是字母、数字还是特殊字符
//#include<stdio.h>
//int main()
//{
//	char a;
//	printf("请任意输入一个字符:");
//	scanf("%c", &a);
//	if (a >= 48 && a <= 57)
//		printf("这是一个数字！\n");
//	else if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
//		printf("这是字母！\n");
//	else
//		printf("这是特殊字符！\n");
//}
//任意输入10个数，求最大值、最小值、平均值；
//#include<stdio.h>
//int main()
//{
//   int i, j, m, a[10], max, min;
//   float sum = 0;
//   for (i = 0; i < 10; i++)
//   {
//	   printf("输入第%d个数：",i+1);
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
//输入20个数，将所有大于60的数据输出
//#include<stdio.h>
//int main()
//{
//	int a[20];
//	int i, j;
//	for (i = 0; i < 20; i++)
//	{
//		printf("请输入第%d个数:", i + 1);
//		scanf("%d", &a[i]);
//	}
//	for(j=0;j<20;j++)
//	{
//		if (a[j] > 60)
//			printf("%d ", a[j]);
//	}
//	printf("\n");
//}
