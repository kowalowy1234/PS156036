#include <stdio.h>
#include <stdlib.h>

int funkcja(int n, int m){
    if(m == 0)
        return n;
    else if(n >=m && m>0)
        return n - m + funkcja(n - 1, m) + funkcja(n, m - 1);
    return funkcja(m, n);
}

int main()
{
    int n;
    scanf("%i", &n);
    int m;
    scanf("%i", &m);
    printf("%i", funkcja(n, m));
}
