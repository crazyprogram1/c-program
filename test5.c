#define _CRT_SECURE_NO_WARNINGS 1
//结构体
//声明
//#include<stdio.h>
//struct stu 
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1 s2 s3 是三个全局全局结构体变量   定义一个结构体类型   ---  图纸
//int main()
//{
//	struct std s;//s 是局部变量  创建结构体变量 ------ 创建房子
//	return 0;
//}
//typedef struct stu //typedef 改变量名重新起名字
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}std;//起名字位std
//int main()
//{
//	 std s;//可以直接写std不用定义
//	return 0;
//}
//struct stu //typedef 改变量名重新起名字
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//起名字位std
//int main()
//{
//	struct stu s1 = { "张三","20","123476356","男" };
//	struct stu s2 = { "李四","24","09876789","女" };
//	//可以直接写std不用定义
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
//}//结构体的访问
//传参 传地址方式比较好
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
//	stu s = { "李四",40,"132541536","男" };
//	print1(&s);
//	return 0;
//}
//调试技巧
//test.c 可执行程序 debug  debug 版本的可执行程序 调试  release  release版本的可执行程序 发布版本
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <=100; i++)
//	{
//		printf("%d ",i);
//	}
//}
//断点 按F9
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
//调试测试
//求1！+2！+3！+。。。。+n！
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
//		ret = 1;//重新赋值回一
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;//i==3时ret是二 
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
//	for (i = 0; i <= 12; i++)//会越界
//	{
//		printf("hehe\n");
//		arr[1] = 0;
//
//	}
//	system("pause");
//	return 0;
//}//1 栈区的使用是 高地址在再到低地址
 //2 数组下标增长是低到高变化
//#include<stdio.h>
//#include<assert.h>
//char my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	//优化
//	assert(dest!=NULL);
//	assert(src != NULL);
//	//把src指向的字符拷贝到dest指向的空间，包括‘\0’
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
//const的使用
//#include<stdio.h>
//int main()
//{
//	const int num = 10;
//	int n = 100;
//	int* p = &num;//const int*p=&num; int*const p=&num; 注意这两个的不同
//	*p = 20;//const int*p=&num; *p不能改
//	p = &n;//int*const p=&num;   p不能改
//	//const int* const p =&num;都不能改
//	printf("%d\n", num);
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性
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