#include<stdio.h>
#include<stdlib.h>
#include"atv3.h"

struct operacao{
    float x;
    float y;
    float resultado;
};

operaMat *operacao_cria(float n1, float n2,float resultado){
   operaMat *p = (operaMat*) malloc(sizeof(operaMat));
   if(p !=NULL){
    p->x = n1;
    p->y = n2;
    p->resultado = resultado;
   }
   return p;
}
 void liberaOperacao_matematica(operaMat *p){
    free(p);
 }


 void enivarValores(operaMat *p, float n1, float n2){
    p->x = n1;
    p->y = n2;
 }

 void realizaOpera(operaMat *p, int opc2){

    if(opc2 == 1){
        p->resultado = p->x + p->y;
    }
    else if(opc2 == 2){
        p->resultado = p->x - p->y;
    }
    else if(opc2 == 3){
        p->resultado = p->x * p->y;
    }
    else if(opc2 == 4){
        p->resultado = p->x / p->y;
    }
    else{
        printf("Opção inválida!!\n");
    }

 }
 float ultima_operacao(operaMat *p){
    return p->resultado;

 }
