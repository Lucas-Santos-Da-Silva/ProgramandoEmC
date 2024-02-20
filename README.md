## Neste repositório será publicado arquivos escritos em C
## Estudo da linguagem em C

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/695px-C_Programming_Language.svg.png" height="150" width="150">

<img src="https://seeklogo.com/images/G/github-logo-5F384D0265-seeklogo.com.png" height="150" width="150">

### Abaixo é apresentado os arquivos deste repositório

#### hello.c


```c
#include <stdio.h>
int main(){
    printf("Hello,World\n");
    return 0;
}
```

#### primeiro.c

```c
/**
Este programa pede ao usuário um numero qualquer e depois exibe o número na tela
*/
#include <stdio.h> //Estamos importando um biblioteca para trabalhar com entrada e saída de dados
int main(){
    int idade; //declaração da variável idade do tipo inteiro 
    printf("Digite a sua idade e tecle enter\n");
    scanf("%d", &idade); //para pegar o número digitado pelo usuário estamos usando o comando scanf e adicionando o valor digitado ao endereço de memória da variável idade. Usamos o e-comercial para refêrenciar o endereço de memória da variável
    printf("a idade digitada é %d\n" "endereço da idade %x\n",idade,&idade);
    return 0;
}
```
#### operacoes.c

```c
#include<stdio.h>
int main(){
    int n1; //Número 1
    int n2; //Número 2
    int soma;  //Operação
    int subtrair;
    int multiplicar;
    int dividir;
    printf("Digite um Número e tecle enter:\n");
    scanf("%d",&n1); //permite acessar seção de memória da variável n1
    printf("Digite outro número e tecle enter:\n");
    scanf("%d",&n2);
    soma=n1+n2; //ação para executar o cálculo
    subtrair=n1-n2; 
    multiplicar=n1*n2; 
    dividir=n1/n2;
    printf("O resultado da soma é %d\n",soma); //exibir resultado
    printf("O resultado da subtração é %d\n",subtrair);
    printf("O resultado da multiplicação é %d\n",multiplicar);
    printf("O resultado da divisão é %d\n",dividir);
    return 0;
}
```
#### notaMedia.c

```c
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
```
#### desconto_produto.c
```C
#include<stdio.h>
int main(){
    float preco;   
    float percentual;  
    float resultado;   
    float ver_desconto;
    printf("Digite o preço do produto:\n");
    scanf("%f",&preco); // %f porque está trabalhando com float
    printf("Digite o desconto do produto:\n");
    scanf("%f",&percentual); 
    resultado=preco-(preco*(percentual/100));
    ver_desconto=preco-resultado;
    printf("O preço do valor do produto com desconto de %2.2f é %2.2f\n",ver_desconto,resultado);
    return 0;
}

```
#### parimpar.c
```C
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
```
#### notaMedia.c
```C
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
```
#### bisexto.c
```C
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
```
#### while_dec_bin.c
```C
#include <stdio.h>
int main(){
   int dec=24;
   int resto=0;
   int pos=1;
   int rs=0;
   while(dec>0){
    resto=dec%2;
    dec=dec/2;
    rs=rs+pos*resto;
    pos=pos*10;
   }
   printf("%d\n",rs);
    return 0;
} 
```
#### for1.c
```C
#include<stdio.h>

int main(){
    int x;
    for(x=1;x<=10;x++){
        printf("%d\n",x);
    }
return 0;
}
```
#### colecoesiguais.c
```C
#include <stdio.h>
int main(){
    int c1[10]={10,5,68,8,47,12,54,13,62,11};
    int c2[15]={11,5,62,112,84,76,12,55,59,85,13,0,14,19,18};
    for(int i=0;i<10;i++){
        for(int k=0;k<15;k++){
            if(c1[i]==c2[k]){
            printf("%d\n", c1[i]);
            }
        }
    }
    return 0;
}
```
#### colecao1.c
```C
// Array é um conjunto de dados sobre um determinado
// assunto. Podemos falar de valores numéricos, textos,
// datas, ou objetos
#include <stdio.h>
int main(){
    int valores [5] = {10,5,8,12,7};
    printf("%d\n",valores[0]);
    return 0;
}
```
#### colecao2.c
```C
#include <stdio.h>
int main(){
    int loud[10]={1,21,11,8,19,45,7,24,26,18};
    int soma=0,media=0,i;
    for(i=0;i<=9;i++){
        soma+=loud[i];
    }
    printf("O resultado da soma é %d\n",soma);
    for(i=0;i<10;i++){
        media+=loud[i];
    }
    printf("O resultado da media é %d\n",(media/10));
    for(i=0;i<10;i++){
        if(loud[i]%2==0){
         printf("%d\n",loud[i]);
        }
    }
    
    return 0;
}
```
#### baseexponente.c
```C
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
```
#### tabuada.c
```C
#include<stdio.h>
int main(){
int num,num2;
printf("Digite um número para a tabuada:\n");
scanf("%d",&num);
for(num2=1;num2<=10;num2++){
    printf("%dx%d=%d\n",num,num2,(num*num2)); 
}
return 0;
}
```
#### whilebisexto.c
```C
#include <stdio.h>
int main(){
    int ano=1950;
    int qtd=0;
    int currentYear=2024;
    int naobisexto=0;
    printf("Digite o ano atual\n");
    scanf("%d",&currentYear);
    printf("Digite o ano inicial de onde você deseja verificar\n");
    scanf("%d",&ano);
    while(ano<=currentYear){
        if(ano%4==0){
            printf("O ano %d é bisexto\n",ano);
            qtd++;
        }
       ano++;
    }
    naobisexto=ano-qtd;
    printf("Temos %d anos bisexto\n",qtd);
    printf("Temos %d anos não bisexto\n",naobisexto);
    return 0;
} 
```
#### while1.c
```C
#include <stdio.h>
int main(){
    int i=0;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    return 0;
} 
```