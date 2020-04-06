#include <stdio.h>
#include <stdlib.h>

void fun_a(int n, int *tab1, int *tab2){
    for(int i=0; i<n; i++)
        tab2[i]=tab1[i];
}

void fun_b(int n, int *tab1, int *tab2){
    int j=n-1;
    for(int i=0; i<n; i++){
        tab2[i]=tab1[j];
        j--;
    }
}

void wypisz(int n, int tab[]){
    for(int i=0; i<n; i++)
        printf("%i\t", tab[i]);
    printf("\n");
}
int main()
{
    int n=5;
    int tab1[5]={4, 3, 1, 6, 4};
    int tab2[5]={0, 0, 0, 0, 0};
    fun_a(n, &tab1, &tab2);
    wypisz(n, tab2);
    fun_b(n, &tab1, &tab2);
    wypisz(n, tab2);
}
