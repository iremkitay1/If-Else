#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int yas;
	cout << "Yaþýnýzý giriniz : ";
	cin >> yas;

	if (yas >= 18)
	{
		cout << "Ehliyet alabilirsiniz. " << endl;
	}
	else
	{
		cout << "Ehliyet alamazsýnýz. " << endl;
	}

	return 0;
}