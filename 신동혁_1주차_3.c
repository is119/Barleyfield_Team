#include<stdio.h>
#include<stdlib.h>
int main()
{
	int input;
	int i, j;

	printf("�ִ� ������ �Է��ϼ��� : ");

	scanf("%d", &input);

	for (i = 0; i <= input; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("o\n");
	}

	for (i = 0; i < input; i++)
	{
		for (j = (i + 1); j < input; j++)
		{
			printf("*");
		}
		printf("o\n");
	}

	system("pause");
	return 0;
}