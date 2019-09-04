#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL,"");

    int *v, i,n,impar=1;

    printf("Digite a quantidade de vetores a ser exibido: \n");
    scanf("%d",&n);

    v = (int*) calloc(n , sizeof(int));

    if(v == NULL){
        printf("Erro: Sem mem�ria!\n");
        exit(1);
    }

    for(i = 0 ; i < n; i++){
        v[i]=impar;
        impar = impar+2;
    }
    for(i = 0 ; i < n; i++){
        printf("Vetor[%d] = %d\n", i+1 ,v[i]);
    }
    free(v);
    return 0;

}
