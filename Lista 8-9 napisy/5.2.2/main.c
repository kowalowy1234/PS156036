#include <stdio.h>
#include <stdlib.h>

void dlugosc(char napis[]){
    int i=0;
    while(napis[i]!=0){
        i++;
    }
    printf("%i\n", i);
}

void wdlugosc(wchar_t napis[]){
    int i=0;
    while(napis[i]!=0){
        i++;
    }
    printf("%i\n", i);
}

int main()
{
    char wyraz[10]="abcfdas";
    wchar_t wyraz2[]=L"abc";
    dlugosc(wyraz);
    wdlugosc(wyraz2);
}
