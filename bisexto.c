#include<stdio.h>
int main(){
    int ano;
    printf("digite o ano\n");
    scanf("%d",&ano);
    if((ano % 400 == 0) || ((ano % 4 == 0) && (ano% 100 !=0))){
        printf("Este é um ano bisexto!!\n");

    }  
    else{
        printf("Este não é um ano bisextal!\n");
    }
}