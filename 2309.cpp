#include <iostream>
#include <algorithm>
using namespace std;

int arr[9],sum;
int main()
{
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	int temp = sum - 100;

	for (int i = 0; i < 9; i++)
		for (int j = (i+1); j < 9; j++)
		{
			if (arr[i] + arr[j] == temp)
			{
				arr[i] -= arr[i];
				arr[j] -= arr[j];
			}
		}

	sort(arr, arr + 9);
	for (int i = 2; i < 9; i++)
		cout << arr[i] << endl;
}