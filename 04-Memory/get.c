#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i",&x);
    printf("x: %i\n",x);
    printf("scanning string\n\n");

    char s[4]; // you can get segmentation fault
    printf("s: ");
    scanf("%s",s);
    printf("s: %s\n",s);

}