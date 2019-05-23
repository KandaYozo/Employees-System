#include <stdio.h>
#include <stdlib.h>
#include "Prototypes.h"
//Linked List Functions
/*;void insertBegin(node x)
{
    head=0;
    node*added=(node*)malloc(sizeof(node));
    added->ID=x.ID;
    Hachigo i=0;
    while(i<20)
    {
        added->Name[i]=x.Name[i];
        i++;
    }
    added->BaseSalary=x.BaseSalary;
    added->Bonus=x.Bonus;
    added->Age=x.Age;
    added->NetSalary=x.NetSalary;
    added->next=0;
    head=added;
}*/
/*void insertNPosition(node x,int position)
{
    node*temp=head;
    node*temp2=temp;
    node*temp3=(node*)malloc(sizeof(node));
    temp3->ID=x.ID;
    Hachigo i=0;
    while(i<20)
    {
        temp3->Name[i]=x.Name[i];
        i++;
    }
    temp3->BaseSalary=x.BaseSalary;
    temp3->Bonus=x.Bonus;
    temp3->Age=x.Age;
    temp3->NetSalary=x.NetSalary;
    temp3->next=0;
    int count=0;
    while(temp->next!=0 && count != position)
    {
        temp2=temp;
        temp=temp->next;
        count++;
    }
    if(count==0)
    {
        printf("use insertBegin function for this operation \n");
    }
    if(count==position)
    {
        temp2->next=temp3;
        temp3->next=temp;
    }
    else
    {
        printf("not valid position \n");
    }
}*/
/*void insert(node* head,node* y)
{
    node* temp=(node*)malloc(sizeof(node));
    temp=head;
    while(temp->next != 0)
    {
        temp=temp->next;
    }
    temp->next=y;
}*/
void insert2(node* element)
{
    node*temp=0;
    node* added=(node*)malloc(sizeof(node));
    added=element;
    if(head==0)
    {
        head=added;
        head->next=0;
    }
    else
    {
        temp=head;
        while(temp->next != 0)
        {
            temp=temp->next;
        }
        temp->next=added;
    }
}
void print()
{
    node*temp=0;
    temp=head;
    while(temp!=0)
    {
        printf("Employee ID: %d \n",temp->ID);
        printf("Employee Name: %s \n",temp->Name);
        printf("Employee Age: %d \n",temp->Age);
        printf("Employee Base Salary: %d \n",temp->BaseSalary);
        printf("Employee Bonus: %d \n",temp->Bonus);
        printf("Employee Net Salary: %d \n",temp->NetSalary);
        printf("\n");
        temp=temp->next;
    }
}
void EMP_DisplayEmployee(uint8_t id)
{
    if(EMP_IsIdExist(id)=='y')
    {
        node*temp=0;
        temp=head;
        while(temp!=0)
        {
            if(temp->ID==id)
            {
                system("cls");
                printf("Employee Has Been Found \n");
                printf("The Details of your Employee \n \n \n");
                printf("Employee ID: %d \n",temp->ID);
                printf("Employee Name: %s \n",temp->Name);
                printf("Employee Age: %d \n",temp->Age);
                printf("Employee Base Salary: %d \n",temp->BaseSalary);
                printf("Employee Bonus: %d \n",temp->Bonus);
                printf("Employee Net Salary: %d \n",temp->NetSalary);
                printf("\n \n");
                printf("Press 1 to Search for another Employee or press any key return to the previous Window\n");
                fflush(stdin);
                printf("\t \t \t Your Choice: ");
                scanf("%c",&Return);
                if(Return=='1')
                {
                    system("cls");
                    SearchForEmployee();
                }
                else
                {
                    fflush(stdin);
                    Opetion_Minu();
                }
            }
            else
            {
                temp=temp->next;
            }
        }
    }
    else
    {
        system("cls");
        printf("The Entered ID is not found \n");
        printf("\n \n \n");
        printf("Press any key to return to the Main Menu \n");
        fflush(stdin);
        scanf("%c",&Return);
        Opetion_Minu();
    }
}
void EMP_DeleteEmployee(uint8 id)
{
    node*temp=head;
    node*temp2=head;
    temp=head;
    temp2=temp;
    int count=0;
    while(temp->next!=0 && temp->ID!=id)
    {
        temp2=temp;
        temp=temp->next;
        count++;
    }
    if(temp->ID==id&&count==0)
    {
        head=temp->next;
        free(temp);
        free(temp2);
    }
    else if(temp->ID==id)
    {
        temp2->next=temp->next;
        free(temp);
    }
    else
    {
        system("cls");
        printf("The Entered ID is not found \n");
        printf("\n \n \n");
        printf("Press any key to return to the Main Menu \n");
        fflush(stdin);
        scanf("%c",&Return);
        Opetion_Minu();
    }
}
/*void insertSecond(node  x)
{
    node*added=(node*)malloc(sizeof(node));
    added->ID=x.ID;
    Hachigo i=0;
    while(i<20)
    {
        added->Name[i]=x.Name[i];
        i++;
    }
    added->BaseSalary=x.BaseSalary;
    added->Bonus=x.Bonus;
    added->Age=x.Age;
    added->NetSalary=x.NetSalary;
    head->next=added;
}*/
