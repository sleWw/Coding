#include <stdio.h>
#include <stdlib.h>
#include "secondary.c"




enum Number 
{
    number0,
    number1,
    number2,
    number3,
}numberX;

    typedef int xInt;

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

    Func("String Func"); //Testing Functions from another C file
    
    //Testing Comments \
    this line is commented out \
    as well as this one

    //Testing Enums

    enum Number myNumber = number2;
    printf("%d\n", myNumber);

    enum Number xNumber = numberX; //Figure out what numberX is doing in Enum (i just want to know) why i can do that
    printf("%d\n", xNumber);

    xInt newInt = 5;
    printf("%d\n", newInt);

    system("pause");
}



