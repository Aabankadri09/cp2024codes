/*
 Expt.No.: 1.2
 Title   : Print PCM Percentage & average
 Name    : Mohammed Aaban Javid Kadri
 UIN     : 241P120
 Div     : D
*/

#include<stdio.h>
int main()
{
    int physics;
    int chemistry;
    int maths;
    float average;

    //Input marks
    printf("Enter physics :\n");
    scanf("%d",&physics);
    printf("Enter chemistry :\n");
    scanf("%d",&chemistry);
    printf("Enter maths :\n");
    scanf("%d",&maths);

    //Calculate average
    average = (physics+chemistry+maths)/3;

    //Print average
    printf("PCM average=%.3f",average);

    //Check eligibility
    average>50?printf("/n student is eligible for admission")
    : printf("/n student is not eligible for admission");

    return 0;
}
/* OUTPUT
  Enter physics :
  56
  Enter chemistry :
  73
  Enter maths :
  87
  PCM average=72.000/n student is eligible for admission     */
