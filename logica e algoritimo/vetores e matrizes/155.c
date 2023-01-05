#include<stdio.h>
// enesimo numero em um vetor
void main (){
    int vet[5];
    int k,n;
    for(k=0;k<=5;k++){
     printf("digite um numero: ");
     scanf("%d",&vet[k]);
    }
    printf("informe a posicao;");
    scanf("%d",&n);
    printf("%d",vet[n-1]);
}