#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int **matriz1, **matriz2, **soma;
    int linhas, colunas, i, j;

    printf("Digite o número de linhas das matrizes: \n");
    scanf("%d",&linhas);
    printf("Digite o número de colunas das matrizes: \n");
    scanf("%d",&colunas);

    matriz1 = (int**) malloc(linhas * sizeof(int*));
    matriz2 = (int**) malloc(linhas * sizeof(int*));
    soma = (int**) malloc(linhas * sizeof(int*));

    for(i=0 ; i < linhas; i++){
        matriz1[i] = (int*) malloc(colunas * sizeof(int));
        matriz2[i] = (int*) malloc(colunas * sizeof(int));
        soma[i] = (int*) malloc(colunas * sizeof(int));
    }
    for(i=0 ; i < linhas ; i++){
        for(j=0; j < colunas ; j++){
            printf("Digite os valores da Matriz 1 nas posições %d e %d: \n",i,j);
            scanf("%d",&matriz1[i][j]);
        }
    }
    for(i=0 ; i < linhas ; i++){
        for(j=0; j < colunas ; j++){
            printf("Digite os valores da Matriz 2 nas posições %d e %d: \n",i,j);
            scanf("%d",&matriz2[i][j]);
        }
    }
    for(i=0 ; i < linhas ; i++){
        for(j=0; j < colunas ; j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    system("pause");
    printf("****** Matriz 1 ******\n\n");
    for(i=0 ; i < linhas ; i++){
        for(j=0; j < colunas ; j++){
            printf("%d\t",matriz1[i][j]);
        }
        printf("\n");
    }
    system("pause");
    printf("****** Matriz 2 ******\n\n");
    for(i=0 ; i < linhas ; i++){
        for(j=0; j < colunas ; j++){
            printf("%d\t",matriz2[i][j]);
        }
        printf("\n");
    }
    system("pause");
    printf("****** Soma das Matrizes ******\n\n");
    for(i=0 ; i < linhas ; i++){
        for(j=0; j < colunas ; j++){
            printf("%d\t",soma[i][j]);
        }
        printf("\n");
    }
    system("pause");

    for(i=0;i<linhas;i++){
        free(matriz1[i]);
        free(matriz2[i]);
        free(soma[i]);
    }
    free(matriz1);
    free(matriz2);
    free(soma);

    return 0;


}
