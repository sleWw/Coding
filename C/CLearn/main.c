#include <stdio.h>
#include <stdlib.h>
#include "secondary.c"

//gcc -o mainexe main.c && mainexe (IN COMMAND LINE)
//gcc main.c -o main ; main/ (IN OTHER TERMINALS)

typedef int xInt; //typedef lets you "clone" identifiers 
//xInt newInt = 5;  //Therefore it lets you do this
//printf("%d\n", newInt);

enum Number 
{
    number0,
    number1,
    number2,
    number3,               
}numberX; //Figure out what numberX is 

enum elogic{false, true}; //because of the position of the identifiers false = 0, true = 1

// Struct/Union Testing
struct testStruct
{
    xInt x; //Structs can use previously defined typedef   
    int y;  //Structs can have multiple variables
    struct otherStruct //Nested Struct
    {
        char xChar;
        _Bool xTrue;
    }otherTestStruct;
}mainTestStruct;


const float pi = 3.141;

float PiMultiply(float x)
{
    x = x * pi;
    return x;
}


int main()
{
	
    printf("Hello World! to my first C Project... \n");
    
    char *stringLiteral = " This is a String literal \n";
    char *secondaryStringLiteral = "Another String Literal \n";
    printf("%s %s", stringLiteral , secondaryStringLiteral);
    
        
    int i = 1;
    int j = 1;
    
    printf(" Adding I + J: %d\n", (i) + (++j));
    printf(" Printing J: %d \n Printing I: %d \n", j, i );
    
    const int constantInt = 5; //Constants cant be modified after they are decalared and assigned a variable
    printf("%d\n", constantInt);
    
    char myChar = 'c'; //single quotes make it a constant character variable 
    char myOtherChar = 'C'; //these are two different variables (remember Case sensitivity)
    printf("%c\n",myChar);
    
    //Testing If Statements
    
    if(myChar == myOtherChar)
    {
        printf("True %c\n", myChar);
    } else {
        printf("false\n");
    }
    
    //stdFunc("String Func"); //Testing Functions from another C file
    
    //Testing Comments \
    this line is commented out \
    as well as this one
    
    //Testing Functions with a Global Variable
    float m = 7; 
    printf("Before Pi Multiply %f\n", m);
    m = PiMultiply(m);
    printf("After Pi Multiply %f\n", m);
    
    
    //Testing Enums
    enum Number myNumber = number2;
    printf("%d\n", myNumber);
    
    enum Number xNumber = numberX; //Figure out what numberX is doing in Enum (i just want to know) why i can do that
    printf("Printing numberX: %d\n Printing number2: %d\n", xNumber, number2);
    
    //Struct testing
    mainTestStruct.x = 5;
    printf("Structure Test: %d\n", mainTestStruct.x);
    printf("New Line Modified\n");
    
    printf("For Loop Test\n");
    int set = 10;
    for(int a = 0; a < set; a++)
    {
        printf("For Loop %d\n", a);
   }
    
    char string[] = "This is a string"; //set string using an array (all strings in C are an array of characters
    printf("%s\n", string);
    
    //Hello Github
    //External and Global Variable Testing
    printf("External and Global Variable Testing\n");
    ExternalFunc(string);
    stdFunc(string);













}


















