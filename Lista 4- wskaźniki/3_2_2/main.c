#include <stdio.h>
#include <stdlib.h>

int funkcja(int*x, int*y){
    if(*x > *y)
        return x;
    else return y;

}

int main()
{
    int x=6,y=7;
    printf("%#010x", funkcja(&x, &y));
    return 0;
}
