#include <stdio.h>
int aliquot(int num,int *arr)
{
    int i=0,j,n,sum=0;
    for(j=1;j<=num;j++)  //배열에 약수 대입
    {
        if(num%j==0)
        {
            arr[i]=j;
            sum+=arr[i];
            i++;
            continue;
        }    
    }        
    return sum-num;    //자기자신을 제외한 약수의 합 리턴
}    
int main(void)
{
    int a,b,i,n=1,sumA=0,sumB=0;
    int arrA[30],arrB[30];
    printf("수 2개를 입력하세요.: ");
    scanf("%d %d",&a,&b);
    
    sumA=aliquot(a,arrA);
    sumB=aliquot(b,arrB);
    
    printf("%d의 약수 : ",a);
    for(i=0;i<30;i++)
    {
        printf("%d ",arrA[i]);
        if(arrA[i]==a)
            break;
    }
    printf("\n");            
    printf("%d의 약수 : ",b);
    for(i=0;i<30;i++)
    {
        printf("%d ",arrB[i]);
        if(arrB[i]==b)
            break;
    }
    printf("\n");    
    
    if(sumA==b||sumB==a)  //친화수 체크
        printf("두 수는 친화수입니다.\n");
    else
        printf("두 수는 친화수가 아닙니다.\n");
        
    
    return 0;    
}

