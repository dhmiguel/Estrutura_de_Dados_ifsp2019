#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "atv3.h"

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opc1=1, opc2;
    float num1, num2,resultado;

    operaMat *p;

    p = operacao_cria(num1,num2,resultado);

    do{
        printf("1 - Realizar uma opera��o matem�tica: \n");
        printf("2 - Verificar a ultima opera��o realizada: \n");
        printf("3 - Sair do programa: \n");
        printf("Digite uma op��o: \n");
        scanf("%d",&opc1);

        switch(opc1){
        case 1:
            printf("1 - Soma\n");
            printf("2 - Subtra��o\n");
            printf("3 - Multiplica��o\n");
            printf("4 - Divis�o\n");
            printf("Digite a opera��o desejada:\n");
            scanf("%d",&opc2);
            if(opc2 < 1 || opc2 > 4){
                printf("Op��o inv�lida!\n");
            }
            else{
                printf("Digite o primeiro valor do c�lculo:\n");
                scanf("%f",&num1);
                printf("Digite o segundo valor do c�lculo:\n");
                scanf("%f",&num2);

                enivarValores(p,num1,num2);
                realizaOpera(p,opc2);
            }
            break;
        case 2:
            resultado = ultima_operacao(p);
            printf("O resultado da �ltima opera��o foi: %.2f",resultado);
            break;
        }

    }while(opc1);
    return 0;
}
