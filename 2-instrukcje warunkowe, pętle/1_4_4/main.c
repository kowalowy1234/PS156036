#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unsigned n;
    scanf("%i", &n);
    int wynik=1;
    for(int i=1; i<n+1; i++){
        wynik=wynik*i;
    }
    printf("%i! = %i", n, wynik);
}
