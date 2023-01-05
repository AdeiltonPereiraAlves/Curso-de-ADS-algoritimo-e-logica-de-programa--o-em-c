#include<stdio.h>
void maior(int n1,int n2,int n3){
    if(n1>n2&&n1>n3){
        printf("O numero maior eh:%d \n",n1);

    }
    else if(n2>n1&&n2>n3){
        printf("O numero maior eh:%d \n ",n2);
    }
    else if(n3>n1&&n3>n2){
        printf("o numero maior eh: %d \n",n3);
    }
    else{
        printf("Os numeros sao iguais.\n");
    }
}
void main(){
    int n1,n2,n3;
    printf("Digite os tres valores :\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    maior(n1,n2,n3);
}
