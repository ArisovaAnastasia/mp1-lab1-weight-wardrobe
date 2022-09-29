#include <stdio.h>

int main() {
    int height, width, depth;

    printf("Enter the data: Height, Width, Depth\n");
    scanf("%i%i%i", &height, &width, &depth);

    if ((height < 180 || height > 220) && (width < 80 || width > 120) && (depth < 50 || depth > 90)) {
        printf("Incorrect Values");
        return 0;
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