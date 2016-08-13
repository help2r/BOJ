#include <iostream>
using namespace std;

long long arr[69] = { 1,1,2,4 };
int n;
int main()
{
	int k;
	cin >> n;
	while (n--)
	{
		cin >> k;
		for (int i = 4; i <= k; i++)
			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4];
		cout << arr[k] << endl;
	}
	return 0;
}