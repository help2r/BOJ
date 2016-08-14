#include <iostream>
using namespace std;

char ch[11][11];
int n, m;
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> ch[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = m - 1; j >= 0; j--)
			cout << ch[i][j];
		cout << endl;
	}
	return 0;
}