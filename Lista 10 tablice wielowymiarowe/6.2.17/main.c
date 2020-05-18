#include <stdio.h>
#include <stdlib.h>

int ** fun2(int n, int m){
    int ** tab=malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
        *(tab+i)=malloc(m*sizeof(int[m]));
    return tab;
}

double srednia(int ** tab, int n, int m){
    double srednia=0, pom=0;;
    int suma=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            pom+=*(*(tab+i)+j);
        }
        pom/=n;
        if(pom>srednia){
            srednia=pom;
        }
        pom=0;
    }
    return srednia;
}

int main()
{
    int n=10, m=10;
    int ** tab=fun2(n,m);
    printf("%0.2f", srednia(tab, n, m));
    return 0;
}
