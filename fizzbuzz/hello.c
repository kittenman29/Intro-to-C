#include <stdio.h>

int main(void)
{
    unsigned char x = 12;

    printf("%u %p\n", x, &x);

    return 0;
}