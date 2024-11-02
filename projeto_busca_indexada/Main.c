#include "utilitario.h"
int main(){
    
    int arquivo[SIZE], alvo;

    printf("Bem-vindo ao programa de busca!\n");
    gerar_array(arquivo, SIZE);
    imprimir(arquivo, SIZE);
    
    printf("Digite o número que deseja buscar: ");
    scanf("%d", &alvo);

    int pos = busca_indexada(arquivo, SIZE, alvo);

    if (pos != -1) {
        printf("Alvo %d encontrado na posição %d\n", alvo, pos);
    } else {
        printf("Alvo %d não encontrado\n", alvo);
    }

    
    return 0;
}
