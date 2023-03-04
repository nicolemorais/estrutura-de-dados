#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

struct ponto{
    float x;
    float y;
};

Ponto* pto_cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p != NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

void pto_libera(Ponto* p){
    free(p);
}

pto_acessa(Ponto* p, float* x, float* y){
    if (p == NULL)
        return 0;
    *x = p->x;
    *y = p->y;
    return 1;
}

int pto_atribui(Ponto* p, float x, float y){
    if(p == NULL)
        return 0;
    p->x = x;
    p->y = y;
    return 1;
}

float pto_area(Ponto* p1, Ponto* p2){
    if(p1 == NULL || p2 == NULL){
            return -1;
    }
    float ay = p1->y;//2 altura PONTO A
    float ax = p2->x;//6 comprimento PONTO B
    return (ax*ay);
}

float pto_diagonal(Ponto* p1, Ponto* p2){
   if(p1 == NULL || p2 == NULL){
            return -1;
    }
    float ay = p1->y;//2 altura PONTO A
    float ax = p2->x;//6 comprimento PONTO B
    return (sqrt(pow(ax,2)+pow(ay,2)));
}

float pto_perimetro(Ponto* p1, Ponto* p2){
     if(p1 == NULL || p2 == NULL){
            return -1;
    }
    float ay = p1->y;//2 altura PONTO A
    float ax = p2->x;//6 comprimento PONTO B
    return (2*(ax+ay));
}
