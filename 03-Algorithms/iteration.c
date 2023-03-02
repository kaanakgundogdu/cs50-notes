#include <stdio.h>
#include "cs50.h"

void draw(int n);

int main(void)
{
    int heighht=get_int("h: ");
    draw(heighht);
}

void draw(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < i+1; j++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    
}