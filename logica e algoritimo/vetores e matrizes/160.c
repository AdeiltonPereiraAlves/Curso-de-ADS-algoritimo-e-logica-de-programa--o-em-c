#include<stdio.h>

void main(){
    int tam=10;
    int vet[tam];
    int k,i,copia,fim=tam-1;
    //recebe os elementos do teclado e coloca no vetor
    for ( k = 0; k < tam; k++)
    {
    
        printf("Digite o numero:\n");
        scanf("%d",&vet[k]);

    }

printf("vetor antes da troca:\n");
for ( i = 0; i < tam; i++)
{
    printf(" %d ",vet[i]);
}
printf("\n");
//e fetua a troca coma variavel copia
              //icrementa a te a metade do vetor
for (i = 0; i< tam/2; i++){

     copia=vet[i];
     vet[i]=vet[fim];
     vet[fim]=copia;
     fim--;//decrementa a outra metade do vetor
}
//imprime o vetor depois da troca
printf("vetor depois da troca.\n");
for ( i = 0; i < tam; i++)

{
    printf(" %d ",vet[i]);
}
getch();

}