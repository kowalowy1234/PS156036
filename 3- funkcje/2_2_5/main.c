#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega_2(int n){
    int wynik = pow(2, n);
    return wynik;
}

int main()
{
    int n;
    scanf("%i", &n);
    int wynik = potega_2(n);
    printf("%i", wynik);
}
