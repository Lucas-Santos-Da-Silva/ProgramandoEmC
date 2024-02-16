#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(int binary[], int size) {
    int decimal = 0;
    for (int i = size - 1; i >= 0; i--) {
        decimal += binary[i] * pow(2, size - 1 - i);
    }
    return decimal;
}

int main() {
    int binary[8]; // Assuming an 8-bit binary representation
    printf("Enter an 8-bit binary number (e.g., 10101010): ");
    
    // Read binary digits from user input
    for (int i = 0; i < 8; i++) {
        scanf("%1d", &binary[i]);
    }

    int decimalResult = binaryToDecimal(binary, 8);
    printf("Decimal representation: %d\n", decimalResult);

    return 0;
}