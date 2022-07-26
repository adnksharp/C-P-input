#include <stdio.h>
#include <stdlib.h>

char *strin(char prints[])
{
    char str[16];
    printf(prints);
    fgets(str, sizeof(str), stdin);
    return str;
}

int intin(char prints[])
{
    char str[16], *endp;
    int value;
    printf(prints);
    fgets(str, sizeof(str), stdin);
    value = strtol(str, &endp, 0);
    return value;
}