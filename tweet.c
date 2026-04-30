//
// Created by d.benitez.2025 on 24/04/2026.
//

#include "tweet.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void asignartweet(ttweet* destino, ttweet origen) {
    strcpy(*destino, origen);
}
void mostrartweet(ttweet tweet) {
    printf("%s\n",tweet);
}
