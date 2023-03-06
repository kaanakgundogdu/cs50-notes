#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* list = malloc(3*sizeof(int));
    if (list==NULL)
    {
        return 1;
    }
    for (size_t i = 0; i < 3; i++)
    {
        list[i]=i+1;
    }


    int* tmp= realloc(list,4*sizeof(int));
    if (tmp==NULL)
    {
        free(list);
        return 1;
    }
    list=tmp;
    list[3]=55;

    for (size_t i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }
    
    free(list);
    return 0;
}


int resize_array_method1(){

    int* list = malloc(3*sizeof(int));
    if (list==NULL)
    {
        return 1;
    }
    for (size_t i = 0; i < 3; i++)
    {
        list[i]=i+1;
    }


    int* tmp= malloc(4*sizeof(int));
    if (tmp==NULL)
    {
        free(list);
        return 1;
    }
    for (size_t i = 0; i < 3; i++)
    {
        tmp[i]=list[i];
    }
    tmp[3]=4;
    free(list);
    list=tmp;

    for (size_t i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }
    
    free(list);
    return 0;
}