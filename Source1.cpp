#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	setlocale(0, "");

	int p_dvp = 750, p_dsp = 685, p_d = 925; // p_dvp - ��������� ���, p_dsp - ��������� ���, p_d - ��������� ������, � ����������� �� ���� � ����

	int h, w, d; // h - ������, w - ������, d - �������, � ��
	printf("180 <= h <= 220, 80 <= w <= 120, 50 <= d <= 90\n");
	printf("������� ������, ������ � ������� �����: \n");

	do {
		scanf_s("%i %i %i", &h, &w, &d);
		if (!((180 <= h) && (h <= 220) && (80 <= w) && (w <= 120) && (50 <= d) && (d <= 90))) {
			printf("�������� �������� �� �������������� ���������� �����. ��������� �������.\n");
		}
	} while (!((180 <= h) && (h <= 220) && (80 <= w) && (w <= 120) && (50 <= d) && (d <= 90)));

	float A = p_dvp * (h / 100.0) * (w / 100.0) * 0.005; // ��������� ������ ������ �� ���
	float B = 2 * p_dsp * (h / 100.0) * (d / 100.0) * 0.015; // ��� �������� �� ���
	float C = 2 * p_dsp * (w / 100.0) * (d / 100.0) * 0.015; // ��������� ������� � ������ ������ �� ���
	float D = p_d * (h / 100.0) * (w / 100.0) * 0.01; // ��� ��������� ����� �� ������
	float E = p_dsp * (h / 40) * (d / 100.0) * (w / 100.0) * 0.015; // ����� �����

	float ans = A + B + C + D + E;

	printf("����� ����� (� �����������): %f", ans);

	return 0;
}