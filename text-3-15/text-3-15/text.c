#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  //输出99*9乘法口诀表
	int i = 0;
	//确定打印9行
	for (i = 1; i <= 9; i++)
	{
		//打印一行
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);  //%2d 打印两位整数右对齐  加上- 左对齐
		}
		printf("\n");
	}
	return 0;
}




//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}




//int main()
//{
//	// 分数求和 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ...... + 1 / 99 - 1 / 100的值
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



// int main()
//{ //求1-100之间有多少个9
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i<=100; i++)
//	{
//		if (i % 10 == 9 )
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}



//int main()
//{
//	/int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断规则
//		//1.试除法
//		//只能被1和他本身整数  2->i-1
//		int j = 0;
//		for (j=2;j<i;j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount:%d\n", count);
//	return 0;
//	
//}
