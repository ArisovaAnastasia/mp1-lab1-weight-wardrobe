#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Russian");
	int h, w, d;
	float p_DVP = 0.00085, p_DSP = 0.00065, p_DEREVO = 0.0015;
	float stenka, bokovina, krizka, dveri, polka, massa;
	printf("Высота от 180 до 220 см, ширина от 80 до 120 см, глубина от 50 до 90 см шкафа:");
	scanf_s("%i,%i,%i", &h, &w, &d);
	if (h >= 180 && h <= 220 && w >= 80 && w <= 120 && d >= 50 && d <= 90)
	{
		stenka = h * w * 0.5 * p_DVP;
		bokovina = 2 * h * d * 1.5 * p_DSP;
		krizka = 2 * w * d * 1.5 * p_DSP;
		dveri =  h * w * 1 * p_DEREVO;
		polka = (h / 40) * d * w * 1.5 * p_DSP;
		massa = stenka + bokovina + krizka + dveri + polka;
		printf("Найденная масса шкафа (кг):");
		printf("%.2f", massa);
	}
	else
	{
		printf("Неверные данные");
	}
}