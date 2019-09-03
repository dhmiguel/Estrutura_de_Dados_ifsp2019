#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float salarioBruto, salarioFamilia, vantagens;
float inss, irpf, deducoes;
float result1, result2;

float calculoVantagens(float num_horas, float salHora, int numFilhos, float valorFilho);
float calculoDeducoes (float taxaIR);
main(){
    setlocale(LC_ALL,"Portuguese");
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

    calculoVantagens(a,b,c,d);
    printf("As vantagens s�o: %.2f\n",vantagens);

    calculoDeducoes(e);
    printf("As dedu��es s�o: %.2f\n",deducoes);

    return 0;
}

float calculoVantagens(float num_horas, float salHora, int numFilhos, float valorFilho){
    salarioBruto = num_horas * salHora;
    salarioFamilia = numFilhos * valorFilho;
    vantagens = salarioBruto + salarioFamilia;

    return (vantagens);
}

float calculoDeducoes (float taxaIR){
    inss = salarioBruto * 0.08;
    irpf = salarioBruto * taxaIR;
    deducoes = inss + irpf;

    return (deducoes);
}
