#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#pragma warning(disable: 4996)

int main()
{
	char str[50];
	char *temp;
	char find[10]; //�˻��� �ܾ�

	char *ptr; //�˻��� �ܾ��� �ּ� ��ġ
	int pos; //�˻��� �ܾ��� ��ġ
	int i;
	int count = 1; // �˻��� �ܾ ���忡�� ���°���� ��

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);

	temp = (char*)malloc(sizeof(str));
	strcpy(temp, str);
	
	printf("ã�� ���� �ܾ�� �����ΰ���? : ");
	scanf("%s", find);

	ptr = strstr(temp, find);

	pos = (int)(ptr - temp + 1);

	for (i = 0; i < pos; i++)
	{
		if (str[i] == ' ')
			count++;
	}
	printf("�ܾ� %s(��)�� %d��° ��ġ�� �ֽ��ϴ�.", find, count);

	
	printf("\n");

	system("pause");
	return 0;
}