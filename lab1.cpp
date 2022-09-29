#include <stdio.h>
int main()
{
	float M, DVPp, DSPp, Dp, n, h, w, d, V1, V2, V3, V4, V5;
	DVPp = 600;
	DSPp = 450;
	Dp = 750;
	
	printf("input heigh (180 < h < 220), weigh (от 80 до 120 см) and deep (от 50 до 90 см) \n");
	scanf_s("%f %f %f", &h, &w, &d);

		if (h > 200)
		{
			n = 4;
		}
		else
		{
			n = 5;
		}

		if (h < 180 or h > 220 or w < 80 or w > 120 or d < 50 or d > 90)
		{
			printf("Данные не верны");
		}
		else
		{
			V1 = (h * w * 0,5) / 1000000;
			V2 = ((h * d * 1, 5) * 2) / 1000000;
			V3 = ((w * d * 1,5) * 2) / 1000000;
			V4 = (h * w * 1) / 1000000;
			V5 = (n *d * 1,5 * (w - 30)) / 1000000;
			M = (V1 * DVPp) + ((V2 + V3 + V5) * DSPp) + (Dp * V4);
			
			printf("Mass = %f kg", M);
		}

	
	
}