#include "cs50.h"
#include <stdio.h>

int main(int argc, string argv[])
{
    //use echo $? command to see exit status
    if (argc!=2)
    {
        printf("Missing argument add a name.\n");
        return 1;
    }
    else
    {
        printf("Hello, %s\n",argv[1]);
        return 0;
    }
    
}