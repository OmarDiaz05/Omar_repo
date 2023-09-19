#include <stdio.h>

int main(void)
{
    float base;
    float altura;
    float area;

    printf ("Base: ");
    scanf_s("%f", &base);
    printf ("Altura: ");
    scanf_s("%f", &altura);
    
    area = (base*altura/2);
    printf("area: %.2f", area);
}

