#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>


#include "lista.h"
#include "nodo.h"

using namespace std;

/*Método para grabar el archivo LISTA2.TXT donde se encuentran las llaves*/
void GrabarArchivo(){
    int arr[50];

    for(int j = 0; j < 50; j++){
        arr[j] = 1000 + j;
    }

	ofstream fout;
	fout.open("LISTA2.TXT");
	for(int i=0;i<50;i++)
		fout<<arr[i]<<endl;
	fout.close();
}


int main(){

    int pos;
    int r;
    Lista hash[10];
  	string linea2;
	string nombreArchivo2 = "LISTA2.TXT";
    ifstream archivo2(nombreArchivo2.c_str());

    /*invocación del método*/
    GrabarArchivo();

    /*ciclo para inicializar las listas hash[i]*/
    for(int i =  0; i < 10; i++){
        inicializarlista(&hash[i]);
    }

    /*Lectura del archivo a inserción en lista ligada*/
    cout << "Pos" << " " << "Llaves" << endl;
    while (getline(archivo2, linea2)) {
        stringstream ss;
        ss << linea2;
        ss >> r;
        pos = r%10;
        cout << pos << "   " << r << endl;
        insertarinicio(&hash[pos], r);
    }

    /*ciclo para imprimir los valores insertados en las listas ligadas*/
    cout << endl << endl;
    for(int i = 0; i<10; i++){
        cout << "Casilla " << i << ":" << endl;
        imprimir(&hash[i]);
    }

    return 0;
}
