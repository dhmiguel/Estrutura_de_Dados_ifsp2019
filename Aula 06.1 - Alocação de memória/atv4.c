#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    void funcao_troca_inteiros(int *a, int *b){ //Função que troca o valor de números inteiros
        int *aux;
        aux = (int*) malloc(sizeof(int));//Alocando memória para a variável aux usando o MALLOC com tamanho de inteiros
        if(aux == NULL){//Caso a variável receba um valor nulo (NULL) significa que não há memória suficiente, por isso é realizada a verificação
            printf("Memória insuficiente\n");
            exit(1);//Caso não haja memória suficiente, o programa é encerrado.
        } else {
            *aux = *a;//aux recebe o valor de 'a' anteriormente atribuido
            *a = *b;// 'a' recebe o valor de 'b' anteriormente atribuido
            *b = *aux;//'b' recebe o valor de aux

            /*
                Sendo assim, os valores são trocados, pois o que estava em 'a' agora está em 'b', e o que estava em 'b', agora esta
                em  'a', utilizando a variavel aux
            */

            free(aux);/*Função "free", utilizada para liberar o bloco de memória anteriormente solicitado para alocar uma variavel, sendo assim
            os valores não serão apagados, apenas o bloco deixará de ser reservado para este programa, e poderão ser utilizados por outros programas

            */
        }

    }

}


void main(){
    char *p;
    p = (char*) malloc(4*sizeof(char));//Alocando dinamicamente a memória utilizando o MALLOC, 4 vezes o tamanhdo de char
    strcpy(p,"IFSP");//Passando a string  "IFSP" para a variavel 'p'
    p = (char*) realloc(p,15*sizeof(char));//Utilizando o REALLOC, para realocar bloco de memória, pois foi constatado que a memória anteriormente alocada não satisfazia mais o necessário
    strcat(p, "-Guarulhos");//Agora sim, tem memória suficiante para o resto do processo
    printf("%s",p);
    free(p;)//Liberando o bloco de memoria anteriormente alocado.

}
