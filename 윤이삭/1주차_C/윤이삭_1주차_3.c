#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	int input = 0;

	printf("�ִ� ������ �Է��ϼ��� : ");
	scanf("%d", &input);

	for (i = 0; i <= input; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("o \n");
	}

	for (i = (input - 1); i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("o \n");
	}

	return 0;
}