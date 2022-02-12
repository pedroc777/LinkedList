#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

struct Lista{

    Nodo *cabeza;
    int longitud;

};

void inicializarlista(Lista *);
int esVacia(Lista *);
void insertarinicio(Lista*, int);
void imprimir(Lista*);
void eliminarinicio(Lista*);
void insertarfinal(Lista*, int);
#endif // LISTA_H
