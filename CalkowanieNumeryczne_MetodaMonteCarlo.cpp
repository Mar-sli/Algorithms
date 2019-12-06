#include <iostream>
#include <time.h>
double calka(double a, double b, int n);
double f(double x); // DEKLARACJA,¯E TAKA FUNKCJA JEST NI¯EJ NI¯ MAIN
using namespace std;

int main()
{
	cout << "Calkowanie numeryczne" << endl;
	cout << "Podaj lewy kraniec przedzialu a: " << endl;
	double a;
	cin >> a;
	cout << "Podaj prawy kraniec przedzialu b: " << endl;
	double b;
	cin >> b;
	cout << "Podaj liczbe losowan: " << endl;
	int n;
	cin >> n;
	double wynik = calka(a, b, n);
	cout << "Calka wynosi: " << endl;
	cout << wynik << endl;

	system("pause");
	return 0;
}
double calka(double a, double b, int n)
{
	srand(time(NULL)); // inicjalizacja generatora liczb losowych
	//liczymy sumê
	double suma = 0;

	for (int i = 1; i <= n; i++) // pêtla, która wykona siê n razy
	{
		double xlos = ((double)rand() / (double)RAND_MAX)*(b - a) + a;
		suma = suma + f(xlos);
		cout << xlos << endl;

	}
	return (b-a) / n * suma;
}

double f(double x)
{
	return x*x;
}