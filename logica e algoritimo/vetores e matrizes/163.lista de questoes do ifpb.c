#include<stdio.h>
#include<string.h>
#include<locale.h>
const int tam=10;
int main(){
    char gabarito[tam];
    char respostas[tam];
    int i,acertos=0;
    char nome[100];
    int cont=0;
    int soma=0;
    int k;
   
    for(i=0;i<tam;i++){
        printf("Digite a %d letra do gabarito:\n",i+1);
        scanf("%c",&gabarito[i]);
        fflush(stdin);
    }
    printf("digite o nome do candidato:\n");
    scanf("%c",nome);
    fflush(stdin);
    while(nome!='fim'){
        
        
            
        
        for(i=0;i<tam;i++){
            printf("digite a %d resposta do candidato\n",i+1);
            scanf("%c",&respostas[i]);
            fflush(stdin);
        }
        for(i=0;i<tam;i++){
            if(respostas[i]==gabarito[i]){
                acertos++;
            }
        }
        
        int porcentagem=(acertos*100)/tam;
        soma=soma+acertos;
        float media=(float) soma/cont;
        printf("%d por cento de  acerto\n",porcentagem);
        printf("%2.f media do candidato.\n",media);
        k++;
        cont++;
        printf("Digite o nome do candidato:\n");
        scanf("%c",&nome[k]);
        fflush(stdin);
        
       

    }


}