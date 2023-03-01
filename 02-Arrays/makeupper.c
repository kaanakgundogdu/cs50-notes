#include <ctype.h>
#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main(){

    string name= get_string("What's your name? ");

    printf("Before: %s",name);
    printf("\nAfter: ");

    for (size_t i = 0, n = strlen(name); i < n; i++)
    {
        printf("%c",toupper(name[i]));
    }
    printf("\n");
    


}