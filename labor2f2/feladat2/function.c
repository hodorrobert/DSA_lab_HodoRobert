//
// Created by hodor on 23/02/2021.
//
#include <stdio.h>
#include "function.h"
int par=0, paratlan=0, neg=0,poz=0;
int maxi(int a, int b, int c) {
    int nagyobb=a;
    if(nagyobb<b) nagyobb=b;
    if(nagyobb<c) nagyobb=c;
    return nagyobb;
}

void vizsgal(int szam) {
    if(szam%2==0)  par++;
    if(szam%2==1)  paratlan++;
    if(szam>0)  poz++;
    if(szam<0)  neg++;

    return ;
}

void kiir() {
    printf("Paros elemek: %d", par);
    printf("Paratlan elemek: %d", paratlan);
    printf("Pozitiv elemek: %d", poz);
    printf("Negativ elemek: %d", neg);

}


