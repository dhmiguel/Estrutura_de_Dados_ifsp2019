#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char f1[50],f2[50],f3[100],p[50],c;
    int tam1, tam2, i, cont1, cont2;

    printf("Digite uma frase: \n");
    gets(f1);

    printf("Digite uma frase: \n");
    gets(f2);

    printf("Digite uma palavra: \n");
    gets(p);


    printf("Digite um caracter qualquer a ser buscado na frase: \n");
    scanf("%c",&c);



    tam1= strlen(f1);
    tam2= strlen(f2);

    cont1=cont2=0;

    for(i=0;i<tam1;i++){//busca o caracter contido em "c" na string f1
        if(f1[i]==c){
            cont1++;
        }
    }
    for(i=0;i<tam2;i++){
        if(f2[i]==c){
            cont2++;
        }
    }
    system("pause");
    printf("\nA letra %c aparece %d veze(es) na primeira e %d vez(es) na segunda frase.\n",c, cont1,cont2);

    if(!strcmp(f1,f2)){
        printf("\nAs frases são iguais\n");
    }else{
        strcat(f3,f1);
        strcat(f3," ");
        strcat(f3,f2);
        printf("Nova frase: ");
        puts(f3);
        if(strchr(f3,i)){
            printf("A letra 'i' aparece nesta frase\n\n\n");
        }

        if(strstr(f3,p)){
            printf("A sequência %s também aparece nesta frase\n\n",p);
        }
        printf("Frase invertida: ");
        strrev(f3);
        puts(f3);
    }
    system("pause");
    return 0;

}
