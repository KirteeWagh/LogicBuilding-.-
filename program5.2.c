
//  Accept the number from user and print that number .
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt =0;
    for (iCnt=1; iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter Frequency:\n ");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}
