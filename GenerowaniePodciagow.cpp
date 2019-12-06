#include <iostream>
#include<time.h>

using namespace std;

void podciag(double m, double n);

int main()			//Generowanie podci¹gów - wybieranie pseudolosowych liczb z okreœlonego przedzia³u
{
	double m, n;
	cout << "Ilu elementow szukasz: " << endl;
	cin >> m;
	cout << "W przedziale do elementow: " << endl;
	cin >> n;

	//wywo³aj podci¹g (m,n)
	//zrób funkcjê void podciag(int m, int n), która wszystko policzy
	podciag(m, n);

	system("pause");
	return 0;
}

void podciag(double m, double n)
{
	srand(time(NULL));
	double l = m;
	double mian = n;

	for (int i = 1; i <= n; i++)
	{

		double p;
		p = l / mian;

		double los = (double) rand() / ( (double) RAND_MAX + 1);

		if (los < p)
		{
			cout << i << endl;
			l= l - 1;
			mian = mian - 1;
		}
		else
		{

			mian--;
		}

	}
}