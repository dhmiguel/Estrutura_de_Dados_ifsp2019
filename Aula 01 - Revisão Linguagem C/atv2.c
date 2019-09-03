#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

main(){
int valor;

printf("Digite um valor inteiro: \n");
scanf("%d",&valor);

if(valor==1){
    printf("A");
}else if(valor ==2){
      printf("B");
}else if(valor ==3){
        printf("C");
}else if(valor ==4){
          printf("D");
}else{
           printf("0");
  }

  return 0;
}

