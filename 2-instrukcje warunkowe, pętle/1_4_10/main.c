#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, pocz, kon, sr;
    printf("podaj liczbe calkowita: ");
    scanf("%i", &x);
    pocz = 0;
    kon = x;
    printf("poczatek: %i  || koniec: %i\n", pocz, kon);
    printf("============================== \n");
    while (kon - pocz > 1){
        sr=(pocz + kon)/2;
        if(sr * sr <= x)
            pocz = sr;
        else
            kon = sr;
        printf("poczatek: %i  || koniec: %i\n", pocz, kon);
        printf("============================== \n");
    }
    printf("Pierwiastek z %i to w przyblizeniu: ", x);
    if(x <= 1)
        printf("%i\n", kon);
    else
        printf("%i\n", pocz);
    return 0;
}
