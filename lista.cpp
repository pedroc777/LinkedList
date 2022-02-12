#include <iostream>
#include "lista.h"
#include "nodo.h"

void inicializarlista(Lista *lista){
    lista -> cabeza = NULL;
    lista -> longitud = 0;

}



int esVacia(Lista *lista){

    if (lista -> cabeza == NULL){
        return 1;
    }
    else{
        return 0;
    }

}


using namespace std;





void insertarinicio(Lista *lista, int elementoNuevo){

    if (esVacia(lista) == 1){
        Nodo *nuevoNodo = new Nodo();
        nuevoNodo -> valor = elementoNuevo;
        nuevoNodo -> siguiente = NULL;
        lista -> cabeza = nuevoNodo;
    }
    else{
        Nodo *nuevoNodo = new Nodo();
        nuevoNodo -> valor = elementoNuevo;
        nuevoNodo -> siguiente = lista -> cabeza;
        lista -> cabeza = nuevoNodo;
    }
    lista -> longitud = lista -> longitud + 1;


}


void imprimir(Lista *lista){

    Nodo *nodoActual;
    nodoActual = lista -> cabeza;

    while (nodoActual != NULL){
        cout << nodoActual -> valor << "\n";
        nodoActual = nodoActual -> siguiente;
    }

    cout << endl;
}

void eliminarinicio(Lista* lista){

    if (esVacia(lista)){
        cout << "Lista vacia";
    }
    else{
        lista -> cabeza = lista -> cabeza -> siguiente;
        lista -> longitud = lista -> longitud - 1;
    }
}


void insertarfinal(Lista *lista, int nuevoElemento){
    if (esVacia(lista) == 1){
        Nodo *nuevoNodo = new Nodo;
        nuevoNodo -> valor = nuevoElemento;
        lista -> cabeza = nuevoNodo;
    }
    else{
        Nodo *nuevoNodo = new Nodo;
        nuevoNodo -> valor = nuevoElemento;
        nuevoNodo -> siguiente = NULL;

        Nodo *actual = lista -> cabeza;

        while (actual -> siguiente != NULL){
            actual = actual -> siguiente;
        }
        actual -> siguiente = nuevoNodo;
    }
    lista -> longitud = lista -> longitud + 1;
}

