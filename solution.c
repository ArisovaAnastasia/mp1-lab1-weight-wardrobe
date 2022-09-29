#include <stdio.h>

int main() {
    float height = 0, width = 0, depth = 0;
    float backThick = 0.005, sideThick = 0.015, coverThick = 0.015, doorThick = 0.01; // В метрах

    while ((height < 180 || height > 220) && (width < 80 || width > 120) && (depth < 50 || depth > 90)) {
        printf("Enter the data: Height, Width, Depth\n");
        scanf("%f%f%f", &height, &width, &depth);
    }

    int shelfNum = height / 40;
    // Переводим сантиметры в метры
    height /= 100;
    width /= 100;
    depth /= 100;

    float backMass = 400 * height * width * backThick;
    float sideMass = 550 * height * depth * sideThick;
    float coverMass = 550 * depth * width * coverThick;
    float doorMass = 690 * height * width * doorThick;
    float shelfMass = 550 * width * depth;

    printf("%f\n%f\n%f\n%i\n",height,width,depth,shelfNum); // Debug Moment

    float mass = (backMass + 2 * sideMass + 2 * coverMass + doorMass + shelfNum * shelfMass);
    printf("%.2f kg/m^3", mass);

    return 0;
}