#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
    Diego Miguel Arruda de Moura - GU3005402
*/

int main(){
    setlocale(LC_ALL,"");

    int *notas,alunos,soma=0,media,i;

    printf("Digite a quantidade de alunos da turma: \n");
    scanf("%d",&alunos);

    notas = (int*) malloc(alunos * sizeof(int));

    for(i=0 ; i<alunos; i++){
        printf("Digite a nota do aluno %d: \n",i+1);
        scanf("%d",&notas[i]);
    }

    for(i=0 ; i<alunos; i++){
        printf("Aluno [%d] nota = %d\n",i+1,notas[i]);
    }

    system("pause");
    system("cls");

    for(i=0; i<alunos;i++){
        soma = soma + notas[i];
    }

    media = soma/alunos;

    printf("A média da turma é %d\n",media);
    free(notas);
    return 0;



}
