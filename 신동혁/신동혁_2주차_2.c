#include<stdio.h>
#include<stdlib.h>

int main()
{
	int input;
	int i, j;
	double arr1[3][3];
	double arr2[3][3];

	printf("��� ���� ���� (1 : ����, 2 : ����) : ");
	scanf_s("%d", &input);
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("1��° ��� %d�� %d���� �� : ", (i + 1), (j + 1));
			scanf_s("%lf", &arr1[i][j]);
		}
	}

	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("2��° ��� %d�� %d���� �� : ", (i + 1), (j + 1));
			scanf_s("%lf", &arr2[i][j]);
		}
	}

	printf("\n");

	if (input == 1)
	{
		printf("��� ���� ��� : ");
		printf("\n");

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%lf ", (arr1[i][j] + arr2[i][j]));
			}
			printf("\n");
		}
	}

	else if (input == 2)
	{
		printf("��� ���� ��� : ");
		printf("\n");

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%lf ", (arr1[i][j] - arr2[i][j]));
			}
			printf("\n");
		}
	}

	else
		printf("�߸��� �����Դϴ�.");

	printf("\n");

	system("pause");

	return 0;

}