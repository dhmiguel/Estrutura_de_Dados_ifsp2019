#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int recursiva (int n);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;

    printf("Digite um número inteiro qualquer maior que zero: \n");
    scanf("%d",&n);

    recursiva(n);




}
int recursiva(n){
    printf("%d",n);
    if(n==0){
        return 0;
    }
    else{
        return(recursiva())
    }



}
