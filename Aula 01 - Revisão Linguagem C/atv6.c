#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
    char texto[50];
    int cont=0, i=0;

    printf("Digite um pequeno texto: \n");
    gets(texto);

    for(i=0; i<strlen(texto); i++)
    {
        if(texto[i]== ' ')//Verificação se há espaços em branco
        {
            cont++;
            texto[i]=texto[i+1];//Guardando a nova string sem espaços em branco
        }
    }
    printf("Existem %d espaços em branco na frase\n",cont);
    puts(texto);
}
