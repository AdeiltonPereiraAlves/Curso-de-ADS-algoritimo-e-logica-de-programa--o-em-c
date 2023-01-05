#include<stdio.h>

void area(int lado){
    int area=lado*lado;
    printf(" A area eh: %d ",area);
  
}
void perimetro(int lado){
    int perimetro=lado*4;
    printf(" O perimetro eh: %d ",perimetro);

}
void main(){
    int lado;
    printf("Digite o valor do lado do quadrado:\n");
    scanf("%d",&lado);
    area(lado);
    printf("\n");
    perimetro(lado);
}