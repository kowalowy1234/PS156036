#include <stdio.h>
#include <stdlib.h>

void funkcja(int n, int *w){
    *w = n;
}

int main()
{
    int n=4, w=0;
    funkcja(n, &w);
    printf("%i", w);
    return 0;
}
