 #include<stdio.h>
void main (){
    int vet [10];
    int k,i;
    for(k=1;k<=10;k++){
        printf("Digite o %d posicão:",k);
        scanf("%d",&vet[k]);

    }
    for(i=1;i<=10;i++){
        printf("%d ",vet[i]);
    }
}