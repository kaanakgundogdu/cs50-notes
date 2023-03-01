#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main()
{
    string name=get_string("What is your name? ");

    int i=0;
    while (name[i] != '\0')
    {
        i++;
    }

    printf("Your names length is %i\n",i);
    
    // Or you can use strlen
    printf("\nName length with strlen: %i",strlen(name));

}