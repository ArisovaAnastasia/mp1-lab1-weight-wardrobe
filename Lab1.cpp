#include <stdio.h>

int main() {
	int h, d, w;
	float dvp = 0.75, dsp = 0.65, wood = 0.5;
	printf("Input characteristics(h, d, w):");
	scanf_s("%i %i %i", &h, &d, &w);
	if (h < 180 || h > 220 || d < 50 || d > 90 || w < 80 || w > 120) {
		printf("Incorrect value");
	}
	else {
		int count_p = h / 41.5;
		float m;
		m = (((h * w * 0.5 * dvp) + ((2 * h * d * 1.5 + (count_p + 2) * w * d * 1.5) * dsp) + (h * w * wood)) / 1000);
		printf("Weight: %f kg", m);
	}
	return 0;
}