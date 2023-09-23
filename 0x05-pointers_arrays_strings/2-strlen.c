#include "main.h"

/**
* _strlen - function that returns the length of a string
*
* @s: string to count
*
* Return: length of a string
*/

int _strlen(char *s)
{
    int counter=0;
    while *s != "\0"
    {
        ++counter;
        ++s;

    }
    return counter;
    
}

