#include<stdio.h>
void main(){
    int vet[10];
    int k,i;
    int n;
    for (k=1;k<=10;k++)
    {
        printf("digite o numero;");
        scanf("%d",&vet[k]);
        
    }
    printf("iforme um numero n;");
    scanf("%d",&n);
    
    
    for ( i = 1; i <= 10; i++){
        if(n<vet[i]){
         printf("%d ",vet[i]);
        }
    }
    
    
        
    getch();
   
}