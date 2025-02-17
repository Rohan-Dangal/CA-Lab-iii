#include <stdio.h>

void decimalToBinary(int n) {
    // Binary ko lagi array banaune, jasma bit haru rakhne cha (uloto garera)
    int binary[32];  
    int i = 0;
    
    // Yadi number 0 cha bhane,  0 print garne ani return garne
    if (n == 0) {
        printf("0");
        return;
    }
    
    // 2 bata divide garepachi, baaki ko value save garera array ma rakhne
    while (n > 0) {
        binary[i] = n % 2;  // Baaki ko value (0 ya 1) rakhne
        n = n / 2;           // Number lai 2 le divide garne
        i++;                 
    }

    // Array ma rakheko binary ko value, ulto kramma print garne (highest bit dekhi lowest bit samma)
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int number;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    //  function call
    printf("Binary equivalent: ");
    decimalToBinary(number);
    
    return 0;
}
