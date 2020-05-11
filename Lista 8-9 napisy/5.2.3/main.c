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

int czy_takie_same(char napis1[], char napis2[]){
    int dl1=dlugosc(napis1);
    int dl2=dlugosc(napis2);
    if(dl1!=dl2)
        return 0;
    //Wydaje mi siê, ¿e else jest tu niepotrzebny,
    //ale bez jego wykorzystania kod podawa³ z³y wynik
    else{
    for(int i=0; i<dl1-1; i++){
        if(napis1[i]!=napis2[i])
            return 0;
    }
    return 1;
    }
}

int wczy_takie_same(wchar_t napis1[], wchar_t napis2[]){
    int dl1=wdlugosc(napis1);
    int dl2=wdlugosc(napis2);
    if(dl1!=dl2)
        return 0;
    else{
    for(int i=0; i<dl1-1; i++){
        if(napis1[i]!=napis2[i])
            return 0;
    }
    return 1;
    }
}

int main()
{
    char napis1[10]="abcd";
    char napis2[10]="abdj";
    printf("%i", czy_takie_same(napis1, napis2));
    wchar_t napis3[10]=L"abcd";
    wchar_t napis4[10]=L"abcd";
    printf("%i", czy_takie_same(napis3, napis4));
}
