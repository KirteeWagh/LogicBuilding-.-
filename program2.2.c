
// Accept one number from user and Print that number of * on screen.
#include<stdio.h>
void Display(int iNo)
{
    
    while(iNo>0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
