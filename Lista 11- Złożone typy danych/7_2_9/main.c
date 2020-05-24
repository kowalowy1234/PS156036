#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct list{
    int x;
    struct list *wsk;
};

int main()
{
    struct list lista;
    struct list lista2;
    lista.x=1;
    lista.wsk=&lista2;
    lista2.x=2;
    lista2.wsk=&lista;
    return 0;
}
