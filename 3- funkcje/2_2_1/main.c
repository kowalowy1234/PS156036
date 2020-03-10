#include <stdio.h>
#include <stdlib.h>

int abs(int n){
    if(n < 0)
        n *= -1;
    return n;
}

int main()
{
    int n;
    scanf("%i", &n);
    int wynik = abs(n);
    printf("%i", wynik);
}
