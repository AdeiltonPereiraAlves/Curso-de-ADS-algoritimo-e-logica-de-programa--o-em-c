#include<stdio.h>
void porcentagem(int questoes,int acertos){
    int pacertos=(acertos*100)/questoes;
    printf("Porcentagem de acertos: %d %% \n",pacertos);
    int erros=(questoes*questoes)-pacertos;
    printf("Porcentagem de erros: %d %%\n",erros);
    printf("\n");

}
void main(){
    int questoes,acertos;
    printf("Digite o numero de questões e o numero de acertos:\n");
    scanf("%d%d",&questoes,&acertos);
    porcentagem(questoes,acertos);
}
