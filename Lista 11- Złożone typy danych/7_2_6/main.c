#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct punktn{
    int n;
    float *Tn;
};

void wypiszT(struct punktn T[], int n){
    for(int i=0; i<n; i++){
        wypiszS(T[i]);
    }
    printf("\n");
}

void wypiszS(struct punktn P){
    printf("wymiar punktu: %i\n", P.n);
    for(int i=0; i<P.n; i++){
        printf("%0.2f ", P.Tn[i]);
    }
    printf("\n");
}

void zmien(struct punktn T1[], struct punktn T2[], int wymiar){
    for(int i=0; i<wymiar; i++){
        T2[i].n=T1[i].n;
        T2[i].Tn=malloc(T1[i].n*sizeof(float));
        for(int j=0; j<T1[i].n; j++){
            T2[i].Tn[j]=T1[i].Tn[j];
        }
    }
}

int main()
{
    struct punktn P1={2, malloc(2*sizeof(float))};
    P1.Tn[0]=6.2;
    P1.Tn[1]=5.1;
    struct punktn P2={3, malloc(3*sizeof(float))};
    P2.Tn[0]=1.2;
    P2.Tn[1]=5.4;
    P2.Tn[2]=2.7;
    struct punktn P3={4, malloc(4*sizeof(float))};
    P3.Tn[0]=7.3;
    P3.Tn[1]=6.6;
    P3.Tn[2]=4.3;
    P3.Tn[3]=8.2;
    struct punktn T1[3]={P1, P2, P3};
    struct punktn T2[3]={P1, P1, P1};
    printf("_____________________\n");
    printf("Tablica 1\n");
    wypiszT(T1, 3);
    printf("_____________________\n");
    printf("Tablica 2\n");
    wypiszT(T2, 3);
    zmien(T1, T2, 3);
    printf("_____________________\n");
    printf("Tablica 1\n");
    wypiszT(T1, 3);
    printf("_____________________\n");
    printf("Tablica 2 po uzyciu funkcji\n");
    wypiszT(T2, 3);
    return 0;
}
