#include <stdio.h>
#include <math.h>

#define PI 3.14159

float calculate_volume_prism(float length, float width, float height) {
    return length * width * height;
}

float calculate_volume_cylinder(float radius, float height) {
    return PI * pow(radius, 2) * height;
}

int main() {
    int choice;
    float length, width, height, radius;

    printf("Menu:\n");
    printf("1. Objêtosc prostopad³oscianu\n");
    printf("2. Objetosc walca\n");
    printf("Wybierz opcje (1-2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Podaj dlugosc prostopadloscianu: ");
            scanf("%f", &length);
            printf("Podaj szerokosc prostopad³oscianu: ");
            scanf("%f", &width);
            printf("Podaj wysokosc prostopadloscianu: ");
            scanf("%f", &height);
            printf("Objetosc prostopadloscianu wynosi: %.2f\n", calculate_volume_prism(length, width, height));
            break;

        case 2:
            printf("Podaj promien walca: ");
            scanf("%f", &radius);
            printf("Podaj wysokosc walca: ");
            scanf("%f", &height);
            printf("Objetoœæ walca wynosi: %.2f\n", calculate_volume_cylinder(radius, height));
            break;

        default:
            printf("Niepoprawny wybor. Wyjscie z programu.\n");
            return 1;
    }

    return 0;
}
