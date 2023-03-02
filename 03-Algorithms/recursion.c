#include<stdio.h>
#include "cs50.h"

void draw(int n);

int main(void)
{
    int h= get_int("h: ");
    draw(h);
}

void draw(int n)
{
    if (n<1)
    {
        return;
    }
    draw(n-1);
    
    for (size_t i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}