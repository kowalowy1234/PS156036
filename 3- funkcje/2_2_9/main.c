#include <stdio.h>
#include <stdlib.h>

double pierwiastek(int n, int m){
    return n;
}

int main()
{
    int m, n;
    double wynik;
    if(m <= 1)
        printf("m powinno byc wieksze od 1\n");
    else{
        if(n < 0)
            printf("n powinno byc nieujemne\n");
        else{
            wynik = pierwiastek(n, m);
            printf("%f", wynik);
        }
    }
}
