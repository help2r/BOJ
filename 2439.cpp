#include <iostream>
using namespace std;

int main()
{
	int n;
	int i;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
			cout << " ";
		for (int j = 0; j <= i; j++)
			cout << "*";

		cout << endl;
	}
	return 0;
}