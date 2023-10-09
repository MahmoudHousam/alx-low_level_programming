#include "main.h"
#include <stdio.h>

int main(void)
{

    // 0-strcat
    printf("\n0-strcat\n");
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);

    // 1-strncat
    printf("\n1-strncat\n");
    char s3[98] = "Hello ";
    char s4[] = "World!\n";
    char *ptr2;

    printf("%s\n", s3);
    printf("%s", s4);
    ptr2 = _strncat(s3, s4, 1);
    printf("%s\n", s3);
    printf("%s", s4);
    printf("%s\n", ptr2);
    ptr2 = _strncat(s3, s4, 1024);
    printf("%s", s3);
    printf("%s", s4);
    printf("%s", ptr2);

    // 2-strncpy
    printf("\n2-strncpy\n");
    char s5[98];
    char *ptr3;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s5[i] = '*';
    }
    s5[i] = '\0';
    printf("%s\n", s5);
    ptr = _strncpy(s5, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s5);
    printf("%s\n", ptr3);
    ptr3 = _strncpy(s5, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s5);
    printf("%s", ptr3);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s5[i]);
    }
    printf("\n");
    return (0);
}