#include <stdio.h>
#include <stdlib.h>
#include "Prototypes.h"
#include "DataTypes.h"

;void Greeting()
{
    printf("\n \n \n \n \n \n \n \n \t \t   Welcome To the Employee Data Program");
    printf("\n \n \t \t To Continue Please Press any key & Enter \n");
    scanf("%c",&EntryKey);
    fflush(stdin);
    system("cls");

}
Hachigo EMP_GetNumberOfEmployees()
{
    printf("\n \n \n \n \n \n \n \n \t \t Enter the Maximum Numbers of Employees you want\n");
    fflush(stdin);
    printf("\t \t \t \t \t");
    if(scanf("%d",&NumberOfEmplyee)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t \t Please Restart the program \n\n\n");
            return 0;

        }
    else if((NumberOfEmplyee)<=0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t \t Please Restart the program \n\n\n");
            return 0;
        }
}
void Opetion_Minu()
{
    fflush(stdin);
    system("cls");
    printf("\n \n \n \t \t Please enter the number of operation you want to do \n");
    printf("\n \t \t  1.Modify the maximum number of employees \n");
    printf(" \t \t  2.Enter a new employee  \n");
    printf(" \t \t  3.Display an employee  \n");
    printf(" \t \t  4.Delete  an employee \n");
    printf(" \t \t  5.Modify the salary of an employee  \n");
    printf(" \t \t  6.Display all the employees  \n");
    printf("\n");
    printf("\n \n");
    printf("\t \t \t Your Choice: ");
    if(scanf("%d",&Opetion)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t \t Please Restart the program \n\n\n");
            return 0;

        }
    else if((Opetion)<=0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t \t Please Restart the program \n\n\n");
            return 0;
        }
    if(Opetion>6 && Opetion<1)
    {
        system("cls");
        printf("\n \n \n \t \t \t     Wrong Input Formate \n");
        printf("\n \n \t \t \t Please Restart the program \n\n\n");
        return 0;
    }
    Minu_Opetions();
}
