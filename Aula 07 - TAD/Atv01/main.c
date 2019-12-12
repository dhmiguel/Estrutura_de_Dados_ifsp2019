#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "atv01.h"

int main(){
    setlocale(LC_ALL,"Portuguese");
    float salarioBruto, salarioFamilia, vantagens;
    float inss, irpf, deducoes;
    float a,b,c,d;
    float e;
    printf("Digite o n�mero de horas trabalhadas: \n");
    scanf("%f",&a);
    printf("Digite o sal�rio-hora: \n");
    scanf("%f",&b);
    printf("Digite o n�mero de filhos: \n");
    scanf("%f",&c);
    printf("Digite o valor por filho: \n");
    scanf("%f",&d);
    printf("Digite a taxa de IR: \n");
    scanf("%f",&e);

    calculoVantagens(&salarioBruto, &salarioFamilia, &vantagens, a,b,c,d);
    printf("As vantagens s�o: %.2f\n",vantagens);

    calculoDeducoes(&salarioBruto, &inss, &irpf, &deducoes, e);
    printf("As dedu��es s�o: %.2f\n",deducoes);

    return 0;
}
