#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include<iostream>
#include<cmath>




int main()
{
	long double plot_DVP=950/(1e9), plot_DSP=550/(1e9);
	int H, W, D;

	printf("H W D:");
	scanf_s("%d %d %d", &H, &W, &D);
	//All in mm
	H *= 10; W *= 10; D *= 10;

	if (!(1800 <= H && H <= 2200) || !(800 <= W && W <= 1200) || !(500 <= D && D <= 900))
	{
		printf("Incorrect Data");
	}


	int v_wall = H * W * 5;
	int v_bok = H * D * 15 * 2;
	int v_top = W * D * 15 * 2;
	int v_door = H * W * 10;
	int v_pol = (H / 950) * W * D * 15;

	long double mas = long double(plot_DVP * v_wall + plot_DSP * (v_bok + v_top + v_door + v_pol));

	printf("Weigth:%lg", mas);


}


