//
// Created by d.benitez.2025 on 24/04/2026.
//

#ifndef TELEMENTO_H
#define TELEMENTO_H
#include "hashtag.h"
#include "tlista.h"
#include "tweet.h"
typedef struct elemento {
    thastagh hastagh;
    tlista lista;

}telemento;

void asignartelemento(telemento* destino, telemento origen);
int esmenor(telemento a, telemento b);

#endif //TELEMENTO_H
