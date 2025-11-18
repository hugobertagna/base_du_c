#include <stdio.h>


void add_one (int *number)
{
    printf("Adresse de numbre %p\n", number);
    *number = *number + 1;
}



int main(void)
{

    int value = 42;

    printf("Value : %d \n", value);
    printf("Adresse de value : %p \n", &value);

    add_one(&value);

    printf("Value : %d\n", value);
    return 0;
}


