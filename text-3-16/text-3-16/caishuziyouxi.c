#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("****************猜数字游戏**************************\n");
	printf("*********  1.play      0.exit    *******************\n");
	printf("*****************范围1-100**************************\n");
}
void game()
{
	// 生成随机数  猜数字
	int ret = 0;
	int guess = 0;//接收猜数字
	//拿时间戳来设置随机数的生成起点
	// time_t time(time_t *timer)
	//time_t
	ret= rand()%100+1;//rand成随机数 范围在 0-32767 0-7FFF  变为1-100的数字就取模+1
	//2.猜数字
	while (1)
	{
		printf("请猜猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！！！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	//猜数字游戏 电脑会随机生成一个随机数字  猜数字
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
				printf("选择错误\n");
				break;
		}
	} while (input);
	return 0;
}