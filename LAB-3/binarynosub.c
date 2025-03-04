#include <stdio.h>

int subtractBinary(int a, int b) {
    int result = 0, borrow = 0, place = 1;

    // Ensure a >= b
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    while (a > 0 || b > 0) {
        int bit1 = a % 10; // Last bit of a
        int bit2 = b % 10; // Last bit of b

        // Apply borrowing if necessary
        if (borrow) {
            if (bit1 == 1) {
                bit1 = 0;
                borrow = 0; // Borrow is canceled or not used
            } else {
                bit1 = 1; // Continue borrowing
                borrow = 1;
            }
        }

        // Subtract bits
        int subBit;
        if (bit1 >= bit2) {
            subBit = bit1 - bit2;
        } else {
            subBit = (bit1 + 2) - bit2;
            borrow = 1; // Set borrow flag
        }

        // Append result
        result = result + (subBit * place);
        place *= 10;

        // Remove last bit
        a /= 10;
        b /= 10;
    }

    return result;
}

// Main function should be outside subtractBinary()
int main() {
    int a, b;
    printf("Enter first binary number: ");
    scanf("%d", &a);
    printf("Enter binary number to be subtracted: ");
    scanf("%d", &b);

    int diff = subtractBinary(a, b);
    printf("Difference: %d\n", diff);

    return 0;
}
