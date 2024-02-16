#include <stdio.h>

// Função para converter decimal para octal (sem usar array)
void decimalToOctal(int deciNum) {
    int octalNum = 0;
    int countval = 1;
    int dNo = deciNum;
    while (deciNum != 0) {
        int remainder = deciNum % 8;
        octalNum += remainder * countval;
        countval = countval * 10;
        deciNum /= 8;
    }
    printf("Representação octal: %d\n", octalNum);
}

int main() {
    int n = 33; // Número decimal de exemplo
    decimalToOctal(n);
    return 0;
}