#include <stdio.h>
#include <limits.h>  // For INT_MAX and INT_MIN
int detectOverflow(int a, int b) {
    if (a > 0 && b > 0 && a > INT_MAX - b) {
        // 2 tai number positive cha ra a ko value INT_MAX bata badi cha bhane overflow hunecha
        return 1;  // Overflow detected
    }
    // Negative number ko case ko lagi
    if (a < 0 && b < 0 && a < INT_MIN - b) {
        // number negative cha ra a ko value INT_MIN bata kam cha bhane underflow hunecha
        return -1;  // Underflow detected
    }
    
    return 0;  // No overflow or underflow
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = detectOverflow(num1, num2);//function call

    if (result == 1) {
        printf("Overflow detected! The sum is too large.\n");
    } else if (result == -1) {
        
        printf("Underflow detected! The sum is too small.\n");
    } else {
        
        printf("Sum: %d\n", num1 + num2);
    }

    return 0;
}
