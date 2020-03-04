#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b;
    char wybor;
    printf("Podaj liczbe a: \n");
    scanf("%f", &a);
    printf("Podaj liczbe b: \n");
    scanf("%f", &b);
    printf("Wybierz operacje, ktora chcesz wykonac (+,-,*,/)\n");
    scanf("%s", &wybor);
    switch(wybor){
        case '+':
            printf("Wynik dodawania a+b: %f", a+b);
            break;
        case '-':
            printf("Wynik odejmowania a-b: %f", a-b);
            break;
        case '*':
            printf("Wynik mnozenia a*b: %f", a*b);
            break;
        case '/':
            if(b==0) {
                printf("Nie mozna dzielic przez 0!!!");
            }
            else printf("Wynik dzielenia a/b: %f", a/b);
            break;
        default:
            printf("Niepoprawny znak!!!");
            break;
    }
}
