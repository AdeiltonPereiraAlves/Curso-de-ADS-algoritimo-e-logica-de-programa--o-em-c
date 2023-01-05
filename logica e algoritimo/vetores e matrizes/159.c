#include<stdio.h>
const int tam=10;
void main (){
    int vet[tam];
    int k,i,m,n;
    int aux;
    for ( k = 0; k< tam; k++)
    {
       printf("Digite um numero inteiro:");
       scanf("%d",&vet[k]);
    }
    printf("vetor antes da troca:");
    for (i = 0; i< tam; i++)
    {
        printf(" %d ",vet[i]);
    }
    printf("Digite os numeros m e n:");
    scanf("%d%d",&m,&n);
   
        aux=vet[m];
        vet[m]=vet[n];
        vet[n]=aux;
    
    for ( i = 0; i <tam; i++)
    {
        printf("%d ",vet[i] );
    }
    
    
    
    
}
                                                                                                                                                                                                                                                                                                                    