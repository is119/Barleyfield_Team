#include <stdio.h>

int main()
{
	int i, j, num, sum = 0;
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &num);

	for (i = 1; i < 10; i++) {
		for (j = 1; j <= num; j++) {
			sum = j * i;
			printf("%d * %2d = %2d\t", j, i, sum);
		}
		printf("\n");
	}

	return 0;
}