#include <stdio.h>

int discriminante(int, int, int);

int main()
{
    int x = 1, y = 2, z = 6, w;
    w = discriminante(1, 0, 1);
    printf("w = %d\n", w);
    w = discriminante(y, z, x);
    printf("w = %d\n", w);
    w = discriminante(y++, --z, 5);
    printf("w = %d\n", w);
    return 0;
}

int discriminante(int a, int b, int c)
{
    int d;
    d = ((b * b) - (4 * a * c));
    if (d < 0)
    {
        return -1;
    }
    else if (d == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }

    {
    }
}