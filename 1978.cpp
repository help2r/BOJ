#include <iostream>
#include <vector>
using namespace std;

int n, arr[101], cnt, tc;
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		for (int j = 2; j <= arr[i]; j++)
			if (arr[i] % j == 0)
			{
				cnt++;
				if (cnt >= 2)
					break;
			}
		if (cnt == 1)
			tc++;

	}
	cout << tc;
}