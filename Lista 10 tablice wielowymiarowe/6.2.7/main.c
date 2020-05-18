#include <stdio.h>
#include <stdlib.h>

int ** fun(int n){
    int ** tab=malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
        *(tab+i)=malloc((i+1)*sizeof(int));
    return tab;
}

int main()
{
    int n=4;
    int ** tab=fun(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            printf("[%d %d] = %d, ",i, j, *((*tab+i)+j));
            printf("%d\n",*(*tab+i)+j);
        }
    }
    return 0;
}
