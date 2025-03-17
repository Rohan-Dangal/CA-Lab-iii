#include <stdio.h>

int main()
{
    int num[4];
    int shiftleft[4];

    printf("Enter the 4-bit binary number (one bit at a time):\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &num[i]);
    }

    // Perform circular shift left
    for (int i = 0; i < 3; i++)
    {
        shiftleft[i] = num[i + 1];
    }
    shiftleft[3] = num[0]; // Leftmost bit moves to the rightmost position

    printf("Result after circular shift left:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d", shiftleft[i]);
    }
    printf("\n");

    return 0;
}
