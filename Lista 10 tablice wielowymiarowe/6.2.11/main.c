#include <stdio.h>
#include <stdlib.h>

int ** fun2(int n, int m){
    return malloc(n*sizeof(int[m]));
}

int suma(int ** tab, int n){
    int suma=0;
    for(int i=0; i<n; i++){
        suma+=*(tab+i);
    }
    return suma;
}

int main()
{
    int n=4;
    int ** tab=fun2(n,100);
    printf("%d", suma(tab, n));
    return 0;
}
