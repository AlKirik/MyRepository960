#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c, ac, bc, sum;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (c > b || c < a) { printf("Точка С не находится между точками А и В, условие не выполнено\n"); }
	else {
		;
		ac = abs(c - a);
		bc = abs(b - c);
		sum = ac * bc;
		printf("AC = %d\nBC = %d\nПроизведение длин отрезков = %d\n", ac, bc, sum);
	}
	return 0;
}