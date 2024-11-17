/*
  Expt.No.: 6
  Title   : Print how many times the function is called
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
  */
#include<stdio.h>
//Counter function using static storage class
void counter()
{
    static int num=0;
    //Static variable to retain its value between function calls
    printf("counter function called %d times\n",num);
    num++;
}
int main()
{
    //Call the counter function multiple times
    printf("\t\t*Calling the counter function*\n\n");
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();

    return 0;
}
/* OUTPUT
    *Calling the counter function*

    counter function called 0 times
    counter function called 1 times
    counter function called 2 times
    counter function called 3 times
    counter function called 4 times
    counter function called 5 times
    counter function called 6 times
    counter function called 7 times
    counter function called 8 times
    counter function called 9 times
    counter function called 10 times     */
