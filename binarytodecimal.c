//binary to decimal number:
#include<stdio.h>
#include<math.h>
int main(){
    int n, rem, dec = 0, i = 0;
    printf("Enter the binary number: ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10;
        dec = dec + rem * pow(2, i);
        n = n / 10;
        i++;
    }
    printf("The decimal number is: %d\n", dec);
    return 0;
}