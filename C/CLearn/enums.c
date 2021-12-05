#include <stdio.h>
#include <stdlib.h>



//The variable response is a variable of the type defined:
enum Response {yes = 1, no = 0} response; //Creating Enum with 2 Variables, yes = 1, no = 0
//response is a variable of the type defined, that means i can assign it to any of the members without requiring extra delcaration

enum boolean {true = 1, false = 0}logic, falseLogic; 

int main()
{
    printf("PROGRAM START:\n");
    enum Response myEnumVar = yes; //Declaring a Variable that is of type Response to declare it as one of the two enums
    printf("Enum Print: %d\n",myEnumVar);
    myEnumVar = no; //
    printf("Enum Print: %d\n",myEnumVar);
    myEnumVar = response;
    printf("Enum Print Response: %d\n",myEnumVar);
    
    response = yes; //Right now ive figured out 'response' is a variable that can get assigned to any member in the enum it was declared
    printf("Printing Response: %d\n",response);
    
    //Using the variables created inside the enum allows us to do this
    falseLogic = true;
    logic = false;
    printf("falseLogic: %d\n", falseLogic);
    printf("Logic: %d\n", logic);
    //Instead of needing to do this
    enum boolean newVar = true;
    printf("new enum var: %d\n", newVar);
    













}
