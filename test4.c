#define _CRT_SECURE_NO_WARNINGS 1
//程序一
//gechar putchar
//#include<stdio.h>
//int main()
//{
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//EOF - 文件结束标志
	//{
	//	putchar(ch);
	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//缓冲区还剩余一个‘\n’
//	while((ch=getchar())!='\n');
//	{
//		;
//	}//把/n 读走,读干净
//	printf("请确认密码(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//只打印0-9的数字
//			continue;
//		putchar(ch);
//	}
//	return 0;
//	}
//程序二
//循环学习for   whil   do while
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//	}
//	return 0;
//}while循环的缺点是假如要改动，改的地方太多，for比较好改
//#include<stdio.h>
//int main()
//{
//	for (i = 1; i <= 10; i++)//初始化 判断 调整结合一起
//	{
//		//if (i == 5)
//		//	break;//输出1234
//		if (i == 5)
//			continue;//输出1 2 3 4 6 7 8 9 10 不会出现死循环
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
//		i++;//输出1 2 3 4 5会出现死循环
//		printf("%d", i);
//	}
//}//两个对比是for比较好用
//for语句可以不写条件for(;;)
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("我好帅\n");
//		}
//	}//输出10*10个我好帅
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
//			printf("我好帅\n");
//		}
//	}//输出10个我好帅
//	return 0;
//}//主要两个程序的区别
//多注意k=0是赋值 k==0才是判断
//do while的使用
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
//  }//打印1 2 3 4 5 6 7 8 9 10
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
//}//打印1 2 3 4后结束
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
}*///打印1 2 3 4 且陷入死循环
//程序二
//练习一计算n的阶层n*n-1*n-2*.....
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
//练习二计算1！+2！+3！+4！.....+10!
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret=1;
//	int sum=0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//加入就可算对了
//		for(i = 1; i<= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n",sum);
//		return 0;
//}//for嵌入是相*的关系所以计算过程是1*1+1*1*2+2*1*2*3=15
//简化版
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
//练习三
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//算法是核心，元素个数
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下表是：%d\n", i);
//				break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}//寻找数组7的下标是多少
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}//二分法
//程序三练习三
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to world!!!!";
//	char arr2[] = "                    ";
//	int left = 0;
//	//int right = sizef(arr1) / sizeof(arr1[0]) - 2;//数组后面有/0，下标要吧\0的减掉
//	int right = strlen(arr1)-1;//strlen不包含\0可以减1
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的函数cls--清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//} 
//程序四练习四
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//  int i = 0;
//  char password[20] = { 0 };
//  for (i = 0; i < 3; i++)
//  {
//	  printf("请输入密码:>");
//	  scanf("%s", password);
//	  /*if (password=="123456")*/ //== 不能判断两个字符串是否相等
//	  if (strcmp(password, "123456") == 0)//==不能判断两个字符串是否相等，应使用strcmp
//	  {
//		  printf("登陆成功\n");
//			  break;
//	  }
//	  else
//	  {
//		  printf("密码错误\n");
//	  }
//  }
//  if (i == 3)
//  printf("三次密码错误，请请退出\n");
//  return 0;
//}





