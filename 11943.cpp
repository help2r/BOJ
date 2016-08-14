#include <iostream>
using namespace std;

int arr[4];
int main()
{
	for (int i = 0; i < 4; i++)
		cin >> arr[i];
	if (arr[0] + arr[3]>arr[1] + arr[2])
		cout << arr[1] + arr[2];
	else
		cout << arr[0] + arr[3];
	return 0;

}