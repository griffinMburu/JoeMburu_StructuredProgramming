#include <stdio.h>

void swapNumbers(int* num1, int* num2)
{

    int numOld1 = *num1;
    int numOld2 = *num2;
    *num2 = numOld1;
    *num1 = numOld2;
}

void incrementByValue(int num1)
{
    num1 += 10;
}

void incrementByReference(int* num1)
{
    *num1 += 10;
}

int main(void)
{
    //Display address of a variable
    int num = 10;
    int* ptr = &num;

    printf("value stored in pointer: %d\n", *ptr);
    printf("Address of num value %p\n", ptr);


    //access variable value using pointer
    int count = 10;
    int* pCount;
    pCount = &count;

    *pCount = 20;
    printf("count: %d pCount: %d\n\n", count, *pCount);


    //add two numbers using pointers
    int num1, num2;
    int*  ptr1;
    int* ptr2;
    num1 = 10;
    num2 = 20;

    ptr1 = &num1;
    ptr2 = &num2;

    int addResult = *ptr1 + *ptr2;
    printf("Addition result: %d\n\n", addResult);


    //swap two numbers using pointers
    int a, b;
    a = 10;
    b = 11;

    int *aPtr = &a;
    int *bPtr = &b;

    printf("old values before swapping: num1: %d, num2: %d\n", *aPtr, *bPtr);
    swapNumbers(aPtr, bPtr);
    printf("new values after swapping: num1: %d, num2: %d\n\n", *aPtr, *bPtr);


    //Pass by value and pass by reference
    int value = 40;
    incrementByValue(value);
    printf("increment by value result: %d\n", value);

    incrementByReference(&value);
    printf("increment by reference result: %d\n", value);


    return 0;
}