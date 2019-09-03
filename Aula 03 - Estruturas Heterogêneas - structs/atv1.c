#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
};

void main(){
    setlocale(LC_ALL,"Portuguese");
    int tam=5;
    struct funcionario func[tam];
    int i;

    for(i=0;i<tam;i++){
        printf("Digite o seu ID: \n");
        scanf("%d",&func[i].ID);
        printf("Digite seu nome: \n");
        getchar();
        fgets(func[i].nome,29,stdin);
        printf("Digite sua idade: \n");
        scanf("%d",&func[i].idade);
        printf("Digite seu sal�rio: \n");
        scanf("%f",&func[i].salario);
    }
    system("cls");

    for(i=0;i<tam;i++){
        printf("****** Funcion�rio %d: ******\n",i+1);
        printf("ID: %d \n",func[i].ID);
        printf("Nome: %s \n",func[i].nome);
        printf("Idade: %d \n",func[i].idade);
        printf("Sal�rio: %.2f \n",func[i].salario);

    }



}
