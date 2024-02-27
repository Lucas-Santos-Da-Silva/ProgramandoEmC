#include <stdio.h>
#include <stdlib.h>

int main (){
int *ptr_int;
ptr_int = (int *)malloc(sizeof(int));
if(ptr_int==NULL){
    printf("erro ao tentar aloca mempria\n");
    return 1; //para a execução do programa
}
printf("Digite um número: \n");
scanf("%d", ptr_int);
printf("O valor digitado é %d e ele está em %p\n",*ptr_int, ptr_int);
free(ptr_int);
return 0;
}