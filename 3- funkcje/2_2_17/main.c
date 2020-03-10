#include <stdio.h>
#include <stdlib.h>

void wywolania(){
    static unsigned int liczba = 0;
    liczba++;
    printf("Funkcja zostala wywolada %i razy\n", liczba);
}

int main()
{
    int i = 1;
    while(i == 1){
        wywolania();
        printf("Wywolac funkcje? 1-tak 2-nie\n");
        scanf("%i", &i);
    }
}
