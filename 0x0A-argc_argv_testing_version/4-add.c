#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Please enter integer values to get the summation result\n");
        return (1);
    }
    int k = 1;
    int sum = 0;
    for (k; k < argc; k++)
    {
        int num;
        char *endptr;
        num = strtof(argv[k], &endptr);
        if (*endptr != '\0')
        {
            printf("Error: you entered a non-integer value. Only integers allowed\n");
            return (1);
        }
        else
        {
            sum += num;
        }
    }
    printf("%d\n", sum);
    return (0);
}