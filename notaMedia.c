#include<stdio.h>
int main(){
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    float notamedia;
    printf("Este programa calcula a nota média do aluno\n");
    printf("Insira a primeira nota do aluno\n");
    scanf("%d",&nota1);
    printf("Insira a segunda nota do aluno\n");
    scanf("%d",&nota2);
    printf("Insira a terceira nota do aluno\n");
    scanf("%d",&nota3);
    printf("Insira a quarta nota do aluno\n");
    scanf("%d",&nota4);
    notamedia=nota1+nota2+nota3+nota4/4;
    printf("Tudo certo, a nota média deste aluno é: %2.2f\n",notamedia);
    return 0;
}