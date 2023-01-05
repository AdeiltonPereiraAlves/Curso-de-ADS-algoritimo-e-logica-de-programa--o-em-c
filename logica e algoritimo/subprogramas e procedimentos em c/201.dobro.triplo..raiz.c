#include<stdio.h>
#include<math.h>

void dobro(int n){
    printf(" O dobro eh: %d \n",n*2);
}
void triplo(int n){
    printf(" O triplo eh: %d \n",n*3);
}
void quadrado(int n){
    int quad;
    printf(" O quadrado eh: %d \n", quad=pow(n,2));
}
void cubo(int n){
    int cub;
    printf("O cubo eh:%d\n", cub=pow(n,3));
}
void raiz(int n){
    int raz;
    printf("A raiz eh:%d \n", raz=sqrt(n));
}
void main(){
    int n;
    printf("Digite um numero inteiro:\n");
    scanf("%d",&n);
    
    dobro(n);
    triplo(n);
    quadrado(n);
    cubo(n);
    raiz(n);

    getch();
    
}