#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int x1, x2, x3, y1, y2, y3;
	float AB, BC, AC,P,p;
	printf("Введите координаты 1 2 и 3 точек, сначала x* потом y*:\n");
	printf("А: ");
	scanf_s("%d,%d", &x1, &y1);
	printf("B: ");
	scanf_s("%d,%d", &x2, &y2);
	printf("C: ");
	scanf_s("%d,%d", &x3, &y3);
	AB = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
	printf("AB: %.4f\n", AB);
	BC = sqrt(pow(abs(x3 - x2), 2) + pow(abs(y3 - y2), 2));
	printf("BC: %.4f\n", BC);
	AC = sqrt(pow(abs(x3 - x1), 2) + pow(abs(y3 - y1), 2));
	printf("AC: %.4f\n", AC);
	P = AB + BC + AC;
	p = P/2;
	printf("Периметр: %.4f\n", P);
	printf("Площадь: %.4f\n", (sqrt(p*(p-AB)*(p-BC)*(p-AC))));
	return 0;
}