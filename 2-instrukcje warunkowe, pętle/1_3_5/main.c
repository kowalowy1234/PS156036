#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c;
    float P,p2;
    printf("Podaj parametry:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if(c==0){
        P=(a*b)/2;
        printf("Pole trojkata wynosi: %f", P);
    }
    else{
        p2=(a+b+c)/2;
        P=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
        printf("Pole trojkata wynosi: %f", P);
    }
    return 0;
}
