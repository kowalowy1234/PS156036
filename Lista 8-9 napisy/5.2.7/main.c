#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[]){
    int i=0;
    while(napis[i]!=0){
        i++;
    }
    return i;
}

int wdlugosc(wchar_t napis[]){
    int i=0;
    while(napis[i]!=0){
        i++;
    }
    return i;
}

void sklej(char wyraz1[], char wyraz2[], char wyraz3[]){
    int i,j;
    for(i=0; wyraz1[i]!=0; i++){
        wyraz3[i]=wyraz1[i];
    }
    for(j=0; wyraz2[j]!=0; j++){
        wyraz3[i+j]=wyraz2[j];
    }
    printf("%s\n", wyraz3);
}

void wsklej(wchar_t wyraz1[], wchar_t wyraz2[], wchar_t wyraz3[]){
    int i,j;
    for(i=0; wyraz1[i]!=0; i++){
        wyraz3[i]=wyraz1[i];
    }
    for(j=0; wyraz2[j]!=0; j++){
        wyraz3[i+j]=wyraz2[j];
    }
    printf(L"%s\n", wyraz3);
}

int main()
{
    char wyraz1[10]="Ala m";
    char wyraz2[10]="a kota";
    char wyraz3[20];
    sklej(wyraz1, wyraz2, wyraz3);
    wchar_t wyraz4[]=L"Ala m";
    wchar_t wyraz5[]=L"a kota";
    wchar_t wyraz6[]=L"fsefsefsefesvouyhkuhky";
    wsklej(wyraz4, wyraz5, wyraz6);
}
