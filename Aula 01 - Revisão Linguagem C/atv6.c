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
        if(texto[i]== ' ')//Verifica��o se h� espa�os em branco
        {
            cont++;
            texto[i]=texto[i+1];//Guardando a nova string sem espa�os em branco
        }
    }
    printf("Existem %d espa�os em branco na frase\n",cont);
    puts(texto);
}
