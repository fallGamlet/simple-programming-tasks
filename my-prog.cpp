#include <stdio.h>

int main(void) {
    int intNumber = 111111111111111111;
    long longNumber = 111111111111111111;
    float floatNumber = 1000.12345678901234567890f; 
    double doubleNumber = 1000.12345678901234567890; 

    printf("\nHello Wordl!!\n");
    printf("\nintNumber: %i", intNumber);
    printf("\nlongNumber: %li", longNumber);
    printf("\nfloatNumber: %f", floatNumber);
    printf("\ndoubleNumber: %e", doubleNumber);
    printf("\ndoubleNumber as int: %d", int(doubleNumber));
    printf("\n");
    
    int num5 = 5;
    int num2 = 2;
    int int5on2 = num5 / num2;
    printf("\n 5 / 2 = %d", int5on2);
    double doubleDiv5on2 = double(num5) / num2;
    printf("\n 5 / 2 = %f", doubleDiv5on2);
    int mod5on2 = num5 % num2;
    printf("\n 5 % 2 = %d", mod5on2);

    int inputIntVal = 0;
    printf("\nBefore input. inputIntVal is %i", inputIntVal);
    printf("\nBefore input. RAM index of inputIntVal: %li", &inputIntVal);
    printf("\nEnter int number: ");
    scanf("%i", &inputIntVal);
    printf("\nAfter input. inputIntVal is %i", inputIntVal);
    printf("\nAfter input. RAM index of inputIntVal: %li", &inputIntVal);

    if (inputIntVal > 10) {
        printf("\n inputIntVal > 10");
    } else if (inputIntVal == 10) {
        printf("\n inputIntVal == 10");
    } else {
        printf("\n inputIntVal < 10");
    }

    int count = 0;
    printf("\n===== Block WHILE loop =====");
    printf("while loop start");
    while (count < 10)
    {
        printf("\n==> count is %i", count);
        printf("\n==> increment count");
        count++;
    }
    printf("while loop finish");
    printf("\nafter while count is %i", count);
    
    printf("\n===== Block DO WHILE loop =====");
    int inputForWhile = 0;
    do {
        printf("\nEnter a number zero for exit or other for continue: ");
        scanf("%i", &inputForWhile);
        printf("\n inputForWhile is %i", inputForWhile);
    } while(inputForWhile != 0);

    printf("\n===== Block FOR loop =====");
    int i;
    for (i=10; i > 0; i--)
    {
        printf("\ni = %i", i);
        if (i < 3) {
            printf("\nNeed bread for loop");
            break;
        }
    }
    printf("\nfor loop finish");
    printf("\n    i = %i", i);
    

    printf("\n===== Block ARRAY =====");
    int intArray[10];
    int intSize = sizeof(int);
    int intArraySize = sizeof(intArray);
    int intArrayCount = intArraySize / intSize;
    printf("\nSize of int is %d", intSize);
    printf("\nSize of int array[10] is %d", intArraySize);

    for (int i = 0; i < intArrayCount; i++)
    {
        intArray[i] = i*i;
    }

    for (int i = 0; i < intArrayCount; i++)
    {
        int value = intArray[i];
        printf("\nintArray[%i] = %i", i, value);
    }

    printf("\n\n");
}