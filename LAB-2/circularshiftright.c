#include <stdio.h>

int main()
{
    int num[4];
    int shiftright[4];

    printf("Enter the 4-bit binary number (one bit at a time):\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &num[i]);
    }

    // Perform circular shift right
    for (int i = 3; i > 0; i--)
    {
        shiftright[i] = num[i - 1];
    }
    shiftright[0] = num[3]; // Rightmost bit moves to the leftmost position

    printf("Result after circular shift right:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d", shiftright[i]);
    }
    printf("\n");

    return 0;
}
