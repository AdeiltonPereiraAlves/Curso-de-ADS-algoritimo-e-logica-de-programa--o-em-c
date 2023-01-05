#include<stdio.h>

void imprimir(int m,int n){
    int k;
    for(k=m;k<=n;k++){
        printf(" %d ",k);
        if(k<n){
        printf(",");
        }
    }
}
void main(){
    int m,n;
    printf("Digite o intervalo m e n: \n");
    scanf("%d%d",&m,&n);
    imprimir(m,n);
}