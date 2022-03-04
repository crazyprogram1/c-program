#define _CRT_SECURE_NO_WARNINGS 1
//程序一
//常量和变量 
//const修饰常变量
//#include<stdio.h>
//int main()
//{
//	int num = 4;
//	printf("%d/n", num);
//	num = 8;
//	printf("%d/n", num);
//}//输出4或者8
//若加const int num=4  const-常属性 修饰常变量 把变量变为常量
//#include<stdio.h>
//int main()
//{
//	const int num = 4;
//	printf("%d/n", num);
//	num = 8;//这里就会报错,const固定num为4了
//	printf("%d/n", num);
//}//const int n=10;in arr[n]={0};n是变量但有常属性了所以不能运行
//const int n=10;in arr[10]={0};
//#include<stdio.h>
//int main()
//{
//	const int n = 10;
//	int arr[n] = { 0 };
//}//无法运行说明arr[n]n是变量
//#include<stdio.h>
//int main()
//{
//	const int n = 10;
//	int arr[10] = { 0 };
//}//这才正确n无法改了只能是10
//#include<stdio.h>
//#define max 10//define定义标识符常量
//int main()
//{
//	int arr[max] = { 0 };
//	printf("%d\n", max);
//	return 0;
//}
//枚举常量-一一列举 性别：男，女，颜色 星期这些可以列举
//enum-枚举
//#include<stdio.h>
//enum Sex
//{
//	male,
//	female,
//	secret,
//};
//int main()
//{
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//}

//#include<stdio.h>
//enum Color
//{
//	red,
//	yello,
//	blue,
//};
//int main()
//{
//	enum Color color = blue;
//	printf("%d/n", color);//2
//	return 0;
//}//枚举常量不能改变量可以改，比如color
//程序二
//字符串类型双引号引起的
//#include<stdio.h>
//int main()
// {
//	char arr1[] = "abc";//数组，无需加0
//	//char arr2[] = { 'a','b','c' };//打印abc烫烫烫，这种打印要补个0，\0是结束标志
//	char arr2[] = { 'a','b','c',0 };//打印abc
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);
//	return 0;
//}//由于ascii编码原因数据在计算机存储是2进制
//a-97 A-65 0-48
//strlen - 计算字符串长度的
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n",strlen (arr1));//3不算/0
//	printf("%d\n", strlen(arr2));//在随机值个才找到/0，因为没写0，计算机会一直随便数，所以出现随机数.要加\0
//	return 0;
//}
//转仪字符 \n - 换行  \t - 水平制表符  \\ - 反斜杠 加斜杠可以符号呈现出来
//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\"');//"单个"不能打印出来要加\",这叫转义字符
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//13个字符 \32是八进制 \t转义字符为一个字符 \x30为16进制，都是一个字符
//
//}
//注释 //比较好  /**/不太好 建议都用//
//程序三
//#include<stdio.h>
/*int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？(1/0)>:");
	scanf("%d", &input);
	if (input == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n");
	return 0;
}*///分支语句 选择语句
//程序四
//#include<stdio.h>
//int main()
//{
//	int  line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行有效的代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000) 
//	printf("好offer\n");
//	return 0;
//}//循环语句的使用
//程序五
//函数使用
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}//自定义函数
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}//库函数
//程序六
//数组:一组相同数据的结合,注意下表01234...
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}//把数组里面的数打印出来arr[下标]
//程序七
//操作符 算术+ - * / %  移位 >>右移 <<左移 位操作符 &与 ^异或 |按位或  赋值 = += -= *= /= &= ^= |= >>= <<=
//==判断相等  a=a+10 == a+=10 
//单目操作符 ！非（反操作）真变假 假变真 10变0 0变1 - + & sizeof 计算变量/类型空间大小（字节）~按位取反  -- ++ *（类型）
// 原码 反码 补码 负数在内存中存储是二进制补码，打印是原码，补码减一是反码，有符号反码第一位不变之外全部取反
// int b=a++先使用赋值在加加 int b=++a先加加后使用赋值
// int a = （int）3.14强制类型转换 原来3.14是doubl转为int
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//10个整型元素数据 10*sizeof（int）=40
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//		sz = sizeof(arr) / sizeof(arr[0]);//个数=数组大小/每个元素大小
//	printf("sz=%d\n", sz);
//	return 0;
//}
//双目操作符 三目操作符
//关系操作符< > <=  >=  != ==  逻辑操作符 && 逻辑与  a&&b  真真为真 一假全假  || 逻辑或 一真为真 全假才假 
//条件操作符 exp1？exp2 : exp3;  max(a>b?a:b);exp为表达式;    exp1,exp2,exp3....
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	//相当于//if (a > b)
//		//max = a;
//	//else
//	//	max = b;
//	printf("%d\n", max);
//}
//操作符 下标引用[]、函数调用符()、 .   ->
//常见关键字  auto 局部变量 char int signed 有符号 unsigned 无符号 struct 结构体关键字 ..... 
//typedef - 类型定义- 类型重定义 可以把unsiged int u_int 例如 typedef unsigned int u_int 
//#include<stdio.h>
//int main()
//{
//	typedef unsigned int u_int;
//	u_int num = 20;
//	printf("%d\n", num);
//}
//static修饰局部变量
//局部变量的生命周期变长
//static修饰全局变量
// 改变了变量的作用区域-让静态的全局变量只能在自己所在的源文件内部使用
// static修饰函数改变了函数链接属性，使外部链接变成内部链接
// 出了源文件就无法使用了
//#include<stdio.h>
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量 保留上一次变得值会变
//	//int a = 1;//局部变量加一次变回原来1 
//	a++;
//	printf("a=%d\n", a);//2 2 2 2 2
//}
//int main()
//{
//	int i = 0;
//	while (i < 5) 
//	{
//		test();
//		i++;
//	}
//}
//extern可以声明外部函数可以调用外部函数 extern int add 但是要是遇到static声明的函数就无法用了
