#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%i", &n);
    scanf("%i", &m);
    printf("______\n");
    for(int i=1; i<m+1; i++){
        printf("%i\n", n*i);
    }
}
