#define _CRT_SECURE_NO_WARNINGS 1
//�����ݹ� ��������ı�̼��� �Ѵ��»�С
//�ڴ���������洢-ջ�� - �ֲ����� �����β�  ���� - ��̬���� �ڴ� malloc calloc  ��̬��- ȫ�ֱ��� static���εı���  ��̬��
/*#include<stdio.h>
int main()
{
	printf("hhhh\n");
	main();
	return 0;
}*///��һֱ��ӡhhhh ֱ��ջ�����
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}//�����ĵݹ�ʹ��
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12)34
//	//print(1)234
//	return 0;
//}//�ݹ�ʹ��Ҫ����������Ȼ��һֱ��������
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�õݹ鷽���������鳤��
//int my_strlen(char* str)
//{
//	if (* str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	/*int len = strlen(arr);
//	printf("len=%d\n", len);*/
//	int len =my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//�ݹ�ӵ�����n�Ľײ�
//#include<stdio.h>
//int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}//��ͨд��
//int fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//����n��쳲��������е�����
#include<stdio.h>
//int fib(int n)
//{
//
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}������
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
