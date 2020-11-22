#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct integer
{
    int number = 0;
    int check = 0;
}pointinteger;

struct binary
{
    int bina[100];
    int iBinary = 0;
}pointbinary;

struct Octal
{
    int octal[100];
    int iOctal = 0;
}pointOctal;

struct Hexadecimal
{
    int hex[100];
    int iHex = 0;
}pointHexadecimal;

void calculat(void);

int main()
{


    printf(" Input Integer value : ");

    if (scanf_s("%d", &pointinteger.number))
    {
        if (0 < pointinteger.number && pointinteger.number <= 5000000)
        {
            calculat();
        }
        else
        {
            printf(" \n ");
            printf_s(" : : : Please enter an integer number greater than 0 : : : ");
        }
    }
    else
    {
        printf(" \n ");
        printf_s(" : : : Please enter an integer number : : : ");
    }
    return 0;
}
void calculat()
{
    // Integer to Binary
    pointinteger.check = pointinteger.number;
    do {
        pointbinary.bina[pointbinary.iBinary] = pointinteger.check % 2;
        pointinteger.check /= 2;
        pointbinary.iBinary++;
    } while (pointinteger.check > 0);

    // Integer to Octal
    pointinteger.check = pointinteger.number;
    do {
        pointOctal.octal[pointOctal.iOctal] = pointinteger.check % 8;
        pointinteger.check /= 8;
        pointOctal.iOctal++;
    } while (pointinteger.check > 0);

    // Integer to Hexadecimal
    pointinteger.check = pointinteger.number;
    do {
        pointHexadecimal.hex[pointHexadecimal.iHex] = pointinteger.check % 16;
        pointinteger.check /= 16;
        pointHexadecimal.iHex++;
    } while (pointinteger.check > 0);
    // Display for Hexadecimal
    printf("\n Hexadecimal value is ");
    for (int ab = pointHexadecimal.iHex - 1; ab >= 0; ab--)
    {
        switch (pointHexadecimal.hex[ab])
        {
        case 10: printf("A"); break;
        case 11: printf("B"); break;
        case 12: printf("C"); break;
        case 13: printf("D"); break;
        case 14: printf("E"); break;
        case 15: printf("F"); break;
        default: printf("%d", pointHexadecimal.hex[ab]);
        }
    }
    // Display for Octal
    printf("\n Octal value is ");
    for (int ab = pointOctal.iOctal - 1; ab >= 0; ab--)
    {
        printf("%d", pointOctal.octal[ab]);
    }

    // Display for Binary
    printf("\n Binary value is ");
    for (int ab = pointbinary.iBinary - 1; ab >= 0; ab--)
    {
        printf("%d", pointbinary.bina[ab]);
    }




}