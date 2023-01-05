#include<stdio.h>
void main(){
    int vet[5];
    int i,k;
    for(i=0;i<5;i++){
    
        printf("digite um numero:\n");
        scanf("%d",&vet[i]);
    }

for(k=0;k<5;k++){
    if(vet[k+1]>vet[k]){
        int aux=vet[k+1];
        vet[k+1]=vet[k];
        vet[k]=aux;
        printf("%d ",vet[k]);
    }
   
}
}