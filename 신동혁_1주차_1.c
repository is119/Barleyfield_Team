#include<stdio.h>
#include<stdlib.h>
int main()
{
	int input;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &input);

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < (input + 1); j++)
		{
			printf("%d * %d = %d\t", i, j, (i * j));
		}
		printf("\n");
	}

	system("pause");

	return 0;

}