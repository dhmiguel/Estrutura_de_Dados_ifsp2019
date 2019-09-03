#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

typedef struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;

FUNCIONARIO coleta_dados();
void impressao(FUNCIONARIO f2[], int tam);
void valor(float *f1);
void rel_salario_corrigido(char nome[], float *f1);

int main(){
     setlocale(LC_ALL,"Portuguese");
     int tam=1, i;
     FUNCIONARIO f2[tam];
     for(i=0;i<tam;i++){
        f2[i]=coleta_dados();
     }
     impressao(f2,tam);
     for(i=0;i<tam;i++){
        valor(&f2[i].salario);
        rel_salario_corrigido(&f2[i].nome, &f2[i].salario);
     }

}

FUNCIONARIO coleta_dados(){
    FUNCIONARIO f1;
    printf("Digite o seu ID: \n");
    scanf("%d",&f1.ID);
    printf("Digite seu nome: \n");
    getchar();
    fgets(f1.nome,29,stdin);
    printf("Digite sua idade: \n");
    scanf("%d",&f1.idade);
    printf("Digite seu salário: \n");
    scanf("%f",&f1.salario);
    return(f1);
}
void impressao(FUNCIONARIO f2[], int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("****** Funcionário %d: ******\n",i+1);
        printf("ID: %d \n",f2[i].ID);
        printf("Nome: %s \n",f2[i].nome);
        printf("Idade: %d \n",f2[i].idade);
        printf("Salário: %.2f \n",f2[i].salario);
    }
}
void valor(float *f1){
    *f1 = (*f1 * 0.1) + *f1;


}
void rel_salario_corrigido(char nome[], float *f1){
    printf("Nome: %s \n", nome);
    printf("Novo salario: %.2f \n", *f1);
}
