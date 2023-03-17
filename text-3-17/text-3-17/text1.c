#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>





//int main()
//{
//	printf("%d", printf("%d",printf("%d",43))); //printf的返回值 是打印字符的个数 43  2  1 
//	return 0;
//}




//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2     和1相同
//	printf("%d\n", strlen("abc"));//链式访问
//	return 0;
//}




//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);//1
//	Add(&num);
//	printf("num=%d\n", num);//2
//	Add(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}




//                     //接收到的arr本质上是个指针
//int binary_search(int arr[], int k,int sz)
//{
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;   //中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序的数组中查找具体的某个数字
//	//如果找到了，返回这个数字的下标 找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof((arr)[0]);
//	                     //arr传递的实际上是首元素的地址
//	int ret =binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了他的下标是%d\n", ret);
//	}
//	return 0;
//}




//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否是闰年
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}



//#include<math.h>
////是素数返回1 不是返回0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		printf("%d ", i);
//	}
//	return 0;
//}




//void Swap2(int*pa,int*pb)//void 代表没有返回值
//{
//	int tmp = 0;
//	tmp=*pa;
//	*pa=*pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



////定义函数
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(100, 300);
//	printf("max=%d\n", max);
//	return 0;
//}




//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);//字符串拷贝
//	printf("%s\n", arr2);
//	return 0;
//}




//int	Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//
//	printf("%d\n", sum);
//	return 0;
//}