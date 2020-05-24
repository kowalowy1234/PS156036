#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum conn {
    nawiazano=2,
    w_trakcie=1,
    nie_nawiazano=0
};

struct komputer{
    enum conn stan_pol;
    char *IP;
    char *nazwa;
};

void pokaz(struct komputer K){
    printf("Nazwa Komputera:");
    for(int i=0; i<strlen(K.nazwa); i++)
        printf("%c",K.nazwa[i]);
    printf("\n");
    printf("Adres IP:");
    for(int i=0; i<strlen(K.IP); i++)
        printf("%c", K.IP[i]);
    printf("\n");
    if(K.stan_pol==2)
        printf("Nawiazano polaczenie");
    else if(K.stan_pol==1)
        printf("Nawiazywanie polaczenia...");
    else
        printf("Brak polaczenia");
    printf("\n");
}

int main()
{
    struct komputer K1={.stan_pol=nie_nawiazano, .IP="121.13.23.6", .nazwa="Piotr"};
    pokaz(K1);
    printf("\n");
    struct komputer K2={.stan_pol=w_trakcie, .IP="128.32.41.1", .nazwa="Pawel"};
    pokaz(K2);
    printf("\n");
    struct komputer K3={.stan_pol=nawiazano, .IP="213.32.41.213", .nazwa="Adam"};
    pokaz(K3);
    return 0;
}
