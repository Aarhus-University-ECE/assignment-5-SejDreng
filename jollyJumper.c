#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>



int isJollyJumber(const int seq[], int size) {
int check[size-1];
for (int i = 0; i < size-1; i++)
{
    check[i]=0;
}
for (int i = 1; i < size; i++)
{
    int temp = seq[i] - seq[i-1];
    if (temp < 0)
        temp *= -1;
        check[temp-1] = 1;  
}

for (int i = 0; i < size-1; i++ )
{
    if (check[i] == 0)
    {
        return 0;
    }
}
    return 1;
}

