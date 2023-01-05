#include<stdio.h>

void main(){
    int tam=8;
    int num;
    
    int binario[tam];
    
    int i;

    printf("Digite um valor de 0 a 255.\n");
    scanf("%d",&num);
    if(num<0||num>255){
        printf("numero invalido\n");
                
    }
    for(i=0;i<tam;i++){
        
        binario[i]=num%2;// resto da divisao por 2 w guarda no vetor
        num=num/2;//num agora recebe o resultado da divisao por 2

    }
   
    
    for(i=tam-1;i>=0;i--){//imprime o vetor de binarios de tras pra frente. OBSERVAÇAO O CONTADOR TEM QUE IR ATER O 0 PARA DA CERTO
        printf(" %d ",binario[i]);
    }
  
}