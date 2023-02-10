#include<stdio.h>
#include<stdlib.h>
#include"malloc.h"

char *create_array(unsigned int size, char c)
{
    char *arrChar;
    unsigned int i;

    if(size == 0)
        return (NULL);

    arrChar = (char *)malloc(sizeof(char) * size);
        if(arrChar == NULL)
            return NULL;
    for(i = 0; i < size; i++)
    {
        arrChar[i] = c;
    }
    return (arrChar);
}

