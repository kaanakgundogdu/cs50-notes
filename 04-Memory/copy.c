#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "cs50.h"

typedef char* string;

int main(void)
{
    string s= get_string("s: ");
    if (s==NULL)
    {
        return 1;
    }
    
    //changes t and s 
    //string t= s;
    string t= malloc(strlen(s)+1);
    
    if (t==NULL)
    {
        return 1;
    }

    for (size_t i = 0 , len=strlen(s)+1; i < len; i++)
    {
        t[i]=s[i];
    }
    //or just use
    //strcpy(t,s);
    
    if(strlen(t)>0)
    {
        t[0]=toupper(t[0]);
    }

    printf("s: %s\n",s);
    printf("t: %s\n",t);

    free(t); 

    return 0;
}
