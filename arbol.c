/
// Created by d.benitez.2025 on 24/04/2026.
//

#include "arbol.h"
#include "tlista.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


void ponerarbolvacio( tarbol* ta) {
    *ta =NULL;
}

int esArbolvacio(tarbol ta) {
    return ta==NULL;
}


void insertar(tarbol* ta, telemento e) {
    if (esArbolvacio(*ta)) {
        *ta=(tarbol) malloc(sizeof( struct Nodoarbol));
        asignartelemento(&(*ta)->info,e);

        ponerVacia(&(*ta)->info.lista);

        (*ta)->izq=NULL;
        (*ta)->der=NULL;
    } else { telemento r;
        asignartelemento(&r,(*ta)->info);
        if (!esmenor(r,e)) insertar(&(*ta)->izq,e);
        else insertar(&(*ta)->der,e);

    }


}

void insertartweet(tarbol* ta, thastagh hastagh, ttweet tweet) {
    if (*ta!=NULL) {
        if (comparar(((*ta)->info.hastagh),hastagh)) {
            construirfinal(&((*ta)->info.lista),tweet);

        } else if (eshashtagMayor(((*ta)->info.hastagh),hastagh)){ insertartweet(&((*ta)->izq),hastagh,tweet);}
        else insertartweet(&((*ta)->der),hastagh,tweet);
    }
}

void buscartweet(tarbol ta,thastagh hastagh) {
    if (ta!=NULL) {
        tnodo* aux=ta->info.lista.principio;
        if (comparar(((ta)->info.hastagh),hastagh)) {
            while (aux!=NULL) {
                mostrartweet(aux->tweet);
                aux=aux->sig;
            }

        } else if (eshashtagMayor(((ta)->info.hastagh),hastagh)){ buscartweet(ta->izq,hastagh);}
        else buscartweet(ta->der,hastagh);
    } else  printf("No hay tweet cn ese hashtag");
}

