#define _CRT_SECURE_NO_WARNINGS 1
//����һ
//#include<stdio.h>
//int main()
//{
//	short s = 0;//short 2���ֽ�
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2  sֵû�б仯 ����������
//	printf("%d\n", s);//0
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	//0000000 00000000 00000000 00000000
//	//1111111 11111111 11111111 11111111-����
//	//1111111 11111111 11111111 11111110-����
//	//1000000 00000000 00000000 00000001-ԭ��
//	//-1
//	printf("%d\n", ~a);
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//
//	//00000000 0000000 00000000 00001011
//	//00000000 0000000 00000000 00000100
//	//00000000 0000000 00000000 00001111
//	//1<<2;
//	//00000000 00000000 00000000 00000001
//	// <<2
//	//00000000 00000000 00000000 00000100
//	// ~
//	//11111111 11111111 11111111 11111011
//	// &
//	//00000000 00000000 00000000 00001111
//	//00000000 00000000 00000000 00001011
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);
//	printf("%d\n", a++);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);
//	printf("%d\n", a++);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4 
//}
//void test2(char ch[])
//{
//	printf("%d\n",sizeof(ch));//4  ����ȥ������Ԫ�ص�ַ
//}
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//20
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//�߼�������
//#include<stdio.h>
//int main()
//{
//int a = 3;
//int b = 5;
//int c = a && b;
//printf("%d\n", c);
//return 0;
//}//1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}//0
/*#include<stdio.h>
int main()
{
	int a = 0;
	int b = 5;
	int c = a || b;
	printf("%d\n", c);
	return 0;
}*///��Ϊһ ��Ϊ0
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}Ϊ��0
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//����Ǽ� �ұ߾Ͳ�����
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);//1234
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//����Ǽ� �ұ߾Ͳ�����
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//2 3 3 5
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;һ�����涼��
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//1 3 3 4
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	//����ڱ��ʽ
//	b = (a > 5 ? 3 : -3);
//	return 0;
//}//�������ʽ
//�����
//���ű��ʽ
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);//13
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	int d = 0;
//	if (a = b + 1, c = a / 2, d > 0)//��d����0��������� ������0 ��ʲôҲ����
//	{
//		printf("%d %d %d %d\n", a, b, c, d);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		a = get_val();
//		count_val(a);
//	}
//	//����дΪwhile(a = get_val(),count_val(a),a>0){}
//}
//�±����á��������ò�����
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };//��������
//	a[9] = 10;//ʵ���±����ò�����
//	1 + 2;
//	return 0;
//}
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//()���Ǻ������ò�����
//	printf("max=%d\n",max);
//	return 0;
//}
//   .   ->��ʹ��
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct stu s1 = { "����",20,"202268677800" };
//	struct stu *ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	return 0;
//}

