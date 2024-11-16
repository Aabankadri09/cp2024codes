/*
   Expt.No.: 2.2
  Title   : Find the sum of all odd numbers
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
*/

#include<stdio.h>
int main()
{
    int start_num,end_num,sum=0,i;

    printf("\t\t\t *** Sum of odd numbers *** \n\n\n");

    //Take User Input
    printf("Enter starting number:");
    scanf("%d", &start_num);
    printf("Enter ending number:");
    scanf("%d", &end_num);

    //Check if starting number is higher than ending number
    if(start_num>end_num){
        printf("Error : Ending number should be higher than starting number");
        return 1;
    }

    //Add all odd number
    for(i = start_num;i <= end_num; i++){
        if(i&2 != 0){
            sum=sum+i;
        }
    }
    //Print in results
    printf("Sum of all the odd numbers between %d and %d = %d", start_num, end_num, sum);

    return 0;
}
/* OUTPUT
   *** Sum of odd numbers ***

  Enter start number:3
  Enter ending number:11
  Sum of all the odd numbers between 3 and 11 = 35
  */
