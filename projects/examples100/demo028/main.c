#include <stdio.h>

int main() {
    int x1 = 10, x2, x3, i;
    for (i=0; i < 4; i++)
    {
        x2 =x1 + 2;
        x1 = x2;
    }
    printf ("%d",x2);
    return 0;
}
