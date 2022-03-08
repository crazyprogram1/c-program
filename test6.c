#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏练习
//1.电脑会生成一个随机数
//2.猜数字
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
//	//1.生成随机数字
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;//生成1到100的//rand随机数函数 头文件为stdlib.h 范围为0-32767
//	/*printf("%d\n", ret);*/
//	while(1)
//	{
//		printf("请猜数字:>");
//			scanf("%d",&guess);
//			if (guess > ret)
//			{
//				printf("猜大了\n");
//			}
//			else if (guess < ret)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("恭喜猜对了\n");
//				break;
//			}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//要放入一个随机数
//	//时间戳 当前计算机时间-计算机起始的时间(1970.1.1.0:0:0)=(xxxx)秒
//	//拿时间戳来设置随机数生成起始点time_t time(time_t*timer)
//	do
//	{
//		menu();
//			printf("请选择>:");
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				game();//猜数字游戏
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误\n");
//				break;
//			}
//	} while (input);
//	return 0;
//}
//goto语句随意滥用，会破坏程序语句
//#include<stdio.h>
//int main()
//{
//	printf("hello bit\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}//跳过你好，goto用要谨慎，会出bug
//程序二关机程序shutdowm
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- 执行系统命令的
//	system("shutdown -s -t 60");//60秒后关机
//	again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//goto相当于循环语句的使用
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system()- 执行系统命令的
//	system("shutdown -s -t 60");//60秒后关机
//	while(1)
//	{
//	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n请输入>");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		break;
//	}
//     }
//	return 0;
//}