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
#### parimpar 
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