#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct punkt{
    float x, y, z;
};

float odl(struct punkt P1, struct punkt P2){
    return sqrt(pow(P1.x-P2.x, 2)+pow(P1.y-P2.y, 2)+pow(P1.z-P2.z, 2));
}

float minim(struct punkt T[], int n){
    float m=odl(T[0], T[1]);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(odl(T[i], T[j])<m)
                m=odl(T[i], T[j]);
        }
    }
    return m;
}

int main()
{
    struct punkt P1={2.4, 4.6, 1.7};
    struct punkt P2={1.4, 5.6, 3.7};
    struct punkt P3={6.4, 1.2, 6.1};
    struct punkt P4={1.0, 2.2, 6.3};
    struct punkt T[4]={P1, P2, P3, P4};
    float wynik=minim(T, 4);
    printf("Najmniejsza odleg³osc miedzy punktami to: %0.2f", wynik);
    return 0;
}
