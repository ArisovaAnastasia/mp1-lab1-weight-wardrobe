#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	float dvp, dsp, wood;
	dvp = 0.5;//� ������� �� c�3 
	dsp = 1; 
	wood = 1.5;
	float h, w, d;
	printf("������� ������,�������,������\n");
	scanf_s("%f %f %f", &h, &d, &w);
	if ((h > 220) || (h < 180))
	{
		printf("������ ������� �������");
		return 0;
	}
	if ((d > 90) || (d < 50))
	{
		printf("������� ������� �������");
		return 0;
	}
	if ((w > 120) || (w < 80))
	{
		printf("������ ������� �������");
		return 0;
	}
	float backwall, sidewalls, caps, doors,shelfs;
	backwall = dvp * (h * w * 0.5);
	sidewalls = dsp * (h * d * 1.5)*2;
	caps = dsp * (w * d * 1.5) * 2;
	doors = wood * (h * w * 1);
	int numberofshelfs;
	if (h<200)
	{
		numberofshelfs = 4;
	}
	else {
		numberofshelfs = 5;
	}
	shelfs = numberofshelfs * (w * d * 1.5) * dsp;
	float total;
	total = backwall + sidewalls + caps + doors + shelfs;
	printf("����� ����� � �������\n");
	printf("%f", total);
}