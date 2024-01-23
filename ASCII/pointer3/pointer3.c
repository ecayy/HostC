#include <stdio.h>

int main() {
    int number = 42;
    int *pointer_to_number; // Declare a pointer to an integer

    pointer_to_number = &number; // Assign the address of 'number' to the pointer

    printf("The value of 'number' is %d\n", number);
    printf("The address of 'number' is %p\n", &number);
    printf("The value of 'number' via pointer is %d\n", *pointer_to_number);

    return 0;
}


