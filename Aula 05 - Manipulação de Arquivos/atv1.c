#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
    setlocale(LC_ALL,"");
    FILE *f1, *f2;
    char texto[50], a, b;
    int i;

    f1 = fopen("arq1.txt", "w");
    f2 = fopen("arq2.txt", "w");

    if(f1 == NULL || f2 == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    printf("Digite um texto qualquer: \n");
    gets(texto);

    for(i = 0; i < strlen(texto); i++){
        fputc(texto[i], f1);
    }
    fclose(f1);
    f1 = fopen("arq1.txt", "r");
    a = fgetc(f1);
    while(a !=EOF){
        fputc(toupper(a), f2);
        a = fgetc(f1);
    }

fclose(f1);
    fclose(f2);

    system("pause");

    printf("******* Exibindo o arquivo original ******\n");

    f1 = fopen("arq1.txt", "r");

    a = fgetc(f1);
    while(a != EOF){
        printf("%c", a);
        a = fgetc(f1);
    }

    fclose(f1);

    system("pause");

    printf("****** Exibindo o arquivo modificado ******\n");

    f2 = fopen("arq2.txt", "r");

    b = fgetc(f2);
    while(b != EOF){
        printf("%c", b);
        b = fgetc(f2);
    }
    fclose(f2);

    printf("\n\n");
    system("pause");
    return 0;
}
