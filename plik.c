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

    do {
        printf("Menu:\n");
        printf("1. Objetosc prostopadloscianu\n");
        printf("2. Objetosc walca\n");
        printf("0. Wyjscie\n");
        printf("Wybierz opcje (0-2): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Podaj dlugosc prostopadloscianu: ");
                scanf("%f", &length);
                printf("Podaj szerokosc prostopadloscianu: ");
                scanf("%f", &width);
                printf("Podaj wysokosc prostopadloscianu: ");
                scanf("%f", &height);
                printf("Objętosc prostopadloscianu wynosi: %.2f\n", calculate_volume_prism(length, width, height));
                break;

            case 2:
                printf("Podaj promień walca: ");
                scanf("%f", &radius);
                printf("Podaj wysokość walca: ");
                scanf("%f", &height);
                printf("Objętość walca wynosi: %.2f\n", calculate_volume_cylinder(radius, height));
                break;

            case 0:
                printf("Wyjście z programu.\n");
                break;

            default:
                printf("Niepoprawny wybór. Wybierz ponownie.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}
