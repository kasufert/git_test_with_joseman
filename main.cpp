#include <stdio.h>
#include "funk.cpp"
#include "extras/getNum.cpp"

int main()
{
    printf("This is Jack's branch\n");
    funk();
    printf("Hello Jack\n");
    printf("Hello All\n");
    printf("Hello Jose\n");
    printf("The number is: %i\n", getNum());
    return 0;
}