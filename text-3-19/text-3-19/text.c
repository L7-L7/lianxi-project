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
//	//int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5] = { 'a','b' };
//	//char arr3[5] = { "ab" };//�ַ���������һ��/0 ����λ�ò�0
//	char arr4[] = "abcdef";//�Զ���ⲹȫ[]�ڵ����� 
//	printf("%d\n",sizeof(arr4));//sizeof ����arr4��ռ�ռ�Ĵ�С  a b c d e f \0  7*1=7
//	printf("%d\n", strlen(arr4));//strlen �����ַ������� ���� a b c d e f \0 ����\0ֹͣ���� =6
//	//strlen��sizof û��ʲô����
//	//strlen �����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-����ͷ�ļ�
//	//sizeof ������������顢���͵Ĵ�С-��λ�ֽ�-������
//	return 0;
//}