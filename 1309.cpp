#include <iostream>
using namespace std;

int arr[100001] = { 1, 3 }, n;
int main()
{
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		arr[i] = arr[i - 1] * 2 + arr[i - 2];
		arr[i] %= 9901;
	}
	cout << arr[n] % 9901;
}