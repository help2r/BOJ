#include <iostream>
using namespace std;

int a, b, c;
int main()
{
	cin >> a >> b >> c;

	if (b >= c)
	{
		cout << -1;
		return 0;
	}


	cout << a / (c - b) + 1;
}