#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    float a;
    float b;
    float c;
};

void zamien(struct trojkat T, struct trojkat *troj2){

    *troj2=T;
}

int main()
{
    struct trojkat T={5, 6, 7};
    struct trojkat T2={1, 2, 3};
    printf("%0.2f %0.2f %0.2f\n", T.a, T.b, T.c);
    printf("%0.2f %0.2f %0.2f\n", T2.a, T2.b, T2.c);
    zamien(T, &T2);
    printf("%0.2f %0.2f %0.2f\n", T.a, T.b, T.c);
    printf("%0.2f %0.2f %0.2f\n", T2.a, T2.b, T2.c);
    return 0;
}
