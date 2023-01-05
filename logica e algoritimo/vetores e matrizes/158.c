#include<stdio.h>
void main(){
    int vet[10];
    int k,i,soma=0;
    for(k=0;k<=10;k++){
        printf("digite um numero inteiro:");
        scanf("%d",&vet[k]);

    }
    for ( i = 0; i <= 10; i++)
    {
        soma=soma+vet[i];
    }
    int media= soma/10;
  // printf("%d media",media);
  
   for ( i = 0; i <=10; i++)
   {
     if (vet[i]>media)
    {
        printf("%d ",vet[i]);
    }
   }
   
    
    
    
    
}