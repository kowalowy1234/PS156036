#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void s_kw(int n){
    for(int i = 1; i < n; i++){
        for(int j = n-1; j > 0; j--){
            if(pow(i, 2) + pow(j, 2) == n)
                printf("%i^2 + %i^2\n", i, j);
        }
    }
}

int main()
{
    int n;
    scanf("%i", &n);
    s_kw(n);
}
