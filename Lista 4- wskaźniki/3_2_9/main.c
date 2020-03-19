#include <stdio.h>
#include <stdlib.h>

int funkcja(){
    return malloc(sizeof(int));
}

int main()
{
    printf("%$010", funkcja());
}
