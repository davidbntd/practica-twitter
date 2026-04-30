//
// Created by d.benitez.2025 on 24/04/2026.
//

#ifndef TLISTA_H
#define TLISTA_H
#include "tweet.h"
typedef struct nodo {
    ttweet tweet;
    struct nodo* sig;
}tnodo;
typedef struct lista {
    tnodo* principio;
    tnodo* final;
}tlista;


void ponerVacia (tlista* plista);
void construirfinal(tlista* plista,ttweet tweet );

#endif //TLISTA_H
