#define _CRT_SECURE_NO_WARNINGS 1
//����һ
//gechar putchar
//#include<stdio.h>
//int main()
//{
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//EOF - �ļ�������־
	//{
	//	putchar(ch);
	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������룬�������password������
//	//��������ʣ��һ����\n��
//	while((ch=getchar())!='\n');
//	{
//		;
//	}//��/n ����,���ɾ�
//	printf("��ȷ������(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//ֻ��ӡ0-9������
//			continue;
//		putchar(ch);
//	}
//	return 0;
//	}
//�����
//ѭ��ѧϰfor   whil   do while
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//	}
//	return 0;
//}whileѭ����ȱ���Ǽ���Ҫ�Ķ����ĵĵط�̫�࣬for�ȽϺø�
//#include<stdio.h>
//int main()
//{
//	for (i = 1; i <= 10; i++)//��ʼ�� �ж� �������һ��
//	{
//		//if (i == 5)
//		//	break;//���1234
//		if (i == 5)
//			continue;//���1 2 3 4 6 7 8 9 10 ���������ѭ��
//		printf("%d", i);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while(i<=10)
//	{
//		if (i == 5)
//			continue;
//		i++;//���1 2 3 4 5�������ѭ��
//		printf("%d", i);
//	}
//}//�����Ա���for�ȽϺ���
//for�����Բ�д����for(;;)
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("�Һ�˧\n");
//		}
//	}//���10*10���Һ�˧
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		int j = 0;
//		for (; j < 10; j++)
//		{
//			printf("�Һ�˧\n");
//		}
//	}//���10���Һ�˧
//	return 0;
//}//��Ҫ�������������
//��ע��k=0�Ǹ�ֵ k==0�����ж�
//do while��ʹ��
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	}
//	while (i <= 10);
//
//	return 0;
//  }//��ӡ1 2 3 4 5 6 7 8 9 10
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}//��ӡ1 2 3 4�����
/*#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d", i);
		i++;
	} while (i <= 10);

	return 0;
}*///��ӡ1 2 3 4 ��������ѭ��
//�����
//��ϰһ����n�Ľײ�n*n-1*n-2*.....
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//		for (i = 1; i <= n; i++)
//		{
//			sum = sum * i;
//			}
//		printf("sum=%d\n", sum);
//}
//��ϰ������1��+2��+3��+4��.....+10!
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret=1;
//	int sum=0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//����Ϳ������
//		for(i = 1; i<= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n",sum);
//		return 0;
//}//forǶ������*�Ĺ�ϵ���Լ��������1*1+1*1*2+2*1*2*3=15
//�򻯰�
//#include<stdio.h>
//int main()
//{
//int i = 0;
//int n = 0;
//int ret = 1;
//int sum = 0;
//for (n = 1; n<=10; n++)
//{
//	ret = ret * n;
//	sum = sum + ret;
//}
//printf("sum=%d\n", sum);
//}
//��ϰ��
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�㷨�Ǻ��ģ�Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//				break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}//Ѱ������7���±��Ƕ���
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
//��������ϰ��
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to world!!!!";
//	char arr2[] = "                    ";
//	int left = 0;
//	//int right = sizef(arr1) / sizeof(arr1[0]) - 2;//���������/0���±�Ҫ��\0�ļ���
//	int right = strlen(arr1)-1;//strlen������\0���Լ�1
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ����ĺ���cls--�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//} 
//��������ϰ��
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//  int i = 0;
//  char password[20] = { 0 };
//  for (i = 0; i < 3; i++)
//  {
//	  printf("����������:>");
//	  scanf("%s", password);
//	  /*if (password=="123456")*/ //== �����ж������ַ����Ƿ����
//	  if (strcmp(password, "123456") == 0)//==�����ж������ַ����Ƿ���ȣ�Ӧʹ��strcmp
//	  {
//		  printf("��½�ɹ�\n");
//			  break;
//	  }
//	  else
//	  {
//		  printf("�������\n");
//	  }
//  }
//  if (i == 3)
//  printf("����������������˳�\n");
//  return 0;
//}





