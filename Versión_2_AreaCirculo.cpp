#include <stdio.h>
#include <math.h>

int main() {
    double radio, area;

    // Solicitar al usuario que ingrese el radio del c�rculo
    printf("Ingresa el radio del c�rculo: ");
    scanf("%lf", &radio);

    // Calcular el �rea del c�rculo
    area = M_PI * pow(radio, 2);

    // Mostrar el �rea del c�rculo
    printf("El �rea del c�rculo es: %lf\n", area);

    return 0;
}
