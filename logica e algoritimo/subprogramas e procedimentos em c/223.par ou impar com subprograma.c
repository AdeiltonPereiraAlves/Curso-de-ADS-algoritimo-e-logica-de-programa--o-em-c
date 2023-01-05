#include<stdio.h>
#include<stdlib.h>
void parouimpar(int n){
    if(n%2==0){
        printf(" O numero %d eh par\n",n);
    }
    else{
        printf("O numero %d eh impar\n",n);
    
    }
}
void main(){
    int op;
    do{
    system("cls");
    int n;
    printf("Digite o numero inteiro:\n");
    scanf("%d",&n);
    parouimpar(n);
    
    printf("Deseja continuar?SIM 1 /NAO 2\n");
    scanf("%d",&op);
    }while(op!=2);
    printf("programa encerrado...");
    getch();
}

