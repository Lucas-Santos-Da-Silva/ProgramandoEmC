#include<stdio.h>
int subtrair(int *x, int *y){
    printf("Posição x %p e Posição y %p\n",&x,&y);
    return *x-*y;
}
int main(){
    int v1 =10;
    int v2 =5;
    int rs=subtrair(&v1, &v2);
    printf("Posição v1 %p e Posição v2 %p\n",&v1,&v2);
    printf("O resultado é: %d\n",rs);
    return 0;
    
}