#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Planeta{
    int numer;
    char nazwa[50];
    double r;
};

void napis(char T[]){
    int i=0;
    while(T[i]!=0){
        printf("%c", T[i]);
        i++;
    }
    printf("\n");
}

void wypisz_planete(struct Planeta P){
    printf("Numer planety: %i\n", P.numer);
    printf("Nazwa planety: %s\n", P.nazwa);
    printf("Promien planety: %f\n", P.r);
}

struct Planeta zwroc(struct Planeta T[], int n){
    struct Planeta wynik=T[0];
    float max_v=0;
    float cur_pl_v=0;
    for(int i=0; i<n; i++){
        cur_pl_v=(4/3)*(3.14*pow(T[i].r, 3));
        if(cur_pl_v>max_v){
            max_v=cur_pl_v;
            wynik=T[i];
        }
    }
    return wynik;
};

int main()
{
    struct Planeta Ziemia={.numer=1, .nazwa="Ziemia", .r=6378.137};
    struct Planeta Jowisz={.numer=2, .nazwa="Jowisz", .r=69911};
    struct Planeta Wenus={.numer=3, .nazwa="Wenus", .r=6051.8};
    struct Planeta T_planet[3];
    T_planet[0]=Ziemia;
    T_planet[1]=Jowisz;
    T_planet[2]=Wenus;
    wypisz_planete(zwroc(T_planet, 3));
    return 0;
}
