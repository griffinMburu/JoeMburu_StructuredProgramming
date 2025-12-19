//
// Created by duthu on 11/15/25.
//
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if(argc <=1){
      printf("please specify an operation: add, subtract, multiply, divide or modulus\n");
      return 2;
      }
    char *operation = argv[1];
    int num1, num2, result;
    printf("enter first number:\n");
    scanf("%d", &num1);
    printf("first number: %d\n", num1);

    printf("enter second number:\n");
    scanf("%d", &num2);
    printf("second number: %d\n", num2);

   
    if(strcmp(operation, "add") == 0){
      
      result = num1 + num2;
    } else if(strcmp(operation, "subtract") == 0){
      result = num1 - num2;
    } else if(strcmp(operation, "multiply") == 0){
      result = num1 * num2;
    } else if(strcmp(operation, "divide") == 0){
      if(num2 != 0){
        result = num1 / num2;
      } else {
        printf("cannot divide by 0!\n");
        return 2;
      }
    } else if(strcmp(operation, "modulus") == 0){
      if(num2 != 0){
        result = num1 % num2;
      } else {
        printf("cannot divide by 0!\n");
        return 2;
      }
    }
    else {
      printf("operations supported: add, subtract, multiply, divide\n");
      return 2;
    }
    

    printf("result: %d\n", result);
    return 0;

}