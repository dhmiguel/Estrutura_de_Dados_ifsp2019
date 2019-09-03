#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
//Declaração dos vetores com 5 posições:
    int v1[5], v2[5];
    int i=0, j=0;

//preenchendo o vetor 1:
    for(i=0; i<5; i++)
    {
        printf("\nInforme o valor do elemento %d do vetor 1: ",i+1);
        scanf("%d",&v1[i]);

    }

//preenchendo o vetor 2:
    for(j=0; j<5; j++)
    {
        printf("\nInforme o valor do elemento %d do vetor 2: ",j+1);
        scanf("%d",&v2[j]);
    }

    printf("****** Vetor 1 ******\n");
    for(i=0; i<5; i++)
    {
        printf("Vetor[%d] = %d\n",i,v1[i]);
    }
    printf("****** Vetor 2 ******\n");
    for(j=0; j<5; j++)
    {
        printf("Vetor [%d] = %d\n",j,v2[j]);
    }
    system("pause");

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            //exibindo valores que são comuns aos dois vetores
            if(v1[i] == v2[j])
            {
                printf("\nValores iguais na posição %d e %d\n",i+1,j+1);
            }
            else if(v1[i]!= v2[j])//exibindo os valores que são diferentes aos dois vetores
            {
                printf("\nValores diferentes na posição %d e %d\n",i+1,j+1);
            }
        }
    }
    system("pause");
    return 0;

}
