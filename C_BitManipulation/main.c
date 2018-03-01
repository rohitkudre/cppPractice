#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MIN(A,B) ((A) <= (B) ? (A) : (B))

int main()
{
    int a = 10;
    int *pa = &a;
    int b = 20;

    int least = MIN(*pa++, b);

    printf("least = %d, a = %d, b = %d, *p = %d", least, a, b, *pa);

    return 0;
}
