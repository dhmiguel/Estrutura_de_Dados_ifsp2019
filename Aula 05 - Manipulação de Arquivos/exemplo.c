#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale (LC_ALL,"Portuguese");
    FILE *f;
    f = fopen("arquivo.txt", "w");
    if (f == NULL){
        printf("Erro na abertura! \n");
        system("Pause");
        exit(1);
    }
    char texto[60] = "Trabalhando com arquivos em Estrutura de Dados no IFSP";
    int i;

    for(i = 0; i < strlen(texto); i++){
        fputc(texto[i], f);
    }
    fclose(f);
    system("pause");
    return 0;




}
