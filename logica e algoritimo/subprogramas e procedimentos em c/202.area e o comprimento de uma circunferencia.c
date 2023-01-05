#include<stdio.h>
const float pi=3.14;
void area(float raio){
    float area=pi*raio*raio;
    printf("A area eh: %.2f \n",area);
}
void comprimento(float raio){
    float comprimento=2*pi*raio;
    printf("O comprimento eh:%.2f\n",comprimento);
}
void main(){
    float raio;
    printf("Digite o raio da circunferencia:\n");
    scanf("%f",&raio);
    area(raio);
    comprimento(raio);
    getch();
}
