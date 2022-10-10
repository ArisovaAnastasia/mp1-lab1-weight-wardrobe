#include <stdio.h>
#include <iostream>
using namespace std;
int main() {

	setlocale(0, "");
	float plotDVP = 0.0008;
	float plotDSP = 0.0006;
	float plotWOOD = 0.0015;
	int h = 0, w = 0, d = 0;
	float mfinal = 0, m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0;

	do {
		printf("Введите высоту в см(от 180 до 220): ");
		scanf_s("%d", &h);
	} while (h < 180 || h > 220);

	do {
		printf("Введите ширину в см(от 80 до 120): ");
		scanf_s("%d", &w);
	} while (w < 80 || w > 120);

	do {
		printf("Введите глубину в см(от 50 до 90): ");
		scanf_s("%d", &d);
	} while (d < 50 || d > 90);

	m1 = plotDVP * h * w * 0.5; // масса задней стенки из ДВП
	m2 = 2 * plotDSP * h * d * 1.5; // масса двух боковых из ДСП
	m3 = 2 * plotDSP * w * d * 1.5; // масса верхней и нижней крышек из ДСП
	m4 = plotWOOD * h * w; // масса двух дверей из дерева
	m5 = plotDSP * w * d * 1.5; // масса внутреней полки в шкафу толщиной 1.5см
	mfinal = m1 + m2 + m3 + m4 + m5*int(h / 41.5);
	printf("Масса шкафа = %.2f кг\n", mfinal);
	return 0;
}