#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1 = 0, num2 = 0, product = 0;

    if (argc == 1)
    {
        printf("Error\n");
        return (1);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    product = num1 * num2;
    printf("%d\n", product);
    return (0);
}