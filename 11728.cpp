#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int n, m;
int arr[2000001];
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n + m; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + (n + m));

	for (int i = 0; i < n + m; i++)
		printf("%d ", arr[i]);

	return 0;
}