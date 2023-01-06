#include<stdio.h>
#include<conio.h>
void permutar(int m, int n){
    int aux=m;
    m=n;
    n=aux;
    printf(" Resultado depois da permutacao: %d  %d \n",m,n);
}
void main(){
    int m,n;
    printf("Digite os numreos M e N:\n");
    scanf("%d%d",&m,&n);
    printf(" resultado antes da permutacao :%d %d \n",m,n);

    permutar(m,n);

    getch();
}