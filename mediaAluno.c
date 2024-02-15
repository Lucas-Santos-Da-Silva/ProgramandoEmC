/*Neste programa iremos calcular a nota média do aluno. Teremos a entrada de 4 notas, depois será feito o cálculo da média, onde iremos somar as notas e depois dividir por 4.
Se o aluno tiver uma média acima ou igual 7, estará aprovado, caso o aluno tenha uma nota menor ou igual que quatro, então o aluno estará reprovado; caso contrário, estará em recuperação*/
#include<stdio.h>
int main(){
    float nota1,nota2,nota3,nota4,notamedia;
    printf("Este programa calcula a nota média do aluno\n");
    printf("Insira a primeira nota do aluno\n");
    scanf("%f",&nota1);
    printf("Insira a segunda nota do aluno\n");
    scanf("%f",&nota2);
    printf("Insira a terceira nota do aluno\n");
    scanf("%f",&nota3);
    printf("Insira a quarta nota do aluno\n");
    scanf("%f",&nota4);
    notamedia=nota1+nota2+nota3+nota4/4;
    printf("Tudo certo, a nota média deste aluno é: %2.2f\n",notamedia);
   if (notamedia>=7){
    printf("Aprovado!\n");
   }
   else if (notamedia<=4){
     printf("Reprovado!\n");
   }
   else {
    printf("Recuperação!\n");
}
return 0;

}