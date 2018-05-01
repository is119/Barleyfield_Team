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
	char find[10]; //검색할 단어

	char *ptr; //검색된 단어의 주소 위치
	int pos; //검색된 단어의 위치
	int i;
	int count = 1; // 검색된 단어가 문장에서 몇번째인지 셈

	printf("문자열을 입력하세요 : ");
	gets(str);

	temp = (char*)malloc(sizeof(str));
	strcpy(temp, str);
	
	printf("찾고 싶은 단어는 무엇인가요? : ");
	scanf("%s", find);

	ptr = strstr(temp, find);

	pos = (int)(ptr - temp + 1);

	for (i = 0; i < pos; i++)
	{
		if (str[i] == ' ')
			count++;
	}
	printf("단어 %s(은)는 %d번째 위치에 있습니다.", find, count);

	
	printf("\n");

	system("pause");
	return 0;
}
