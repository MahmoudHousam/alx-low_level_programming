#include "main.h"
#include <stdio.h>

void print_array(int *a, int n);

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

    // 3-strcmp
    printf("\n3-strcmp\n");
    char s6[] = "Hello";
    char s7[] = "World!";

    printf("%d\n", _strcmp(s6, s7));
    printf("%d\n", _strcmp(s7, s6));
    printf("%d\n", _strcmp(s6, s6));

    // 4-rev_array
    printf("\n4-rev_array\n");
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}

void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}