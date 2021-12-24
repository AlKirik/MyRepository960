#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x1, x2, y1, y2, S;
	scanf_s("%d",&x1);
	scanf_s("%d", &x2);
	scanf_s("%d", &y1);
	scanf_s("%d", &y2);
	x1 = abs(x1 - x2);
	y1 = abs(y1 - y2);
	S = pow((pow(x1,2)+pow(y1,2)),0.5);
	printf("%d",S);
}