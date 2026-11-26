#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char str[]);

int main(void)
{
    char text[] = "Hello, NTUT Electronic Engineering!";

    printf("Original string: %s\n", text);
    printf("Reversed string: ");
    stringReverse(text);
    printf("\n");

    system("pause");
    return 0;
}

void stringReverse(const char str[])
{
    if (str[0] == '\0') 
    {
        return;
    }

    stringReverse(&str[1]); 
    
    putchar(str[0]);     
}