/*
  Expt.No.: 4
  Title   : Find prime numbers between two numbers
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
 */
#include<stdio.h>
//Function Declaration
int prime();
int main()
{
    printf("\t\t\t*Prime number between two numbers*\n\n\n");

    //User Input
    int num1,num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    //Function call
    printf("Prime numbers between %d and %d are:\n",num1,num2);
    for(int num = num1;num <= num2;num++){
        if(prime(num)){
            printf("%d",num);
        }
    }
    printf("\n");
    return 0;
}
    //Function Definition
    int prime(int num)
{
    if(num<=1)return 0;
    for(int i = 2;i*i <= num;i++){
        if(num%i==0)return 0;
    }
    return 1;
}
/* OUTPUT
    *Prime number between two numbers*

    Enter first number:1
    Enter second number:10
    Prime numbers between 1 and 10 are:
    2357                                         */
