/*
  Expt.No.: 8.2
  Title   : Find the string is Palindrome or not
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
*/
#include<stdio.h>
int main()
{
    char name[20],copy[20];

    printf("Enter a String:");
    scanf("%s",name);       //test

    strcpy(copy, name);

    strrev(copy);           //tset

    if(strcmp(name,copy) == 0){
        printf("Its a Palindrome");
    }else{
        printf("Its not a Palindrome");
    }

    return 0;
}
/* OUTPUT
   Enter a String:level
   Its a Palindrome        */
