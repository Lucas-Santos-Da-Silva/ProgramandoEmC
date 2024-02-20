#include<stdio.h>
int main(){
float base,exp,i,b;
printf("Digite a base:\n");
scanf("%f",&base);
printf("Digite o expoente:\n");
scanf("%f", &exp);
b=base;
for(i=1;i<exp;i++){
    base*=b;
}
printf("%2.2f\n",base); 
return 0;
}