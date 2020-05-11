#include <stdio.h>
#include <stdlib.h>

void wytnij(char wyraz[], int n, int m){
    if(n>m)
        printf("n nie mo¿e byæ wiêksze od m\n");
    else{
        char nowy[20];
        for(int i=n; i<m; i++)
            nowy[i-n]=wyraz[i];
        printf("%s\n", nowy);
    }

}
void wwytnij(wchar_t wyraz[], int n, int m){
    if(n>m)
        printf("n nie mo¿e byæ wiêksze od m\n");
    else{
        char nowy[20];
        for(int i=n; i<m; i++)
            nowy[i-n]=wyraz[i];
        printf(L"%s\n", nowy);
    }

}

int main()
{
    char wyraz[30]="piecdziesiat";
    int n=2;
    int m=7;
    wytnij(wyraz, n, m);
    wchar_t wyraz1[]=L"piecdziesiat";
    wytnij(wyraz, n, m);
}
