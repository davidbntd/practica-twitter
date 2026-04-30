//
// Created by d.benitez.2025 on 24/04/2026.
//

#include "hashtag.h"

#include <stdio.h>
#include <string.h>

int comparar(thastagh a,thastagh b) {
    if (strcmp(a,b)==0) return 1;
    else return 0;
}

void mostrarhasstag(thastagh a) {

    printf("%s\n",a);
}

int eshashtagMayor(thastagh a, thastagh b) {

    return (strcmp(a,b)>0);
}
