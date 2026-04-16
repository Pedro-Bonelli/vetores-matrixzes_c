#include <stdio.h>

int main(){
    int m[3][4], v[3]={0,0,0}, somav=0;

    //Ler os valores da matriz
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("Valor: ");
            scanf("%d", &m[i][j]);
        }
    }

    // Imprimir a matriz
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%d\t", m[i][j]);
        }

        printf("\n");
    }

    // Somar as linhas das matrizes
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            v[i] += m[i][j]; // Soma dos valores na mesma linha 
        }

        printf("\n");
    }

    // Imprimir os elementos do vetor
    for (int i = 0; i < 3; i++){
        printf("%d\t", v[i]);
    }

    // Somar os elementos do vetor
    for (int i = 0; i < 3; i++){
        somav += v[i];
    }

    // Imprimir a soma dos elementos do vetor
    printf("%d", somav);
}