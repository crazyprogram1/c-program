#define _CRT_SECURE_NO_WARNINGS 1
//�궨��define
//����һ
//#include<stdio.h>
//#define Max(x,y)(x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//}
//�����
//ָ��Ҫ���׵�ַ 
//#include<stdio.h>
//int main()
//{
//	int a = 10;//��һ��0x0012ff40�ĵ�ַ�д�a Ϊ10
//	int* p = &a;//p����0x0012ff40�����ַ
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p=20;//*-�����ò�����
//	printf("a=%d\n", a);
//	printf("%d\n", sizeof(p));
//	return 0;
//}//502����---32�� 10��32���� a��502���� p��ָ502������
//32λָ��Ϊ4�ֽ� 64λָ��λ8�ֽ�
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);//�鿴a��ַ
//	int* p = &a;
//	printf("%p\n", p);
//	*p = 20;
//	printf("a=%d\n", a);//��a��ֵ10��Ϊ20
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));//8˵����64λ
//}
//������
//�ṹ��
//#include<stdio.h>
//struct book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};
//int main()
//{
//	struct book b1 = { "c���Գ������",55 };
//	printf ("����:%s\n", b1.name);
//	printf ("�۸�:%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);
//		return 0;
//}
//��ָ��������
//#include<stdio.h>
//struct book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};
//int main()
//{
//	struct book b1 = { "c���Գ������",55 };
//	struct book* pb = &b1;
//	printf("����:%s\n", (*pb).name);
//	printf("�۸�:%dԪ\n", (*pb).price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);
//	return 0;
//}
//->��������Ӧ��
//#include<stdio.h>
//struct book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};
//int main()
//{
//	struct book b1 = { "c���Գ������",55 };
//	struct book* pb = &b1;
//	printf("����:%s\n", pb->name);
//	printf("�۸�:%dԪ\n", pb->price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);
//	return 0;
//}//�ܽ�     . �ṹ�����.��Ա      -> �ṹ��ָ��->��Ա
//�ո�b1.price����ֱ��b1.price=15 ����b1.name������Ϊname������
//Ҫ��strcpy-string copy-�ַ�������-�⺯��-string.h �������Ϊstrcpy(b1.name,"C++");
//������
//�����ṹ˳�� ѡ�� ѭ��   
//��֧��� if switch ѭ����� while for do while goto
//if��Ӧ��
//#include<stdio.h>
//int main()
//{
//	int age = 20;
	//if (age < 18)
	//	printf("δ����\n");//��һ��

	//if (age < 18)
	//	printf("δ����\n");
	//else
	//	printf("����\n");//�ڶ���

	//if (age < 18)
	//	printf("δ����\n");
	//else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else if (age >= 28 && age < 50)
	//    printf("׳��\n");
	//else if (age >= 50 && age < 90)
	//	printf("����\n");
	//else
	//	printf("�ϲ���\n");
	//
	//if (age < 18)
	//{
	//	printf("δ����\n");
	//	printf("����̸����\n");
	//}//�����
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("����\n");
	//	else if (age >= 28 && age < 50)
	//		printf("׳��\n");
	//	else if (age >= 50 && age < 90)
	//		printf("����\n");
	//	else
	//		printf("�ϲ���\n");
	//}
	 

//}//else�������ifƥ��
//������ԵĻ���
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//		i++;
//	}
//		return 0;
//}
//switch����ʹ��
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//		scanf("%d", &day);
//		switch (day)
//		{
//		case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	
//}
//ѭ�����while for do while while(���ʽ) ѭ�����;
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//break����ѭ��,������ֹѭ��
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;//��ֹ����ѭ����������벻��ִ����
//		printf("%d", i);
//		
//	}
//	return 0;
//}