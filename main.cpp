#include <stdio.h>
#include "funk.cpp"
#include "extras/getNum.cpp"

int main()
{
    funk();
    printf("Hello Jack\n");
    printf("Hello Alfonzo\n");
    printf("Hello Jose\n");
    printf("The number is: %i\n", getNum());
    return 0;
}