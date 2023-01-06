#include<stdio.h>
const int tam=10;
void Permutar(int vet[tam],int m, int n){
    int aux=vet[m];
    vet[m]=vet[n];
    vet[n]=aux;
   
}

void main(){
    int m,n,i,tam=10,vet[tam];
    for ( i = 0; i < tam; i++)
    {  
        printf("Digite o valor para o vetor:\n");
        scanf("%d",&vet[i]);


        /* code */
    }
   
    printf("Digite dois valores para a permutacao: \n");
    scanf("%d%d",&m,&n);
    Permutar(vet,m-1,n-1);
    for(int k=0;k<tam;k++){
    printf("%d ",vet[k]);
   }    
    
    getch();
    
}