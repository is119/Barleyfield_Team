#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void ClearBuffer()
{
	while (getchar() != '\n');
}


int main()
{
	char *str = (char *)malloc(sizeof(char) * 200);			// 문장을 입력받을 때 동적 할당 사용.
	char *findstr = (char *)malloc(sizeof(char) * 20);
	int i = 0, count = 0, length = 0;
	printf("문자열을 입력하세요 : ");
	gets(str);
	char *token = strtok(str, " ");		// 공백을 기준으로 단어를 나누어주는 strtok 함수 사용
										// 참고 : https://dojang.io/mod/page/view.php?id=381
	length = strlen(str);

	printf("찾고 싶은 단어는 무엇인가요? : ");
	scanf("%s", findstr);
	ClearBuffer();

	while (token != NULL)
	{
		count++;
		if (strcmp(token, findstr) == 0)		// strcmp로 단어 비교. token == findstr를 사용하면 결과가 나오지 않는다.
		{
			printf("단어 %s(은)는 %d번째 위치에 있습니다. \n", findstr, count);
			break;
		}
		//printf("%s\n", token);
		
		token = strtok(NULL, " ");

	}

	free(str);
	free(findstr);
	return 0;
}
