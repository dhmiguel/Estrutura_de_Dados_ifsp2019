#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void modifica(int *x, int*y, int*z);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int a,b,c;
    int *x, *y, *z;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&a);
    printf("Digite o valor do segundo valor: \n");
    scanf("%d",&b);
    printf("Digite o terceiro valor: \n");
    scanf("%d",&c);

    x = &a;
    y = &b;
    z = &c;

    modifica(x, y, z);

    printf("Valor de x: %d \n",*x);
    printf("Valor de y: %d \n",*y);
    printf("Valor de z: %d \n",*z);

}

void modifica(int *x, int *y, int *z){
    *x = *x + 100;
    *y = *y + 100;
    *z = *z + 100;
}
