#include <iostream>
using namespace std;

int n, m;
int main()
{
	int k;
	cin >> n >> m;
	n = n*m;
	for (int i = 0; i < 5; i++)
	{
		cin >> k;
		cout << k - n << " ";
	}
}