#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[7]={"Kaan", "Tao", "Vaundy", "Sirup", "Chion","Basi","Hang"};
    string inp= get_string("Name to search: ");

    for (size_t i = 0; i < 7; i++)
    {
        if (strcmp(strings[i],inp) == 0)
        {
            printf("Found!");
            return 0;
        }
    }
    printf("Not Found!");
    return 1;
}