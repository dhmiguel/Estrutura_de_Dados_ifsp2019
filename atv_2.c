#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calculoVantagens(float *salarioBruto, float *salarioFamilia, float *vantagens, float num_horas, float salHora, float numFilhos, float valorFilho);
float calculoDeducoes (float *salarioBruto, float *inss, float *irpf, float *deducoes, float taxaIR);
main(){
    setlocale(LC_ALL,"Portuguese");
    float salarioBruto, salarioFamilia, vantagens;
    float inss, irpf, deducoes;
    float a,b,c,d;
    float e;
    printf("Digite o número de horas trabalhadas: \n");
    scanf("%f",&a);
    printf("Digite o salário-hora: \n");
    scanf("%f",&b);
    printf("Digite o número de filhos: \n");
    scanf("%f",&c);
    printf("Digite o valor por filho: \n");
    scanf("%f",&d);
    printf("Digite a taxa de IR: \n");
    scanf("%f",&e);

    calculoVantagens(&salarioBruto, &salarioFamilia, &vantagens, a,b,c,d);
    printf("As vantagens são: %.2f\n",vantagens);

    calculoDeducoes(&salarioBruto, &inss &irpf, &deducoes, e);
    printf("As deduções são: %.2f\n",deducoes);

    return 0;
}

float calculoVantagens(float *salarioBruto, float *salarioFamilia, float *vantagens, float num_horas, float salHora, float numFilhos, float valorFilho){

    *salarioBruto = num_horas * salHora;
    *salarioFamilia = numFilhos * valorFilho;
    *vantagens = *salarioBruto + *salarioFamilia;

    return (*vantagens);
}

float calculoDeducoes (float *salarioBruto, float *inss, float irpf, float *deducoes, float taxaIR){
    *inss = salarioBruto * 0.08;
    *irpf = salarioBruto * taxaIR;
    *deducoes = *inss + *irpf;

    return (*deducoes);
}
