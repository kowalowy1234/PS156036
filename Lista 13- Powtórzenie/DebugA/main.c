#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3][4] = {{1,2,8,-2},{7,8,1,3},{-8,4,1,2}};
    int a = sizeof(int*); //a=4
    int * p = tab+1; //p=0x60fed4 , *p = 7
    int r = *(*(tab+2)-1); // r=3 , &r=(int *) 0x60fef4
    *p=*(tab+1)+3; //p= 0x60fed4 , **p = 3
    r= *(*(tab+1)+4); // r= -8 , &r= (int *) 0x60fef4
    return 0;
}
