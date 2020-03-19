#include <stdio.h>
#include <stdlib.h>

int funkcja(int *x, int *y){
    if(*x > *y)
        return *x;
    else
        return *y;
}

int main()
{
    int x, y;
    scanf("%i", &x);
    scanf("%i", &y);
    printf("%i\n", funkcja(&x, &y));
    return 0;
}
