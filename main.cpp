#include <stdio.h>
#include "funk.cpp"
#include "extras/getNum.cpp"

int main()
{
    funk();
    printf("Hello Jack\n");
    printf("Hello All\n");
    printf("The number is: %i\n", getNum());
    return 0;
}