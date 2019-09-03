#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float vetor[9] = {1.54, 4, 5.6, 12.4, 65.43, 2, 1, 6.54, 8.98};

    for(int i = 0; i<9; i++){
        printf("Posição %d endereço : %p\n", i+1, &vetor[i]);
    }
    return 0;
}
