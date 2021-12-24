#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int x1, x2, y1, y2;
	printf("Введите координаты сначала первой точки а потом второй точки, сначала x* потом y*: ");
	scanf_s("%d,%d,%d,%d", &x1, &y1, &x2, &y2);
	printf("Периметр: %d", (2 * (x2 - x1 + y2 - y1)));
	printf("\nПлощадь: %d", ((x2 - x1) * (y2 - y1)));
	return 0;
}