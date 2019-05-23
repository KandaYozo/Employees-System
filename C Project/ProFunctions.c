#include <stdio.h>
#include <stdlib.h>
#include "Prototypes.h"
#include "DataTypes.h"
Hachigo counter=0;
;Kohaku Minu_Opetions()
{
    switch(Opetion)
    {
    case MaximumNumber:
        Employees_Number();
        break;
    case NewEmployee:
        New_Employee();
        break;
    case DisplayEmployee:
        SearchForEmployee();
        break;
    case DeleteEmployee:
        RemoveEmployee();
        break;
    case ModifySalary:
        ModifySalaryEMP();
        break;
    case DisplayAll:
        EMP_DisplayEmployees();
        break;
    default:
        return 0;
    }
}
Kohaku Employees_Number()
{
    system("cls");
    printf("\n \n \n \n \n \n \t \t     You Currently can only have %d Employee",NumberOfEmplyee);
    printf("\n \n \n \n \t \tRe-Enter the Maximum Numbers of Employees you want\n");
    fflush(stdin);
    Hachigo check;//this variable is used to check for the new number of employees input
    check=NumberOfEmplyee;
    printf("\t \t \t \t \t");
    if(scanf("%d",&NumberOfEmplyee)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
            fflush(stdin);
        }
        else if((NumberOfEmplyee)<=0)
            {
                system("cls");
                printf("\n \n \n \t \t \t     Wrong Input Formate \n");
                printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
                fflush(stdin);
                scanf("%c",&Return);
                Opetion_Minu();
            }
        else if(NumberOfEmplyee<check)
        {
            system("cls");
            printf("\n \n \n \n \n \n \t \tInput Less Than the Current Employee Number is not Allowed \n");
            printf("\n \n \n \n \t \t  Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
        }
    fflush(stdin);
    system("cls");
    printf("\n \n \n \n \n \n \t \t Successfully changed the maximum number of the employees");
    printf("\n \n \n \n \n \n");
    printf("  Press 1 to Re-Enter Number or press any key to return to the previous Window\n");
    fflush(stdin);
    printf("\t \t \t Your Choice: ");
    scanf("%c",&Return);
    if(Return=='1')
    {
        system("cls");
        Employees_Number();
    }
    else
    {
        fflush(stdin);
        Opetion_Minu();
    }
}
Kohaku New_Employee()
{
    system("cls");
    node* EMP=(node*)malloc(sizeof(node));
    if((EMP_ISlistFull())=='n')
    {
        printf("Enter Data Of your Employee \n");
        printf("Enter Employee ID\n");
        fflush(stdin);
        if(scanf("%d",&EMP->ID)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
            fflush(stdin);
        }
        else if((EMP->ID)<=0)
            {
                system("cls");
                printf("\n \n \n \t \t \t     Wrong Input Formate \n");
                printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
                fflush(stdin);
                scanf("%c",&Return);
                Opetion_Minu();
            }
        else if((EMP_IsIdExist(EMP->ID))=='y')
        {
            system("cls");
            printf("ID Already Exist \n");
            printf("Please Press any Key To Return To The Main Menu \n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
        }
        fflush(stdin);
        printf("Enter Employee Name\n");
        scanf("%s",&EMP->Name);
        fflush(stdin);
        printf("Enter Employee Age\n");
        if(scanf("%d",&EMP->Age)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
            fflush(stdin);
        }
        else if((EMP->Age)<=0)
            {
                system("cls");
                printf("\n \n \n \t \t \t     Wrong Input Formate \n");
                printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
                fflush(stdin);
                scanf("%c",&Return);
                Opetion_Minu();
            }
        printf("Enter Employee Base Salary\n");
        fflush(stdin);
        if(scanf("%d",&EMP->BaseSalary)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
            fflush(stdin);
        }
        else if((EMP->BaseSalary)<=0)
            {
                system("cls");
                printf("\n \n \n \t \t \t     Wrong Input Formate \n");
                printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
                fflush(stdin);
                scanf("%c",&Return);
                Opetion_Minu();
            }
        printf("Enter Employee Bonus\n");
        fflush(stdin);
        if(scanf("%d",&EMP->Bonus)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
            fflush(stdin);
        }
        else if((EMP->Bonus)<=0)
            {
                system("cls");
                printf("\n \n \n \t \t \t     Wrong Input Formate \n");
                printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
                fflush(stdin);
                scanf("%c",&Return);
                Opetion_Minu();
            }
        EMP->NetSalary=((EMP->BaseSalary+EMP->Bonus)*82)/100;
        EMP->next=0;
        if(counter==0)
        {
            head=0;
            insert2(EMP);
            system("cls");
            printf("New Employee Has been added successfully \n");
            printf("Your Current Employees Are:- \n \n");
            print();
            counter++;
        }
        else
        {
            insert2(EMP);
            system("cls");
            printf("New Employee Has been added successfully \n");
            printf("Your Current Employees are \n");
            print();
            counter++;
        }
    }
    else
    {
        system("cls");
        printf("maximum Employees number reached, expand number then Add new Employee \n");
        printf("Please Press any Key To Return To The Main Menu \n");
        fflush(stdin);
        scanf("%c",&Return);
        Opetion_Minu();
    }
    printf("\n \n \n \n");
    printf("Press 1 to Add another Employee or press any key return to the previous Window\n");
    fflush(stdin);
    printf("\t \t \t Your Choice: ");
    scanf("%c",&Return);
    if(Return=='1')
    {
        system("cls");
        New_Employee();
    }
    else
    {
        fflush(stdin);
        Opetion_Minu();
    }
}
void SearchForEmployee()
{
    system("cls");
    uint8_t id;
    printf("\n \n \n \n \n \n \n \n \t \t Enter The ID Of The Employee You Wish To find\n");
    printf("\t \t \t \t \t");
    if(scanf("%d",&id)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
            fflush(stdin);
        }
        else if((id)<=0)
            {
                system("cls");
                printf("\n \n \n \t \t \t     Wrong Input Formate \n");
                printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
                fflush(stdin);
                scanf("%c",&Return);
                Opetion_Minu();
                fflush(stdin);
            }
    else
    {
        EMP_DisplayEmployee(id);
    }
}
bool EMP_ISlistFull(void)
{
    if(counter==NumberOfEmplyee)
    {
        return 'y';
    }
    else
        return 'n';
}
bool EMP_IsIdExist(uint8_t id)
{
    node*temp=0;
    temp=head;
    while(temp!=0)
    {
        if(temp->ID==id)
            return 'y';
        else
        {
            temp=temp->next;
        }
    }
    return 'n';
}
Kohaku RemoveEmployee()
{
    system("cls");
    printf("\n \n \n \n \n \n \n \t \t \t Please Enter A Valid Employee ID \n");
    uint8 id; //Variable is used to get ID from the user and compare it to the IDs in the linked list
    printf("\t \t \t \t \t");
    if(scanf("%d",&id)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
            fflush(stdin);
        }
    else if((id)<=0)
            {
                system("cls");
                printf("\n \n \n \t \t \t     Wrong Input Formate \n");
                printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
                fflush(stdin);
                scanf("%c",&Return);
                Opetion_Minu();
                fflush(stdin);
            }
    else if(EMP_IsIdExist(id)=='n')
    {
        system("cls");
        printf("The Entered ID is not found \n");
        printf("\n \n \n");
        printf("Press any key to return to the Main Menu \n");
        fflush(stdin);
        scanf("%c",&Return);
        Opetion_Minu();
    }
    else
    {
        EMP_DeleteEmployee(id);
        counter--;
        system("cls");
        printf("Employee Has Been Removed Successfully \n");
        printf("Your Current Employees Are:- \n \n");
        print();
    }
    printf("\n \n \n \n");
    printf("Press 1 to Remove another Employee or press any key return to the previous Window\n");
    fflush(stdin);
    printf("\t \t \t Your Choice: ");
    scanf("%c",&Return);
    if(Return=='1')
    {
        system("cls");
        RemoveEmployee();
    }
    else
    {
        fflush(stdin);
        Opetion_Minu();
    }
}
Kohaku ModifySalaryEMP()
{
    system("cls");
    printf("\n \n \n \n \n \n \n \n \t \t \t Please Enter A Valid Employee ID \n");
    uint8 id;//Variable is used to get ID from the user and compare it to the IDs in the linked list
    printf("\t \t \t \t \t");
    if(scanf("%d",&id)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
            fflush(stdin);
        }
        else if((id)<=0)
            {
                system("cls");
                printf("\n \n \n \t \t \t     Wrong Input Formate \n");
                printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
                fflush(stdin);
                scanf("%c",&Return);
                Opetion_Minu();
                fflush(stdin);
            }
    system("cls");
    if(EMP_IsIdExist(id)=='n')
    {
        system("cls");
        printf("The Entered ID is not found \n");
        printf("\n \n \n");
        printf("Press any key to return to the Main Menu \n");
        fflush(stdin);
        scanf("%c",&Return);
        Opetion_Minu();
    }
    else
    {
        node*temp=0;
        temp=head;
        while(temp->ID!=id)
        {
            temp=temp->next;
        }
        printf("ID: %d \n",temp->ID);
        printf("Name: %s \n",temp->Name);
        printf("Current Base Salary = %d \n",temp->BaseSalary);
        printf("Current Bonus = %d \n",temp->Bonus);
        printf("Current Total Salary = %d \n \n \n",temp->NetSalary);
        printf("Enter Employee New Base Salary\n");
        if(scanf("%d",&temp->BaseSalary)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
            fflush(stdin);
        }
        else if((temp->BaseSalary)<=0)
            {
                system("cls");
                printf("\n \n \n \t \t \t     Wrong Input Formate \n");
                printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
                fflush(stdin);
                scanf("%c",&Return);
                Opetion_Minu();
            }
        printf("Enter Employee New Bonus\n");
        if(scanf("%d",&temp->Bonus)==0)
        {
            system("cls");
            printf("\n \n \n \t \t \t     Wrong Input Formate \n");
            printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
            fflush(stdin);
            scanf("%c",&Return);
            Opetion_Minu();
            fflush(stdin);
        }
        else if((temp->Bonus)<=0)
            {
                system("cls");
                printf("\n \n \n \t \t \t     Wrong Input Formate \n");
                printf("\n \n \t \t Please Press any Key To Return To The Main Menu\n\n\n");
                fflush(stdin);
                scanf("%c",&Return);
                Opetion_Minu();
            }
        temp->NetSalary=((temp->BaseSalary+temp->Bonus)*82)/100;
        system("cls");
        printf("Data Has Been Updated \n \n");
        printf("ID: %d \n",temp->ID);
        printf("Name: %s \n",temp->Name);
        printf("Current Base Salary = %d \n",temp->BaseSalary);
        printf("Current Bonus = %d \n",temp->Bonus);
        printf("Current Total Salary = %d \n \n \n",temp->NetSalary);
        printf("\n \n \n \n");
    printf("Press 1 to Modify another Employee Salary or press any key return to the previous Window\n");
    fflush(stdin);
    printf("\t \t \t Your Choice: ");
    scanf("%c",&Return);
    if(Return=='1')
    {
        system("cls");
        ModifySalaryEMP();
    }
    else
    {
        fflush(stdin);
        Opetion_Minu();
    }
    }
}
Kohaku EMP_DisplayEmployees()
{
    system("cls");
    printf("Your Current Employees: \n \n");
    print();
    EMP_DisplayNumberOfEmployees();
    printf("\n \n \n");
    printf("Please Press any Key To Return To The Main Menu \n");
    fflush(stdin);
    scanf("%c",&Return);
    Opetion_Minu();
}
uint16 EMP_DisplayNumberOfEmployees()
{
    printf("\n \n \n");
    printf("you currently have %d out %d Employees working for you,\n you can hire %d Employees if you wish \n",counter,NumberOfEmplyee,NumberOfEmplyee-counter);
    return;
}
