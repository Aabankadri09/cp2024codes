/*
  Expt.No.: 3
  Title   : Menu Drive Calculator
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
 */
#include<stdio.h>
int main()
{
    //Declare variables
      float num1,num2,result;
      char operation;

      //Label to start the loop
      START:

      //Display menu of operations for the user
      printf("\t\t\t*Driven Calculation*\n\n\n");
      printf("+ : \tAddition\n");
      printf("- : \tSudtraction\n");
      printf("/ : \tDivision\n");
      printf("* : \tMultiplication\n");
      printf("%% : \tModulus(only for integers)\n");
      printf("e : \tExit\n\n");  //Adding exit option

      //Prompt for the first number or exit command
      printf("Enter Num1 (or 'e' to exit):");

    //If the input is not a float,check if it's the command
       if(scanf("%f",&num1) != 1){
          char checkExit;
          //Character variable to store non-numeric input
       scanf("%c",&checkExit);//Read the character input

    //Check if the input character is 'e' or 'E' for exiting
       if(checkExit=='e' || checkExit=='E'){
             printf("Exiting program...\n");
             return 0; //Exit the program
       }else{
        printf("Invalid input. Please enter a number or 'e' to exit.\n");

        //Clear input buffer for any remaining characters
                while(getchar() != '\n');
                goto START; //Go back to the start of the loop
          }
       }
       //Prompt for the second number
       printf("Enter Num2:");
       scanf("%f",&num2);

       //Prompt for the operation
       printf("Enter operation(+,-,*,/,%%):");
       scanf("%c",&operation); //Space before %c to ignore newline

       //Perform operation based on the user's choice
       switch(operation){
   case '+':
             //Addition operation
             result = num1 + num2;
             printf("%.1f + %.1f = %.1f\n",num1,num2,result);
             break;
   case '-':
             //Subtraction operation
             result = num1 - num2;
             printf("%.1f - %.1f = %.1f\n",num1,num2,result);
             break;
   case '*':
            //Multiplication operation
             result = num1 * num2;
             printf("%.1f * %.1f = %.1f\n",num1,num2,result);
             break;
   case '/':
            //Division operation
            if(num2 != 0){
             result = num1 / num2;
             printf("%.1f / %.1f = %.1f\n",num1,num2,result);
       }else{
             printf("Error: Division by zero is not allowed.\n");
       }
       break;
   case '%'
           //Modulus operation,only applicable to integers
             if((int)num2 != 0){
           printf("%d %% %d = %d\n", (int)num1,(int)num2,(int)num1 % (int)num2);
        }else{
                printf("Error: Modulus by zero is not allowed.\n");
        }
        break;
   default:
      //If an invalid operation symbol is entered
      printf("Invalid operation.\n");
      break;
   }
   //Go back to the START label for continuous use
   goto START;

   return 0;
}
/* OUTPUT
              *Driven Calculator*
   + :   Addition
   - :   Subtraction
   / :   Division
   * :   Multiplication
   % :   Modulus (only for integer
   e :   Exit

   Enter Num1 (or'e' to exit):50
   Enter Num2 : 50
   Enter operation(+,-,*,/,%): +
   50.0 + 50.0 = 10.0

              *Driven Calculator*
   + :   Addition
   - :   Subtraction
   / :   Division
   * :   Multiplication
   % :   Modulus (only for integer
   e :   Exit

   Enter Num1 (or'e' to exit):60
   Enter Num2 : 50
   Enter operation(+,-,*,/,%): -
   50.0 - 50.0 = 10.0

              *Driven Calculator*
   + :   Addition
   - :   Subtraction
   / :   Division
   * :   Multiplication
   % :   Modulus (only for integer
   e :   Exit

   Enter Num1 (or'e' to exit):50
   Enter Num2 : 2
   Enter operation(+,-,*,/,%): *
   50.0 * 2.0 = 100.0

              *Driven Calculator*
   + :   Addition
   - :   Subtraction
   / :   Division
   * :   Multiplication
   % :   Modulus (only for integer
   e :   Exit

   Enter Num1 (or'e' to exit):50
   Enter Num2 : 5
   Enter operation(+,-,*,/,%): /
   50.0 / 5.0 = 10.0

              *Driven Calculator*
   + :   Addition
   - :   Subtraction
   / :   Division
   * :   Multiplication
   % :   Modulus (only for integer
   e :   Exit

   Enter Num1 (or'e' to exit):17
   Enter Num2 : 16
   Enter operation(+,-,*,/,%): %
   17 % 16 = 1

              *Driven Calculator*
   + :   Addition
   - :   Subtraction
   / :   Division
   * :   Multiplication
   % :   Modulus (only for integer
   e :   Exit

   Enter Num1 (or'e' to exit):8
   Enter Num2 : 50
   Enter operation(+,-,*,/,%): .
   Invalid operation.

              *Driven Calculator*
   + :   Addition
   - :   Subtraction
   / :   Division
   * :   Multiplication
   % :   Modulus (only for integer
   e :   Exit

   Enter Num1 (or'e' to exit):e
   Exiting program...

   */
