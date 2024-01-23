#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("Enter two integer numbers: ");
    fflush(stdout);
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("a is bigger than b\n");
    } else if (b > a) {
        printf("b is bigger than a\n");
    } else {
        printf("Numbers are equal\n");
    }

    return 0;
}
