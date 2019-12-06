#include <iostream>
#include<math.h>

using namespace std;

double f(double x);
double fp(double x, double h);
double fpp(double x, double h);

int main()
{
	double x, h;
	cout << "Podaj x: " << endl;
	cin >> x;
	cout << "----------------------------" << endl;
	cout << "Podaj h:" << endl;
	cin >> h;
	cout << endl;
	cout << "Oto Twoje wyniki: " << endl;
	cout << "f(x)="<<f(x) << " " <<"fp(x,h)="<< fp(x, h) << " " <<"fpp(x,h)= "<< fpp(x, h) << endl;


	system("pause");
	return 0;
}

double f(double x)
{
	//return x*x + 5 * x + 3;
	return sin(x)*cos(x) / (x*x - 6 * pow(x, 5));
}

double fp(double x, double h)
{
	return (f(x + h) - f(x - h)) / (2 * h);
}

double fpp(double x, double h)
{
	return (f(x + h) + f(x - h) - 2 * f(x)) / (h*h);
}