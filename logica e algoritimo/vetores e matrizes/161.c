#include<stdio.h>
const int tam=10;

void main (){
    int vet[10];
    int i,copia,fim=tam-1;
    for ( i = 0; i < tam; i++)
    {
    
        printf("Digite o numero:");
        scanf("%d",&vet[i]);

    }
    for ( i = 0; i < tam/2; i++)
    {
         copia=vet[i];
         vet[i]=vet[fim];
         vet[fim]=copia;
         fim--;
        
    }
     if (vet[i]=vet[fim])
         {
         
            printf("O vetor eh palindromo\n");
         
    }
    else{
        printf("não é palindromo"); 
    }
}