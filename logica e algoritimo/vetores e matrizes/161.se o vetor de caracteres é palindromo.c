#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main(){
    int tam=10;
     char vet[tam];
     int i;
     int cont=0;
    
  
     char copia[tam];
     for(i=0;i<tam;i++){
       
        printf("Digite o caractere\n");
        scanf("%c",&vet[i]);
        fflush(stdin);

     }
     for(i=0;i<tam;i++){
                                       
        copia[i]=vet[tam-1-i];// primeiro vetor vet[b,b,b,b,b,b,b,b,b,b]//quando i for 1,tamanho-1 que é 9 menos i que tbm é 1 que é igual a 8
        //copia[0,1,2,3,4,5,6,7,8,9] o vetor copia recebe o vet de tras pra frente.
     
       
       

     }
     
    for(i=0;i<tam;i++){
        if(copia[i]==vet[i]){// compara cada caractere dentro do vetor se são iguais ou não de tras pra frente
        //se for o contador conta +1
            cont++;
           
        printf("{ %c }",copia[i]);// imprime a copia de tras pra frente

    }
    

    }
    if(cont==tam){//se o contador de caracteres iguais for igual ao tamanho do vetor ele eh palindromo
        printf("eh palindromo");

    }
    else{
        printf("nao eh palindromo");
    }
    getch();
    
}