#include <iostream>
#include <algorithm>
using namespace std;

int n, k,cnt;
int arr[11];
int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	sort(arr+1, arr + (n+1));
	while (1)
	{
		for (int i = n; i > 0;i--)
			if (k >= arr[i])
			{
				k -= arr[i];
				cnt++;
				break;
			}
		if (k == 0)
			break;
	}
	cout << cnt;
}