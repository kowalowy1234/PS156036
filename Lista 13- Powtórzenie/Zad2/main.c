#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dopisz(char napis1[], char napis2[], char napis3[], int n, int n2, int n3){
    int i=0;
    while(napis1[i]!=0){
        napis2[i+n2]=napis1[i];
        i++;
    }
    int j=0;
    while(j<n2){
        napis3[j+n3]=napis2[j];
        j++;
    }
}

int main()
{
    char napis1[20]="napis1";
    char napis2[20]="nap2";
    char napis3[20]="napis  3";
    printf("napis nr 1: %s\n", napis1);
    printf("napis nr 2: %s\n", napis2);
    printf("napis nr 3: %s\n", napis3);
    dopisz(napis1, napis2, napis3, 20, 4, 8);
    printf("napis nr 1: %s\n", napis1);
    printf("napis nr 2: %s\n", napis2);
    printf("napis nr 3: %s\n", napis3);
    return 0;
}
