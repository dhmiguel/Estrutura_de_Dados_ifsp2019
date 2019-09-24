#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct{
    char nome[50];
    int idade;
    char endereco[120];
}Cadastro;

Cadastro aloca (int n);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n, i;
    printf("Digite quantos cadastros deseja realizar: \n");
    scanf("%d",&n);
    Cadastro cliente[n];

    aloca(n);
    for(i = 0; i<n ; i++){
        printf("Digite o nome: \n");
        getchar();
        fgets(cliente[i].nome,49,stdin);
        printf("Digite a idade: \n");
        scanf("%d",&cliente[i].idade);
        printf("Digite o endereço: \n");
        getchar();
        fgets(cliente[i].endereco,119,stdin);
    }

    system("cls");
    printf("******* Clientes Cadastrados *******\n\n");
    for(i=0; i<n ; i++){
        printf("***** Cliente %d *****\n",i+1);
        printf("Nome: %s\n",cliente[i].nome);
        printf("Idade: %d\n",cliente[i].idade);
        printf("Endereço: %s\n",cliente[i].endereco);
    }
    system("pause");
    return 0;
}

Cadastro aloca (int n){
    Cadastro *p;
    p = (Cadastro *) malloc(n * sizeof(Cadastro));
    if(p == NULL){
        printf("Erro de alocação!");
        system("pause");
        exit(1);
    }
    return *p;
}
