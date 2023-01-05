#include<stdio.h>
void main(){
    int mat[4][4];
    int i,k;
    for( i=0;i<4;i++){
        for(k=0;k<4;k++){
            printf("Digite os numeros da matriz:\n");
            scanf("%d",&mat[i][k]);
        }
    }
    for(i=0;i<4;i++){
        for(k=0;k<4;k++){
            printf("[%d] \n",mat[i][k]);
        }
        printf("\n");
    }

}