#include <stdio.h>

typedef struct ponto{
    float x,y
} Ponto;

Ponto* ptoCria(float x, float y){
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    if(p == NULL){
        printf("Memoria insuficiente\n");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}

void ptoLibera(Ponto *p){
    free(p);
}

void ptoAcessa(Ponto *p, float *x, float *y){
    *x = p->x;
    *y = p->y;
}

void ptoAtribui(Ponto *p, float x, float y){
    p->x = x;
    p->y = y;
}

float ptoDistancia(Ponto *p1, Ponto *p2){
    float dx = p2->x - p1->x; 
    float dy = p2->y - p1->y;
    return sqrt(dx*dx + dy*dy);
}

int main(void){
    Ponto *p1 = pto_cria(2.0,1.0);
    Ponto *p2 = pto_cria(3.4,2.1);
    float d = pto_distancia(p1,p2);
    printf("Distancia entre pontos: %f\n",d);
    pto_libera(p1); pto_libera(p2);
    return 0;
}