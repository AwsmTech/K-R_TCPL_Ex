/*
    Exercise 1-2.
    Experiment to find out what happens 
    when printf's argument string contains \c,
    where c is some character not listed above.
 */

#include <stdio.h>

int main(void)
{
    printf("This is a string. And I use the \c in this string. \n");

    return 0;
}

//result: the /c is not charactor that printf function adopts.