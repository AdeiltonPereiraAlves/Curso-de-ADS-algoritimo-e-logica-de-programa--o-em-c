#include<stdio.h>
#include<conio.h>
void main(){
    int tam=5;
    int tam2=10;
    int vetA[tam],vetB[tam],vetC[tam2];
    int i,y,j,k;
    for(i=0;i<tam;i++){
        printf(" Digite os valore do primeiro vetor:\n");
        scanf("%d",&vetA[i]);
    }
    for(y=0;y<tam;y++){
        printf("Digite os valores do segundo vetor:\n");
        scanf("%d",&vetB[y]);
    }
    for(i=0;i<tam;i++){
        vetC[i]=vetA[i];
        vetC[i+5]=vetB[i];
        
    }
    for(i=0;i<tam2;i++){
        for(j=i+1;j<tam2;j++){
            if(vetC[i]==vetC[j]){
                for(k=j;k<(tam2)-1;k++){
                    vetC[k]=vetC[k+1];
                }
                tam2--;
                j--;
            }
        }
        
    }
    for(i=0;i<tam2;i++){
         printf("%d ",vetC[i]);
    }
    getch();
}