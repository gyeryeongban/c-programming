#include <stdio.h>

int main(void)
{
    int m = 5, n = 10;

    printf("%d ", n += m /= 3);
    m = 5;
    n = 10;
    printf("%d\n", (n += (m /= 3)));

    printf("%d ", 10 * 3 / 2);
    printf("%d\n", 10 * (3 / 2));

    printf("%d ", 3 > 4 ? 3 - 4 : 3 > 4 ? 3 + 4 : 3 * 4);
    printf("%d\n", 3 > 4 ? 3 - 4 : (3 > 4 ? 3 + 4 : 3 * 4));

    return 0;
}