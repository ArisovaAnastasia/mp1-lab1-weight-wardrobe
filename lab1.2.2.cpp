#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");
	int h, w, d;
	float pl_wood = 0.0015, pl_DVP = 0.00085, pl_DSP = 0.00065;//кг на см в кубе
	float mass, m_doors, m_bnvk, m_wall, m_shelves;


	printf("Введите высоту,ширину и толщину в сантиметрах:");
	scanf_s("%i %i %i", &h, &d, &w);

	if ((h >= 180) && (h <= 220) && (d >= 50) && (d <= 90) && (w >= 80) && (w <= 120)) {
		m_doors = h * w * 1 * pl_wood;// две накладные двери
		m_bnvk = (2 * pl_DSP * w * d * 1.5) + (2 * pl_DSP * h * d * 1.5);//масса накладной верхней,нижней крышки и двух боковин
		m_wall = h * w * 0, 5 * pl_DVP;//масса задней стенки
		m_shelves = d * w * (h / 40) * 1.5 * pl_DSP; // масса полок
		mass = m_doors + m_bnvk + m_wall + m_shelves;//масса шкафа
		printf("масса шкафа: %.1f килограммов", mass);
	}
	else
		printf("Введены некорректные данные");
}