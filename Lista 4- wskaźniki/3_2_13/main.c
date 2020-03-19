#include <stdio.h>
#include <stdlib.h>

double fu(int y){
    return y;
}

double funkcja(double (*fu)(int y), int x){
    return fu(x);
}

int main()
{
    int x=23;
    printf("%f", funkcja((&fu), x));

}
