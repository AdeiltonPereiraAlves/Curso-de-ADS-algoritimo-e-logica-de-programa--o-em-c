#include<stdio.h>
void media(int n1,int n2,int n3){
    int soma=n1+n2+n3;
    float media=(float)soma/3;
    printf(" %.2f ",media);
}
int main(){
    
    int n1,n2,n3;
   
    printf("Digite as notas:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    
    media(n1,n2,n3);

}
