#ifndef DATATYPES_H_INCLUDED
#define DATATYPES_H_INCLUDED
#include <stdint.h>
/////////////////////////////////////////////////
//the following are data type renamed in the project for my own personal use
#define Hachigo int
#define ichigo; char    //please note that the (;) in the end of the ichigo word i had to added because the complier is giving an error if i dont put one
#define kokoro float
#define Kohaku void
#define Chibi short
#define Taka long
#define Namae typedef
#define bool char
#define uint8 uint8_t
#define uint16 uint16_t
////////////////////////////////////////
//details of the employee
typedef struct node
{
    uint8_t ID;
    char* Name[20];
    int Age;
    int BaseSalary;
    int Bonus;
    int NetSalary;
    struct node* next;
}node;
/////////////////////////////////////////
//Some useful Variables used in the project
node *head; //Head of the employees linked list
//////////
ichigo EntryKey;    //this variable is used only in the Greeting message function
//////////
Hachigo NumberOfEmplyee;    //holds the maximum number of employees that is entered by the user
//////////
ichigo Opetion;     //hold the chosen option that is entered by the user which will determine which function will work >1 && <6
/////////
Namae enum MinuOpetion      //this enum is used to simplify the if switch case writing and not to get confused
{
    MaximumNumber=1,
    NewEmployee,
    DisplayEmployee,
    DeleteEmployee,
    ModifySalary,
    DisplayAll
}
////////
ichigo Return;    //this variable is used in each function to take the input from the user to check either he returns to the option menu or re-enter data
//////
#endif // DATATYPES_H_INCLUDED
