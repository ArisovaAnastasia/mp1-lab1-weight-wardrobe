#include<stdio.h>
#include<math.h>
void main() {
	float  h, w, d, V1, V2, V3, V4, material_1 = 0, material_2 = 0, material_3 = 0, material_4 = 0, material_5 = 0, shelfs, massa;  // V1 ����� ������ ������  V2 ����� ������� ������  V3 ����� ������ V4 ����� �����  
	float  g1 = 0.005; // ������� ������ ������ (M)
	float g2 = 0.015; // ������� ������� (�)
	float g3 = 0.01; // ������� �����(�) 
	float r = 0.4; // ���������� ����� ������� ����� 0.4 �
	printf("������� h(1.8-2.2 �) , w (0.8 - 1.2 �), d( 0.5-0.9 �)");
	scanf_s("%f,%f,%f", &h, &w, &d);
	if (((1.8 < h && h < 2.2) && (0.8 < w && w < 1.2)) && (0.5 < d && d < 0.9))
	{
		V1 = h * w * g1;// � ������ ����������
		V2 = 2 * h * d * g2;// � ������ ����������
		V3 = 2 * w * d * g2;// � ������ ����������
		V4 = 2 * h * w * g3;// � ������ ����������
		material_1 = V1 * 820;
		material_2 = V2 * 550;
		material_3 = V3 * 550;
		material_4 = V4 * 600;
		shelfs = (static_cast<double>(h) / r + 0.015) * 550; // ���������� ����� 
		material_5 = shelfs * w * d * g2;
		massa = material_1 + material_2 + material_3 + material_4 + material_5;

		printf("%f", massa);
	}
	else
	{
		printf(" ������ �� ���������");
	}




}

