#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int yas;
	cout << "Ya��n�z� giriniz : ";
	cin >> yas;

	if (yas >= 18)
	{
		cout << "Ehliyet alabilirsiniz. " << endl;
	}
	else
	{
		cout << "Ehliyet alamazs�n�z. " << endl;
	}

	return 0;
}