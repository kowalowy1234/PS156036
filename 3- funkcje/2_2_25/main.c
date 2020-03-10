#include <stdio.h>
#include <stdlib.h>

int ciag(int n){
    if(n == 0 || n == 1) return 1;
    else if(n % 2 == 0)
        return ciag(n-1) + n;
    else
        return ciag(n-1) * n;
}

int main()
{
    int n;
    scanf("%i", &n);
    printf("%i", ciag(n));
}
