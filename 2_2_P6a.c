#include <stdio.h>

int discriminante(int, int, int);

int main()
{   
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