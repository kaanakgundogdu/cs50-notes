#include <stdio.h>
#include "cs50.h"

int get_size(void);
void print_grid(int n);

int main(void)
{
    int n = get_size();

    print_grid(n);
    
    return 0;
}

int get_size(void){
    int n;
    do
    {
        n= get_int("What's grid size? ");
    } while (n<1);
    

    return n;
}

void print_grid(int n){

    for (int i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}