#define _CRT_SECURE_NO_WARNINGS 1
//�ṹ��
//����
//#include<stdio.h>
//struct stu 
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1 s2 s3 ������ȫ��ȫ�ֽṹ�����   ����һ���ṹ������   ---  ͼֽ
//int main()
//{
//	struct std s;//s �Ǿֲ�����  �����ṹ����� ------ ��������
//	return 0;
//}
//typedef struct stu //typedef �ı���������������
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}std;//������λstd
//int main()
//{
//	 std s;//����ֱ��дstd���ö���
//	return 0;
//}
//struct stu //typedef �ı���������������
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//������λstd
//int main()
//{
//	struct stu s1 = { "����","20","123476356","��" };
//	struct stu s2 = { "����","24","09876789","Ů" };
//	//����ֱ��дstd���ö���
//	return 0;
//}
//#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n"; 
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hlello bit
//	return 0;
//}//�ṹ��ķ���
//���� ����ַ��ʽ�ȽϺ�
//#include<stdio.h>
//typedef struct S
//{
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}stu;
//void print1(stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	stu s = { "����",40,"132541536","��" };
//	print1(&s);
//	return 0;
//}
//���Լ���
//test.c ��ִ�г��� debug  debug �汾�Ŀ�ִ�г��� ����  release  release�汾�Ŀ�ִ�г��� �����汾
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <=100; i++)
//	{
//		printf("%d ",i);
//	}
//}
//�ϵ� ��F9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <=100; i++)
//	{
//		printf("%d ",i);
//	}
// 	for (i = 0; i <= 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//}
//���Բ���
//��1��+2��+3��+��������+n��
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;//���¸�ֵ��һ
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;//i==3ʱret�Ƕ� 
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	for (i = 0; i <= 12; i++)//��Խ��
//	{
//		printf("hehe\n");
//		arr[1] = 0;
//
//	}
//	system("pause");
//	return 0;
//}//1 ջ����ʹ���� �ߵ�ַ���ٵ��͵�ַ
 //2 �����±������ǵ͵��߱仯
//#include<stdio.h>
//#include<assert.h>
//char my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	//�Ż�
//	assert(dest!=NULL);
//	assert(src != NULL);
//	//��srcָ����ַ�������destָ��Ŀռ䣬������\0��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	src++;
//	//	dest++;
//	//}
//	//*dest = *src;
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	
//	printf("%s\n",char my_strcpy(arr1, arr2));
//	return 0;
//}
//const��ʹ��
//#include<stdio.h>
//int main()
//{
//	const int num = 10;
//	int n = 100;
//	int* p = &num;//const int*p=&num; int*const p=&num; ע���������Ĳ�ͬ
//	*p = 20;//const int*p=&num; *p���ܸ�
//	p = &n;//int*const p=&num;   p���ܸ�
//	//const int* const p =&num;�����ܸ�
//	printf("%d\n", num);
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤�����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count; 
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}