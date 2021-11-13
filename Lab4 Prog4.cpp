#include <iostream>
using namespace std;
int a,b;
int main()
{
	setlocale(LC_CTYPE, "");
	cin >> a >> b;
	cout << "Сумма" << a + b<<"\n";
	cout << "Разность" << a - b << "\n";
	cout << "Произведение" << a * b << "\n";
	cout << "Частное квадратов" << pow(a,2)/pow(b,2) << "\n";
}