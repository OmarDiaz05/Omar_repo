#include <stdio.h>

int main() {
    double lado, area;

    // Solicitar al usuario que ingrese el lado del cuadrado
    printf("Ingresa el lado del cuadrado: ");
    scanf_s("%lf", &lado);

    // Calcular el área del cuadrado
    area = lado * lado;

    // Mostrar el área del cuadrado
    printf("El area del cuadrado es: %.2lf\n", area);

    return 0;
}



