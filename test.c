#include <stdio.h>

#define TASA_CAMBIO_DOLAR 0.1285 // Tasa de cambio de quetzales a dólares (1 quetzal = 0.1285 dólares)
#define TASA_CAMBIO_EURO 0.1072  // Tasa de cambio de quetzales a euros (1 quetzal = 0.1072 euros)

float quetzales_a_dolares(float cantidad) {
    return cantidad * TASA_CAMBIO_DOLAR;
}

float quetzales_a_euros(float cantidad) {
    return cantidad * TASA_CAMBIO_EURO;
}

float dolares_a_quetzales(float cantidad) {
    return cantidad / TASA_CAMBIO_DOLAR;
}

float euros_a_quetzales(float cantidad) {
    return cantidad / TASA_CAMBIO_EURO;
}

int main() {
    int opcion;
    float cantidad, resultado;

    printf("Selecciona la conversión que deseas realizar:\n");
    printf("1. Quetzales a dólares\n");
    printf("2. Quetzales a euros\n");
    printf("3. Dólares a quetzales\n");
    printf("4. Euros a quetzales\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingresa la cantidad en quetzales: ");
            scanf("%f", &cantidad);
            resultado = quetzales_a_dolares(cantidad);
            printf("%.2f quetzales son %.2f dólares.\n", cantidad, resultado);
            break;
        case 2:
            printf("Ingresa la cantidad en quetzales: ");
            scanf("%f", &cantidad);
            resultado = quetzales_a_euros(cantidad);
            printf("%.2f quetzales son %.2f euros.\n", cantidad, resultado);
            break;
        case 3:
            printf("Ingresa la cantidad en dólares: ");
            scanf("%f", &cantidad);
            resultado = dolares_a_quetzales(cantidad);
            printf("%.2f dólares son %.2f quetzales.\n", cantidad, resultado);
            break;
        case 4:
            printf("Ingresa la cantidad en euros: ");
            scanf("%f", &cantidad);
            resultado = euros_a_quetzales(cantidad);
            printf("%.2f euros son %.2f quetzales.\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
