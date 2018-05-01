#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void matrix_add(double m1[][3], double m2[][3], double r[][3])
{
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			(*(r + i))[j] = (*(m1 + i))[j] + (*(m2 + i))[j];		// 2차원 배열 포인터 사용
		}
	}

	printf("행렬 덧셈 결과 : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%lf ", (*(r + i))[j]);
		}
		printf("\n");
	}
	

}

void matrix_sub(double m1[][3], double m2[][3], double r[][3])
{
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			(*(r + i))[j] = (*(m1 + i))[j] - (*(m2 + i))[j];
		}
	}

	printf("행렬 뺄셈 결과 : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%lf ", (*(r + i))[j]);
		}
		printf("\n");
	}


}


int main()
{
	int choice = 0;
	double matrix1[3][3] = { 0, };		// 처음엔 모두 0으로 초기화
	double matrix2[3][3] = { 0, };
	double result[3][3] = { 0, };
	int i = 0, j = 0;
	
	printf("행렬 연산 선택 (1 : 덧셈, 2 : 뺄셈) : ");
	scanf("%d", &choice);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("1번째 행렬 %d행 %d열의 값 : ", i + 1, j + 1);
			scanf("%lf", &matrix1[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("2번째 행렬 %d행 %d열의 값 : ", i + 1, j + 1);
			scanf("%lf", &matrix2[i][j]);
		}
	}
	printf("\n");

	switch (choice)
	{
	case 1:
	{
		matrix_add(matrix1, matrix2, result);
		break;
		
	}
	default:
		matrix_sub(matrix1, matrix2, result);
		break;
	}



	return 0;
}