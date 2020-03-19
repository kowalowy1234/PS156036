#include <stdio.h>
#include <stdlib.h>

void funkcja(const int *n, int *m){
    *m = *n;
}

int main()
{
    int n=4, m=0;
    funkcja(&n, &m);
    printf("%i", m);
}
