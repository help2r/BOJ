#include <iostream>
using namespace std;

int n;
long long arr[101] = { 0,1,1,1,2,2, };
int main()
{
	int k;
	cin >> n;
	while(n--)
	{
		cin >> k;
		for (int i = 6; i <= k; i++)
			arr[i] = arr[i - 1] + arr[i - 5];

		cout << arr[k]<<endl;
	}
}