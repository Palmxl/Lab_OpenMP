#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Entrada por consola \n\t $./ejecutable NumHilos\n");
        exit(0);
    }

    int hilos = atoi(argv[1]);
    ejecutarOperacionParalela(hilos); // Llama a la función definida en otro archivo

    return 0;
}
