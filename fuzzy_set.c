#include <stdio.h>
#include <stdlib.h>

float max(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}

void main()
{
    float x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float memvalue, factor;
    int gamma = 1;

    for (int i = 0; i < 10; i++)
    {
        factor = gamma * abs((5 / max(x, 5)) - (x / max(x, 5)));

        if (factor == 0)
            memvalue = 1;
        if (factor > 0 && factor <= 1)
            memvalue = 1 - factor;
        if (factor > 1)
            memvalue = 0;
    }
    printf("Output = %f", memvalue);
}
