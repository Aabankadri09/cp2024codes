/*
  Expt.No.: 2.1
  Title   : Find number is even or odd
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
*/
#include<stdio.h>
int main()
{
    int a;

    //Input a number
    printf("Enter Number:");
    scanf("%d",&a);

    //Check even or odd
    if(a%2==0)
    {
        printf("%d is even",a);
    }else
    {
        printf("%d is odd",a);
    }

    return 0;
}
/* OUTPUT
  Enter Number:22
  22 is even             */
