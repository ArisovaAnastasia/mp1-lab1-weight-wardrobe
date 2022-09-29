#include <stdio.h>

int main() {
    int height = 0, width = 0, depth = 0;

    while (!(180 <= height && height <= 220) || !(80 <= width && width <= 120) || !(50 <= depth && depth <= 90)) {
        printf("Enter the data: Height, Width, Depth\n");
        scanf("%i%i%i", &height, &width, &depth);
    }

    // Переводим сантиметры в миллиметры
    height *= 10;
    width *= 10;
    depth *= 10;

    // Находим объёмы
    int backMass = height * width * 5;
    int sideMass = height * depth * 15;
    int coverMass = depth * width * 15;
    int doorMass = height * width;
    int shelfMass = width * depth * (height/400);

    long double mass = (400/1e9) * backMass + (550/1e9) * (2 * sideMass + 2 * coverMass + shelfMass) + (690/1e9) * doorMass;
    printf("%.2Lf kg/m^3", mass);

    return 0;
}