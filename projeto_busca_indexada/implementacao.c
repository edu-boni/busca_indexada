#include "utilitario.h"

void gerar_array(int array[], int size){
    srand( (unsigned) time(NULL) );

    array[0] = rand() % 100000;
    for(int i = 1; i != size; i++){
        array[i] = array[i-1] + ( rand() % 10000 );
    }
    printf("\nSeu array de 1 milhão de registros foi gerado com sucesso!\n");
}

int busca_indexada(int array[], int size, int alvo) {
    int inicio = 0, fim = size;
    
    for (int i = 0; i < size; i += INTERVALO_100K) {
        if (array[i] > alvo) {
            fim = i;
            break;
        }
        inicio = i;
    }

    for (int i = inicio; i < fim; i += INTERVALO_10K) {
        if (array[i] > alvo) {
            fim = i;
            break;
        }
        inicio = i;
    }

    for (int i = inicio; i < fim; i += INTERVALO_5K) {
        if (array[i] > alvo) {
            fim = i;
            break;
        }
        inicio = i;
    }

    for (int i = inicio; i < fim; i++) {
        if (array[i] == alvo) {
            return i; 
        }
    }

    return -1; 
}

void imprimir(int array[], int size){
    int imprimir;
    do {
        printf("Digite quantas posições do array você deseja visualizar [0 para nenhuma]: ");
        scanf("%d", &imprimir);
        
        if (imprimir > 0) {
            if (imprimir > size) {
                printf("Número de posições maior que o array. O programa mostrará o tamanho máximo: \n");
                imprimir = size; 
            }
            for (int i = 0; i != imprimir; i++) {
                printf("%d ", array[i]);
            }
            printf("\n\n");
        } else if (imprimir < 0) {
            printf("Valor inválido\n");
        }
    } while (imprimir < 0); 
   
}