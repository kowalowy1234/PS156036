#include <stdio.h>
#include <stdlib.h>

void fun_a(int n, int *tab1[], int *tab2[], double *tab3[]){
    for(int i=0; i<n; i++){
        tab3[i]=tab1[i];
        tab3[i+n]=tab2[i];
    }
}

void wypisz(int n, int tab[]){
    for(int i=0; i<n; i++)
        printf("%0.0f\t", tab[i]);
    printf("\n");
}

int main()
{
    int n=5;
    int tab1[]={4, 3, 1, 6, 4};
    int tab2[]={4, 1, 6, 4, 8};
    double tab3[2*n];
    fun_a(n, &tab1, &tab2, &tab3);
    wypisz(n*2, tab3);
}
