#define _CRT_SECURE_NO_WARNINGS 1
//宏定义define
//程序一
//#include<stdio.h>
//#define Max(x,y)(x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//}
//程序二
//指针要明白地址 
//#include<stdio.h>
//int main()
//{
//	int a = 10;//在一个0x0012ff40的地址中存a 为10
//	int* p = &a;//p存了0x0012ff40这个地址
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p=20;//*-解引用操作符
//	printf("a=%d\n", a);
//	printf("%d\n", sizeof(p));
//	return 0;
//}//502教室---32人 10是32个人 a是502教室 p是指502的门牌
//32位指针为4字节 64位指针位8字节
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);//查看a地址
//	int* p = &a;
//	printf("%p\n", p);
//	*p = 20;
//	printf("a=%d\n", a);//把a的值10改为20
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));//8说明是64位
//}
//程序三
//结构体
//#include<stdio.h>
//struct book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};
//int main()
//{
//	struct book b1 = { "c语言程序设计",55 };
//	printf ("书名:%s\n", b1.name);
//	printf ("价格:%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格:%d元\n", b1.price);
//		return 0;
//}
//用指针来操作
//#include<stdio.h>
//struct book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};
//int main()
//{
//	struct book b1 = { "c语言程序设计",55 };
//	struct book* pb = &b1;
//	printf("书名:%s\n", (*pb).name);
//	printf("价格:%d元\n", (*pb).price);
//	b1.price = 15;
//	printf("修改后的价格:%d元\n", b1.price);
//	return 0;
//}
//->操作符的应用
//#include<stdio.h>
//struct book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};
//int main()
//{
//	struct book b1 = { "c语言程序设计",55 };
//	struct book* pb = &b1;
//	printf("书名:%s\n", pb->name);
//	printf("价格:%d元\n", pb->price);
//	b1.price = 15;
//	printf("修改后的价格:%d元\n", b1.price);
//	return 0;
//}//总结     . 结构体变量.成员      -> 结构体指针->成员
//刚刚b1.price可以直接b1.price=15 但是b1.name不行因为name是数组
//要用strcpy-string copy-字符串拷贝-库函数-string.h 可以语句为strcpy(b1.name,"C++");
//程序四
//三个结构顺序 选择 循环   
//分支语句 if switch 循环语句 while for do while goto
//if的应用
//#include<stdio.h>
//int main()
//{
//	int age = 20;
	//if (age < 18)
	//	printf("未成年\n");//第一种

	//if (age < 18)
	//	printf("未成年\n");
	//else
	//	printf("成年\n");//第儿种

	//if (age < 18)
	//	printf("未成年\n");
	//else if (age >= 18 && age < 28)
	//	printf("青年\n");
	//else if (age >= 28 && age < 50)
	//    printf("壮年\n");
	//else if (age >= 50 && age < 90)
	//	printf("老年\n");
	//else
	//	printf("老不死\n");
	//
	//if (age < 18)
	//{
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//}//代码块
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("青年\n");
	//	else if (age >= 28 && age < 50)
	//		printf("壮年\n");
	//	else if (age >= 50 && age < 90)
	//		printf("老年\n");
	//	else
	//		printf("老不死\n");
	//}
	 

//}//else与最近的if匹配
//输出所以的基数
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
//switch语句的使用
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//		scanf("%d", &day);
//		switch (day)
//		{
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期七\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	
//}
//循环语句while for do while while(表达式) 循环语句;
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//break跳出循环,永久终止循环
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
//			continue;//终止本次循环，下面代码不会执行了
//		printf("%d", i);
//		
//	}
//	return 0;
//}