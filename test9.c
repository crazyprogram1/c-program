#define _CRT_SECURE_NO_WARNINGS 1
//����һά����
//����һ
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ��Ԫ��Ĭ��Ϊ0��
//	char arr2[5] = { 'a',98 };
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7
//	printf("%d\n", strlen(arr4));//6
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr1));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//�����
//}
//strlen��sizeof
//strlen���ַ������ȵ�-ֻ����ַ����󳤶�-�⺯��-ʹ�õ�ͷ�ļ� \0֮ǰ�ĳ���
//sizeof������������顢���͵Ĵ�С-��λ���ֽ�-������ ����ռ��С����\0һ�����
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}/��ӡa b c d e f
//�����
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", &arr[i]);
//	}
//	return 0;
//}
//������
//��ά����
//#include<stdio.h>
//int main()
//{
//	//int arr1[3][4] = { 1,2,3,4 };
//	//int arr2[3][4]={{1,2,3},{4,5}};//��������
//	//int arr3[][4] = { {1,2,3,4},{5,6,7,8} };//�пɲ�д ��Ҫд
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			/*printf(" %d ", arr[i][j]);*///��ӡ����
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//��ӡ��ַ
//		}
//		printf("\n");
//	}
//	return 0;
//}
//������
//ð������
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;//breakֻ������ѭ�����
//		}
//	}
//}
//int main()
//{
//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//int i = 0;
//int sz = sizeof(arr) / sizeof(arr[0]);
//bubble_sort(arr,sz);
//for (i = 0; i < sz; i++)
//{
//	printf("%d", arr[i]);
//}
//return 0;
//}
//������
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%d\n", *arr);
//	printf("%d\n", *arr+1);//��ӡ��Ԫ��
//	
//	printf("%d\n", &arr);
//	printf("%d\n", &arr+1);//����ĵ�ַarr+1����28��b
//}//����ÿ����ӡ�������ʲô��ʽ�ĵ�ַ
//
//












