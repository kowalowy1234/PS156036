#include <stdio.h>
#include <stdlib.h>

int ** fun(int n, int m){
    int ** tab=malloc(n*sizeof(int*));
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)
            *(tab+i)=malloc(m*sizeof(int));
    }
    return tab;
}

int main()
{
    int n=4;
    int m=5;
    int ** tablica=fun(4, 5);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("[%d,%d] = %d, ", i, j, *(*(tablica+i)+j));
            printf("%p\n", *(tablica+i)+j);
        }
    }
    return 0;
}
