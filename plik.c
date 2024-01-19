#include <stdio.h>

float calculate_volume(float length, float width, float height) {
    return length * width * height;
}

int main() {
    float length, width, height;

    printf("Podaj dlugosc prostopadloscianu: ");
    scanf("%f", &length);

    printf("Podaj szerokosc prostopadloscianu: ");
    scanf("%f", &width);

    printf("Podaj wysokosc prostopadloscianu: ");
    scanf("%f", &height);

    float volume = calculate_volume(length, width, height);

    printf("Objetosc prostopadloscianu wynosi: %.2f\n", volume);

    return 0;
}
