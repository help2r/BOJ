#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int n;
int arr[1000001];
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + n,greater<int>());
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}