#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1 = 5, x2 = 2, y1 = 7, y2 = 3;
    int figure;

    do {
        printf("Choose a figure:\n\n1 - King; 2- Queen; 3 - Slon; 4 - Kon; 5 - Ladya\n"); // Названия Фигур напрямую не переводятся
        scanf("%d",&figure);
    } while (figure < 1 || figure > 5);

    switch(figure) {
        case 1:
            if (abs(x1 - x2) == 1 || abs(y1 - y2) == 1) printf("King can be moved\n");
            else printf("King can't move this way\n");
        case 2:
            if ((abs(x1 - x2) >= 1 && abs(y1 - y2) >= 1)||(abs(x1 - x2) == 0 && abs(y1 - y2) >= 1)||(abs(x1 - x2) >= 1 && abs(y1 - y2) == 0)) printf("Queen can be moved\n");
            else printf("Queen can't move this way\n");
        case 3:
            if (abs(x1 - x2) >= 1 && abs(y1 - y2) >= 1) printf("Slon can be moved\n");
            else printf("Slon can't move this way\n");
        case 4:
            if ((abs(x1 - x2) == 1 && abs(y1 - y2) == 3)||(abs(x1 - x2) == 3 && abs(y1 - y2) == 1)) printf("Kon can be moved\n");
            else printf("Kon can't move this way\n");
        case 5:
            if ((abs(x1 - x2) == 0 && abs(y1 - y2) >= 1)||(abs(x1 - x2) >= 1 && abs(y1 - y2) == 0)) printf("Ladya can be moved\n");
            else printf("Ladya can't move this way\n");
    }

    return 0;
}