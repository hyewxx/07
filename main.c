#include <stdio.h>

int inc(int counter);

int main(void)
{
    int i = 10;
    printf("before fct call i = %d\n", i);
    inc(i);
    printf("after fct call i = %d\n", i);
    return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}