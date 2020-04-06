#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fun_a(int n, int *Tab){
    for(int i=0; i<n; i++)
        Tab[i]=0;
    return Tab;
}

int fun_b(int n, int *Tab){
    for(int i=0; i<n; i++)
        Tab[i]=i;
    return Tab;
}

int fun_c(int n, int *Tab){
    for(int i=0; i<n; i++)
        Tab[i]*=2;
    return Tab;
}

int fun_d(int n, int *Tab){
    for(int i=0; i<n; i++)
        if(Tab[i]<0) Tab[i]*=-1;
    return Tab;
}

void wypisz(int n, int Tab[]){
    for(int i=0; i<n; i++)
        printf("%i \t", Tab[i]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%i", &n);
    int Tab[n];
    wypisz(n, fun_a(n, &Tab));
    wypisz(n, fun_b(n, &Tab));
    wypisz(n, fun_c(n, &Tab));
    wypisz(n, fun_d(n, &Tab));
}
