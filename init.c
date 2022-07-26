#include <stdio.h>
#include "py.h"

int main(int argc, char *argv[])
{
    int c = intin("Número: ");
    printf("%d ^ 2 = %d\n", c, c * c);
    return 0;
}