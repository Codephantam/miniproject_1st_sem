#include<stdio.h>

int main ()
{
    int length, width, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // formula 
    area = length * width;
    perimeter = 2 * (length + width);

    printf(" the value of  area is %d\n", area);
    printf(" the value of peremeter is %d\n", perimeter);



return 0;
}