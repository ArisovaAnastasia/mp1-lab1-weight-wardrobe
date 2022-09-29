#include <stdio.h>

int main() {
    int height = 0, width = 0, depth = 0;
    int backThick = 5, sideThick = 15, coverThick = 15, doorThick = 1; // В миллиметрах
    long double tree = 690/1e9, dsp = 550/1e9, dvp = 400/1e9;

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
    int backMass = height * width * backThick;
    int sideMass = height * depth * sideThick;
    int coverMass = depth * width * coverThick;
    int doorMass = height * width * doorThick;
    int shelfMass = width * depth;
    int shelfNum = height / 400;

    long double mass = dvp * backMass + dsp * (2 * sideMass + 2 * coverMass + shelfNum * shelfMass) + tree * doorMass;
    printf("%.2Lf kg/m^3", mass);

    return 0;
}