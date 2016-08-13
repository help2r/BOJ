#include <iostream>
using namespace std;

int n, cnt;
int main()
{
	int newn;
	int tmp1, tmp2;
	cin >> n;
	newn = n;

	while (1)
	{
		tmp1 = (newn / 10) + (newn % 10);
		tmp2 = (tmp1 % 10) + ((newn % 10) * 10);
		newn = tmp2;
		cnt++;
		if (n == newn)
			break;
	}

	cout << cnt;
	return 0;
}