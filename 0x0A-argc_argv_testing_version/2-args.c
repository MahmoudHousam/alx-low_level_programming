#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    for (i; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    i++;
    return (0);
}