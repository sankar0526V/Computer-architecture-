#include <stdio.h>

int main() {
    int m = 8;
    int ac, q; 
	long long int result = 0;
    int q0 = 0;

    printf("Enter the multiplicand: ");
    scanf("%d", &ac);

    printf("Enter the multiplier: ");
    scanf("%d", &q);

    for (int i = 0; i < m; i++) {
        int qLowBits = q & 0b11;
        if (qLowBits == 0b01) {
            result += ac;
        } else if (qLowBits == 0b10) {
            result -= ac;
        }
        q0 = q & 1;
        q >>= 1;
        q |= (ac & 1) << (m - 1);
        ac = (ac >> 1) | (q0 << (m - 1));
    }

    printf("Result of multiplication: %lld\n", result);
}
