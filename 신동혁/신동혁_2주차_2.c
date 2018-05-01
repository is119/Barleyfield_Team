#include<stdio.h>
#include<stdlib.h>

int main()
{
	int input;
	int i, j;
	double arr1[3][3];
	double arr2[3][3];

	printf("행렬 연산 선택 (1 : 덧셈, 2 : 뺄셈) : ");
	scanf_s("%d", &input);
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("1번째 행렬 %d행 %d열의 값 : ", (i + 1), (j + 1));
			scanf_s("%lf", &arr1[i][j]);
		}
	}

	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("2번째 행렬 %d행 %d열의 값 : ", (i + 1), (j + 1));
			scanf_s("%lf", &arr2[i][j]);
		}
	}

	printf("\n");

	if (input == 1)
	{
		printf("행렬 덧셈 결과 : ");
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
		printf("행렬 뺄셈 결과 : ");
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
		printf("잘못된 연산입니다.");

	printf("\n");

	system("pause");

	return 0;

}