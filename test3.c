#define _CRT_SECURE_NO_WARNINGS 1
//����һ
//����������intΪ�洢��ʽ
//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	//00000000 0000000 00000000 00000011
//	//00000011 -  a
//	char b = 127;
//	//00000000 00000000 0000000 01111111
//	//01111111 - b
//	char c = a + b;
//	//00000011
//	//+
//	//01111111
//	// =
//	//10000010 - c
//	//10000010 ->
//	//11111111 11111111 11111111 10000010 - ����// char ���ַ��з��ŵ� ��λΪ����λ 10000010 1Ϊ����λ ����ȫ��1
//	//11111111 11111111 11111111 10000001 - ����
//	//10000000 00000000 00000000 01111110 - ԭ�� - -126
//	printf("%d\n", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	    printf("a\n");//��������������
//	printf("%d\n", a);
//	//a - 10110110 - 11111111 11111111 11111111 10110110
//	//11111111 11111111 11111111 10110110
//	//11111111 11111111 11111111 10110101
//	//10000000 00000000 00000000 01001010 - -74
//	//�����
//	if (b == 0xb600)
//		printf("b\n");//������Ҳ����������
//	if (c == 0x6000000)
//		printf("c\n");
//}
//ֻҪ��������ͻᷢ����������
//#include<stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//}
//�����
//�����������ȼ���
//#include<stdio.h>
//int fun()
//{
//static int count = 1;
//return ++count;
//}
//int main()
//{
//	int answer;
//		answer = fun() - fun() * fun();
//		printf("%d\n", answer);
//		return 0;
//}//�������
//���ʽ̫������ʱ������ڲ�ͬ���������в�ͬ���
//ָ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}
//ָ�����һ��������������ŵ�ַ
//#include<stdio.h>
//int main()
//{
//int a = 0x11223344;
//int* pa = &a;
//char* pc = &a;
//printf("%p\n", pa);//4
//printf("%p\n", pc);//4
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//int a = 0x11223344;
//int* pa = &a;
//*pa = 0;//��Ӧ��ʱint*p���Է���4���ֽ� ���ڴ���11 22 33 44 ����0
//int b = 0x11223344;
//int* pb = &b;
//*pb = 0;//��Ӧ��ʱ���Է���2���ֽ� ���ڴ��и�Ϊ00 22 33 44 
//}//double*p *p���Է���8���ֽ�
//ָ�����;�����һ���߶�Զ(ָ��Ĳ���)
//int*p;p+1 -->4 ��4���ֽ�
//char*p;p+1-->1 ��1���ֽ�
//double*p;p+1 --> 8 �߰˸��ֽ�
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//ȡ��һ����ַ
//	int i = 0;//�����Ϊchar*p ��Ĳ���ֻ�ܸ�3��
//	for (i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;
//	}
//	//������������Ԫ�� 0��Ϊ1
//	return 0;
//}//�����Ժ��ڴ�Ҫע���ڴ�����
//������
//Ұָ�� ָ��λ�ò���֪��
// 1
//#include<stdio.h>
//int main()
//{
//	int *p;//��֪��ָʲô�ռ���ڴ����Ұָ��
//	*p = 20;
//	return 0;
//}
// 2
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)//������ΧҲ��Ұָ��
//	{
//		*(p + 1) = 1;
//	}
//	return 0;
//}
// 3
//#include<stdio.h>
//int *test()
//{
//	int a = 10;
//	return &a;
//}//�ռ��Ѿ����ͷ� �����Ұָ��
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//��α���Ұָ��
//1.ָ��Ҫ��ʼ�� int*p=&a �� int *p=NULL 2.С��ָ��Խ�� 3.ָ��ָ��ռ��ͷż�ʹ��NULL pa=NULL 
//4.ָ��ʹ��֮ǰ�����Ч�� 
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa != NULL)
//	{
//
//	}
//	return 0;
//}//ָ������ͷ��ڴ�
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}//ָ���ָ����Ԫ�ظ��� ��ͬ���͵Ĳ������
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}//ָ��������Ԫ�صķ���
//int main()
//{
//	char arr[] = "bit";
//	int len= my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//
//}//ָ���ָ����Ԫ�ظ���
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//�׸�Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//�׸�Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//���������ַ
//	printf("%p\n", &arr+1);
//	//1.&arr-&������-�����������׸�Ԫ�ص�ַ-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr)-sizeof(������)-��������ʾ����������-sizeof(������)���������������Ĵ�С
//	return 0;
//}
//����ָ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;                             
//	int*** pppa = &ppa;
//	printf("%d\n",* * *pppa);
//}