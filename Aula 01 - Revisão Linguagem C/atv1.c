#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main(){
int valor;


printf("Digite um valor inteiro qualquer: \n");
scanf("%d",&valor);

    switch (valor){
        case 1:
            printf("A\n");
        break;
        case 2:
            printf("B\n");
        break;
        case 3:
            printf("C\n");
        break;
        case 4:
            printf("D\n");
        break;
        default:
            printf("0\n");
        break;

system("pause");

return 0;

    }

}
