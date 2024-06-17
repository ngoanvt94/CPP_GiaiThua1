#include <iostream>
using namespace std;

int main() {
	
	int so, gt = 1;
	cout << "nhapso";
	cin >> so;
	for (int i = 1; i <= so; i++)
	{
		gt *= i;
	}
	cout << "giai thua " << so << "!=" << gt;




	cout << "\nSUDUNGWHILE\n";
	gt = 1;
	int j = 1;
	while (j <= so)
	{
		gt *= j;
		j++;
	}
	cout << "giai thua " << so << "!=" << gt;

	cout << "\nSUDUNGDOWHIlE\n";
	gt = 1;
	int k = 1;
	do
	{
		gt *= k;
		k++;
	}
	while(k <= so);
	cout << "giai thua " << so << "!=" << gt;
	return 0;

}
