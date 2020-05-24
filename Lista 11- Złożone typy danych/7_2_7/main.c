#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct zespolone{
    double re;
    double im;
};

struct zespolone suma(struct zespolone Z1, struct zespolone Z2){
    struct zespolone wynik;
    wynik.im=Z1.im+Z2.im;
    wynik.re=Z1.re+Z2.re;
    return wynik;
};

int main()
{
    struct zespolone Z1={2,3};
    struct zespolone Z2={4,-5};
    struct zespolone wynik=suma(Z1, Z2);
    if(wynik.im<0){
        printf("%0.2lf %0.02lf *i", wynik.re, wynik.im);
        return 0;
    }
    else{
       printf("%0.2lf + %0.02lf *i", wynik.re, wynik.im);
       return 0;
    }
}
