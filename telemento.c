//
// Created by d.benitez.2025 on 24/04/2026.
//

#include "telemento.h"

#include <string.h>

void asignartelemento(telemento* destino, telemento origen) {

    strcpy(destino->hastagh,origen.hastagh);
    destino->lista.final = NULL;
    destino->lista.principio = NULL;
}

int esmenor(telemento a, telemento b) {

    return (strcmp(a.hastagh,b.hastagh)<0);
}
