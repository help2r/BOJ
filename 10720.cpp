#include <iostream>
using namespace std;

int n,sum;
char ch[101];
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ch[i];
		sum += (ch[i] - 48);
	}
	cout << sum;
	return 0;
}