#include <iostream>//5
using namespace std;

int n, arr[31] = { 0,1 };
int main()
{
	int k;
	for (int i = 2; i < 31; i++)
		arr[i] = 2 * arr[i - 1] + 1;
	cin >> n;
	while (n--)
	{
		cin >> k;
		cout << arr[k] << endl;
	}
	return 0;
}