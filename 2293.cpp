#include <iostream>
using namespace std;

int arr[101];
int chk[10001];
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	chk[0] = 1;

	for (int i = 0; i < n; i++)
		for (int j = 0; j <= k; j++)
			if (j >= arr[i])
				chk[j] += chk[j - arr[i]];

	cout << chk[k];
}