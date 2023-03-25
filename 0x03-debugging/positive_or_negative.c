#include "main.h"
/*
 * positive_or_negative defines positive or negative
 *
 *@i is the number vhevked
 *
 *return always 0
*/
void positive_or_negative(int i)
{
    if(i < 0)
        printf("%d is negative", i);
    else
        printf("%d is positive", i);
}