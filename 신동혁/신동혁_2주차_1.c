#include<stdio.h>
#include<stdlib.h>

typedef enum Bool {
	FALSE,
	TRUE
}bool;

#define FALSE 0
#define TRUE 1

bool judge(int a, int b, int temp_a, int temp_b)
{
	temp_a = temp_a - a;
	temp_b = temp_b - b;

	if ((temp_a == b) && (temp_b == a))
		return TRUE;
	else
		return FALSE;
}

int main()
{
	int a, b;
	int i, temp_a = 0 , temp_b = 0;

	printf("수 2개를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	printf("%d의 약수 : ", a);

	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("%d ", i);

			temp_a += i;
		}
	}

	printf("\n");

	printf("%d의 약수 : ", b);

	for (i = 1; i <= b; i++)
	{
		if (b % i == 0)
		{
			printf("%d ", i);

			temp_b += i;
		}
	}

	printf("\n");

	if (judge(a, b, temp_a, temp_b))
		printf("두 수는 친화수입니다.");
	else
		printf("두 수는 친화수가 아닙니다.");

	printf("\n");

	system("pause");

	return 0;
}

