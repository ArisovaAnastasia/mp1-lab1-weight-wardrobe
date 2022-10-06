#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include<cmath>




int main()
{
	long double plot_DVP = 950 / (1e9), plot_DSP = 550 / (1e9),plot_Der= 540 / (1e9);
	int H, W, D;

	do
	{
		printf("H W D:");
		scanf_s("%d %d %d", &H, &W, &D);
	} while (!(1800 <= H && H <= 2200) || !(800 <= W && W <= 1200) || !(500 <= D && D <= 900));
	//All in mm
	H *= 10; W *= 10; D *= 10;

	
	


	int v_wall = H * W * 5;
	int v_bok = H * D * 15 * 2;
	int v_top = W * D * 15 * 2;
	int v_door = H * W * 10*2;
	int v_pol = (H / 415) * W * D * 15;

	long double mas = long double(plot_DVP * v_wall + plot_DSP * (v_bok + v_top + v_pol) + v_door*plot_Der);

	printf("Weigth:%lg kg", mas);


}
