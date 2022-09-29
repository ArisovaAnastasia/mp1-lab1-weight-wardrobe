#include <stdio.h>

int main() {
	int h, d, w, dvp, dsp;
	printf("Input characteristics(h, d, w):");
	scanf_s("%i %i %i", &h, &d, &w);
	if (h < 180 || h > 220 || d < 50 || d > 90 || w < 80 || w > 120) {
		printf("Incorrect value");
	}
	else {
		int count_p = h / 41.5;
		float m;
		m = (((h * w * 0.5 * 0.75) + ((2 * h * d * 1.5 + (count_p + 1) * w * d * 1.5) * 0.65) + (2 * h * w * 0.5)) / 1000);
		printf("%f", m);
	}
	return 0;
}