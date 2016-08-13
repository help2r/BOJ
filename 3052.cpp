#include <iostream>
using namespace std;

int arr[1001];
int cnt;
int main()
{
	int k;
	for (int i = 0; i < 10; i++)
	{
		cin >> k;
		arr[k % 42] = 1;
	}
	for (int i = 0; i < 1001; i++)
		if (arr[i] == 1)
			cnt++;
	cout << cnt;
}