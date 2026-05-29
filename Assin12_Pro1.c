///     Accept Number from User and Display its Digits in Reverse Order
///     INPUT : 2395
///     OUTPUT : 5
///              9
///              3
///              2


#include<stdio.h>

void DisplayDigit(int iNo){

    int iDigit = 0;

    if(iNo<0){iNo = - iNo;}

    while(iNo>0)
    {
        iDigit = iNo % 10;

        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Your Number : ");
    scanf("%d", &iValue);
    
    DisplayDigit(iValue);
    
    return 0;
}


////Time Complexity = O(N)
