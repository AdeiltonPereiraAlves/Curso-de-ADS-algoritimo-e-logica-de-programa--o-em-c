#include<stdio.h>
#include<conio.h>
const int qnt=5;
//obs funções sempre retornan interio por isso eh int fatorial
int fatorial(int n){
    int fator=1;//fator inicia com 1
    int k;
        //5 
    for(k=n;k>=2;k--){
    //fator recebe o resultado da multiplicação de fator por k //1*5
        fator=fator*k;
        //1x5=5
        //5x4=20
        //20x3=60
        //60x2=120
    }
    return fator;//retorna o acumulado das multiplicações 120
}
void main(){
    int n,i;
    //recebe os numeros do usuario
    for(i=1;i<qnt;i++){
        printf("Digite o numero:\n");
        scanf("%d",&n);// ex: n=5
        int valor=fatorial(n);//chama a funcao pasando o paramentro n
        printf(" o fatorial de %d eh %d \n",n,valor);
    getch();
}
}