#include <iostream>
using namespace std;

int n,cnt;
int main()
{
	int k;
	cin >> n;
	for (int i = 0; i < 5; i++)
	{
		cin >> k;
		if (n == k)
			cnt++;
	}
	cout << cnt;
}