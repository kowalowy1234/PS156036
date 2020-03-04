#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("Podaj wspolczynniki wielomianu:");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    if(a!=0){
        float delta=b*b-4*a*c;
        float p_delta=sqrt(delta);
        if(delta>0){
            printf("2 rozwiazania: x1 = %f\n x2 = %f.", (-b-p_delta)/(2*a), (-b+p_delta)/(2*a));
        }
        else if(delta==0){
            printf("Jedno rozwiazanie: x = %f.\n", -b/(2*a));
        }
        else
            printf("Brak rozwiazan.\n");
    }
    else{
        if(b!=0) printf("Jedno rozwiazanie: x = %f.\n", -c/b);
        else{
            if(c!=0) printf("Brak rozwiazan.");
            else printf("Nieskonczenie wiele rozwiazan.");
        }
    }
}
