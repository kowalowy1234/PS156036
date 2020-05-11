#include <stdio.h>
#include <stdlib.h>

void wyczysc(char *wyraz){
        *wyraz=NULL;
    }

void w_wyczysc(wchar_t wyraz[]){
        wyraz[0]=0;
    }

int main()
{
    char wyraz[10]="abc";
    wyczysc(wyraz);
    printf("%s", wyraz);
    wchar_t wyraz2[]=L"abc";
    w_wyczysc(wyraz2);
    wprintf(L"%s", wyraz2);
}
