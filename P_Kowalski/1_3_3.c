#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    int max=a;
    if(max<b) max=b;
    if(max<c) max=c;
    if(a==b && a==c) printf("Podane wartosci sa rowne.");
    else printf("Najwieksza wartosc to: %i.", max);
    return 0;
}
