#include<stdio.h>
#include<math.h>
int main(){
    int rs=0,pos=0,exp=5;
    int binario[6]={1,0,1,1,1,0};
    while(pos<=5){
        rs+=binario[pos]*(pow(2,exp));
        pos++;
        exp--;
    }
    printf("%d\n",rs);
    return 0;
} 