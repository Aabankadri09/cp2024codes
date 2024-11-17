/*
  Expt.No.: 7.1
  Title   : Find the largest element in an array
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
 */
#include<stdio.h>
int main()
//Function to find the largest element in an array
{
    int input[50],largest,size;
    printf("Enter size:");
    scanf("%d",&size);
    printf("Enter arrays:\n");

    //Assume the first element is the largest
    for(int i = 0; i<size ;i++){
        scanf("%d",&input[i]);
    }
    //Input size of the array
    printf("The Arrays are:\n");
    for(int j = 0; j < 5; j++){
        printf("%d\n",input[j]);
    }
    //Find the largest element
    for(int k = 0; k < size; k++){
        if(largest < input[k]){
            largest = input[k];
        }
    }
    //Output largest element
    printf("\nLargest number is %d\n",largest);
    return 0;
}
/* OUTPUT
    Enter size:5
    Enter arrays:
    10
    20
    5
    30
    15
    The Arrays are:
    10
    20
    5
    30
    15

    Largest number is 30        */
