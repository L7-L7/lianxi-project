#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		int j = 0;
		for ( j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	for ( i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}






//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}






//int main()
//{
//	//int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	//char arr2[5] = { 'a','b' };
//	//char arr3[5] = { "ab" };//字符串后面有一个/0 其他位置补0
//	char arr4[] = "abcdef";//自动检测补全[]内的数字 
//	printf("%d\n",sizeof(arr4));//sizeof 计算arr4所占空间的大小  a b c d e f \0  7*1=7
//	printf("%d\n", strlen(arr4));//strlen 计算字符串长度 包含 a b c d e f \0 遇到\0停止计数 =6
//	//strlen和sizof 没有什么关联
//	//strlen 是求字符串长度的-只能针对字符串求长度-库函数-引用头文件
//	//sizeof 计算变量、数组、类型的大小-单位字节-操作符
//	return 0;
//}