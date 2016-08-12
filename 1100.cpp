#include <iostream>
using namespace std;

char ch[8][8];
int cnt;
int main()
{

	for (int i = 0; i < 8; ++i)
		for (int j = 0; j < 8; ++j)
		{
			cin >> ch[i][j];
			if ((i + j) % 2 == 0)
				if (ch[i][j] == 'F')
					cnt++;
		}
	cout << cnt;
}