int main(void)
{
    int i,j,n,dan;
    
    printf("단을 입력하세요. : ");
    scanf("%d",&dan);
    
    for(i=1;i<10;i++)
    {
        for(j=1;j<=dan;j++)
        {
            printf("%d * %d = %-2d ",j,i,i*j);
        }
        
        printf("\n");
    }
    
    return 0;
}    

