// retorna 1 se um ponto está dentro de um círculo e 0 caso contrário.

#include <stdio.h>
#include <math.h>

typedef struct ponto
{
    float x;
    float y;
} Ponto;

typedef struct circulo
{
    Ponto p;
    float r;
} Circulo;

void captura(Ponto *pp)
{
    printf("Digite as coordenadas do ponto(x,y)\n:");
    scanf("%f %f", &pp->x, &pp->y);
}

void capturaCirculo(Circulo *pc)
{
    printf("Digite as coordenadas do ponto(x,y)\n:");
    scanf("%f %f", &pc->p.x, &pc->p.y);
    printf("Digite o raio do circulo(r)\n:");
    scanf("%f", &pc->r);
}

float distancia(Ponto *p1, Ponto *p2)
{
    float d = sqrt((p1->x - p2->x) * (p1->x - p2->x) + (p1->y - p2->y) * (p1->y - p2->y));
}

float interior(Ponto *p, Circulo *c)
{
    float d = distancia(&c->p,p);
    return (d < c->r);
}

int main(void)
{   
    Ponto p;
    Circulo c;

    captura(&p);
    capturaCirculo(&c);

    if(interior(&p,&c))
        printf("pertence ao circulo");
    else
        printf("nao pertence ao circulo");

    return 0;
}