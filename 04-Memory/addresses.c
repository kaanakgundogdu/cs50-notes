#include <stdio.h>

typedef char* string;

int main(void)
{
    int n= 100;

    int* p= &n;

    printf("%p\n",p);

    printf("%i\n",*p);

    string str="HI!";

    printf("%s\n",str);

    printf("%c\n",*str);
    printf("%c\n",*(str+1));
    printf("%c\n",*(str+2));

    printf("str address : %p\n",str);
    printf("*str address: %p\n",*str);


    printf("%p\n",str[0]);
    printf("%p\n",str[1]);
    printf("%p\n",str[2]);


}