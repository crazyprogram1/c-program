//��һ������
/*#include <stdio.h>//����һ����stdio��h���ļ�
//std-��׼ standard input output
int main()//����������ֻ��һ��
{
	printf("hello world\n");
	return 0;

}*/
//�ڶ��������ַ�����
//#include<stdio.h>
//int main()
//{
//	char ch = 'A';
//	printf("%c\n", ch);
//	return 0;
//
//}
//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%f - ��ӡ��������-��С��
//%p - �Ե�ַ����ʽ��ӡ
//%x - ��ӡ16��������
//%o - ....
//%lf - ˫���ȸ�����
//char �ַ��������� short ������ int ���� long ������ 
//long long �������� float �����ȸ����� double ˫���ȸ�����
//Ϊʲô������Щ�����أ� �ֽڴ�С��ͬ ��sizeof(char)����ʾ�ֽ�
//����������
//#include<stdio.h>
//int main()
//{
//	printf("%d/n,", sizeof(char));//1�ֽ� 2^8-1
//	printf("%d/n,", sizeof(short));//2�ֽ� 2^16-1
//	printf("%d/n,", sizeof(int));//4�ֽ� 2^32-1
//	printf("%d/n,", sizeof(long));//4/8�ֽ� 2^32-1>=int��ƽ̨
//	printf("%d/n,", sizeof(long long));//8�ֽ� 2^64-1
//	printf("%d/n,", sizeof(float));//4�ֽ�
//	printf("%d/n,", sizeof(double));//8�ֽ�
//	return 0;
//}
//bit - ����λ  �洢һ��1��0
//byte - �ֽ�=8������λ��С
//bit -8-byte -1024- kb-1024- mb -1024- gb-1024- tb -1024- pb 
//���ĸ�����
//#include<stdio.h>
//int main()
//{
//	short age = 20;//���ڴ�����2���ֽڣ����20
//	float weight = 95.6f;//���ڴ�����4���ֽڣ����С��
//	printf("%d/n,",age);
//	printf("%f/n,",weight);
//	return 0;
//}
//���������
//#include<stdio.h>
//int num2 = 20;//ȫ�ֱ���-�����ڴ����{}֮��ı���
//int mian()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ����{}����ı���
//	return 0;
//}//ȫ�ֱ�����ֲ�������������ͬ������ͬ���ֲ���������
//#include<stdio.h>
//int num2 = 20;
//int main()
//{
//	int num2 = 10;
//	printf("%d/n", num2);
//}
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);//�����������뺯��scanf��ȡ��ַ����&
//	int sum = 0;//c�����﷨�涨������Ҫ�����ڵ�ǰ����ǰ��
//	sum = num1 + num2;
//	printf(sum = "%d/n", sum);
//	return 0;
//}
//�޸ĺ�
//#include<stdio.h>//�ӷ���
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);//�����������뺯��scanf��ȡ��ַ����&
//	sum = num1 + num2;
//	printf("sum = % d / n", sum);
//	return 0;
//}
//΢�����ֻ�Ϻ���scanf_s ���߼�#define _CRT_SECURE_NO_WARNINGS 
//ȫ�ֱ������ô󣬶����������ʹ�ã���ΧΪ��������
// �ֲ�������������ֻ��{}����ȫ�ֱ�������������Ϊ��������
//����ȫ�ĺ����� scanf strcpy sscanf fopen ....