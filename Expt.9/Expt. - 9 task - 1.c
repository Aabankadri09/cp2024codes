/*
  Expt.No.: 9
  Title   : To read 5 student data from the user and then display the topper on the screen
  Name    : Mohammed Aaban Javid Kadri
  UIN     : 241P120
  Div     : D
*/
#include<stdio.h>
#include<string.h>

//Define the structure to store student details
struct Student{
    char name[30];
    int roll_no;
    int total_marks;
};

int main()
{
    //Array to store 5 students
    struct Student stu[5];

    //Input student details
    int highest_marks=0,highest_index=0;
    for(int i=0;i<5;i++){
        printf("Enter Student Data : %d\n", i+1);

        printf("Enter Name:");
        gets(stu[i].name);

        printf("Enter Roll No.:");
        scanf("%d",&stu[i].roll_no);

        printf("Enter Total_marks.:");
        scanf("%d",&stu[i].total_marks);

        //Determine topper while inputting
        if(stu[i].total_marks > highest_marks){
            highest_marks = stu[i].total_marks;
            highest_index = i;
        }

        getchar();
    }


    //Topper Details
    printf("\t*Topper Details*\n\n");
    printf("Name: %s\n",stu[highest_index].name);
    printf("Roll No.: %d\n" ,stu[highest_index].roll_no);
    printf("Total Marks : %d\n" ,stu[highest_index].total_marks);

 return 0;
}
/* OUTPUT
    Enter Student Data : 1
    Enter Name:Alice
    Enter Roll No.:1
    Enter Total_marks.:98
    Enter Student Data : 2
    Enter Name:Bob
    Enter Roll No.:2
    Enter Total_marks.:87
    Enter Student Data : 3
    Enter Name:Charlie
    Enter Roll No.:3
    Enter Total_marks.:45
    Enter Student Data : 4
    Enter Name:David
    Enter Roll No.:4
    Enter Total_marks.:54
    Enter Student Data : 5
    Enter Name:Eve
    Enter Roll No.:5
    Enter Total_marks.:76
            *Topper Details*

    Name: Alice
    Roll No.: 1
    Total Marks : 98                 */


