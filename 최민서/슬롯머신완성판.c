#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int start = 0;
	int money = 1000;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("������ �÷����Ͻ÷��� �ʱ� �������� �����ּ���.(�ּ� 100�� �̻�) => ");
	scanf_s("%d", &money);
	money = money;
	if (money < 100)
	{
		printf("�������� �����Ͽ� ������ ������ �� �����ϴ�.\n");
		system("pause");
		return 0;
	}
	printf("�ʱ� �������� %d���̸�, ���� ���� �� 100�� �����մϴ�.\n", money);
	printf("���� ������ ���Ͻø� 1�� �Է�, �ߴ��Ͻ÷��� 0�� �Է��ϼ���.\n");
	scanf_s("%d", &start);
	while (start>1)
	{
		printf("1�� ������ �ٽý���\n");
		scanf_s("%d", &start);
	}
	while (start == 1)
	{
		srand(time(NULL)); // ���� �ʱ�ȭ
		b = rand() % 10; // 0~9 ���� ���� ���� ����
		c = rand() % 10;
		d = rand() % 10;
		printf("<< %d %d %d >>\n", b, c, d);
		money = money - 100;
		if (b == c && c == d)
		{
			money = money + 1100;
			printf("��÷�Դϴ�. ��� 1000���� �����̽��ϴ�.\n");
		}
		start++;
		printf("�������� %d���Դϴ�.\n", money);
		printf("������ ����Ͻ÷��� 1�� �Է�, �ߴ��Ͻ÷��� 0�� �Է��ϼ���.\n");
		scanf_s("%d", &start);
		while (start > 1)
		{
			printf("1�� ������ �ٽý���\n");
			scanf_s("%d", &start);
		}
		if (money < 100)
		{
			printf("�������� ���� �����񺸴� �����Ƿ� ������ �����մϴ�.\n");
			system("pause");
			return 0;
		}
	}
	return 0;
}