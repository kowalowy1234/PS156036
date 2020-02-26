#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%i", &x);
    if(x<0){
        printf("%i", x*(-1));
    }
    else printf("%i", x);
    return 0;
}
