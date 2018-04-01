#include <stdio.h>
void PlusMatrix(double arrA[][3],double arrB[][3],double Rarr[][3] )
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            Rarr[i][j]=arrA[i][j]+arrB[i][j];
            printf("%-8.2lf ",Rarr[i][j]);
        }
        printf("\n");
    }
}        
void MinusMatrix(double arrA[][3],double arrB[][3],double Rarr[][3] )
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            Rarr[i][j]=arrA[i][j]-arrB[i][j];
            printf("%-8.2lf ",Rarr[i][j]);
        }
        printf("\n");
    }
}    
void MultMatrix(double arrA[][3],double arrB[][3],double Rarr[][3] )
{
    int i,j,k;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                Rarr[i][j]+=arrA[i][k]*arrB[k][j];
                //printf("%.2lf ",Rarr[i][j]);
            }    
            printf("%-8.2lf ",Rarr[i][j]);

        }
        printf("\n");
    }
}        
int main(void)
{
    double arrA[3][3];
    double arrB[3][3];
    double Rarr[3][3];
    int i,j,k,n;
    
    printf("Çà·Ä ¿¬»ê ¼±ÅÃ(1. µ¡¼À 2.»¬¼À 3.°ö¼À): ");
    scanf("%d",&n);
    for(k=1;k<3;k++)
    {    
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d¹øÂ° Çà·Ä %dÇà %d¿­ ÀÔ·Â : ",k,i+1,j+1);
                if(k==1)
                    scanf("%lf",&arrA[i][j]);
                else
                    scanf("%lf",&arrB[i][j]);
            }
        }
        printf("\n");
    }
    printf("-------------------\n");
    printf("½ÇÇà °á°ú\n");
    if(n==1)
        PlusMatrix(arrA,arrB,Rarr);
    else if(n==2)
        MinusMatrix(arrA,arrB,Rarr);
    else if(n==3)
        MultMatrix(arrA,arrB,Rarr);
    else
        printf("wrong number!\n");
    
    return 0;
}

