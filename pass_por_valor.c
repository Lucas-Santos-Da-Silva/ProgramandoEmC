#include<stdio.h>
int subtrair(int x,int y){
    return x-y;
}
int main(){
    int v2=10;
    int v1=5;
    int rs=subtrair(v1,v2);
    printf("O resultado é %d\n",rs);
    return 0;
}
