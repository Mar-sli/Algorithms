#include <iostream>
int wysz_bin(int* T, int n, int p);

using namespace std;

int main() 
{
	// wypisz komunikat
	cout << "Wyszkiwanie binarne. Podaj szukana liczbe: " << endl;
	//wczytaj dane
	int p;
	cin >> p;
	//zadeklaruj tablice
	int n = 10; // liczba elementów w tablicy
	int T[10] = { 1, 3, 5, 7, 10, 11, 20, 23, 35, 50 };
	//wywo³aj funkcjê szukaj¹c¹

	int wynik;
	wynik = wysz_bin(T, n, p); // jest to funkcja, ktora bedzie szukala nasza liczbe p

	// wyœwietl wynik
	if (wynik == -1)
{
		cout << "Liczby nie ma w tablicy" << endl;
}
	else
{
		cout << "Liczba jest w tablicy na pozycji: " << endl;
		cout << wynik+1 << endl;
		

}
	system("pause");
	return 0;	
}

int wysz_bin(int* T, int n, int p) 
{
	// wyk³ad 3 str 4
	int d = 0;
	int g = n - 1;
	int wynik;
	for (; ;) // petla nieskonczona
	{
	
			if (d > g)
		{
				wynik = -1;
				break;
		}
			int s = (d + g) / 2;

			if (T[s] < p)
			{
				d = s + 1;
			}
			else if (T[s]==p)
		{
				wynik = s;
				break;
		}
			else if (T[s] > p)
		{
				g = s - 1;
		}
			//wyskoczenie z pêtli
			
	}
	return wynik;
}
