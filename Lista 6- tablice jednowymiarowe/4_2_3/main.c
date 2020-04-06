#include <stdio.h>
#include <stdlib.h>

float fun(int unsigned n, const int *tab){
    int srednia=0;
    for(int i=0; i<n; i++)
        srednia+=tab[i];
    srednia/=n;
    return srednia;
}

int main()
{
    int unsigned n=5;
    const int tab[n];
    for(int i=0; i<n; i++)
        scanf("%i", &tab[i]);
    printf("%.2f", fun(n, &tab));
}
