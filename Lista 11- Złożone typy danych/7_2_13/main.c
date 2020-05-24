#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct figura{
    int fig;
    float *T;
};

float pole(struct figura F){
    int wybor;
    if(F.fig==2){
        printf("Wybierz figure: Trojkat 0, Rownoleglobok 1\n");
        scanf("%i", &wybor);
        if(wybor==0){
            return (F.T[0]*F.T[1])/2;
        }
        else{
            return F.T[0]*F.T[1];
        }
    }
    else if(F.fig==3){
        ((F.T[0]+F.T[1])*F.T[2])/2;
    }
    else{
        return F.T[0]*F.T[1];
    }
}

int main()
{
    /*
    Trójk¹t: 2 parametry (bok, wysokoœæ)
    Prostok¹t: 4 parametry (2*bok a, 2*bok b)
    Równoleg³obok: 2 parametry (bok, wysokoœæ)
    Trapez: 3 parametry (2 podstawy, wysokoœæ)
    */
    struct figura trojkat;
    trojkat.fig=2;
    trojkat.T=malloc(2*sizeof(float));
    trojkat.T[0]=2.45;
    trojkat.T[1]=5.12;
    printf("%Pole Wybranej figury: %0.2f \n", pole(trojkat));
    return 0;
}
