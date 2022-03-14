#define _CRT_SECURE_NO_WARNINGS 1
//数组一维数组
//程序一
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下元素默认为0；
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
//	printf("%d\n", strlen(arr2));//随机数
//}
//strlen和sizeof
//strlen是字符串长度的-只针对字符串求长度-库函数-使用得头文件 \0之前的长度
//sizeof计算变量、数组、类型的大小-单位是字节-操作符 计算空间大小包含\0一起计算
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}/打印a b c d e f
//程序二
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
//程序三
//二维数组
//#include<stdio.h>
//int main()
//{
//	//int arr1[3][4] = { 1,2,3,4 };
//	//int arr2[3][4]={{1,2,3},{4,5}};//三行四列
//	//int arr3[][4] = { {1,2,3,4},{5,6,7,8} };//行可不写 列要写
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			/*printf(" %d ", arr[i][j]);*///打印数组
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//打印地址
//		}
//		printf("\n");
//	}
//	return 0;
//}
//程序四
//冒泡排序
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
//			break;//break只能用在循环语句
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
//数组名
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
//	printf("%d\n", *arr+1);//打印首元素
//	
//	printf("%d\n", &arr);
//	printf("%d\n", &arr+1);//数组的地址arr+1加了28个b
//}//明白每个打印数组的是什么形式的地址
//
//












