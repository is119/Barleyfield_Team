#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *ptr=(char*)malloc(50);
    char fstr[50];
    int i,k=0;
    int arr[50];
    printf("���ڿ��� �Է��ϼ��� : ");
    gets(ptr);
    printf("ã�� ���� �ܾ�� �����ΰ���? : ");
    scanf("%s",fstr);
    for(i=0;ptr[i]!=0;i++)
    {
        if(ptr[i]==' ')
        {
            arr[k+1]=&ptr[i+1];
            ++k;
        }
    }
    arr[0]=ptr;   // arr�� �ܾ� ���۱����� �ּҰ� ����. 
   for(k=0;;k++)
   {
       if(arr[k]==strstr(ptr,fstr))
       { 
            printf("�ܾ� %s(��)�� %d��° �Դϴ�.\n",fstr,k+=1);
            break;
       }
   }
   free(ptr);
    return 0;
}
    //int strncmp(char * dest, const char * src, size_t n);
    //void * calloc(size_t elt_count, size_t elt_size);
    //char * strstr(s1,s2); s1:�˻��� ���, s2:�˻��Ұ� 
