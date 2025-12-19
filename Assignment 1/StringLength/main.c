#include <stdio.h>
#include <string.h>
int main()
{
    
    char* str;
    printf("enter string:\n");
    scanf("%s", str);
    
    printf("string is: %s\n", str);
    printf("string len: %d\n", strlen(str));
    return 0;

}