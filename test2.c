#define _CRT_SECURE_NO_WARNINGS 1
//����һ
//�����ͱ��� 
//const���γ�����
//#include<stdio.h>
//int main()
//{
//	int num = 4;
//	printf("%d/n", num);
//	num = 8;
//	printf("%d/n", num);
//}//���4����8
//����const int num=4  const-������ ���γ����� �ѱ�����Ϊ����
//#include<stdio.h>
//int main()
//{
//	const int num = 4;
//	printf("%d/n", num);
//	num = 8;//����ͻᱨ��,const�̶�numΪ4��
//	printf("%d/n", num);
//}//const int n=10;in arr[n]={0};n�Ǳ������г����������Բ�������
//const int n=10;in arr[10]={0};
//#include<stdio.h>
//int main()
//{
//	const int n = 10;
//	int arr[n] = { 0 };
//}//�޷�����˵��arr[n]n�Ǳ���
//#include<stdio.h>
//int main()
//{
//	const int n = 10;
//	int arr[10] = { 0 };
//}//�����ȷn�޷�����ֻ����10
//#include<stdio.h>
//#define max 10//define�����ʶ������
//int main()
//{
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}
//ö�ٳ���-һһ�о� �Ա��У�Ů����ɫ ������Щ�����о�
//enum-ö��
//#include<stdio.h>
//enum Sex
//{
//	male,
//	female,
//	secret,
//};
//int main()
//{
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//}

//#include<stdio.h>
//enum Color
//{
//	red,
//	yello,
//	blue,
//};
//int main()
//{
//	enum Color color = blue;
//	printf("%d/n", color);//2
//	return 0;
//}//ö�ٳ������ܸı������Ըģ�����color
//�����
//�ַ�������˫���������
//#include<stdio.h>
//int main()
// {
//	char arr1[] = "abc";//���飬�����0
//	//char arr2[] = { 'a','b','c' };//��ӡabc�����̣����ִ�ӡҪ����0��\0�ǽ�����־
//	char arr2[] = { 'a','b','c',0 };//��ӡabc
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);
//	return 0;
//}//����ascii����ԭ�������ڼ�����洢��2����
//a-97 A-65 0-48
//strlen - �����ַ������ȵ�
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n",strlen (arr1));//3����/0
//	printf("%d\n", strlen(arr2));//�����ֵ�����ҵ�/0����Ϊûд0���������һֱ����������Գ��������.Ҫ��\0
//	return 0;
//}
//ת���ַ� \n - ����  \t - ˮƽ�Ʊ��  \\ - ��б�� ��б�ܿ��Է��ų��ֳ���
//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\"');//"����"���ܴ�ӡ����Ҫ��\",���ת���ַ�
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//13���ַ� \32�ǰ˽��� \tת���ַ�Ϊһ���ַ� \x30Ϊ16���ƣ�����һ���ַ�
//
//}
//ע�� //�ȽϺ�  /**/��̫�� ���鶼��//
//������
//#include<stdio.h>
/*int main()
{
	int input = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
	scanf("%d", &input);
	if (input == 1)
		printf("��offer\n");
	else
		printf("������\n");
	return 0;
}*///��֧��� ѡ�����
//������
//#include<stdio.h>
//int main()
//{
//	int  line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("��һ����Ч�Ĵ���:%d\n",line);
//		line++;
//	}
//	if(line>=20000) 
//	printf("��offer\n");
//	return 0;
//}//ѭ������ʹ��
//������
//����ʹ��
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}//�Զ��庯��
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}//�⺯��
//������
//����:һ����ͬ���ݵĽ��,ע���±�01234...
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}//���������������ӡ����arr[�±�]
//������
//������ ����+ - * / %  ��λ >>���� <<���� λ������ &�� ^��� |��λ��  ��ֵ = += -= *= /= &= ^= |= >>= <<=
//==�ж����  a=a+10 == a+=10 
//��Ŀ������ ���ǣ������������� �ٱ��� 10��0 0��1 - + & sizeof �������/���Ϳռ��С���ֽڣ�~��λȡ��  -- ++ *�����ͣ�
// ԭ�� ���� ���� �������ڴ��д洢�Ƕ����Ʋ��룬��ӡ��ԭ�룬�����һ�Ƿ��룬�з��ŷ����һλ����֮��ȫ��ȡ��
// int b=a++��ʹ�ø�ֵ�ڼӼ� int b=++a�ȼӼӺ�ʹ�ø�ֵ
// int a = ��int��3.14ǿ������ת�� ԭ��3.14��doublתΪint
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//10������Ԫ������ 10*sizeof��int��=40
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//		sz = sizeof(arr) / sizeof(arr[0]);//����=�����С/ÿ��Ԫ�ش�С
//	printf("sz=%d\n", sz);
//	return 0;
//}
//˫Ŀ������ ��Ŀ������
//��ϵ������< > <=  >=  != ==  �߼������� && �߼���  a&&b  ����Ϊ�� һ��ȫ��  || �߼��� һ��Ϊ�� ȫ�ٲż� 
//���������� exp1��exp2 : exp3;  max(a>b?a:b);expΪ���ʽ;    exp1,exp2,exp3....
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	//�൱��//if (a > b)
//		//max = a;
//	//else
//	//	max = b;
//	printf("%d\n", max);
//}
//������ �±�����[]���������÷�()�� .   ->
//�����ؼ���  auto �ֲ����� char int signed �з��� unsigned �޷��� struct �ṹ��ؼ��� ..... 
//typedef - ���Ͷ���- �����ض��� ���԰�unsiged int u_int ���� typedef unsigned int u_int 
//#include<stdio.h>
//int main()
//{
//	typedef unsigned int u_int;
//	u_int num = 20;
//	printf("%d\n", num);
//}
//static���ξֲ�����
//�ֲ��������������ڱ䳤
//static����ȫ�ֱ���
// �ı��˱�������������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
// static���κ����ı��˺����������ԣ�ʹ�ⲿ���ӱ���ڲ�����
// ����Դ�ļ����޷�ʹ����
//#include<stdio.h>
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ����� ������һ�α��ֵ���
//	//int a = 1;//�ֲ�������һ�α��ԭ��1 
//	a++;
//	printf("a=%d\n", a);//2 2 2 2 2
//}
//int main()
//{
//	int i = 0;
//	while (i < 5) 
//	{
//		test();
//		i++;
//	}
//}
//extern���������ⲿ�������Ե����ⲿ���� extern int add ����Ҫ������static�����ĺ������޷�����
