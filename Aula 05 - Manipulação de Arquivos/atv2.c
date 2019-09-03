#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

typedef struct func {
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;

int main(){
    setlocale(LC_ALL,"");
    FILE *f1;
    f1 = fopen("atividade2.txt", "wb");
    if (f1 == NULL){
        printf("Erro na abertura! \n");
        system("pause");
        exit(1);
    }
    FUNCIONARIO fc[5] = {001, "Guilherme Souza Rocha", 24, 1789.45,
                         002, "Emilly Rodrigues Carvalho", 20, 1893.20,
                         003, "Bianca Oliveira Sousa", 29, 2176.00,
                         004, "Pedro Correia Lima", 19, 1100.00,
                         005, "Aline Oliveira Araujo", 27, 4532.97};
    fwrite(fc, sizeof (FUNCIONARIO), 5, f1);
    fclose(f1);
    system("pause");

    f1 = fopen("atividade2.txt", "rb");

    fseek(f1, 2*sizeof(FUNCIONARIO), SEEK_SET);
    fread(fc, sizeof(FUNCIONARIO), 1, f1);
    printf("ID: %d \nNome: %s \nIdade: %d \nSalário: %.2f \n",fc->ID, fc->nome, fc->idade, fc->salario);
    fclose(f1);
    system("pause");
    return 0;
}
