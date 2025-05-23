#include <stdio.h>
#include <omp.h>
#include "operaciones.h"

void ejecutarOperacionParalela(int hilos) {
    int a = 50;
    int b = 0;
    int i;
    const int N = 1000;

    omp_set_num_threads(hilos);

    printf("MaxHilos = %d \t Equipo de hilos impuesto = %d\n",
           omp_get_max_threads(), hilos);

#pragma omp parallel for private(i, a)
    for (i = 0; i < N; i++) {
        b = a + i;
    }

    printf("El valor de a = %d \t el valor de b = %d (se espera que sea a = 50, b = 1049)\n", a, b);
}
