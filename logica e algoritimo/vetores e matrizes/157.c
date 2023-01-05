#include<stdio.h>
const int tam=5;
void main(){
    int vet[tam];
    int k,i,n;
    for ( k = 0; k <= tam; k++)
    {
        printf("Digite um numero;");
        scanf("%d",&vet[k]);

    }
    printf("Digite um numero");
    scanf("%d",&n);
    for ( i = 0; i <= tam; i++)
    {
        if(vet[i]==n){
            printf("%d ",i);
        }
        
    }
    
}