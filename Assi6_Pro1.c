#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }


   if(iNo<50)
    {
      printf("Small");
    }

    else if(iNo>50 && iNo<100)
    {
      printf("Medium");
    }

    else

      {
      printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}


///Time Complexity = O(1)