#include <stdio.h>
#include <math.h>

// Define a structure to represent BinaryToDecimal
struct BinaryToDecimal {
    char binary[32]; // Assuming a 32-bit binary number as input
    int decimal;
};

// Function to convert binary to decimal
void convertToDecimal(struct BinaryToDecimal *bd) {
    int length = strlen(bd->binary);
    int decimalValue = 0;

    for (int i = length - 1; i >= 0; i--) 
	{
        if (bd->binary[i] == '1') 
		{
            decimalValue += pow(2, length - 1 - i);
        }
    }

    bd->decimal = decimalValue;
}

int main() {
    struct BinaryToDecimal bd;
    
    printf("Enter a binary number (up to 32 bits): ");
    scanf("%s", bd.binary);

    convertToDecimal(&bd);

    printf("Decimal equivalent: %d\n", bd.decimal);

    return 0;
}
