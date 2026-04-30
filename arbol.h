//
// Created by d.benitez.2025 on 24/04/2026.
//

#ifndef ARBOL_H
#define ARBOL_H
#include "telemento.h"


typedef struct Nodoarbol {
    telemento info;
    struct Nodoarbol* izq;
    struct Nodoarbol* der;
}tnodoarbol;

typedef tnodoarbol* tarbol;

void ponerarbolvacio( tarbol* ta);
int esArbolvacio(tarbol ta);
void insertar(tarbol* ta, telemento e);
void insertartweet(tarbol* ta, thastagh hastagh, ttweet tweet);
void buscartweet(tarbol ta,thastagh hastagh);





#endif //ARBOL_H
