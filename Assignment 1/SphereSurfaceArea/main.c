#include <stdio.h>
#include <string.h>
int main()
{
    const float pi = 3.14159;
    int radius;
    printf("enter radius:\n");
    scanf("%d", &radius);
    
   float surface_area = 4 * pi * radius * radius;
    printf("sphere surface area: %f\n", surface_area);
    return 0;

}