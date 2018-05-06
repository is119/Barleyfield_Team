#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int start = 0;
	int money = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("게임을 플레이하시려면 초기 소지금을 적어주세요. => ");
	scanf_s("%d", &money);
	printf("초기 소지금은 %d원이며, 게임 시작 시 100원 감소합니다.\n", money);
	printf("게임 진행을 원하시면 1을 입력, 중단하시려면 0을 입력하세요.\n");
	scanf_s("%d", &start);
	while (start<1 || start>1) 
	{
		printf("1을 누르면 다시시작\n");
		scanf_s("%d", &start);
	}
	while (start == 1) 
	{
		srand(time(NULL)); // 난수 초기화
		b = rand() % 10; // 0~9 중의 숫자 랜덤 지정
		c = rand() % 10;
		d = rand() % 10;
		printf("<< %d %d %d >>\n", b, c, d);
		money=money-100;
		if (b==c && c==d) 
		{
			money=money+1100;
			printf("당첨입니다. 상금 1000원을 얻으셨습니다.\n");
		}
		start++;
		printf("남은돈은 %d원입니다.\n", money);
		printf("게임을 계속하시려면 1을 입력, 중단하시려면 0을 입력하세요.\n");
		scanf_s("%d", &start);
		while (start<1 || start>1) 
		{
			printf("1을 누르면 다시시작\n");
			scanf_s("%d", &start);
		}
	}
	return 0;
}
