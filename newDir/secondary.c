#include <stdio.h>
#include<stdlib.h>

// __inline substitutes the code inside the function making it faster\
    its not necessary and right now i dont know the exact use for it
__inline extern void inlineFunc(int number)
{
    printf("%d\n", number);
}

extern void Func(char *string)
{
    printf("%s\n", string);
}