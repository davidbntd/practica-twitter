//
// Created by d.benitez.2025 on 24/04/2026.
//

#include "tlista.h"

#include <stdlib.h>

void ponerVacia (tlista* plista) {
    plista->final =NULL;
    plista->principio = NULL;
}



void construirfinal(tlista* plista,ttweet twett) {
    tnodo* pnodo=(tnodo*)malloc(sizeof(tnodo));
    asignartweet(&(pnodo->tweet), twett);
    pnodo->sig=NULL;
    if ((plista)->final==NULL) {
        (plista)->final=pnodo;
        (plista)->principio=pnodo;
    } else {
        plista->final->sig=pnodo;
        (plista)->final=pnodo;
    }
}
