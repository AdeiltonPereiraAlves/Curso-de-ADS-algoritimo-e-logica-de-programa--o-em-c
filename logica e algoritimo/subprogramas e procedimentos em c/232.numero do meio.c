#include<stdio.h>
void maior(int n1,int n2, int n3){
    if(n1>n2 && n1>n3){
        printf(" O maior numero eh: %d \n",n1);

    }
    else if(n2>n1 && n2>n3){
        printf(" O maior numero eh: %d \n",n2);
    }
    else if(n3>n1 && n3>n2){
        printf(" O maior numero eh: %d \n",n3);
    }
    else{
        printf(" Os numeros sao iguais ");
    }
    
}

void menor(int n1, int n2, int n3){
    if(n1<n2 && n1<n3){
        printf(" O menor numero eh: %d \n",n1);
    }
    else if(n2<n1 && n2<n3){
        printf(" O menor numero eh: %d \n",n2);
    }
    else if(n3<n1 && n3<n2){
        printf(" O menor numrero eh: %d \n",n3);

    }
    else{
        printf(" Os numeros sao iguais ");
    }
}
void meio(int n1, int n2 ,int n3){
    if(n1>n2 && n1<n3 || n1<n2 && n1>n3){

        
        printf(" O numero do meio eh: %d \n",n1);
    }
    else if(n2>n1 && n2<n3 || n2<n1 && n2>n3){
        printf(" O numero do meio eh: %d \n",n2);
    }
    else if(n3>n1 && n3<n2 || n3<n1 && n3>n2){
        printf(" O numero do meio eh: %d \n",n3);
    }
    else{
        printf(" Os numeros sao iguais ");
    }

}

void main(){
    int n1 ,n2 ,n3;
    printf(" Digite os tres numeros inteiros:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    maior(n1,n2,n3);
    menor(n1,n2,n3);
    meio(n1,n2,n3);
    getch();
}     
