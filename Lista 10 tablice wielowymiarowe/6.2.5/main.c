#include <stdio.h>
#include <stdlib.h>

int *** fun(int n, int m, int l){
    int ***tab=malloc(n*sizeof(int**));
    for(int i=0; i<n; i++){
       *(tab+i)=malloc(m*sizeof(int*));
        for(int j=0; j<m; j++){
            *(*(tab+i)+j)=malloc(l*sizeof(int));
        }
    }
    return tab;
}

void fun_free(int n, int m, int l, int ***tab){
    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                free(*(*(tab+i)+j));
            }
        free(*(tab+i));
        }
    free(tab);
}


int main()
{
    int n=4,m=5,l=6;
    int *** tablica=fun(4, 5, 6);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<l; k++){
                printf("[%d,%d,%d] = %d, ", i, j, k, *(*(*(tablica+i)+j)+k));
                printf("%p\n", *(*(tablica+i)+j)+k);
            }
        }
    }
    fun_free(n, m, l, tablica);
    return 0;
}
