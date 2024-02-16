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