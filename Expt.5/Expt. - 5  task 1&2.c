/*
  Expt.No.: 5
  Title   : Find factorial using recursive and iterative
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
  */
#include<stdio.h>

//Recursive function
int factorial_recursive(int n){
    if(n <= 1) return 1;
    return n * factorial_recursive(n - 1);
}

//Iterative function
int factorial_iterative(int n){
    int result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}

int main()
{

    int num;
    //Input the number
    printf("Enter a number:");
    scanf("%d", &num);

    //Factorial using recursive
    printf("Factorial (Recursive): %d\n", factorial_recursive(num));
    //Factorial using iterative
    printf("Factorial (iterative): %d\n", factorial_iterative(num));

    return 0;
}
/* OUTPUT
   Enter a number:5
   Factorial (Recursive): 120
   Factorial (iterative): 120      */
