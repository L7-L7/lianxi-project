#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	while (i <= 9)
	{
		i++;
		if (i == 5)
		{
			continue;//Ìø¹ý5 ´òÓ¡1-10
		}
		printf("%d ", i);
	}
	return 0;
}