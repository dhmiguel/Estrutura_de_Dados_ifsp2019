#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int a, b;
    int *x, *y;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&a);
    printf("Digite o segundo valor: \n");
    scanf("%d",&b);

    x = &a;
    y = &b;


    if(&x > &y){
        printf("O maior endereço é %p e o seu valor é %d \n",x,*x);
    }
    else{
        printf("O maior endereço é %p e o seeu valor é %d \n",y,*y);


    }




}
