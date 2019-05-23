#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED
#include "DataTypes.h"
///////////////////////////////////////////////
//Following Functions only used for debugging and code testing linked list data
//not used in any function without hand on adding
/////////////////////////////////////////////////
//void first(node x);
//void insertBegin(node x);
//void insertNPosition(node x,int position);
//void insertSecond(node x);
/////////////////////////////////////////////
//used functions
/////////////////////////////////////////////
void insert2(node* element);        //used to insert the elements in the linked list
void print();                       //print all the linked list data
void EMP_DisplayEmployee(uint8_t);  //print only the employee with the same ID of the received ID
void EMP_DeleteEmployee(uint8 id);  //Delete only the employee with the same ID of the received ID
////////////////////////////////////////////////
void Greeting();    //Display the Greeting message at the begging of the program
////////////////////////////////////////////////
void Opetion_Minu();    //Display the option menu and take the input option from the user
///////////////////////////////////////////////
void Minu_Opetions();   //Check the input option and call the needed function
//////////////////////////////////////////////
void Employees_Number();    //take the new number of employees from the user and store them in a variable if the user choses option one in the option menu
//////////////////////////////////////////////
void New_Employee();//Void EMP_AddEmployee(void);   //create and add new employee to the linked list
//////////////////////////////////////////////
bool EMP_ISlistFull(void);  //check to see if the Employees list is full or not
//////////////////////////////////////////////
bool EMP_IsIdExist(uint8_t);    //check to see if the input ID already Exist in the list or not
//////////////////////////////////////////////
void SearchForEmployee();//Search for the Employee in the list using a input ID taken from the user defined inside the function, check function implementation
//////////////////////////////////////////////
Kohaku RemoveEmployee();//delete the Employee in the list using a input ID taken from the user defined inside the function, check function implementation
////////////////////////////////////////////////
Kohaku ModifySalaryEMP();//modify employee Basic Salary and Bonus the Employee in the list using a input ID taken from the user defined inside the function, check function implementation
///////////////////////////////////////////////
Kohaku EMP_DisplayEmployees();//Display a message and then calls a function that all the data in the linked list
////////////////////////////////////////////////
Hachigo EMP_GetNumberOfEmployees();//get the maximum number of employees from the user for the first time
/////////////////////////////////////////////////
uint16 EMP_DisplayNumberOfEmployees();//Display Number Of Employees, used in Display Employees Function
/////////////////////////////////////////////////////
#endif // PROTOTYPES_H_INCLUDED
