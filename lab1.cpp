#include <stdio.h>
#include <locale.h>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "RU");
	float M, DVPp, DSPp, Dp, n, Vbackwall, Vwall, Vupdown, Vdoors, Vshelves, h, w, d;
	DVPp = 820;
	DSPp = 750;
	Dp = 1540;

	printf("Введите в сантиметрах высоту (от 180 до 220), ширину (от 80 до 120) и глубину (от 50 до 90)\n");
	scanf_s("%f %f %f", &h, &w, &d);
	
	while ((h > 220) || (h < 180) || (w > 120) || (w < 80) || (d > 90.0) || (d < 50))
	{
		printf("Ошибка в значениях. Введите в сантиметрах высоту (от 180 до 220), ширину (от 80 до 120) и глубину (от 50 до 90)\n");
		scanf_s("%f %f %f", &h, &w, &d);
	}

	if (h < 200)
	{
		n = 4;
	}
	else
	{
		n = 5;
	}

	Vbackwall = (h * w * 0.5) / 1000000;
	Vwall = (2 * h * d * 1.5) / 1000000;
	Vupdown = (2 * w * d * 1.5) / 1000000;
	Vdoors = (2 * h * w * 1) / 1000000;
	Vshelves = (n * 1.5 * (w - 3) * d) / 1000000;

	M = DVPp * Vbackwall + DSPp * (Vwall + Vupdown + Vshelves) + Dp * Vdoors;
	printf("Масса шкафа составляет %f кг", M);
	return 0;
}