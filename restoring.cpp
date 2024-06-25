#include <stdio.h>

// Function to convert integer to binary string
void intToBinary(int num, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

// Function to perform restoring division and display steps
void restoringDivision(int dividend, int divisor) {
    int quotient = 0; // Initialize quotient

    printf("Dividend = ");
    intToBinary(dividend, sizeof(int) * 8);
    printf(" (%d)\n", dividend);

    printf("Divisor = ");
    intToBinary(divisor, sizeof(int) * 8);
    printf(" (%d)\n", divisor);

    printf("Quotient = ");
    intToBinary(quotient, sizeof(int) * 8);
    printf(" (%d)\n\n", quotient);

    // Perform division
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        quotient = quotient << 1; // Shift quotient to the left by 1 bit
        int shiftedDividend = dividend << 1; // Shift the dividend left by 1 bit

        printf("Iteration %d:\n", sizeof(int) * 8 - i);
        printf("    Shifted Dividend = ");
        intToBinary(shiftedDividend, sizeof(int) * 8);
        printf(" (%d)\n", shiftedDividend);

        if (shiftedDividend >= divisor) {
            dividend = shiftedDividend - divisor; // Subtract the divisor
            quotient = quotient | 1; // Set the least significant bit of quotient
            printf("    Difference = %d (Positive)\n", shiftedDividend - divisor);
            printf("    Updated Quotient = ");
            intToBinary(quotient, sizeof(int) * 8);
            printf(" (%d)\n\n", quotient);
        } else {
            dividend = shiftedDividend; // No subtraction, keep dividend unchanged
            printf("    Difference = %d (Negative)\n", shiftedDividend);
            printf("    No Change in Quotient = ");
            intToBinary(quotient, sizeof(int) * 8);
            printf(" (%d)\n\n", quotient);
        }
    }
}

// Main function
int main() {
    int dividend = 1;
    int divisor = 3;

    restoringDivision(dividend, divisor);

    return 0;
}
