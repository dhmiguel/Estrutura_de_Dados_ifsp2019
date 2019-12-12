#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct strc_aluno{
    int matricula;
    char nome[50];
    float notas[3];
    float media;
}aluno;

int main(){
    setlocale(LC_ALL,"");
    int tam=2;
    aluno alu[tam];
    int i,j, posMaior;
    float maior;



    for(i=0;i<tam;i++){
        printf("Digite a matrícula do aluno: \n");
        scanf("%d",&alu[i].matricula);
        printf("Digite o nome do aluno: \n");
        getchar();
        fgets(alu[i].nome,49,stdin);
        for(j=0;j<3;j++){
            printf("Digite a nota: \n");
            scanf("%f",&alu[i].notas[j]);
        }
        alu[i].media = (alu[i].notas[0] + alu[i].notas[1] + alu[i].notas[2])/3;

    }
    maior = 0;
    for(i=0;i<tam;i++){
        if(alu[i].media > maior){
            posMaior = i;
            maior = alu[i].media;
        }
    }

    printf("Aluno com maior média: %s\nMédia: %.2f\n",alu[posMaior].nome, alu[posMaior].media );
    system("pause");
    system("cls");
    return 0;

}
