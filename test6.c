#define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ��ϰ
//1.���Ի�����һ�������
//2.������
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("**** 1.play     0.exit   ****\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	//1.�����������
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;//����1��100��//rand��������� ͷ�ļ�Ϊstdlib.h ��ΧΪ0-32767
//	/*printf("%d\n", ret);*/
//	while(1)
//	{
//		printf("�������:>");
//			scanf("%d",&guess);
//			if (guess > ret)
//			{
//				printf("�´���\n");
//			}
//			else if (guess < ret)
//			{
//				printf("��С��\n");
//			}
//			else
//			{
//				printf("��ϲ�¶���\n");
//				break;
//			}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//Ҫ����һ�������
//	//ʱ��� ��ǰ�����ʱ��-�������ʼ��ʱ��(1970.1.1.0:0:0)=(xxxx)��
//	//��ʱ��������������������ʼ��time_t time(time_t*timer)
//	do
//	{
//		menu();
//			printf("��ѡ��>:");
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				game();//��������Ϸ
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("ѡ�����\n");
//				break;
//			}
//	} while (input);
//	return 0;
//}
//goto����������ã����ƻ��������
//#include<stdio.h>
//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hehe\n");
//	return 0;
//}//������ã�goto��Ҫ���������bug
//������ػ�����shutdowm
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- ִ��ϵͳ�����
//	system("shutdown -s -t 60");//60���ػ�
//	again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n������>");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//goto�൱��ѭ������ʹ��
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- ִ��ϵͳ�����
//	system("shutdown -s -t 60");//60���ػ�
//	while(1)
//	{
//	printf("��ע�⣬��ĵ�����1�����ڹػ����������:��������ȡ���ػ�\n������>");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		break;
//	}
//     }
//	return 0;
//}