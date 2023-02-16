#include <stdio.h>

int main(void)
{

    int number;
    printf("enter any number:");
    scanf("%d", &number);
    if (number % 2 == 0)
        printf("number is even");

    else if (number == 0)
        printf("its neither odd or even");

    else
        printf("number is odd");
}