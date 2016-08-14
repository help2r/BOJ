#include <iostream>
using namespace std;

int n;
int arr[8], sum;
int main()
{
	cin >> n;
	while (n--)
	{
		sum = 0;
		for (int i = 0; i < 8; i++)
			cin >> arr[i];

		arr[0] = arr[0] + arr[4];
		arr[1] = arr[1] + arr[5];
		arr[2] = arr[2] + arr[6];
		arr[3] = arr[3] + arr[7];

		if (arr[0] < 1)
			arr[0] = 1;
		if (arr[1] < 1)
			arr[1] = 1;
		if (arr[2] < 0)
			arr[2] = 0;
		sum = arr[0] + arr[1] * 5 + (arr[2] + arr[3]) * 2;
		cout << sum << endl;
	}
	return 0;
}