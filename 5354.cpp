#include <iostream>// 1
using namespace std;

int n;
char ch[11][11];
int main()
{
	int k;
	cin >> n;
	while (n--)
	{
		cin >> k;
		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j <= k; j++)
			{
				if (i == 1 || j == 1 || i == k || j == k)
					ch[i][j] = '#';
				else
					ch[i][j] = 'J';
			}
		}
		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j <= k; j++)
			{
				cout << ch[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
}