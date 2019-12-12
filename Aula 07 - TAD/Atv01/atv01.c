void  calculoVantagens(float *salarioBruto, float *salarioFamilia, float *vantagens, float num_horas, float salHora, float numFilhos, float valorFilho){

    *salarioBruto = num_horas * salHora;
    *salarioFamilia = numFilhos * valorFilho;
    *vantagens = *salarioBruto + *salarioFamilia;

    return;
}

 void  calculoDeducoes (float *salarioBruto, float *inss, float *irpf, float *deducoes, float taxaIR){
    *inss = *salarioBruto * 0.08;
    *irpf = *salarioBruto * taxaIR;
    *deducoes = *inss + *irpf;

    return;
}

