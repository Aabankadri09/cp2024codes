/*
  Expt.No.: 8.1
  Title   : Find the length of a string using library function
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
*/
#include<stdio.h>
#include<string.h>
int main()
{
    //Declares a string of size 100
    char str[100];

    //Initialize a variable to store the length of the string
    int l = 0;

    //Display information about the task
    printf("\n\nFind the length of a string:\n");
    printf("--------------------\n");
    printf("Input the string:");

    //Read a string from standard input (keyboard) using fgets()
    fgets(str,sizeof str,stdin);

    //Loop to calculate the length of the string
    while(str[l] !='\0'){
        //Increment the length counter until null terminator '\0' encountered
        l++;
    }

    //Display the length of the string
    printf("Length of the string is : %d\n\n",l-1);

    return 0;
}
/* OUTPUT
    Find the length of a string:
    --------------------
    Input the string:Aaban
    Length of the string is : 5      */

