#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k;
	int input;

	printf("�ﰢ���� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &input);


	for (i = 0; i <= input; i++)
	{
		for (j = (input - i); j > 0; j--)
		{
			printf(" ");
		}

		for (k = 0; k < i; k++)
		{
			printf("*");
		}

		printf("\n");
	}
	system("pause");
	return 0;
}