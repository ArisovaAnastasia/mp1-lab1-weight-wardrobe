#include <stdio.h>
#include <math.h>
int main()
{
	float  h, w, t, d, cl, mzs, mb, mk, md, mp, M;
	do {
		printf("enter the height, width and depth in kilograms");
		scanf_s("%f %f %f", &h, &w, &d);
	} while (h < 180 || h>220 || w < 80 || w > 120 || d < 50 || d>90);
	// density dsp 820 kg/m3, density dvp 950 kg/m3
	mzs = (h * w * 0.5) * 0.00095;
	mb = ((h * d * 1.5) * 0.00082)*2;
	mk = ((w * d * 1.5) * 0.00082)*2;
	md = (h * w * 1) * 0.00054;
	cl = h / 41.5;
	mp = ((w * d * 1.5) * 0.00082) * cl;
	M = mzs + mb + mk + md + mp;
	printf("%f", M);
	printf("kg cabinet weight");
}