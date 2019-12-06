#include <iostream>

using namespace std;
double f(double x);
double bisekcja(double a, double b, double eps);

int main()
{
	cout << "Bisekcja. Podaj lewy kraniec przedzialu - a: " << endl;
	double a;
	cin >> a;
	
	cout << "Podaj pracy kraniec przedzialu - b: " << endl;
	double b;
	cin >> b;
	
	cout << "Podaj dokladnosc eps = " << endl;
	double eps;
	cin >> eps;

	if (f(a)*f(b) > 0)
	{
		cout << "Brak miejsc zerowych" << endl;
	}
	else 
	{
		double wynik;

		wynik = bisekcja(a, b, eps);
		cout << "Znalezione miejsce zerowe dla x = \n" << wynik << endl;
	}

	system("pause");
	return 0;
}
double bisekcja(double a, double b, double eps)
{
	//wyk³ad 3 str 3
	//pêtla dopóki przedzia³ jest wiêkszy od epislona
	double s;
	while (b - a > eps) {
		s = (a + b) / 2;
		if (f(s) == 0)
		{
			//wynik = s;
			break;
		}           
		if (f(a)*f(s) < 0)
		{
			b = s;
			//wynik = s;
		}
		else {
			a = s;
			//wynik = s;
		}

	}
	return s;
}

double f(double x)
{
	return x-10; // wartoœæ funkcji

}