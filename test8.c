#define _CRT_SECURE_NO_WARNINGS 1
//ָ���
//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2="abcdef";
//	//ָ������
//	int* arr[10];
//	char* ch[5];
//	//����ָ��
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//	return 0;
//
//}//�ع�����
//����
//һά���鴫��
/*#include<stdio.h>
void test(int arr[])
{}
void test(int arr[10])
{}
void test(int* arr)
{}
void test2(int *arr[20])
{}
void test2(int**arr)
{}
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}*///����д��������
//��ά���鴫��
//#include<stdio.h>
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[3][])
////{}//����д�� �в���ʡ��
////void test3(int *arr)
////{}err
////void test4(int **arr)
////{}err
//void test5(int (*arr)[5])
//{}//��ȷ��д�� ָ���һ��Ԫ�صĵ�ַ
//int main()
//{
//  int arr[3][5] = { 0 };
//  test(arr);//��ά���鴫��
//  test1(arr);
//  //test2(arr);
//  //test3(arr);
//  //test4(arr);
//  test5(arr);
//  return 0;
//}
//һ��ָ�봫��
//#include<stdio.h>
//void test1(int* p)
//{}
//void test2(char*p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = "w";
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}
//����ָ�봫��
//#include<stdio.h>
//void test(int** p)
//{
//	printf("num=%d\n", **p);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//}
//#include<stdio.h>
//void test(int **p)
//{}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);//���Դ���ַ
//	test(pp);//��ָ��
//	int* arr[10];
//	test(arr);//��ָ������
//	return 0;
//
//}
//����ָ��-��ָ�������ָ��
//����ָ��-��ָ������ָ��
////#include<stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int arr[10] = { 0 };
//	//int (*p)[10] = &arr;
//	//printf("%p\n,", &add);
//	int(*pa)(int, int) = add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}//����ָ���ź�����ַ

//void print(char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hello bit");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	(*(void(*)())0)(); //void(*)() -����ָ������ /��0 ǿ������ת��Ϊ��void(*)()����ָ������ - 0����һ��������ַ
//	                   //����0�ĵ�ַ���ĸú���
//	void (*   signal(int, void(*)(int))      )(int);//signal�������� ��������������һ���Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int������������viod
//	//��ͬ��
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//}
//����ָ������
//#include<stdio.h>
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
//
//	int (*parr[4])(int, int) = {add, sub, mul, div};//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}
//��ϰ
//#include<stdio.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	
//}
//int main()
//{
//	char*(*pf)(char*, const char*) = my_strcpy;
//	char* (*pfarr[4])(char*, const char*);
//}



