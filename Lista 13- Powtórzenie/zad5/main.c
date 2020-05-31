#include <stdio.h>
#include <stdlib.h>

int wart(float **tab, int n, int m){
    for(int i=0; i<m; i++){
        if(tab[0][i]!=0)
            return 1;
    }
    for(int j=0; j<n; j++){
        if(tab[j][0]!=0 || tab[j][m-1]!=0)
            return 1;
    }
    return 0;
}

int main()
{
    int n=3;
    int m=4;
    float **tab=malloc(n*sizeof(float*));
    for(int i=0; i<n; i++)
        *(tab+i)=malloc(m*sizeof(float));
    float tab1[4]={0, 0, 0, 0};
    float tab2[4]={0, 2.1, 6.3, 0};
    float tab3[4]={0, 0, 0, 0};
    tab[0]=tab1;
    tab[1]=tab2;
    tab[2]=tab3;
    printf("Wynik funkcji dla przypadku pierwszego: %i\n", wart(tab, n, m));
    float tab4[4]={1, 0, 0, 2};
    float tab5[4]={0, 2.1, 6.3, 0};
    float tab6[4]={0, 0, 0, 3.6};
    tab[0]=tab4;
    tab[1]=tab5;
    tab[2]=tab6;
    printf("Wynik funkcji dla przypadku drugiego: %i", wart(tab, n, m));
    return 0;
}
