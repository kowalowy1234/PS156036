#include <stdio.h>
#include <stdlib.h>

int *funkcja(int n){
    return malloc(sizeof(int)*n);
}

int main()
{
    printf("%#010x", funkcja(5));
    return 0;
}
