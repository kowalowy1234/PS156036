#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    float a;
    float b;
    float c;
};

float obwod(struct trojkat T){

    return T.a+T.b+T.c;
}

int main()
{
    struct trojkat T;
    T.a=3;
    T.b=4;
    T.c=5;
    if(T.a<=0 || T.b<=0 || T.c<=0){
        printf("niepoprawne dane");
        return 0;
    }
    else{
       printf("%f", obwod(T));
    return 0;
    }
}

