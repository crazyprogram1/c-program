#define _CRT_SECURE_NO_WARNINGS 1
//��ҵ
//#include<stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}//����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*Init(arr,sz);*/
//	print(arr, sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//} //��������ÿ��Ԫ�أ���ӡ����
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int tmp =  0 ;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}//������������
//��һ�����Ķ����Ƶ�1�ĸ���
#include<stdio.h>
////��һ
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{ 
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
// ����
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}//����Ȼ����1��λ��
//// ����
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}//����㷨�ܼ��
//int main()
//{
//	int a = 13;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	//13
//	//00000000 00000000 00000000 00001101
//	printf("count=%d\n", count);
//	return 0;
//}
//����int��32λ������m��m�Ķ����Ʊ��ʽ�У��ж��ٸ�λ��bit����ͬ��
//#include<stdio.h>
//int get_diff_bit(int m, int n)
//{
//	int count=0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = % d\n",count);
//	return 0;
//}
//��ӡ�����ƵĻ���λ��ż��λ
//#include<stdio.h>
//void print(int m)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//}
//��ָ���ӡ����Ԫ��
//#include<stdio.h>
//void print(int* p, int* sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//99 �˷���
//#include<stdio.h>
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//�ݹ齻����������Ԫ��
//int	my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//�ݹ鷽��
//#include<stdio.h>
//int	my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//    int len = my_strlen(arr);
//
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1)>=2)
//	   reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//����һ����ÿ����֮��
//#include<stdio.h>
//int Digitsum(unsigned int num)
//{
//    if (num > 9)
//    {
//        return Digitsum(num / 10) + num % 10;
//    }
//    else
//    {
//        return num;
//    }
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%d", &num);
//    int ret = Digitsum(num);
//    printf("ret=%d\n", ret);
//    return 0;
//}
//��n k �η�
//n^k=n*n^(k-1)
//#include<stdio.h>
//int pow(int n, int k)
//{
//    if (k < 0)
//        return(1.0 / (pow(n, -k)));
//    else if (k == 0)
//        return 1;
//    else
//        return n * pow(n, k - 1);
//}
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d%d", &n, &k);
//    double ret = pow(n, k);
//    printf("ret=%lf\n", ret);
//    return 0;
//}