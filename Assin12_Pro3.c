///     Accept Number from User and Count Frequency of 2 in it
///     INPUT : 2395
///     OUTPUT : 1


#include<stdio.h>


int CountTwo(int iNo){

    int iDigit = 0;
    int iChkTwo = 0;

    if(iNo<0){iNo = - iNo;}

    while(iNo>0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
        {
            iChkTwo++;
        }
        
        iNo = iNo / 10;
    }

    return iChkTwo;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Number : ");
    scanf("%d", &iValue);
    
    iRet = CountTwo(iValue);
    printf("Frequency of 2 in your Number : %d", iRet);
    
    return 0;
}


////Time Complexity = O(N)
