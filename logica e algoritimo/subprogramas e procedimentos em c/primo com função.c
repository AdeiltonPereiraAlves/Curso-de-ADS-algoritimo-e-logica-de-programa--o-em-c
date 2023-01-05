#include<stdio.h>
#include<conio.h>
int divisores(int n ){
    int cont=0;
    int i;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cont++;
        }

    }

    return cont;
}
int ehPrimo(int n){
   int div=divisores(n);
   if(div==2){
      return 1;
   }
   else{
    return 0;
   }

}
void main(){
    int m,n,i;
    printf("Digite os dois numeros:\n");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++){
        int primo=ehPrimo(i);
        if(primo==1){
            printf("O numero %d eh primo\n",i);
        }
        
    }

}
