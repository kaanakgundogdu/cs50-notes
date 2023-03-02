#include <stdio.h>
#include "cs50.h"
#include <string.h>

typedef struct
{
    string name;
    string number;
} People;

int main(void)
{
    People p[2];
    p[0].name="Kaan";
    p[0].number="+905301583912";
    p[1].name="Vaundy";
    p[1].number="+9000000000";

    string name= get_string("What's the name you want to search? ");

    for (size_t i = 0; i < 2; i++)
    {
        if (strcmp(p[i].name, name)==0)
        {
            printf("Found: %s : %s\n",p[i].name,p[i].number);
            return 0;
        }
    }

    printf("Not found!\n");
    return 1;
}

