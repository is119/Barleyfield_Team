#include <stdio.h>
int aliquot(int num,int *arr)
{
    int i=0,j,n,sum=0;
    for(j=1;j<=num;j++)  //�迭�� ��� ����
    {
        if(num%j==0)
        {
            arr[i]=j;
            sum+=arr[i];
            i++;
            continue;
        }    
    }        
    return sum-num;    //�ڱ��ڽ��� ������ ����� �� ����
}    
int main(void)
{
    int a,b,i,n=1,sumA=0,sumB=0;
    int arrA[30],arrB[30];
    printf("�� 2���� �Է��ϼ���.: ");
    scanf("%d %d",&a,&b);
    
    sumA=aliquot(a,arrA);
    sumB=aliquot(b,arrB);
    
    printf("%d�� ��� : ",a);
    for(i=0;i<30;i++)
    {
        printf("%d ",arrA[i]);
        if(arrA[i]==a)
            break;
    }
    printf("\n");            
    printf("%d�� ��� : ",b);
    for(i=0;i<30;i++)
    {
        printf("%d ",arrB[i]);
        if(arrB[i]==b)
            break;
    }
    printf("\n");    
    
    if(sumA==b||sumB==a)  //ģȭ�� üũ
        printf("�� ���� ģȭ���Դϴ�.\n");
    else
        printf("�� ���� ģȭ���� �ƴմϴ�.\n");
        
    
    return 0;    
}

