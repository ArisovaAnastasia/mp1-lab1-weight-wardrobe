#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int plotDSP, plotDVP, plotDerevo,colvopolok;
	float h, w, d, m1, m2, m3, m4, m5, mfinal;
	plotDSP = 750;
	plotDVP = 800;
	plotDerevo = 540;
	printf("Введите высоту шкафа в см");
	scanf_s("%f", &h);
	printf("Введите ширину шкафа в см");
	scanf_s("%f", &w);
	printf("Введите глубину шкафа в см");
	scanf_s("%f", &d);
	colvopolok = h / 40;
	if (h < 180 || h>220 || d < 50 || d>90 || w < 80 || w>120) {
		printf("Не верно введены данные");
	}
	else {
		m1 = 800 * (h / 100) * (w / 100) * 0.005;
		m2 = 2 * 750 * (h / 100) * (d / 100) * 0.015;
		m3 = 2 * 750 * (w / 100) * (d / 100) * 0.015;
		m4 = 2 * 540 * (h / 100) * (w / 100) * 0.001;
		m5 = colvopolok * 750 * 0.015 * (h / 100) * (w / 100) * (d / 100);
		mfinal = m1 + m2 + m3 + m4 + m5;
		printf("Масса шкафа в кг = %f\n", mfinal);

	}
	return 0;
}