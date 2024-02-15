#include <stdio.h>

int main (){
int num;
printf("Digite um número: \n");
scanf ("%d",&num);
if(num%2==0){
  printf("Digite um número é par\n");  
}
else{
  printf("Digite um número é impar\n");    
}
return 0;
}