#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNING

void amicable(int num1, int num2)		// 우애수 또는 친화수 함수
{
	int quotient_sum_1 = 0, quotient_sum_2 = 0;		// 몫 (여기서는 sum으로 몫을 다 더한 후 비교. 배열 사용해도 상관 없음.)
	int i = 0;
	for (i = 1; i < num1; i++)
	{
		if (num1 % i == 0)
			quotient_sum_1 += i;	
	}
	for (i = 1; i < num2; i++)
	{
		if (num2 % i == 0)
			quotient_sum_2 += i;
	}
	
	if ( (quotient_sum_1 == num2) && (quotient_sum_2 == num1) )
		printf("두 수는 우애수입니다.\n");
	else
		printf("두 수는 우애수가 아닙니다.\n");


}

int main()
{
	int n1 = 0, n2 = 0;
	int result = 0;
	printf("수 2개를 입력하세요 : ");
	scanf("%d %d", &n1, &n2);
	amicable(n1, n2);		// 우애수 함수를 사용합니다. (반환형은 상관 없음.)
	return 0;
}