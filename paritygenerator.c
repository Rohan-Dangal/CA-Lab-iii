#include<stdio.h>
#include<string.h>
int countOnes(char*binary){
    int count = 0;
    for (int i = 0; i < strlen(binary); i++)
    {
        if (binary[i]=='1')
        {
            count++;
        }
        
    }
    return count;
    
}
void getParity(int count){
    if(count % 2 ==0){
        printf("even parity\t:0\n");
        printf("odd parity\t:1\n");
    }
    else
    printf("even parity\t:1\n");
    printf("odd parity \t:0\n");
}
int main()
{
    char binary[100];
    printf("enter the binary number:");
    scanf("%s",binary);
    int onescount = countOnes(binary);
    printf("number of ones:%d\n",onescount);
    getParity(onescount);
    return 0;
}