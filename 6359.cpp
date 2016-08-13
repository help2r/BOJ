#include <iostream>
using namespace std;

int n;
int cnt;
int main()
{
	int k;
	cin >> n;

	while (n--)
	{
		cnt = 0;
		cin >> k;
		for (int i = 1; i <= k; i++)
			if (i*i <= k)
				cnt++;
		cout << cnt<<endl;
	}

}