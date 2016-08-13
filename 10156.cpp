#include <iostream>
using namespace std;

int k, n, m;
int main()
{
	cin >> k >> n >> m;
	if (m < k*n)
		cout << k*n - m;
	else
		cout << 0;
}
