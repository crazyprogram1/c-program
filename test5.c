#define _CRT_SECURE_NO_WARNINGS 1
//��ҵ��Ŀ�Ÿ���ҵ
//1.3�����Ӵ�С���
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;	
//}
//��ҵ��
//дһ�������ӡ1-100֮�����е�3����������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d", i);
//	}
//}
//��ҵ���������������Լ��
//#include<stdio.h>
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)
//	{
//	/*	r = m % n;*/
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//}
//��ҵ�Ĵ�ӡ�����ӡ1000��2000֮���
// 1.���Ա�4�������������Ա�100����
// 2.���Ա�400����
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//{
//		//	if (year % 4 == 0 && year % 100 != 0)
//		//	{
//		//		printf("%d ", year);
//		//		count++;
//		//	}
//		//	else if (year % 400 == 0)
//		//	{
//		//		printf("%d ", year);
//		//		count++;
//		//	}
//		//}
//		if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//}
//��ҵ���ӡ100��200������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�������1.�Գ��� ����2��i-1������ȥ����n
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//		return 0;
//}
//���������i=a*b a����b��������һ������<=��ƽ��i 
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�������1.�Գ��� ����2��i-1������ȥ����n
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//		return 0;
//}
//��ҵ��1��100�г��ֶ��ٸ�����9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n ",count);
//	return 0;
//}
//��ҵ�߷�����ͼ���1/1-1/2+1/3-1/4........+1/99-1/100��ֵ����ӡ�����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//��ҵ����10���������ֵ
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//��ҵ�˳˷��ھ�
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��ҵ�Ŷ��ֲ���
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}//���ַ�