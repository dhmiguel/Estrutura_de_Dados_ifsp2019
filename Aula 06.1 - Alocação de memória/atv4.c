#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    void funcao_troca_inteiros(int *a, int *b){ //Fun��o que troca o valor de n�meros inteiros
        int *aux;
        aux = (int*) malloc(sizeof(int));//Alocando mem�ria para a vari�vel aux usando o MALLOC com tamanho de inteiros
        if(aux == NULL){//Caso a vari�vel receba um valor nulo (NULL) significa que n�o h� mem�ria suficiente, por isso � realizada a verifica��o
            printf("Mem�ria insuficiente\n");
            exit(1);//Caso n�o haja mem�ria suficiente, o programa � encerrado.
        } else {
            *aux = *a;//aux recebe o valor de 'a' anteriormente atribuido
            *a = *b;// 'a' recebe o valor de 'b' anteriormente atribuido
            *b = *aux;//'b' recebe o valor de aux

            /*
                Sendo assim, os valores s�o trocados, pois o que estava em 'a' agora est� em 'b', e o que estava em 'b', agora esta
                em  'a', utilizando a variavel aux
            */

            free(aux);/*Fun��o "free", utilizada para liberar o bloco de mem�ria anteriormente solicitado para alocar uma variavel, sendo assim
            os valores n�o ser�o apagados, apenas o bloco deixar� de ser reservado para este programa, e poder�o ser utilizados por outros programas

            */
        }

    }

}


void main(){
    char *p;
    p = (char*) malloc(4*sizeof(char));//Alocando dinamicamente a mem�ria utilizando o MALLOC, 4 vezes o tamanhdo de char
    strcpy(p,"IFSP");//Passando a string  "IFSP" para a variavel 'p'
    p = (char*) realloc(p,15*sizeof(char));//Utilizando o REALLOC, para realocar bloco de mem�ria, pois foi constatado que a mem�ria anteriormente alocada n�o satisfazia mais o necess�rio
    strcat(p, "-Guarulhos");//Agora sim, tem mem�ria suficiante para o resto do processo
    printf("%s",p);
    free(p;)//Liberando o bloco de memoria anteriormente alocado.

}
