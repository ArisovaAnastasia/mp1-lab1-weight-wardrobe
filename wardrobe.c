#include <stdio.h>

int main() {
    int height, width, depth;

    do {
        printf("Enter the data: Height, Width, Depth\n");
        scanf("%i%i%i", &height, &width, &depth);
    }
    while (!(180 <= height && height <= 220) || !(80 <= width && width <= 120) || !(50 <= depth && depth <= 90));

    // Переводим сантиметры в миллиметры
    height *= 10;
    width *= 10;
    depth *= 10;

    // Находим объёмы
    int backVolume = height * width * 5;
    int sideVolume = height * depth * 15;
    int coverVolume = depth * width * 15;
    int doorVolume = height * width * 10;
    int shelfVolume = width * depth * 15 * (height/400);

    long double mass = (400/1e9) * backVolume + (550/1e9) * (2 * sideVolume + 2 * coverVolume + shelfVolume) + (690/1e9) * doorVolume;
    printf("%.2Lf kg/m^3", mass);

    return 0;
}