#include<stdio.h>
#include<locale.h>
const int tam=10;
void main(){
   char vet[tam],copia[tam];
   int i,cont=0;
   for(i=0;i<tam;i++){
    printf("Digite um caractere.\n");
    scanf("%d",&vet[i]);
    fflush(stdin);
   }
   for(i=0;i<tam;i++){
    copia[i]=vet[tam-1-i];
   }
   for(i=0;i<tam;i++){
    if(vet[i]==vet[i]){
        cont++;
    }
   }
   if(cont==tam){
   
    printf("Eh palindro.\n");
   }
   else{
    printf("Não eh palindromo.");
   }
}