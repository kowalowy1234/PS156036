#include <stdio.h>
#include <stdlib.h>

int funkcja(const int*x,const int*y){
    return *x + *y;

}

int main()
{
    int x=5,y=9;
    printf("%i", funkcja(&x, &y));
    return 0;
}
