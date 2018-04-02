#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *ptr=(char*)malloc(50);
    char fstr[50];
    int i,k=0;
    int arr[50];
    printf("문자열을 입력하세요 : ");
    gets(ptr);
    printf("찾고 싶은 단어는 무엇인가요? : ");
    scanf("%s",fstr);
    for(i=0;ptr[i]!=0;i++)
    {
        if(ptr[i]==' ')
        {
            arr[k+1]=&ptr[i+1];
            ++k;
        }
    }
    arr[0]=ptr;   // arr에 단어 시작글자의 주소가 들어간다. 
   for(k=0;;k++)
   {
       if(arr[k]==strstr(ptr,fstr))
       { 
            printf("단어 %s(은)는 %d번째 입니다.\n",fstr,k+=1);
            break;
       }
   }
   free(ptr);
    return 0;
}
    //int strncmp(char * dest, const char * src, size_t n);
    //void * calloc(size_t elt_count, size_t elt_size);
    //char * strstr(s1,s2); s1:검색의 대상, s2:검색할것 
