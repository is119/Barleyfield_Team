#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	int input = 0;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &input);

	for (j = 1; j <= 9; j++)
	{
		for (i = 1; i <= input; i++)
		{
			if (i != 1 && (i*j) < 10)		// ���� ���߱�� if��
			{
				printf("%d * %d = %d  ", i, j, i*j);
			}
			else
				printf("%d * %d = %d ", i, j, i*j);
			
		}
		printf("\n");
	}

	return 0;
}