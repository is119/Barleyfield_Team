#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	int input = 0;
	int count = 0;

	printf("�ﰢ���� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &input);
	
	for (i = 0; i <= input; i++)
	{
		for (j = 0; j < input - count; j++)
			printf(" ");
		j = 0;
		for (j = 0; j < count; j++)
			printf("*");

		count++;
		printf("\n");
	}

	return 0;
	

}