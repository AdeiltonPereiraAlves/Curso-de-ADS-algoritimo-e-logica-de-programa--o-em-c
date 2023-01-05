#include<stdio.h>
void main(){
    int penultimo=0;
    int ultimo=0;
    int proximo=1;
    int n;
    printf("Digite um numero n:\n");
    scanf("%d",&n);

    while(proximo<n){
        printf("%d ",proximo);
        penultimo=ultimo;
        ultimo=proximo;
        proximo=penultimo+ultimo;
       
    }
    printf(" %d \n ",proximo);
if(proximo==n){
    printf("O numero %d pertece a serie fibonacci.\n",n);
    }
else{
    printf("O numero %d nao pertence a serie fibonacci.\n",n);
    }
  
    getch();
}
