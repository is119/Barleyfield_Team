#include <stdio.h>

int main(void)
{
    int i,j,n;
    printf("�ﰢ���� ũ�⸦ �Է��ϼ���. : ");
    scanf("%d",&n);
    //4-1 3-2 2-3 1-4 0-5
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }            
    
    return 0;
}

