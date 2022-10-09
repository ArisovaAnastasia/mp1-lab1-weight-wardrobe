#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, x2, y1, y2;
    int figure;

    do {
        printf("Choose a figure:\n1:King 2:Queen 3:Bishop 4:Knight 5:Rook >>> "); //3:Slon 4:Kon 5:Ladya
        scanf("%d", &figure);
        printf("\nEnter initial coordinates (X1,Y1) : ");
        scanf("%d%d", &x1, &y1);
        printf("\nEnter desired coordinates (X1,Y1) : ");
        scanf("%d%d", &x2, &y2); printf("\n");
    } while (figure < 1 || figure > 5 || x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8);

    switch (figure) {
        case 1:
            if (abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1) printf("King can be moved\n");
            else {
                printf("King can't move this way\n");
                if (abs(x1 - x2) >= 1 && abs(y1 - y2) == abs(x1 - x2)) printf("Bishop can be moved\nQueen can be moved\n");
                if ((abs(x1 - x2) == 0 && abs(y1 - y2) >= 1) || (abs(x1 - x2) >= 1 && abs(y1 - y2) == 0)) printf("Rook can be moved\nQueen can be moved\n");
                if ((abs(x1 - x2) == 1 && abs(y1 - y2) == 2) || (abs(x1 - x2) == 2 && abs(y1 - y2) == 1)) printf("Knight can be moved\n");
            }
            break;
        case 2:
            if ((abs(x1 - x2) >= 1 && abs(y1 - y2) == abs(x1 - x2)) || (abs(x1 - x2) == 0 && abs(y1 - y2) >= 1) || (abs(x1 - x2) >= 1 && abs(y1 - y2) == 0)) printf("Queen can be moved\n");
            else {
                printf("Queen can't move this way\n");
                if (abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1) printf("King can be moved\n");
                if ((abs(x1 - x2) == 1 && abs(y1 - y2) == 2) || (abs(x1 - x2) == 2 && abs(y1 - y2) == 1)) printf("Knight can be moved\n");
            }
            break;
        case 3:
            if (abs(x1 - x2) >= 1 && abs(y1 - y2) == abs(x1 - x2)) printf("Bishop can be moved\n");
            else {
                printf("Bishop can't move this way\n");
                if (abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1) printf("King can be moved\n");
                if ((abs(x1 - x2) == 1 && abs(y1 - y2) == 2) || (abs(x1 - x2) == 2 && abs(y1 - y2) == 1)) printf("Knight can be moved\n");
                if ((abs(x1 - x2) == 0 && abs(y1 - y2) >= 1) || (abs(x1 - x2) >= 1 && abs(y1 - y2) == 0)) printf("Rook can be moved\nQueen can be moved\n");
            }
            break;
        case 4:
            if ((abs(x1 - x2) == 1 && abs(y1 - y2) == 2) || (abs(x1 - x2) == 2 && abs(y1 - y2) == 1)) printf("Knight can be moved\n");
            else {
                printf("Knight can't move this way\n");
                if (abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1) printf("King can be moved\n");
                if (abs(x1 - x2) >= 1 && abs(y1 - y2) == abs(x1 - x2)) printf("Bishop can be moved\nQueen can be moved\n");
                if ((abs(x1 - x2) == 0 && abs(y1 - y2) >= 1) || (abs(x1 - x2) >= 1 && abs(y1 - y2) == 0)) printf("Rook can be moved\nQueen can be moved\n");
            }
            break;
        case 5:
            if ((abs(x1 - x2) == 0 && abs(y1 - y2) >= 1) || (abs(x1 - x2) >= 1 && abs(y1 - y2) == 0)) printf("Rook can be moved\n");
            else {
                printf("Rook can't move this way\n");
                if (abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1) printf("King can be moved\n");
                if (abs(x1 - x2) >= 1 && abs(y1 - y2) == abs(x1 - x2)) printf("Bishop can be moved\nQueen can be moved\n");
                if ((abs(x1 - x2) == 1 && abs(y1 - y2) == 2) || (abs(x1 - x2) == 2 && abs(y1 - y2) == 1)) printf("Knight can be moved\n");
            }
            break;
    }

    return 0;
}