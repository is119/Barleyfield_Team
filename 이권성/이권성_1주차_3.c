#include <stdio.h>
int main(void)
{
    int i,j,n;
    printf("최대 지름을 입력하세요. : ");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("o\n");
        
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf("* ");
        }
        printf("o\n");
    }    
    
    return 0;
}            

