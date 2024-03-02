#include <stdio.h>

void binary(int integer);
void hexadecimal(int integer);

int main()
{
    int n;
    printf("Please enter a number between 0 and 255: ");
    scanf("%d", &n);
    while (n < 0 || n > 255)
    {
        printf("Out of range!! Please enter again: ");
        scanf("%d", &n);
    }
    binary(n);
    hexadecimal(n);
    return 0;
}

void binary(int integer)
{
    int x;
    int array[8] = {0};
    int count = 0;
    printf("Binary conversion: ");
    if (integer == 0)
    {
        printf("0");
    }
    while (integer > 0)
    {
        x = integer % 2;
        array[count] = x;
        integer /= 2;
        count++;
    }
    for (count--; count >= 0; count--)
    {
        printf("%d", array[count]);
    }
    printf("\n");
}

void hexadecimal(int integer)
{
    int y;
    char conversion_array[] = "0123456789ABCDEF";
    char hexadecimal_conversion[8] = {0};
    int count = 0;
    printf("Hexadecimal conversion: ");
    if (integer == 0)
    {
        printf("0");
    }
    while (integer > 0)
    {
        y = integer % 16;
        hexadecimal_conversion[count] = conversion_array[y];
        integer /= 16;
        count++;
    }
    for (count--; count >= 0; count--)
    {
        printf("%c", hexadecimal_conversion[count]);
    }
}