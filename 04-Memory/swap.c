#include <stdio.h>

void swap(int*,int*);

int main(void)
{
    int x=1;
    int y=2;

    printf("x is: %i, y is: %i\n",x,y);

    swap(&x,&y);
    printf("After swap\n");
    printf("x is: %i, y is: %i",x,y);


}

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}