#include <stdio.h>
#include <math.h>

int main() {
    double radio, area;

    // Solicitar al usuario que ingrese el radio del círculo
    printf("Ingresa el radio del círculo: ");
    scanf("%lf", &radio);

    // Calcular el área del círculo
    area = M_PI * pow(radio, 2);

    // Mostrar el área del círculo
    printf("El área del círculo es: %lf\n", area);

    return 0;
}
