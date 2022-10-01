#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>

// The is JollyJumper function to check if a sequence is a JollyJumper.
int isJollyJumber(const int seq[], int size) {

//Creating an array to hold a boolean for all of the numbers in the JollyJumper sequence.
int check[size-1];
for (int i = 0; i < size-1; i++)
{
    check[i]=0;
}

//Finding the difference between the numbers, and than inserting them in the check array to keep track of the numbers.
for (int i = 1; i < size; i++)
{
    int temp = seq[i] - seq[i-1];
    if (temp < 0)
        temp *= -1;
        check[temp-1] = 1;  
}

// Checking that the numbers in the check array have occured.
for (int i = 0; i < size-1; i++ )
{
    if (check[i] == 0)
    {
        return 0;
    }
}
    return 1;
}

