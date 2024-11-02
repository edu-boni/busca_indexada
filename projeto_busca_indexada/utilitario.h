#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 1000000
#define INTERVALO_100K 100000
#define INTERVALO_10K 10000
#define INTERVALO_5K 5000

void gerar_array(int arquivo[], int size);
int busca_indexada(int arquivo[], int size, int alvo);
void imprimir(int arquivo[], int size);
