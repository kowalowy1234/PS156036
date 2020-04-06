#include <stdio.h>
#include <stdlib.h>

void wypisz(int unsigned n, int *tab[]){
    for(int i=0; i<n; i++)
        printf("%i \t", tab[i]);
}

void fun_odwr(int unsigned n, int *tab[]){
    int pom[n];
    int licznik_tab=n-1;
    int licznik_pom=0;
    while(licznik_pom<n){
        pom[licznik_pom]=tab[licznik_tab];
        licznik_pom++;
        licznik_tab--;
    }
    for(int i=0; i<n; i++)
        tab[i]=pom[i];
}

void fun_przesun_lewo(int unsigned n, int *tab[]){
    int pom[n];
    int first=tab[0];
    for(int i=0; i<n; i++){
        if(i==n-1) pom[i]=first;
        else pom[i]=tab[i+1];
    }
    for(int i=0; i<n; i++){
        tab[i]=pom[i];
    }
}

void fun_przesun_prawo(int unsigned n, int *tab[]){
    int pom[n];
    int last=tab[n-1];
    for(int i=n-1; i>=0; i--){
        if(i==0) pom[i]=last;
        else pom[i]=tab[i-1];
    }
    for(int i=0; i<n; i++){
        tab[i]=pom[i];
    }
}

void fun_sortuj_r(int unsigned n, int *tab[]){
    int pom;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++){
            if(tab[i]>tab[j]){
                pom=tab[i];
                tab[i]=tab[j];
                tab[j]=pom;
            }
        }
}

void fun_sortuj_m(int unsigned n, int *tab[]){
    int pom;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++){
            if(tab[i]<tab[j]){
                pom=tab[i];
                tab[i]=tab[j];
                tab[j]=pom;
            }
        }
}

int main()
{
    int unsigned n=5;
    int tab[]={4, 3, 5, 6, 2};
    wypisz(n, tab);
    printf(" tablica niezmodyfikowana \n");
    fun_odwr(n, &tab);
    wypisz(n, tab);
    printf(" tablica odwrocona \n");
    fun_przesun_lewo(n, tab);
    wypisz(n, tab);
    printf(" tablica przesunieta w lewo o 1\n");
    fun_przesun_prawo(n, tab);
    wypisz(n, tab);
    printf(" tablica przesunieta w prawo o 1\n");
    fun_sortuj_r(n, tab);
    wypisz(n, tab);
    printf(" tablica posortowana rosnaco \n");
    fun_sortuj_m(n, tab);
    wypisz(n, tab);
    printf(" tablica posortowana malejaco \n");
}
