#include<stdio.h>
void main(){
    int tam=5;
    int veta[tam];
    int vetb[tam];
    int i,k,j;
    int vetc[10];


    for(i=0;i<tam;i++){
        printf("Digite o numero inteiro para o primeiro vetor:\n");
        scanf("%d",&veta[i]);
    }
    for(k=0;k<tam;k++){
        printf("Digite o numero inteiro para o segundo vetor:\n");
        scanf("%d",&vetb[k]);
    }
    for(i=0;i<tam;i++){
        vetc[i]=veta[i];
        vetc[i+tam]=vetb[i];
    }
    for(i=0;i<2*tam;i++){
        for(j=i+1;j<tam;j++){
            if(vetc[i]==vetc[j]){
                for(k=j;k<2*tam-1;k++){
                    vetc[k]=vetc[k+1];
                }
                tam--;
                j--;
            }
        }
        
        }
    
     for(i=0;i<tam;i++){
       printf(" %d ",vetc[i]);
    }
}