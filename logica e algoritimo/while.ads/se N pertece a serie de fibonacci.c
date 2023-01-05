#include<stdio.h>
void main(){
    int penultimo=0;
    int ultimo=0;
    int proximo=1;
    int n;
    printf("Digite o numero n:\n");
    scanf("%d",&n);
    while(proximo<n){
       // printf("%d ",proximo);
        penultimo=ultimo;
        ultimo=proximo;
        proximo=penultimo+ultimo;

    }
    if(proximo==n){
        printf(" \n O numero %d pertece a serie de fibonacci.\n",n);

    }
    else{
        printf("o numero %d nao pertence a serie fibonacci.\n",n);
    }
    getch();
}