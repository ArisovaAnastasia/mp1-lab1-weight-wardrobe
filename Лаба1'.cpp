#include <stdio.h>;
#include<math.h>;

void main()
{
	int num1, num2, let1, let2, dif_column, dif_line, fig, options = 1;
	do
	{
		printf_s("Choose you figure: 1 - rook, 2 - bishop, 3 - knight, 4 - queen, 5 - king: ");
		scanf_s("%i", &fig);
		printf_s("Wright starting square and ending square in numbers through spaces: ");
		scanf_s("%i %i %i %i", &let1, &num1, &let2, &num2);
	}while (fig < 1 && fig > 5 && let1 < 1 && let1 > 8 && let2 < 1 && let2 > 8 && num1 < 1 && num1 > 8 && num2 < 1 && num2 > 8);
	dif_column = abs(let1 - let2);
	dif_line = abs(num1 - num2);
	switch (fig)
	{
	case 1:
		if (dif_column == 0 || dif_line == 0)
		{
			printf("Yes, it can");
			options = 0;
		}
		break;
	case 2:
		if (dif_column == dif_line)
		{
			printf("Yes, It can");
			options = 0;
		}
		break;
	case 3:
		if ((dif_column == 2 && dif_line == 1) || (dif_column == 1 && dif_line == 2))
		{
			printf("Yes, It can");
			options = 0;
		}
		break;
	case 4:
		if (dif_column == 0 || dif_line == 0 || dif_column == dif_line)
		{
			printf("Yes, It can");
			options = 0;
		}
		break;
	case 5:
		if (dif_line <= 1 && dif_column <= 1)
		{
			printf("Yes, It can");
			options = 0;
		}
		break;
	}
	if (options == 1)
	{
		printf("No, can't\n");
		if (dif_column == 0 || dif_line == 0)
			printf("rook can\n");
		if (dif_column == dif_line)
			printf("bishop can\n");
		if ((dif_column == 2 && dif_line == 1) || (dif_column == 1 && dif_line == 2))
			printf("knight can\n");
		if (dif_column == 0 || dif_line == 0 || dif_column == dif_line)
			printf("queen can\n");
		if (dif_column <= 1 && dif_line <= 1)
			printf("king can\n");
	}
}