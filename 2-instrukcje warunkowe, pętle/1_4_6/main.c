#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unsigned n;
    int i=2;
    int wynik=1;
    scanf("%i", &n);
    if(n<=2) printf("Podana liczba musi byc wieksza od 2!!!\n");
    else{
        if(n%2==0){
            while(i<=n){
                wynik*=i;
                i+=2;
            }
            printf("Wynik to %i", wynik);
        }
        else{
            while(i<=(n-1)){
                wynik*=i;
                i+=2;
            }
            printf("Wynik to %i", wynik);
        }
    }
}
